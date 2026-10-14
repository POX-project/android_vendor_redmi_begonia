# Standalone Makefile for libjpeg-alpha-oal_vendor.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: libjpeg-alpha-oal_vendor.so

libjpeg-alpha-oal_vendor.so: libjpeg_alpha_oal_vendor.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f libjpeg-alpha-oal_vendor.so
