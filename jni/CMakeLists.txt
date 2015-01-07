cmake_minimum_required(VERSION 2.8.4)
project(glfw3_jni)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

include_directories(/home/clark/programe/jdk1.6.0_45/include
        /home/clark/programe/jdk1.6.0_45/include/linux)

set(SOURCE_FILES
    com_clark_glfw3_GLFW.c
    com_clark_glfw3_Monitor.c
    com_clark_glfw3_Window.c)

add_library(glfw3_jni SHARED ${SOURCE_FILES})

target_link_libraries(glfw3_jni glfw)