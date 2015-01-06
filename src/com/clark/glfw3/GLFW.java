package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class GLFW {
    /**
     * GLFW has not been initialized
     */
    public static final int GLFW_NOT_INITIALIZED = 0x00010001;

    /**
     * No context is current for this thread
     */
    public static final int GLFW_NO_CURRENT_CONTEXT = 0x00010002;

    /**
     * One of the enum parameters for the function was given an invalid enum
     */
    public static final int GLFW_INVALID_ENUM = 0x00010003;

    /**
     * One of the parameters for the function was given an invalid value
     */
    public static final int GLFW_INVALID_VALUE = 0x00010004;

    /**
     * A memory allocation failed
     */
    public static final int GLFW_OUT_OF_MEMORY = 0x00010005;

    /**
     * GLFW could not find support for the requested client API on the system
     */
    public static final int GLFW_API_UNAVAILABLE = 0x00010006;

    /**
     * The requested client API version is not available
     */
    public static final int GLFW_VERSION_UNAVAILABLE = 0x00010007;

    /**
     * A platform-specific error occurred that does not match any of the more specific categories
     */
    public static final int GLFW_PLATFORM_ERROR = 0x00010008;

    /**
     * The clipboard did not contain data in the requested format
     */
    public static final int GLFW_FORMAT_UNAVAILABLE = 0x00010009;

    /**
     * JNI 底层句柄对象
     */
    protected long nativeHandle;

    private static native int Init();

    private static native void Terminate();

    private static native Version GetVersion();

    private static native String GetVersionString();

    private static native ErrorCallback SetErrorCallback(ErrorCallback callback);

    public static interface ErrorCallback {
        void callback(int code, String message);
    }
}
