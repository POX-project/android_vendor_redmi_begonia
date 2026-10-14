# Standalone Makefile for 0102030405060708090a0b0c0d0e0f10.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: 0102030405060708090a0b0c0d0e0f10.ta

0102030405060708090a0b0c0d0e0f10.ta: 0102030405060708090a0b0c0d0e0f10_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f 0102030405060708090a0b0c0d0e0f10.ta
