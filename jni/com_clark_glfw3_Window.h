/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_clark_glfw3_Window */

#ifndef _Included_com_clark_glfw3_Window
#define _Included_com_clark_glfw3_Window
#ifdef __cplusplus
extern "C" {
#endif
#undef com_clark_glfw3_Window_GLFW_NOT_INITIALIZED
#define com_clark_glfw3_Window_GLFW_NOT_INITIALIZED 65537L
#undef com_clark_glfw3_Window_GLFW_NO_CURRENT_CONTEXT
#define com_clark_glfw3_Window_GLFW_NO_CURRENT_CONTEXT 65538L
#undef com_clark_glfw3_Window_GLFW_INVALID_ENUM
#define com_clark_glfw3_Window_GLFW_INVALID_ENUM 65539L
#undef com_clark_glfw3_Window_GLFW_INVALID_VALUE
#define com_clark_glfw3_Window_GLFW_INVALID_VALUE 65540L
#undef com_clark_glfw3_Window_GLFW_OUT_OF_MEMORY
#define com_clark_glfw3_Window_GLFW_OUT_OF_MEMORY 65541L
#undef com_clark_glfw3_Window_GLFW_API_UNAVAILABLE
#define com_clark_glfw3_Window_GLFW_API_UNAVAILABLE 65542L
#undef com_clark_glfw3_Window_GLFW_VERSION_UNAVAILABLE
#define com_clark_glfw3_Window_GLFW_VERSION_UNAVAILABLE 65543L
#undef com_clark_glfw3_Window_GLFW_PLATFORM_ERROR
#define com_clark_glfw3_Window_GLFW_PLATFORM_ERROR 65544L
#undef com_clark_glfw3_Window_GLFW_FORMAT_UNAVAILABLE
#define com_clark_glfw3_Window_GLFW_FORMAT_UNAVAILABLE 65545L
#undef com_clark_glfw3_Window_GLFW_RELEASE
#define com_clark_glfw3_Window_GLFW_RELEASE 0L
#undef com_clark_glfw3_Window_GLFW_PRESS
#define com_clark_glfw3_Window_GLFW_PRESS 1L
#undef com_clark_glfw3_Window_GLFW_REPEAT
#define com_clark_glfw3_Window_GLFW_REPEAT 2L
/*
 * Class:     com_clark_glfw3_Window
 * Method:    ResetHintsToDefault
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_ResetHintsToDefault
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetHint
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetHint
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Create
 * Signature: (IILjava/lang/String;JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_clark_glfw3_Window_Create
  (JNIEnv *, jclass, jint, jint, jstring, jlong, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_Destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetCloseFlag
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_GetCloseFlag
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetCloseFlag
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_SetCloseFlag
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetTitle
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetPosition
 * Signature: (J)Lcom/clark/glfw3/Rectangle;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_GetPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetPosition
 * Signature: (JLcom/clark/glfw3/Rectangle;)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetPosition
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetSize
 * Signature: (J)Lcom/clark/glfw3/Rectangle;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_GetSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetSize
 * Signature: (JLcom/clark/glfw3/Rectangle;)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetSize
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetFramebufferSize
 * Signature: (J)Lcom/clark/glfw3/Rectangle;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_GetFramebufferSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Iconify
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_Iconify
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Restore
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_Restore
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Show
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_Show
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Hide
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_Hide
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetMonitor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_clark_glfw3_Window_GetMonitor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetAttribute
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_GetAttribute
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetUserPointer
 * Signature: (JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetUserPointer
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetUserPointer
 * Signature: (J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_GetUserPointer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SwapBuffers
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SwapBuffers
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    PollEvents
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_PollEvents
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    WaitEvents
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_WaitEvents
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetClipboardString
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetClipboardString
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetClipboardString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_clark_glfw3_Window_GetClipboardString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    Close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_Close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetPositionCallback
 * Signature: (JLcom/clark/glfw3/Window$PositionCallback;)Lcom/clark/glfw3/Window$PositionCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetPositionCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetSizeCallback
 * Signature: (JLcom/clark/glfw3/Window$SizeCallback;)Lcom/clark/glfw3/Window$SizeCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetSizeCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetCloseCallback
 * Signature: (JLcom/clark/glfw3/Window$CloseCallback;)Lcom/clark/glfw3/Window$CloseCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetCloseCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetRefreshCallback
 * Signature: (JLcom/clark/glfw3/Window$RefreshCallback;)Lcom/clark/glfw3/Window$RefreshCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetRefreshCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetFocusCallback
 * Signature: (JLcom/clark/glfw3/Window$FocusCallback;)Lcom/clark/glfw3/Window$FocusCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetFocusCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetIconifyCallback
 * Signature: (JLcom/clark/glfw3/Window$IconifyCallback;)Lcom/clark/glfw3/Window$IconifyCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetIconifyCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetFrameBufferSizeCallback
 * Signature: (JLcom/clark/glfw3/Window$FrameBufferSizeCallback;)Lcom/clark/glfw3/Window$FrameBufferSizeCallback;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_SetFrameBufferSizeCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetInputMode
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_GetInputMode
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetInputMode
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetInputMode
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetKey
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_GetKey
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetMouseButton
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_GetMouseButton
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetCursorPosition
 * Signature: (J)Lcom/clark/glfw3/PositionF;
 */
JNIEXPORT jobject JNICALL Java_com_clark_glfw3_Window_GetCursorPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    SetCursorPosition
 * Signature: (JLcom/clark/glfw3/PositionF;)V
 */
JNIEXPORT void JNICALL Java_com_clark_glfw3_Window_SetCursorPosition
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    JoystickPresent
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_clark_glfw3_Window_JoystickPresent
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetJoystickAxes
 * Signature: (I)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_clark_glfw3_Window_GetJoystickAxes
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetJoystickButtons
 * Signature: (I)[C
 */
JNIEXPORT jcharArray JNICALL Java_com_clark_glfw3_Window_GetJoystickButtons
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_clark_glfw3_Window
 * Method:    GetJoystickName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_clark_glfw3_Window_GetJoystickName
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
