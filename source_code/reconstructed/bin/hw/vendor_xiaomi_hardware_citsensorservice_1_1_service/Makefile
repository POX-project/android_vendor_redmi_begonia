# Standalone Makefile for vendor.xiaomi.hardware.citsensorservice@1.1-service
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: vendor.xiaomi.hardware.citsensorservice@1.1-service

vendor.xiaomi.hardware.citsensorservice@1.1-service: vendor_xiaomi_hardware_citsensorservice_1_1_service.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f vendor.xiaomi.hardware.citsensorservice@1.1-service
