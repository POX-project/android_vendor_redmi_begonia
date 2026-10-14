# Standalone Makefile for vendor.mtk.hardware.vibrator@1.2-service
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: vendor.mtk.hardware.vibrator@1.2-service

vendor.mtk.hardware.vibrator@1.2-service: vendor_mtk_hardware_vibrator_1_2_service.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f vendor.mtk.hardware.vibrator@1.2-service
