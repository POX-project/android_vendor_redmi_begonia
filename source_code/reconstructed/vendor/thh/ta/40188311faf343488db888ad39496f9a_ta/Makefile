# Standalone Makefile for 40188311faf343488db888ad39496f9a.ta
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: 40188311faf343488db888ad39496f9a.ta

40188311faf343488db888ad39496f9a.ta: 40188311faf343488db888ad39496f9a_ta.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f 40188311faf343488db888ad39496f9a.ta
