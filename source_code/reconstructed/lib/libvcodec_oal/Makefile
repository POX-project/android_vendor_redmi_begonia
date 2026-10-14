# Standalone Makefile for libvcodec_oal.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: libvcodec_oal.so

libvcodec_oal.so: libvcodec_oal.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f libvcodec_oal.so
