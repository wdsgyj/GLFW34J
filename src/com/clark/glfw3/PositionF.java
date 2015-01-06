package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class PositionF {
    private double x;
    private double y;

    public PositionF() {
    }

    public PositionF(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    @Override
    public String toString() {
        return "PositionF{" +
                "x=" + x +
                ", y=" + y +
                '}';
    }
}
