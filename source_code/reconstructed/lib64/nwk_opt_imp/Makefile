# Standalone Makefile for nwk_opt_imp.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: nwk_opt_imp.so

nwk_opt_imp.so: nwk_opt_imp.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f nwk_opt_imp.so
