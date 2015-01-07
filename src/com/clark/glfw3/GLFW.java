package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class GLFW {
    static {
        try {
            System.loadLibrary("glfw3_jni");
            Init();
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    /**
     * JNI 底层句柄对象
     */
    protected long nativeHandle;

    private static native int Init();

    private static native void Terminate();

    private static native Version GetVersion();

    private static native String GetVersionString();

    private static native void MakeContextCurrent(long window);

    private static native long GetCurrentContext();

    private static native void SwapInterval(int interval);

    private static native int IsExtensionSupported(String extension);

    private static native long GetProcFuncAddress(String procname);

    private static native double GetTime();

    private static native void SetTime(double time);

    private static native ErrorCallback SetErrorCallback(ErrorCallback callback);

    public static interface ErrorCallback {
        void callback(int code, String message);
    }
}
