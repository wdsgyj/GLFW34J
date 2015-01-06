package com.clark.glfw3;

/**
 * Created by clark on 15-1-6.
 */
public class Version {
    private int major, minor, rev;

    Version(int major, int minor, int rev) {
        this.major = major;
        this.minor = minor;
        this.rev = rev;
    }

    public int getMajor() {
        return major;
    }

    public int getMinor() {
        return minor;
    }

    public int getRev() {
        return rev;
    }

    @Override
    public String toString() {
        return "Version{" +
                "major=" + major +
                ", minor=" + minor +
                ", rev=" + rev +
                '}';
    }
}
