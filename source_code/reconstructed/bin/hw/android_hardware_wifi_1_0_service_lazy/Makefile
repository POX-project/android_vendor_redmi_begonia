# Standalone Makefile for android.hardware.wifi@1.0-service-lazy
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: android.hardware.wifi@1.0-service-lazy

android.hardware.wifi@1.0-service-lazy: android_hardware_wifi_1_0_service_lazy.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.wifi@1.0-service-lazy
