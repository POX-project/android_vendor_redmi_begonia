# Standalone Makefile for android.hardware.camera.provider@2.4-impl-mediatek.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: android.hardware.camera.provider@2.4-impl-mediatek.so

android.hardware.camera.provider@2.4-impl-mediatek.so: android_hardware_camera_provider_2_4_impl_mediatek.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.camera.provider@2.4-impl-mediatek.so
