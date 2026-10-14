# Standalone Makefile for android.hardware.dumpstate@1.1-service.xiaomi
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: android.hardware.dumpstate@1.1-service.xiaomi

android.hardware.dumpstate@1.1-service.xiaomi: android_hardware_dumpstate_1_1_service_xiaomi.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.dumpstate@1.1-service.xiaomi
