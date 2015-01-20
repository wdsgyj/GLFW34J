#include "com_clark_glfw3_Monitor.h"
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <assert.h>

jlongArray Java_com_clark_glfw3_Monitor_GetMonitors(JNIEnv *env, jclass clazz) {
    int count = 0;
    GLFWmonitor** monitors = glfwGetMonitors(&count);
    jlongArray rs = (*env)->NewLongArray(env, count);
    if (count > 0) {
        jlong* naArray = (jlong*) malloc(sizeof(jlong) * count);
        for (int i = 0; i < count; ++i) {
            naArray[i] = (jlong) monitors[i];
        }
        (*env)->SetLongArrayRegion(env, rs, 0, count, naArray);
        free(naArray);
    }
    return rs;
}

jlong Java_com_clark_glfw3_Monitor_GetPrimaryMonitor(JNIEnv *env, jclass clazz) {
    return (jlong) glfwGetPrimaryMonitor();
}

jobject Java_com_clark_glfw3_Monitor_GetPosition(JNIEnv *env, jclass clazz, jlong self) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    int xpos = 0;
    int ypos = 0;
    glfwGetMonitorPos(monitor, &xpos, &ypos);
    jclass rectClass = (*env)->FindClass(env, "com/clark/glfw3/Rectangle");
    assert(rectClass);
    jmethodID methodID = (*env)->GetMethodID(env, rectClass, "<init>", "(II)V");
    jobject rs = (*env)->NewObject(env, rectClass, methodID, xpos, ypos);
    (*env)->DeleteLocalRef(env, rectClass);
    return rs;
}

jobject Java_com_clark_glfw3_Monitor_GetPhysicalSize(JNIEnv *env, jclass clazz, jlong self) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    int width = 0;
    int height = 0;
    glfwGetMonitorPhysicalSize(monitor, &width, &height);
    jclass rectClass = (*env)->FindClass(env, "com/clark/glfw3/Rectangle");
    assert(rectClass);
    jmethodID methodID = (*env)->GetMethodID(env, rectClass, "<init>", "(II)V");
    jobject rs = (*env)->NewObject(env, rectClass, methodID, width, height);
    (*env)->DeleteLocalRef(env, rectClass);
    return rs;
}

jstring Java_com_clark_glfw3_Monitor_GetName(JNIEnv *env, jclass clazz, jlong self) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    char const *name = glfwGetMonitorName(monitor);
    jstring rs = (*env)->NewStringUTF(env, name ? name : "");
    return rs;
}

jobjectArray Java_com_clark_glfw3_Monitor_GetVideoModes(JNIEnv *env, jclass clazz, jlong self) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    int count = 0;
    GLFWvidmode const *videoModes = glfwGetVideoModes(monitor, &count);
    jclass videomodeClass = (*env)->FindClass(env, "com/clark/glfw3/VideoMode");
    jmethodID methodID = (*env)->GetMethodID(env, videomodeClass, "<init>", "(IIIIII)V");
    jobjectArray rs = (*env)->NewObjectArray(env, count, videomodeClass, 0);
    if (count > 0) {
        for (int i = 0; i < count; ++i) {
            jobject vm = (*env)->NewObject(env, videomodeClass, methodID,
                    videoModes[i].width, videoModes[i].height,
                    videoModes[i].redBits, videoModes[i].greenBits,
                    videoModes[i].blueBits, videoModes[i].refreshRate);
            (*env)->SetObjectArrayElement(env, rs, i, vm);
            (*env)->DeleteLocalRef(env, vm);
        }
    }
    (*env)->DeleteLocalRef(env, videomodeClass);
    return rs;
}

jobject Java_com_clark_glfw3_Monitor_GetCurrentVideoMode(JNIEnv *env, jclass clazz, jlong self) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    GLFWvidmode const *videoMode = glfwGetVideoMode(monitor);
    if (videoMode) {
        jclass videomodeClass = (*env)->FindClass(env, "com/clark/glfw3/VideoMode");
        jmethodID methodID = (*env)->GetMethodID(env, videomodeClass, "<init>", "(IIIIII)V");
        jobject rs = (*env)->NewObject(env, videomodeClass, methodID,
                videoMode->width, videoMode->height,
                videoMode->redBits, videoMode->greenBits,
                videoMode->blueBits, videoMode->refreshRate);
        (*env)->DeleteLocalRef(env, videomodeClass);
        return rs;
    }
    return NULL;
}

void Java_com_clark_glfw3_Monitor_SetGamma(JNIEnv *env, jclass clazz, jlong self, jfloat gamma) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    glfwSetGamma(monitor, gamma);
}

jobject Java_com_clark_glfw3_Monitor_GetGammaRamp(JNIEnv *env, jclass clazz, jlong self) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    GLFWgammaramp const *gammaRamp = glfwGetGammaRamp(monitor);
    jclass gammaRampClass = (*env)->FindClass(env, "com/clark/glfw3/GammaRamp");
    jmethodID methodID = (*env)->GetMethodID(env, gammaRampClass, "<init>", "([S[S[S)V");
    jobject rs = 0;

    if (gammaRamp) {
        unsigned int size = gammaRamp->size;
        jshortArray redArray = (*env)->NewShortArray(env, size);
        jshortArray greenArray = (*env)->NewShortArray(env, size);
        jshortArray blueArray = (*env)->NewShortArray(env, size);

        (*env)->SetShortArrayRegion(env, redArray, 0, size, (jshort const *) gammaRamp->red);
        (*env)->SetShortArrayRegion(env, greenArray, 0, size, (jshort const *) gammaRamp->green);
        (*env)->SetShortArrayRegion(env, blueArray, 0, size, (jshort const *) gammaRamp->blue);

        rs = (*env)->NewObject(env, gammaRampClass, methodID,
                redArray, greenArray, blueArray);

        (*env)->DeleteLocalRef(env, redArray);
        (*env)->DeleteLocalRef(env, greenArray);
        (*env)->DeleteLocalRef(env, blueArray);
    }

    (*env)->DeleteLocalRef(env, gammaRampClass);
    return rs;
}

void Java_com_clark_glfw3_Monitor_SetGammaRamp(JNIEnv *env, jclass clazz, jlong self, jobject gammaRamp) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    jclass gammaRampClass = (*env)->FindClass(env, "com/clark/glfw3/GammaRamp");
    jfieldID redFieldID = (*env)->GetFieldID(env, gammaRampClass, "red", "[S");
    jfieldID greenFieldID = (*env)->GetFieldID(env, gammaRampClass, "green", "[S");
    jfieldID blueFieldID = (*env)->GetFieldID(env, gammaRampClass, "blue", "[S");

    assert(gammaRamp);
    jshortArray redArray = (*env)->GetObjectField(env, gammaRamp, redFieldID);
    jshortArray greenArray = (*env)->GetObjectField(env, gammaRamp, greenFieldID);
    jshortArray blueArray = (*env)->GetObjectField(env, gammaRamp, blueFieldID);

    if (redArray && greenArray && blueArray) {
        GLFWgammaramp ramp;
        jsize length = (*env)->GetArrayLength(env, redArray);

        ramp.red = (unsigned short*) malloc(sizeof(unsigned short) * length);
        (*env)->GetShortArrayRegion(env, redArray, 0, length, (jshort *) ramp.red);

        ramp.green = (unsigned short*) malloc(sizeof(unsigned short) * length);
        (*env)->GetShortArrayRegion(env, greenArray, 0, length, (jshort *) ramp.green);

        ramp.blue = (unsigned short*) malloc(sizeof(unsigned short) * length);
        (*env)->GetShortArrayRegion(env, blueArray, 0, length, (jshort *) ramp.blue);

        ramp.size = (unsigned int) length;

        glfwSetGammaRamp(monitor, &ramp);

        free(ramp.red);
        free(ramp.green);
        free(ramp.blue);
    }

    (*env)->DeleteLocalRef(env, redArray);
    (*env)->DeleteLocalRef(env, greenArray);
    (*env)->DeleteLocalRef(env, blueArray);
    (*env)->DeleteLocalRef(env, gammaRampClass);
}

jobject Java_com_clark_glfw3_Monitor_SetMonitorCallback(JNIEnv *env, jclass clazz, jlong self, jobject callback) {
    assert(self);
    GLFWmonitor* monitor = (GLFWmonitor *) self;
    return NULL;
}
