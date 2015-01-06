package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class VideoMode {
    private int width;
    private int height;
    private int redBits;
    private int greenBits;
    private int blueBits;
    private int refreshRate;

    VideoMode(int width, int height, int redBits, int greenBits, int blueBits, int refreshRate) {
        this.width = width;
        this.height = height;
        this.redBits = redBits;
        this.greenBits = greenBits;
        this.blueBits = blueBits;
        this.refreshRate = refreshRate;
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    public int getRedBits() {
        return redBits;
    }

    public int getGreenBits() {
        return greenBits;
    }

    public int getBlueBits() {
        return blueBits;
    }

    public int getRefreshRate() {
        return refreshRate;
    }

    @Override
    public String toString() {
        return "VideoMode{" +
                "width=" + width +
                ", height=" + height +
                ", redBits=" + redBits +
                ", greenBits=" + greenBits +
                ", blueBits=" + blueBits +
                ", refreshRate=" + refreshRate +
                '}';
    }
}
