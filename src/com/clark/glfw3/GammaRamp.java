package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class GammaRamp {
    private short red;
    private short green;
    private short blue;
    private long size;

    public GammaRamp() {
    }

    public GammaRamp(short red, short green, short blue, long size) {
        this.red = red;
        this.green = green;
        this.blue = blue;
        this.size = size;
    }

    public short getRed() {
        return red;
    }

    public void setRed(short red) {
        this.red = red;
    }

    public short getGreen() {
        return green;
    }

    public void setGreen(short green) {
        this.green = green;
    }

    public short getBlue() {
        return blue;
    }

    public void setBlue(short blue) {
        this.blue = blue;
    }

    public long getSize() {
        return size;
    }

    public void setSize(long size) {
        this.size = size;
    }

    @Override
    public String toString() {
        return "GammaRamp{" +
                "red=" + red +
                ", green=" + green +
                ", blue=" + blue +
                ", size=" + size +
                '}';
    }
}
