# Standalone Makefile for android.hardware.keymaster@4.0-service.beanpod
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: android.hardware.keymaster@4.0-service.beanpod

android.hardware.keymaster@4.0-service.beanpod: android_hardware_keymaster_4_0_service_beanpod.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.keymaster@4.0-service.beanpod
