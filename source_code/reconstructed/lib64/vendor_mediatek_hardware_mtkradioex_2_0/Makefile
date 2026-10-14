# Standalone Makefile for vendor.mediatek.hardware.mtkradioex@2.0.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: vendor.mediatek.hardware.mtkradioex@2.0.so

vendor.mediatek.hardware.mtkradioex@2.0.so: vendor_mediatek_hardware_mtkradioex_2_0.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f vendor.mediatek.hardware.mtkradioex@2.0.so
