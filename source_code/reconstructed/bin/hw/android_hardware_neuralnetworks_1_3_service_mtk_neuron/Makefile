# Standalone Makefile for android.hardware.neuralnetworks@1.3-service-mtk-neuron
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS =  -llog

all: android.hardware.neuralnetworks@1.3-service-mtk-neuron

android.hardware.neuralnetworks@1.3-service-mtk-neuron: android_hardware_neuralnetworks_1_3_service_mtk_neuron.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f android.hardware.neuralnetworks@1.3-service-mtk-neuron
