# Standalone Makefile for arm.graphics-V1-ndk_platform.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: arm.graphics-V1-ndk_platform.so

arm.graphics-V1-ndk_platform.so: arm_graphics_V1_ndk_platform.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f arm.graphics-V1-ndk_platform.so
