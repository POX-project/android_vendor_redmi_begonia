# Standalone Makefile for libprotobuf-cpp-full-3.9.1.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: libprotobuf-cpp-full-3.9.1.so

libprotobuf-cpp-full-3.9.1.so: libprotobuf_cpp_full_3_9_1.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f libprotobuf-cpp-full-3.9.1.so
