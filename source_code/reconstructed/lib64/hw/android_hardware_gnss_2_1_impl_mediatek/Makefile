# Standalone Makefile for android.hardware.gnss@2.1-impl-mediatek.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: android.hardware.gnss@2.1-impl-mediatek.so

android.hardware.gnss@2.1-impl-mediatek.so: android_hardware_gnss_2_1_impl_mediatek.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.gnss@2.1-impl-mediatek.so
