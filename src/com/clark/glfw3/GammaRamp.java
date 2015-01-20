package com.clark.glfw3;

import java.util.Arrays;

/**
 * Created by clark on 15-1-6.
 */
public class GammaRamp {
    private short[] red;
    private short[] green;
    private short[] blue;

    public GammaRamp() {
    }

    public GammaRamp(short[] red, short[] green, short[] blue) {
        this.red = red;
        this.green = green;
        this.blue = blue;
    }

    public short[] getRed() {
        return red;
    }

    public void setRed(short[] red) {
        this.red = red;
    }

    public short[] getGreen() {
        return green;
    }

    public void setGreen(short[] green) {
        this.green = green;
    }

    public short[] getBlue() {
        return blue;
    }

    public void setBlue(short[] blue) {
        this.blue = blue;
    }

    @Override
    public String toString() {
        return "GammaRamp{" +
                "red=" + Arrays.toString(red) +
                ", green=" + Arrays.toString(green) +
                ", blue=" + Arrays.toString(blue) +
                '}';
    }
}
