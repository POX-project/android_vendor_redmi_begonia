# Standalone Makefile for gc2375af_mipi_raw_tuning.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: gc2375af_mipi_raw_tuning.so

gc2375af_mipi_raw_tuning.so: gc2375af_mipi_raw_tuning.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f gc2375af_mipi_raw_tuning.so
