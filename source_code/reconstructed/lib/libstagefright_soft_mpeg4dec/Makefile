# Standalone Makefile for libstagefright_soft_mpeg4dec.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: libstagefright_soft_mpeg4dec.so

libstagefright_soft_mpeg4dec.so: libstagefright_soft_mpeg4dec.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f libstagefright_soft_mpeg4dec.so
