# Standalone Makefile for e5140b3376fa4c63ab18062caab2fb5c.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: e5140b3376fa4c63ab18062caab2fb5c.ta

e5140b3376fa4c63ab18062caab2fb5c.ta: e5140b3376fa4c63ab18062caab2fb5c_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f e5140b3376fa4c63ab18062caab2fb5c.ta
