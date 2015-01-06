package com.clark.glfw3;

/**
 * GLFW 显示器类。
 */
public class Monitor extends GLFW {
    private static native long[] GetMonitors();

    private static native long GetPrimaryMonitor();

    private static native Rectangle GetPosition(long handle);

    private static native Rectangle GetPhysicalSize(long handle);

    private static native String GetName(long handle);

    private static native VideoMode[] GetVideoModes(long handle);

    private static native VideoMode GetCurrentVideoMode(long handle);

    private static native void SetGamma(long handle, float gamma);

    private static native GammaRamp GetGammaRamp(long handle);

    private static native void SetGammaRamp(long handle, GammaRamp gammaRamp);

    private static native MonitorCallback SetMonitorCallback(long handle, MonitorCallback callback);

    public static interface MonitorCallback {
        void callback(Monitor monitor, int event);
    }
}
