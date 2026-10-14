# Standalone Makefile for 8888c03fc30c4dd0a319ea29643d4d4b.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: 8888c03fc30c4dd0a319ea29643d4d4b.ta

8888c03fc30c4dd0a319ea29643d4d4b.ta: 8888c03fc30c4dd0a319ea29643d4d4b_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f 8888c03fc30c4dd0a319ea29643d4d4b.ta
