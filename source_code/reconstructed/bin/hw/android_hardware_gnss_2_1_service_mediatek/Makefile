# Standalone Makefile for android.hardware.gnss@2.1-service-mediatek
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: android.hardware.gnss@2.1-service-mediatek

android.hardware.gnss@2.1-service-mediatek: android_hardware_gnss_2_1_service_mediatek.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.gnss@2.1-service-mediatek
