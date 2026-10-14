# Standalone Makefile for vendor.mediatek.hardware.apuware.utils@1.0.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: vendor.mediatek.hardware.apuware.utils@1.0.so

vendor.mediatek.hardware.apuware.utils@1.0.so: vendor_mediatek_hardware_apuware_utils_1_0.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f vendor.mediatek.hardware.apuware.utils@1.0.so
