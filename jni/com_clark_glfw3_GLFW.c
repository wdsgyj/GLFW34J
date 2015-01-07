#include "com_clark_glfw3_GLFW.h"
#include <GLFW/glfw3.h>
#include <assert.h>
#include "entry.h"

static jobject g_callback_error;

static void g_error_callback_func(int error_code, const char* description) {
    if (g_callback_error) {
        JNIEnv *env = GetJNIEnv();
        jclass clazz_error_callback = (*env)->FindClass(env, "com/clark/glfw3/GLFW$ErrorCallback");
        assert(clazz_error_callback);
        jmethodID method_callback = (*env)->GetMethodID(env, clazz_error_callback,
                "callback", "(ILjava/lang/String;)V");
        assert(method_callback);
        jstring j_description = (*env)->NewStringUTF(env, description == 0 ? "" : description);
        (*env)->CallVoidMethod(env, g_callback_error, method_callback, error_code, j_description);

        (*env)->DeleteLocalRef(env, clazz_error_callback);
        (*env)->DeleteLocalRef(env, j_description);
    }
}

jint Java_com_clark_glfw3_GLFW_Init(JNIEnv *env, jclass clazz) {
    return glfwInit();
}

void Java_com_clark_glfw3_GLFW_Terminate(JNIEnv *env, jclass clazz) {
    glfwTerminate();
}

jobject Java_com_clark_glfw3_GLFW_GetVersion(JNIEnv *env, jclass clazz) {
    int major, minor, rev;
    glfwGetVersion(&major, &minor, &rev);

    jclass clazz_version = (*env)->FindClass(env, "com/clark/glfw3/Version");
    assert(clazz_version);
    jmethodID method_constructor = (*env)->GetMethodID(env, clazz_version, "<init>", "(III)V");
    assert(method_constructor);
    jobject rs = (*env)->NewObject(env, clazz_version, method_constructor, major, minor, rev);
    assert(rs);

    (*env)->DeleteLocalRef(env, clazz_version);
    return rs;
}

jstring Java_com_clark_glfw3_GLFW_GetVersionString(JNIEnv *env, jclass clazz) {
    const char* version_str = glfwGetVersionString();
    assert(version_str);

    jstring rs = (*env)->NewStringUTF(env, version_str);
    assert(rs);
    return rs;
}

void Java_com_clark_glfw3_GLFW_MakeContextCurrent(JNIEnv *env, jclass clazz, jlong ptr_window) {
    assert(ptr_window);
    glfwMakeContextCurrent((GLFWwindow *) ptr_window);
}

jlong Java_com_clark_glfw3_GLFW_GetCurrentContext(JNIEnv *env, jclass clazz) {
    return (jlong) glfwGetCurrentContext();
}

void Java_com_clark_glfw3_GLFW_SwapInterval(JNIEnv *env, jclass clazz, jint interval) {
    glfwSwapInterval(interval);
}

jint Java_com_clark_glfw3_GLFW_IsExtensionSupported(JNIEnv *env, jclass clazz, jstring extension) {
    assert(extension);
    const char* c_extension = (*env)->GetStringUTFChars(env, extension, 0);
    assert(c_extension);
    int rs = glfwExtensionSupported(c_extension);
    (*env)->ReleaseStringUTFChars(env, extension, c_extension);
    return rs;
}

jlong Java_com_clark_glfw3_GLFW_GetProcFuncAddress(JNIEnv *env, jclass clazz, jstring procname) {
    assert(procname);
    const char* c_procname = (*env)->GetStringUTFChars(env, procname, 0);
    assert(c_procname);
    GLFWglproc pFunction = glfwGetProcAddress(c_procname);
    (*env)->ReleaseStringUTFChars(env, procname, c_procname);
    return (jlong) pFunction;
}

jdouble Java_com_clark_glfw3_GLFW_GetTime(JNIEnv *env, jclass clazz) {
    return glfwGetTime();
}

void Java_com_clark_glfw3_GLFW_SetTime(JNIEnv *env, jclass clazz, jdouble time) {
    glfwSetTime(time);
}

jobject Java_com_clark_glfw3_GLFW_SetErrorCallback(JNIEnv *env, jclass clazz, jobject jcallback) {
    jobject rs = g_callback_error;  // 返回之前缓存的回调对象

    if (g_callback_error) {
        (*env)->DeleteGlobalRef(env, g_callback_error);  // 删除之前的全局引用
    }

    if (jcallback) {  // 如果还需要设置全局回调对象的话
        g_callback_error = (*env)->NewGlobalRef(env, jcallback);

        // 设置 C 语言的回调函数指针
        glfwSetErrorCallback(g_error_callback_func);
    }
    return rs;
}
