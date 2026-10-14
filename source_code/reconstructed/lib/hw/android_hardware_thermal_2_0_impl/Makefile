# Standalone Makefile for android.hardware.thermal@2.0-impl.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: android.hardware.thermal@2.0-impl.so

android.hardware.thermal@2.0-impl.so: android_hardware_thermal_2_0_impl.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.thermal@2.0-impl.so
