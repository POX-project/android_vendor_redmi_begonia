# Standalone Makefile for d91f322ad5a441d5955110eda3272fc0.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: d91f322ad5a441d5955110eda3272fc0.ta

d91f322ad5a441d5955110eda3272fc0.ta: d91f322ad5a441d5955110eda3272fc0_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f d91f322ad5a441d5955110eda3272fc0.ta
