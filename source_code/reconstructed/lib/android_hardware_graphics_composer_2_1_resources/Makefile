# Standalone Makefile for android.hardware.graphics.composer@2.1-resources.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: android.hardware.graphics.composer@2.1-resources.so

android.hardware.graphics.composer@2.1-resources.so: android_hardware_graphics_composer_2_1_resources.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.graphics.composer@2.1-resources.so
