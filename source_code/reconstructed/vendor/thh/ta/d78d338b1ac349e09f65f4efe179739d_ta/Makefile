# Standalone Makefile for d78d338b1ac349e09f65f4efe179739d.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: d78d338b1ac349e09f65f4efe179739d.ta

d78d338b1ac349e09f65f4efe179739d.ta: d78d338b1ac349e09f65f4efe179739d_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f d78d338b1ac349e09f65f4efe179739d.ta
