# Standalone Makefile for ov8856sunny_mipi_raw_IdxMgr.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: ov8856sunny_mipi_raw_IdxMgr.so

ov8856sunny_mipi_raw_IdxMgr.so: ov8856sunny_mipi_raw_IdxMgr.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f ov8856sunny_mipi_raw_IdxMgr.so
