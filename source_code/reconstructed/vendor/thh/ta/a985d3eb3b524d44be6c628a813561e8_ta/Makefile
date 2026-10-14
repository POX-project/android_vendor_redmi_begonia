# Standalone Makefile for a985d3eb3b524d44be6c628a813561e8.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: a985d3eb3b524d44be6c628a813561e8.ta

a985d3eb3b524d44be6c628a813561e8.ta: a985d3eb3b524d44be6c628a813561e8_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f a985d3eb3b524d44be6c628a813561e8.ta
