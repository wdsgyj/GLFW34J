package com.clark.glfw3;

/**
 * GLFW 窗口类。
 */
public class Window extends GLFW {
    private static native void ResetHintsToDefault(long handle);

    private static native void SetHint(long handle, int target, int hint);

    private static native long Create(int width, int height, String title, long monitor, long share);

    private static native void Destroy(long handle);

    private static native int GetCloseFlag(long handle);

    private static native int SetCloseFlag(long handle, int flag);

    private static native void SetTitle(long handle, String title);

    private static native Rectangle GetPosition(long handle);

    private static native void SetPosition(long handle, Rectangle position);

    private static native Rectangle GetSize(long handle);

    private static native void SetSize(long handle, Rectangle size);

    private static native Rectangle GetFramebufferSize(long handle);

    private static native void Iconify(long handle);

    private static native void Restore(long handle);

    private static native void Show(long handle);

    private static native void Hide(long handle);

    private static native long GetMonitor(long handle);

    private static native int GetAttribute(long handle, int attrib);

    private static native void SetUserPointer(long handle, Object pointer);

    private static native Object GetUserPointer(long handle);

    private static native void PollEvents(long handle);

    private static native void WaitEvents(long handle);

    private static native void Close(long handle);

    private static native PositionCallback SetPositionCallback(long handle, PositionCallback callback);

    private static native SizeCallback SetSizeCallback(long handle, SizeCallback callback);

    private static native CloseCallback SetCloseCallback(long handle, CloseCallback callback);

    private static native RefreshCallback SetRefreshCallback(long handle, RefreshCallback callback);

    private static native FocusCallback SetFocusCallback(long handle, FocusCallback callback);

    private static native IconifyCallback SetIconifyCallback(long handle, IconifyCallback callback);

    private static native FrameBufferSizeCallback SetFrameBufferSizeCallback(long handle, FrameBufferSizeCallback callback);

    public static interface PositionCallback {
        void callback(Window window, Rectangle position);
    }

    public static interface SizeCallback {
        void callback(Window window, Rectangle size);
    }

    public static interface CloseCallback {
        void callback(Window window);
    }

    public static interface RefreshCallback {
        void callback(Window window);
    }

    public static interface FocusCallback {
        void callback(Window window, int focus);
    }

    public static interface IconifyCallback {
        void callback(Window window, int iconify);
    }

    public static interface FrameBufferSizeCallback {
        void callback(Window window, Rectangle size);
    }
}
