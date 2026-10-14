# Standalone Makefile for vendor.xiaomi.hardware.displayfeature@1.0-service
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: vendor.xiaomi.hardware.displayfeature@1.0-service

vendor.xiaomi.hardware.displayfeature@1.0-service: vendor_xiaomi_hardware_displayfeature_1_0_service.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f vendor.xiaomi.hardware.displayfeature@1.0-service
