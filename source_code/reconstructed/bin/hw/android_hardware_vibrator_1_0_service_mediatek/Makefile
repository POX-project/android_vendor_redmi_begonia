# Standalone Makefile for android.hardware.vibrator@1.0-service-mediatek
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: android.hardware.vibrator@1.0-service-mediatek

android.hardware.vibrator@1.0-service-mediatek: android_hardware_vibrator_1_0_service_mediatek.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.vibrator@1.0-service-mediatek
