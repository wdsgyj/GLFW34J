package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class Rectangle {
    private int width;
    private int height;

    public Rectangle() {
    }

    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getX() { return width; }

    public void setX(int x) { width = x; }

    public int getY() { return height; }

    public void setY(int y) { height = y; }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Rectangle rectangle = (Rectangle) o;

        if (width != rectangle.width) return false;
        if (height != rectangle.height) return false;

        return true;
    }

    @Override
    public int hashCode() {
        int result = width;
        result = 31 * result + height;
        return result;
    }

    @Override
    public String toString() {
        return "Rectangle(Position){" +
                "width(x)=" + width +
                ", height(y)=" + height +
                '}';
    }
}
