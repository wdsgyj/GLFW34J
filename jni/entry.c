#include "entry.h"

static JavaVM* g_VM;

JNIEnv* GetJNIEnv() {
    JNIEnv* rs;
    (*g_vm)->GetEnv(g_VM, (void**) &rs, JNI_VERSION_1_6);
    return rs;
}

jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    g_VM = vm;
    return JNI_VERSION_1_6;
}