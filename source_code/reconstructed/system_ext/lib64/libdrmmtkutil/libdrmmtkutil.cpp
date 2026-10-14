/*
 * Reverse-Engineered Source for: libdrmmtkutil.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libdrmmtkutil"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libdrmmtkutil.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: android::DrmRequestType::ACTION_CTA5_ENCRYPT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType19ACTION_CTA5_ENCRYPTE = NULL;

/* Demangled: android::Cta5FileHeader::getCurrentKeyInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader17getCurrentKeyInfoEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader17getCurrentKeyInfoEv() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentEncryption::~ContentEncryption() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding17ContentEncryptionD2Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding17ContentEncryptionD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentEncoding() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncodingC2Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncodingC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track4Info5ClearEv(void) {
    ALOGD("_ZN9mkvparser5Track4Info5ClearEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_CONTENT_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef18TOKEN_CONTENT_TYPEE = NULL;

/* Demangled: android::Cta5CommonMultimediaFile::notifyProgress(long, long, int, android::String8, android::Vector<android::DrmCtaUtil::Listener> const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile14notifyProgressElliNS_7String8EPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile14notifyProgressElliNS_7String8EPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::changeKey(android::String8, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile9changeKeyENS_7String8ES1_(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile9changeKeyENS_7String8ES1_() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_UPDATING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef13CTA5_UPDATINGE = NULL;

/* Exported Object: android::DrmRequestType::KEY_DATA_1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType10KEY_DATA_1E = NULL;

/* Demangled: mkvparser::Chapters::Atom::GetStartTimecode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom16GetStartTimecodeEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom16GetStartTimecodeEv() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::GetWritingAppAsUTF8() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SegmentInfo19GetWritingAppAsUTF8Ev(void) {
    ALOGD("_ZNK9mkvparser11SegmentInfo19GetWritingAppAsUTF8Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::allocate(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBuffer8allocateEPKcm(void) {
    ALOGD("_ZN7android10ByteBuffer8allocateEPKcm() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC1EPcm(void) {
    ALOGD("_ZN7android10ByteBufferC1EPcm() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_CONTENT_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef16TOKEN_CONTENT_IDE = NULL;

/* Demangled: android::Cta5ASFFile::Cta5ASFFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5ASFFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::encrypt(int, int, android::Vector<android::DrmCtaUtil::Listener> const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5MatroskaFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16Cta5MatroskaFileE = NULL;

/* Demangled: mkvparser::SegmentInfo::SegmentInfo(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SegmentInfoC1EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser11SegmentInfoC1EPNS_7SegmentExxxx() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_SAVE_DEVICE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType21ACTION_SAVE_DEVICE_IDE = NULL;

/* Demangled: android::Cta5FileFactory::createCta5File(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15Cta5FileFactory14createCta5FileENS_7String8EmS1_(void) {
    ALOGD("_ZN7android15Cta5FileFactory14createCta5FileENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetNext(mkvparser::Cluster const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment7GetNextEPKNS_7ClusterE(void) {
    ALOGD("_ZN9mkvparser7Segment7GetNextEPKNS_7ClusterE() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetDisplayWidth() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack15GetDisplayWidthEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack15GetDisplayWidthEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::setClearHeaderLen(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader17setClearHeaderLenEm(void) {
    ALOGD("_ZN7android14Cta5FileHeader17setClearHeaderLenEm() called");
    return 0;
}

/* Demangled: android::Cta5File::setCipherFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File11setCipherFdEi(void) {
    ALOGD("_ZN7android8Cta5File11setCipherFdEi() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::Cta5APEFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5APEFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::ShallowCopy(mkvparser::Chapters::Display&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Display11ShallowCopyERS1_(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Display11ShallowCopyERS1_() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::~Atom() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4AtomD1Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters4AtomD1Ev() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long, android::String8, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeaderC2ENS_7String8EmS1_b(void) {
    ALOGD("_ZN7android14Cta5FileHeaderC2ENS_7String8EmS1_b() called");
    return 0;
}

/* Demangled: mkvparser::Track::EOSBlock::EOSBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track8EOSBlockC2Ev(void) {
    ALOGD("_ZN9mkvparser5Track8EOSBlockC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockGroup5ParseEv(void) {
    ALOGD("_ZN9mkvparser10BlockGroup5ParseEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::~Segment() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7SegmentD1Ev(void) {
    ALOGD("_ZN9mkvparser7SegmentD1Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::PERMISSION_PRINT_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef20PERMISSION_PRINT_STRE = NULL;

/* Demangled: android::DrmUtil::CreateMulvPath(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil14CreateMulvPathEPc(void) {
    ALOGD("_ZN7android7DrmUtil14CreateMulvPathEPc() called");
    return 0;
}

/* Demangled: android::DrmUtil::readId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil6readIdEv(void) {
    ALOGD("_ZN7android7DrmUtil6readIdEv() called");
    return 0;
}

/* Demangled: android::Cta5File::isPartialEncryptedFile() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File22isPartialEncryptedFileEv(void) {
    ALOGD("_ZN7android8Cta5File22isPartialEncryptedFileEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::Atom() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4AtomC2Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters4AtomC2Ev() called");
    return 0;
}

/* Demangled: android::DrmUtil::rc4_decrypt_buffer(unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil18rc4_decrypt_bufferEPhS1_i(void) {
    ALOGD("_ZN7android7DrmUtil18rc4_decrypt_bufferEPhS1_i() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_SAVE_SECURE_TIME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType23ACTION_SAVE_SECURE_TIMEE = NULL;

/* Demangled: android::DrmCtaUtil::getUintVarFromNormal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil20getUintVarFromNormalEj(void) {
    ALOGD("_ZN7android10DrmCtaUtil20getUintVarFromNormalEj() called");
    return 0;
}

/* Demangled: android::KeyInfo::calculateCRC() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo12calculateCRCEv(void) {
    ALOGD("_ZN7android7KeyInfo12calculateCRCEv() called");
    return 0;
}

/* Demangled: android::Cta5File::calculateFileSig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File16calculateFileSigEi(void) {
    ALOGD("_ZN7android8Cta5File16calculateFileSigEi() called");
    return 0;
}

/* Demangled: android::KeyInfo::KeyInfo(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfoC2ENS_7String8E(void) {
    ALOGD("_ZN7android7KeyInfoC2ENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::GetDurationTimeCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockGroup19GetDurationTimeCodeEv(void) {
    ALOGD("_ZNK9mkvparser10BlockGroup19GetDurationTimeCodeEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::ST_DIR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef6ST_DIRE = NULL;

/* Exported Object: android::DrmDef::MIME_CTA5_MESSAGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef17MIME_CTA5_MESSAGEE = NULL;

/* Demangled: android::StrUtil::toHexStr(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil8toHexStrENS_7String8E(void) {
    ALOGD("_ZN7android7StrUtil8toHexStrENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::nettohostll(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil11nettohostllEm(void) {
    ALOGD("_ZN7android12Cta5FileUtil11nettohostllEm() called");
    return 0;
}

/* Demangled: android::CryptoHelper::desiredOutBufSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper17desiredOutBufSizeEi(void) {
    ALOGD("_ZN7android12CryptoHelper17desiredOutBufSizeEi() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_CANCEL_ERROR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef17CTA5_CANCEL_ERRORE = NULL;

/* Demangled: android::KeyInfo::setKeyInfo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo10setKeyInfoEPKc(void) {
    ALOGD("_ZN7android7KeyInfo10setKeyInfoEPKc() called");
    return 0;
}

/* Demangled: android::Cta5File::getClearHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File17getClearHeaderLenEv(void) {
    ALOGD("_ZN7android8Cta5File17getClearHeaderLenEv() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::TrackPosition::Parse(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8CuePoint13TrackPosition5ParseEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser8CuePoint13TrackPosition5ParseEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::Tracks(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6TracksC2EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser6TracksC2EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android12Cta5FLACFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: android::Cta5WAVFile::Cta5WAVFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5WAVFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetFirst() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment8GetFirstEv(void) {
    ALOGD("_ZNK9mkvparser7Segment8GetFirstEv() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::GetMuxingAppAsUTF8() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SegmentInfo18GetMuxingAppAsUTF8Ev(void) {
    ALOGD("_ZNK9mkvparser11SegmentInfo18GetMuxingAppAsUTF8Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::CreateBlock(long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster11CreateBlockExxxx(void) {
    ALOGD("_ZN9mkvparser7Cluster11CreateBlockExxxx() called");
    return 0;
}

/* Demangled: mkvparser::Cues::Find(long long, mkvparser::Track const*, mkvparser::CuePoint const*&, mkvparser::CuePoint::TrackPosition const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues4FindExPKNS_5TrackERPKNS_8CuePointERPKNS4_13TrackPositionE(void) {
    ALOGD("_ZNK9mkvparser4Cues4FindExPKNS_5TrackERPKNS_8CuePointERPKNS4_13TrackPositionE() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::ExpandAtomsArray() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Edition16ExpandAtomsArrayEv(void) {
    ALOGD("_ZN9mkvparser8Chapters7Edition16ExpandAtomsArrayEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::VetEntry(mkvparser::BlockEntry const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track8VetEntryEPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser5Track8VetEntryEPKNS_10BlockEntryE() called");
    return 0;
}

/* Demangled: android::Cta5File::~Cta5File() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileD0Ev(void) {
    ALOGD("_ZN7android8Cta5FileD0Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::setTo(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBuffer5setToEPc(void) {
    ALOGD("_ZN7android10ByteBuffer5setToEPc() called");
    return 0;
}

/* Demangled: android::Cta5AVIFile::Cta5AVIFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5AVIFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetIndex() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster8GetIndexEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster8GetIndexEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_VERSION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef12PATH_VERSIONE = NULL;

/* Demangled: android::Cta5FileUtil::hosttonetl(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil10hosttonetlEj(void) {
    ALOGD("_ZN7android12Cta5FileUtil10hosttonetlEj() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC2EPKc(void) {
    ALOGD("_ZN7android10ByteBufferC2EPKc() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::~VideoTrack() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10VideoTrackD2Ev(void) {
    ALOGD("_ZN9mkvparser10VideoTrackD2Ev() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_DATALEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey16META_KEY_DATALENE = NULL;

/* Demangled: android::PartialEncryptHeader::setPartialEncryptHeader(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader23setPartialEncryptHeaderEPKc(void) {
    ALOGD("_ZN7android20PartialEncryptHeader23setPartialEncryptHeaderEPKc() called");
    return 0;
}

/* Demangled: mkvparser::Match(mkvparser::IMkvReader*, long long&, unsigned long, unsigned char*&, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5MatchEPNS_10IMkvReaderERxmRPhRm(void) {
    ALOGD("_ZN9mkvparser5MatchEPNS_10IMkvReaderERxmRPhRm() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::Cluster() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7ClusterC1Ev(void) {
    ALOGD("_ZN9mkvparser7ClusterC1Ev() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5APEFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTag5ClearEv(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTag5ClearEv() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetStereoMode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack13GetStereoModeEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack13GetStereoModeEv() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC1EPKc(void) {
    ALOGD("_ZN7android10ByteBufferC1EPKc() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetDuration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment11GetDurationEv(void) {
    ALOGD("_ZNK9mkvparser7Segment11GetDurationEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_DISPLAY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef12PATH_DISPLAYE = NULL;

/* Exported Object: android::DrmUtil::mDCFLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7DrmUtil8mDCFLockE = NULL;

/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android12Cta5MPEGFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: android::StrUtil::validateDatetimeStr(char const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil19validateDatetimeStrEPKcRKi(void) {
    ALOGD("_ZN7android7StrUtil19validateDatetimeStrEPKcRKi() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetCodecDelay() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track13GetCodecDelayEv(void) {
    ALOGD("_ZNK9mkvparser5Track13GetCodecDelayEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::Tag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3TagC1Ev(void) {
    ALOGD("_ZN9mkvparser4Tags3TagC1Ev() called");
    return 0;
}

/* Demangled: android::DrmUtil::readIMEI() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil8readIMEIEv(void) {
    ALOGD("_ZN7android7DrmUtil8readIMEIEv() called");
    return 0;
}

/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android12Cta5MPEGFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::Entry::Entry() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHead5EntryC2Ev(void) {
    ALOGD("_ZN9mkvparser8SeekHead5EntryC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::ParseEdition(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters12ParseEditionExx(void) {
    ALOGD("_ZN9mkvparser8Chapters12ParseEditionExx() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4Atom4InitEv(void) {
    ALOGD("_ZN9mkvparser8Chapters4Atom4InitEv() called");
    return 0;
}

/* Demangled: android::Cta5FileFactory::isMultiMedia(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15Cta5FileFactory12isMultiMediaEiRKNS_7String8E(void) {
    ALOGD("_ZN7android15Cta5FileFactory12isMultiMediaEiRKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::ReadID(mkvparser::IMkvReader*, long long, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6ReadIDEPNS_10IMkvReaderExRl(void) {
    ALOGD("_ZN9mkvparser6ReadIDEPNS_10IMkvReaderExRl() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC1Ev(void) {
    ALOGD("_ZN7android10ByteBufferC1Ev() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::setClearHeaderLen(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader17setClearHeaderLenEm(void) {
    ALOGD("_ZN7android20PartialEncryptHeader17setClearHeaderLenEm() called");
    return 0;
}

/* Demangled: android::Cta5File::pread(void*, unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File5preadEPvml(void) {
    ALOGD("_ZN7android8Cta5File5preadEPvml() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTag4InitEv(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTag4InitEv() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_FILEDESCRIPTOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType18KEY_FILEDESCRIPTORE = NULL;

/* Demangled: mkvparser::Track::EOSBlock::GetKind() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track8EOSBlock7GetKindEv(void) {
    ALOGD("_ZNK9mkvparser5Track8EOSBlock7GetKindEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::Display() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7DisplayC1Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7DisplayC1Ev() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_CONTENT_VENDOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey23META_KEY_CONTENT_VENDORE = NULL;

/* Demangled: android::PartialEncryptHeader::getPartialEncryptHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader23getPartialEncryptHeaderEv(void) {
    ALOGD("_ZN7android20PartialEncryptHeader23getPartialEncryptHeaderEv() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::Cta5CommonMultimediaFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::ReadUInt(mkvparser::IMkvReader*, long long, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8ReadUIntEPNS_10IMkvReaderExRl(void) {
    ALOGD("_ZN9mkvparser8ReadUIntEPNS_10IMkvReaderExRl() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_EXECUTE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef12PATH_EXECUTEE = NULL;

/* Exported Object: android::DrmDef::PATH_UID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef8PATH_UIDE = NULL;

/* Demangled: android::Cta5FileHeader::writeFileSig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader12writeFileSigEi(void) {
    ALOGD("_ZN7android14Cta5FileHeader12writeFileSigEi() called");
    return 0;
}

/* Demangled: mkvparser::AudioTrack::Parse(mkvparser::Segment*, mkvparser::Track::Info const&, long long, long long, mkvparser::AudioTrack*&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10AudioTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_(void) {
    ALOGD("_ZN9mkvparser10AudioTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getCtaHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader12getCtaHeaderEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader12getCtaHeaderEv() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::PartialEncryptHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeaderC1Ev(void) {
    ALOGD("_ZN7android20PartialEncryptHeaderC1Ev() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::GetPrevTimeCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockGroup15GetPrevTimeCodeEv(void) {
    ALOGD("_ZNK9mkvparser10BlockGroup15GetPrevTimeCodeEv() called");
    return 0;
}

/* Demangled: android::DrmUtil::checkDir(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil8checkDirENS_7String8E(void) {
    ALOGD("_ZN7android7DrmUtil8checkDirENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5WAVFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetSeekPreRoll() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track14GetSeekPreRollEv(void) {
    ALOGD("_ZNK9mkvparser5Track14GetSeekPreRollEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetLast(mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster7GetLastERPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser7Cluster7GetLastERPKNS_10BlockEntryE() called");
    return 0;
}

/* Demangled: android::CryptoHelper::CryptoHelper(android::CryptoHelper::CIPHER, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelperC2ENS0_6CIPHEREPhi(void) {
    ALOGD("_ZN7android12CryptoHelperC2ENS0_6CIPHEREPhi() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::isKeyValid(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader10isKeyValidENS_7String8E(void) {
    ALOGD("_ZN7android14Cta5FileHeader10isKeyValidENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileFactory::isMultiMedia(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15Cta5FileFactory12isMultiMediaENS_7String8E(void) {
    ALOGD("_ZN7android15Cta5FileFactory12isMultiMediaENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5ASFFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFile12parseHeadersEi(void) {
    ALOGD("_ZN7android11Cta5ASFFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::Segment::Segment(mkvparser::IMkvReader*, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7SegmentC2EPNS_10IMkvReaderExxx(void) {
    ALOGD("_ZN9mkvparser7SegmentC2EPNS_10IMkvReaderExxx() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetProjection() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack13GetProjectionEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack13GetProjectionEv() called");
    return 0;
}

/* Demangled: android::StrUtil::toString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil8toStringEi(void) {
    ALOGD("_ZN7android7StrUtil8toStringEi() called");
    return 0;
}

/* Demangled: android::Cta5File::setClearFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File10setClearFdEi(void) {
    ALOGD("_ZN7android8Cta5File10setClearFdEi() called");
    return 0;
}

/* Demangled: android::DrmInfoEvent::getMessage() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12DrmInfoEvent10getMessageEv(void) {
    ALOGD("_ZNK7android12DrmInfoEvent10getMessageEv() called");
    return 0;
}

/* Demangled: mkvparser::Block::~Block() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5BlockD1Ev(void) {
    ALOGD("_ZN9mkvparser5BlockD1Ev() called");
    return 0;
}

/* Demangled: android::KeyInfo::getCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo8getCountEv(void) {
    ALOGD("_ZN7android7KeyInfo8getCountEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getContentLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader13getContentLenEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader13getContentLenEv() called");
    return 0;
}

/* Demangled: android::Cta5File::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File6cancelEv(void) {
    ALOGD("_ZN7android8Cta5File6cancelEv() called");
    return 0;
}

/* Demangled: android::DrmInfoEvent::DrmInfoEvent(int, int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmInfoEventC2EiiRKNS_7String8E(void) {
    ALOGD("_ZN7android12DrmInfoEventC2EiiRKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::EBMLHeader::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10EBMLHeader4InitEv(void) {
    ALOGD("_ZN9mkvparser10EBMLHeader4InitEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetElementSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster14GetElementSizeEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster14GetElementSizeEv() called");
    return 0;
}

/* Demangled: android::CryptoHelper::cipherBlkLen(android::CryptoHelper::CIPHER) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper12cipherBlkLenENS0_6CIPHERE(void) {
    ALOGD("_ZN7android12CryptoHelper12cipherBlkLenENS0_6CIPHERE() called");
    return 0;
}

/* Demangled: android::StrUtil::toTimeStr(long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil9toTimeStrEPl(void) {
    ALOGD("_ZN7android7StrUtil9toTimeStrEPl() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_DATA_2 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType10KEY_DATA_2E = NULL;

/* Exported Object: android::DrmRequestType::ACTION_MARK_AS_CONSUME_IN_APP_CLIENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType36ACTION_MARK_AS_CONSUME_IN_APP_CLIENTE = NULL;

/* Exported Object: vtable for android::Cta5FLVFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11Cta5FLVFileE = NULL;

/* Demangled: mkvparser::ContentEncoding::GetCompressionCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser15ContentEncoding19GetCompressionCountEv(void) {
    ALOGD("_ZNK9mkvparser15ContentEncoding19GetCompressionCountEv() called");
    return 0;
}

/* Exported Object: mkvparser::Colour::kValueNotPresent */
extern "C" __attribute__((visibility("default"))) void* _ZN9mkvparser6Colour16kValueNotPresentE = NULL;

/* Exported Object: mkvparser::Projection::kValueNotPresent */
extern "C" __attribute__((visibility("default"))) void* _ZN9mkvparser10Projection16kValueNotPresentE = NULL;

/* Exported Object: vtable for mkvparser::BlockEntry */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser10BlockEntryE = NULL;

/* Exported Object: android::DrmDef::EXT_RIGHTS_XML */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef14EXT_RIGHTS_XMLE = NULL;

/* Demangled: android::StrUtil::toString(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil8toStringEl(void) {
    ALOGD("_ZN7android7StrUtil8toStringEl() called");
    return 0;
}

/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5WAVFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Tags::ParseTag(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags8ParseTagExx(void) {
    ALOGD("_ZN9mkvparser4Tags8ParseTagExx() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_CONTENT_VENDOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef20TOKEN_CONTENT_VENDORE = NULL;

/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5ASFFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::~Track() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5TrackD2Ev(void) {
    ALOGD("_ZN9mkvparser5TrackD2Ev() called");
    return 0;
}

/* Demangled: android::StrUtil::datetimeStrToTick(char*, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil17datetimeStrToTickEPcRl(void) {
    ALOGD("_ZN7android7StrUtil17datetimeStrToTickEPcRl() called");
    return 0;
}

/* Demangled: android::DrmCtaMultiMediaUtil::readAt(int, long, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DrmCtaMultiMediaUtil6readAtEilPvm(void) {
    ALOGD("_ZN7android20DrmCtaMultiMediaUtil6readAtEilPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5AVIFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11Cta5AVIFileE = NULL;

/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android16Cta5MatroskaFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::EBMLHeader::EBMLHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10EBMLHeaderC1Ev(void) {
    ALOGD("_ZN9mkvparser10EBMLHeaderC1Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cues::DoneParsing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues11DoneParsingEv(void) {
    ALOGD("_ZNK9mkvparser4Cues11DoneParsingEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetContentEncodingCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track23GetContentEncodingCountEv(void) {
    ALOGD("_ZNK9mkvparser5Track23GetContentEncodingCountEv() called");
    return 0;
}

/* Demangled: mkvparser::BlockEntry::GetIndex() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockEntry8GetIndexEv(void) {
    ALOGD("_ZNK9mkvparser10BlockEntry8GetIndexEv() called");
    return 0;
}

/* Demangled: android::StrUtil::trimRCRLF(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil9trimRCRLFERNS_7String8E(void) {
    ALOGD("_ZN7android7StrUtil9trimRCRLFERNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::nettohostl(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil10nettohostlEj(void) {
    ALOGD("_ZN7android12Cta5FileUtil10nettohostlEj() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::hosttonetll(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil11hosttonetllEm(void) {
    ALOGD("_ZN7android12Cta5FileUtil11hosttonetllEm() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeaderC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android14Cta5FileHeaderC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: android::Cta5File::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File4dumpEv(void) {
    ALOGD("_ZN7android8Cta5File4dumpEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetFirst(mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster8GetFirstERPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser7Cluster8GetFirstERPKNS_10BlockEntryE() called");
    return 0;
}

/* Exported Object: android::DrmDef::RO_DIRECTORY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef12RO_DIRECTORYE = NULL;

/* Exported Object: value */
extern "C" __attribute__((visibility("default"))) void* value = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CTA5_GETPROGESS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType22ACTION_CTA5_GETPROGESSE = NULL;

/* Demangled: mkvparser::Segment::GetCues() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment7GetCuesEv(void) {
    ALOGD("_ZNK9mkvparser7Segment7GetCuesEv() called");
    return 0;
}

/* Demangled: android::DrmDef::getPermission(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef13getPermissionEi(void) {
    ALOGD("_ZN7android6DrmDef13getPermissionEi() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::isNeedConsume(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil13isNeedConsumeERKNS_7String8E(void) {
    ALOGD("_ZN7android10DrmMtkUtil13isNeedConsumeERKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetLacing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track9GetLacingEv(void) {
    ALOGD("_ZNK9mkvparser5Track9GetLacingEv() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentCompression::ContentCompression() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding18ContentCompressionC1Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding18ContentCompressionC1Ev() called");
    return 0;
}

/* Demangled: android::CryptoHelper::doCryption(unsigned char*, int, unsigned char*, int&, unsigned char*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper10doCryptionEPhiS1_RiS1_b(void) {
    ALOGD("_ZN7android12CryptoHelper10doCryptionEPhiS1_RiS1_b() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_DATA_EXTRA_1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType16KEY_DATA_EXTRA_1E = NULL;

/* Demangled: android::Cta5FileUtil::isDcfFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil9isDcfFileEi(void) {
    ALOGD("_ZN7android12Cta5FileUtil9isDcfFileEi() called");
    return 0;
}

/* Demangled: mkvparser::Segment::Load() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment4LoadEv(void) {
    ALOGD("_ZN9mkvparser7Segment4LoadEv() called");
    return 0;
}

/* Demangled: android::ByteBuffer::setTo(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBuffer5setToEPKcm(void) {
    ALOGD("_ZN7android10ByteBuffer5setToEPKcm() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_UPDATE_OFFSET */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType20ACTION_UPDATE_OFFSETE = NULL;

/* Demangled: android::Cta5FileUtil::getPathFromFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil13getPathFromFdEi(void) {
    ALOGD("_ZN7android12Cta5FileUtil13getPathFromFdEi() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::hmac128Md5Digest(unsigned char const*, unsigned char const*, unsigned long, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil16hmac128Md5DigestEPKhS2_mPh(void) {
    ALOGD("_ZN7android12Cta5FileUtil16hmac128Md5DigestEPKhS2_mPh() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::setClearHeaderOffset(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader20setClearHeaderOffsetEm(void) {
    ALOGD("_ZN7android20PartialEncryptHeader20setClearHeaderOffsetEm() called");
    return 0;
}

/* Exported Object: android::DrmDef::EXT_RIGHTS_WBXML */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef16EXT_RIGHTS_WBXMLE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CTA5_DECRYPT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType19ACTION_CTA5_DECRYPTE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CTA5_CHANGEPASSWORD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType26ACTION_CTA5_CHANGEPASSWORDE = NULL;

/* Demangled: android::Cta5File::Cta5File(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android8Cta5FileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5File::isCta5MultimediaFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File20isCta5MultimediaFileEi(void) {
    ALOGD("_ZN7android8Cta5File20isCta5MultimediaFileEi() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::overwriteClearHeader(int, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile20overwriteClearHeaderEillll(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile20overwriteClearHeaderEillll() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5APEFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11Cta5APEFileE = NULL;

/* Demangled: android::Cta5File::changeKey(android::String8, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File9changeKeyENS_7String8ES1_(void) {
    ALOGD("_ZN7android8Cta5File9changeKeyENS_7String8ES1_() called");
    return 0;
}

/* Demangled: android::Cta5FileFactory::createCta5File(android::String8, unsigned long, android::String8, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15Cta5FileFactory14createCta5FileENS_7String8EmS1_b(void) {
    ALOGD("_ZN7android15Cta5FileFactory14createCta5FileENS_7String8EmS1_b() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters5ParseEv(void) {
    ALOGD("_ZN9mkvparser8Chapters5ParseEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::Edition() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7EditionC1Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7EditionC1Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_KEYVALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef13PATH_KEYVALUEE = NULL;

/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android16Cta5MatroskaFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::Cta5FLACFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android12Cta5FLACFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4Atom5ClearEv(void) {
    ALOGD("_ZN9mkvparser8Chapters4Atom5ClearEv() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ParseEncryptionEntry(long long, long long, mkvparser::IMkvReader*, mkvparser::ContentEncoding::ContentEncryption*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding20ParseEncryptionEntryExxPNS_10IMkvReaderEPNS0_17ContentEncryptionE(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding20ParseEncryptionEntryExxPNS_10IMkvReaderEPNS0_17ContentEncryptionE() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_RIGHTS_ISSUER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef19TOKEN_RIGHTS_ISSUERE = NULL;

/* Exported Object: ctaType */
extern "C" __attribute__((visibility("default"))) void* ctaType = NULL;

/* Demangled: android::Cta5FileHeader::Cta5FileHeader(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeaderC1EiNS_7String8E(void) {
    ALOGD("_ZN7android14Cta5FileHeaderC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::~CuePoint() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8CuePointD2Ev(void) {
    ALOGD("_ZN9mkvparser8CuePointD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::GetTitleAsUTF8() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SegmentInfo14GetTitleAsUTF8Ev(void) {
    ALOGD("_ZNK9mkvparser11SegmentInfo14GetTitleAsUTF8Ev() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::GetAtomCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Edition12GetAtomCountEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Edition12GetAtomCountEv() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::RESULT_SUCCESS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType14RESULT_SUCCESSE = NULL;

/* Demangled: mkvparser::ContentEncoding::ParseContentEncodingEntry(long long, long long, mkvparser::IMkvReader*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding25ParseContentEncodingEntryExxPNS_10IMkvReaderE(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding25ParseContentEncodingEntryExxPNS_10IMkvReaderE() called");
    return 0;
}

/* Demangled: android::CryptoHelper::~CryptoHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelperD1Ev(void) {
    ALOGD("_ZN7android12CryptoHelperD1Ev() called");
    return 0;
}

/* Demangled: android::DrmDef::getPermissionFromAction(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef23getPermissionFromActionEi(void) {
    ALOGD("_ZN7android6DrmDef23getPermissionFromActionEi() called");
    return 0;
}

/* Demangled: android::Cta5File::getCipherHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File18getCipherHeaderLenEv(void) {
    ALOGD("_ZN7android8Cta5File18getCipherHeaderLenEv() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::pread(void*, unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFile5preadEPvml(void) {
    ALOGD("_ZN7android14Cta5NormalFile5preadEPvml() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetTags() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment7GetTagsEv(void) {
    ALOGD("_ZNK9mkvparser7Segment7GetTagsEv() called");
    return 0;
}

/* Exported Object: android::DrmUtil::sDDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7DrmUtil7sDDebugE = NULL;

/* Demangled: android::PartialEncryptHeader::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader4dumpEv(void) {
    ALOGD("_ZN7android20PartialEncryptHeader4dumpEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::ExpandTagsArray() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags15ExpandTagsArrayEv(void) {
    ALOGD("_ZN9mkvparser4Tags15ExpandTagsArrayEv() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android14Cta5NormalFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Display5ClearEv(void) {
    ALOGD("_ZN9mkvparser8Chapters7Display5ClearEv() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::BlockGroup(mkvparser::Cluster*, long, long long, long long, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockGroupC2EPNS_7ClusterElxxxxxx(void) {
    ALOGD("_ZN9mkvparser10BlockGroupC2EPNS_7ClusterElxxxxxx() called");
    return 0;
}

/* Demangled: mkvparser::Tags::~Tags() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4TagsD1Ev(void) {
    ALOGD("_ZN9mkvparser4TagsD1Ev() called");
    return 0;
}

/* Demangled: android::CryptoHelper::getKeyLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper9getKeyLenEv(void) {
    ALOGD("_ZN7android12CryptoHelper9getKeyLenEv() called");
    return 0;
}

/* Demangled: android::DrmDef::getMetaTokenStr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef15getMetaTokenStrEi(void) {
    ALOGD("_ZN7android6DrmDef15getMetaTokenStrEi() called");
    return 0;
}

/* Demangled: android::KeyInfo::KeyInfo(android::KeyInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfoC2ERKS0_(void) {
    ALOGD("_ZN7android7KeyInfoC2ERKS0_() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::DrmCtaUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtilC2Ev(void) {
    ALOGD("_ZN7android10DrmCtaUtilC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cues::~Cues() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4CuesD2Ev(void) {
    ALOGD("_ZN9mkvparser4CuesD2Ev() called");
    return 0;
}

/* Demangled: android::DrmUtil::base64_decode_bytebuffer(android::ByteBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil24base64_decode_bytebufferERNS_10ByteBufferE(void) {
    ALOGD("_ZN7android7DrmUtil24base64_decode_bytebufferERNS_10ByteBufferE() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android12Cta5FLACFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5ASFFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Cues::Init() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues4InitEv(void) {
    ALOGD("_ZNK9mkvparser4Cues4InitEv() called");
    return 0;
}

/* Demangled: mkvparser::BlockEntry::BlockEntry(mkvparser::Cluster*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockEntryC2EPNS_7ClusterEl(void) {
    ALOGD("_ZN9mkvparser10BlockEntryC2EPNS_7ClusterEl() called");
    return 0;
}

/* Demangled: mkvparser::BlockEntry::~BlockEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockEntryD1Ev(void) {
    ALOGD("_ZN9mkvparser10BlockEntryD1Ev() called");
    return 0;
}

/* Demangled: android::CryptoHelper::cipherIvLen(android::CryptoHelper::CIPHER) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper11cipherIvLenENS0_6CIPHERE(void) {
    ALOGD("_ZN7android12CryptoHelper11cipherIvLenENS0_6CIPHERE() called");
    return 0;
}

/* Demangled: android::Cta5File::getClearFd() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File10getClearFdEv(void) {
    ALOGD("_ZN7android8Cta5File10getClearFdEv() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::Cta5NormalFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android14Cta5NormalFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tags(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4TagsC1EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser4TagsC1EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: android::ByteBuffer::setTo(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBuffer5setToEPcm(void) {
    ALOGD("_ZN7android10ByteBuffer5setToEPcm() called");
    return 0;
}

/* Demangled: android::CryptoHelper::CryptoHelper(android::CryptoHelper::CIPHER, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelperC1ENS0_6CIPHEREPhi(void) {
    ALOGD("_ZN7android12CryptoHelperC1ENS0_6CIPHEREPhi() called");
    return 0;
}

/* Demangled: mkvparser::Segment::AppendCluster(mkvparser::Cluster*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment13AppendClusterEPNS_7ClusterE(void) {
    ALOGD("_ZN9mkvparser7Segment13AppendClusterEPNS_7ClusterE() called");
    return 0;
}

/* Demangled: mkvparser::Cues::GetCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues8GetCountEv(void) {
    ALOGD("_ZNK9mkvparser4Cues8GetCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::SimpleTag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTagC1Ev(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTagC1Ev() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::getPathFromFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil13getPathFromFdEi(void) {
    ALOGD("_ZN7android10DrmCtaUtil13getPathFromFdEi() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::wvcrc32(unsigned char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil7wvcrc32EPKhi(void) {
    ALOGD("_ZN7android12Cta5FileUtil7wvcrc32EPKhi() called");
    return 0;
}

/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android16Cta5MatroskaFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmInfoEvent::getUniqueId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12DrmInfoEvent11getUniqueIdEv(void) {
    ALOGD("_ZNK7android12DrmInfoEvent11getUniqueIdEv() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6Tracks5ParseEv(void) {
    ALOGD("_ZN9mkvparser6Tracks5ParseEv() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType8KEY_DATAE = NULL;

/* Exported Object: android::DrmDef::CONSTRAINT_INTERVAL_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef23CONSTRAINT_INTERVAL_STRE = NULL;

/* Demangled: android::KeyInfo::getKeyInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo10getKeyInfoEv(void) {
    ALOGD("_ZN7android7KeyInfo10getKeyInfoEv() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::Parse(mkvparser::Segment*, mkvparser::Track::Info const&, long long, long long, mkvparser::VideoTrack*&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10VideoTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_(void) {
    ALOGD("_ZN9mkvparser10VideoTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_() called");
    return 0;
}

/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android12Cta5MPEGFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::~Info() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track4InfoD2Ev(void) {
    ALOGD("_ZN9mkvparser5Track4InfoD2Ev() called");
    return 0;
}

/* Demangled: android::CipherFileUtil::CipherFileDump(int, int, int, android::CryptoHelper&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14CipherFileUtil14CipherFileDumpEiiiRNS_12CryptoHelperE(void) {
    ALOGD("_ZN7android14CipherFileUtil14CipherFileDumpEiiiRNS_12CryptoHelperE() called");
    return 0;
}

/* Demangled: android::CryptoHelper::desiredInDataSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper17desiredInDataSizeEi(void) {
    ALOGD("_ZN7android12CryptoHelper17desiredInDataSizeEi() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_CONTENT_DESCRIPTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef25TOKEN_CONTENT_DESCRIPTIONE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::~ContentEncoding() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncodingD2Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncodingD2Ev() called");
    return 0;
}

/* Demangled: android::Cta5FLVFile::Cta5FLVFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5FLVFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5APEFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Exported Object: android::DrmDef::MTK_CD_CID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef10MTK_CD_CIDE = NULL;

/* Exported Object: android::DrmUtil::mROLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7DrmUtil7mROLockE = NULL;

/* Demangled: android::Cta5FileUtil::hosttonets(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil10hosttonetsEt(void) {
    ALOGD("_ZN7android12Cta5FileUtil10hosttonetsEt() called");
    return 0;
}

/* Demangled: mkvparser::Cues::Cues(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4CuesC1EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser4CuesC1EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::~Chapters() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8ChaptersD1Ev(void) {
    ALOGD("_ZN9mkvparser8ChaptersD1Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC1EPKcm(void) {
    ALOGD("_ZN7android10ByteBufferC1EPKcm() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_DCF_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType10KEY_DCF_FDE = NULL;

/* Demangled: android::Cta5CommonMultimediaFile::cipherPread(int, void*, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile11cipherPreadEiPvllll(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile11cipherPreadEiPvllll() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::GetTime(mkvparser::Segment const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8CuePoint7GetTimeEPKNS_7SegmentE(void) {
    ALOGD("_ZNK9mkvparser8CuePoint7GetTimeEPKNS_7SegmentE() called");
    return 0;
}

/* Demangled: mkvparser::AudioTrack::GetChannels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10AudioTrack11GetChannelsEv(void) {
    ALOGD("_ZNK9mkvparser10AudioTrack11GetChannelsEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::EXT_CTA5_FILE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef13EXT_CTA5_FILEE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CTA5_ISCTAFILE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType21ACTION_CTA5_ISCTAFILEE = NULL;

/* Exported Object: android::DrmRequestType::KEY_CTA5_OLDKEY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType15KEY_CTA5_OLDKEYE = NULL;

/* Demangled: android::Cta5File::setCipherHeaderOffset(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File21setCipherHeaderOffsetEm(void) {
    ALOGD("_ZN7android8Cta5File21setCipherHeaderOffsetEm() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::getContentPos() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile13getContentPosEv(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile13getContentPosEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::GetTagCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags11GetTagCountEv(void) {
    ALOGD("_ZNK9mkvparser4Tags11GetTagCountEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_ENCODING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef14TOKEN_ENCODINGE = NULL;

/* Exported Object: android::DrmDef::MTK_CD_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef7MTK_CD_E = NULL;

/* Demangled: android::DrmCtaUtil::IsCtaTrustedGetTokenClient(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil26IsCtaTrustedGetTokenClientERNS_7String8E(void) {
    ALOGD("_ZN7android10DrmCtaUtil26IsCtaTrustedGetTokenClientERNS_7String8E() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_MIME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey13META_KEY_MIMEE = NULL;

/* Demangled: mkvparser::Cluster::Create(mkvparser::Segment*, long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster6CreateEPNS_7SegmentElx(void) {
    ALOGD("_ZN9mkvparser7Cluster6CreateEPNS_7SegmentElx() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetLast() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment7GetLastEv(void) {
    ALOGD("_ZNK9mkvparser7Segment7GetLastEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::~Atom() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4AtomD2Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters4AtomD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Display4InitEv(void) {
    ALOGD("_ZN9mkvparser8Chapters7Display4InitEv() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::GetKind() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockGroup7GetKindEv(void) {
    ALOGD("_ZNK9mkvparser10BlockGroup7GetKindEv() called");
    return 0;
}

/* Demangled: android::KeyInfo::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo4dumpEv(void) {
    ALOGD("_ZN7android7KeyInfo4dumpEv() called");
    return 0;
}

/* Demangled: android::Cta5File::getContentLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File13getContentLenEv(void) {
    ALOGD("_ZN7android8Cta5File13getContentLenEv() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::setCtaMultimediaHeader(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile22setCtaMultimediaHeaderEi(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile22setCtaMultimediaHeaderEi() called");
    return 0;
}

/* Demangled: mkvparser::Segment::~Segment() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7SegmentD2Ev(void) {
    ALOGD("_ZN9mkvparser7SegmentD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::GetLanguage() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Display11GetLanguageEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Display11GetLanguageEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Chapters(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8ChaptersC1EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser8ChaptersC1EPNS_7SegmentExxxx() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_CONTENT_DESCRIPTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey28META_KEY_CONTENT_DESCRIPTIONE = NULL;

/* Demangled: mkvparser::Segment::CreateInstance(mkvparser::IMkvReader*, long long, mkvparser::Segment*&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment14CreateInstanceEPNS_10IMkvReaderExRPS0_(void) {
    ALOGD("_ZN9mkvparser7Segment14CreateInstanceEPNS_10IMkvReaderExRPS0_() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetStopTime(mkvparser::Chapters const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom11GetStopTimeEPKS0_(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom11GetStopTimeEPKS0_() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::_init(android::String8, unsigned long, android::String8, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader5_initENS_7String8EmS1_b(void) {
    ALOGD("_ZN7android14Cta5FileHeader5_initENS_7String8EmS1_b() called");
    return 0;
}

/* Demangled: mkvparser::Match(mkvparser::IMkvReader*, long long&, unsigned long, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5MatchEPNS_10IMkvReaderERxmS2_(void) {
    ALOGD("_ZN9mkvparser5MatchEPNS_10IMkvReaderERxmS2_() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment8GetCountEv(void) {
    ALOGD("_ZNK9mkvparser7Segment8GetCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::Parse(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4Atom5ParseEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser8Chapters4Atom5ParseEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::GetEncryptionByIndex(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser15ContentEncoding20GetEncryptionByIndexEm(void) {
    ALOGD("_ZNK9mkvparser15ContentEncoding20GetEncryptionByIndexEm() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::~SegmentInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SegmentInfoD1Ev(void) {
    ALOGD("_ZN9mkvparser11SegmentInfoD1Ev() called");
    return 0;
}

/* Demangled: android::Cta5File::setCipherHeaderLen(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File18setCipherHeaderLenEm(void) {
    ALOGD("_ZN7android8Cta5File18setCipherHeaderLenEm() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ParseCompressionEntry(long long, long long, mkvparser::IMkvReader*, mkvparser::ContentEncoding::ContentCompression*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding21ParseCompressionEntryExxPNS_10IMkvReaderEPNS0_18ContentCompressionE(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding21ParseCompressionEntryExxPNS_10IMkvReaderEPNS0_18ContentCompressionE() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::CuePoint(long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8CuePointC1Elx(void) {
    ALOGD("_ZN9mkvparser8CuePointC1Elx() called");
    return 0;
}

/* Exported Object: android::DrmDef::CONSTRAINT_COUNT_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef20CONSTRAINT_COUNT_STRE = NULL;

/* Demangled: android::Cta5FileHeader::getCtaHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader15getCtaHeaderLenEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader15getCtaHeaderLenEv() called");
    return 0;
}

/* Demangled: android::Cta5File::getMimeType() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File11getMimeTypeEv(void) {
    ALOGD("_ZN7android8Cta5File11getMimeTypeEv() called");
    return 0;
}

/* Demangled: android::DrmCtaMultiMediaUtil::ntoh64(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DrmCtaMultiMediaUtil6ntoh64Em(void) {
    ALOGD("_ZN7android20DrmCtaMultiMediaUtil6ntoh64Em() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::pread(void*, unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile5preadEPvml(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile5preadEPvml() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3Tag5ClearEv(void) {
    ALOGD("_ZN9mkvparser4Tags3Tag5ClearEv() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::GetTrackByNumber(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser6Tracks16GetTrackByNumberEl(void) {
    ALOGD("_ZNK9mkvparser6Tracks16GetTrackByNumberEl() called");
    return 0;
}

/* Exported Object: vtable for mkvparser::AudioTrack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser10AudioTrackE = NULL;

/* Demangled: android::ByteBuffer::setTo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBuffer5setToEPKc(void) {
    ALOGD("_ZN7android10ByteBuffer5setToEPKc() called");
    return 0;
}

/* Exported Object: android::DrmDef::PERMISSION_PLAY_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef19PERMISSION_PLAY_STRE = NULL;

/* Exported Object: android::DrmRequestType::KEY_DATA_EXTRA_2 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType16KEY_DATA_EXTRA_2E = NULL;

/* Exported Object: vtable for android::Cta5File */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8Cta5FileE = NULL;

/* Exported Object: android::DrmDef::MTK_FLDCF_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef10MTK_FLDCF_E = NULL;

/* Exported Object: android::DrmDef::CTA5_CANCEL_DONE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef16CTA5_CANCEL_DONEE = NULL;

/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android14Cta5NormalFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::encryptHeader(int, long, long, long&, long&, android::Vector<android::DrmCtaUtil::Listener> const*, long, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile13encryptHeaderEillRlS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEElS1_(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile13encryptHeaderEillRlS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEElS1_() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getKeyInofs() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader11getKeyInofsEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader11getKeyInofsEv() called");
    return 0;
}

/* Demangled: android::Cta5File::~Cta5File() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileD1Ev(void) {
    ALOGD("_ZN7android8Cta5FileD1Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cues::GetNext(mkvparser::CuePoint const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues7GetNextEPKNS_8CuePointE(void) {
    ALOGD("_ZNK9mkvparser4Cues7GetNextEPKNS_8CuePointE() called");
    return 0;
}

/* Demangled: mkvparser::Track::Create(mkvparser::Segment*, mkvparser::Track::Info const&, long long, long long, mkvparser::Track*&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track6CreateEPNS_7SegmentERKNS0_4InfoExxRPS0_(void) {
    ALOGD("_ZN9mkvparser5Track6CreateEPNS_7SegmentERKNS0_4InfoExxRPS0_() called");
    return 0;
}

/* Demangled: mkvparser::Track::Seek(long long, mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track4SeekExRPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser5Track4SeekExRPKNS_10BlockEntryE() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_CONSTRAINT_DATETIME_END */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef28PATH_CONSTRAINT_DATETIME_ENDE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CTA5_SETKEY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType18ACTION_CTA5_SETKEYE = NULL;

/* Demangled: mkvparser::GetVersion(int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10GetVersionERiS0_S0_S0_(void) {
    ALOGD("_ZN9mkvparser10GetVersionERiS0_S0_S0_() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentEncryption::ContentEncryption() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding17ContentEncryptionC1Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding17ContentEncryptionC1Ev() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::Cta5APEFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5APEFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: android::ByteBuffer::length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10ByteBuffer6lengthEv(void) {
    ALOGD("_ZNK7android10ByteBuffer6lengthEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3Tag4InitEv(void) {
    ALOGD("_ZN9mkvparser4Tags3Tag4InitEv() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::GetNextTimeCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockGroup15GetNextTimeCodeEv(void) {
    ALOGD("_ZNK9mkvparser10BlockGroup15GetNextTimeCodeEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::~Cluster() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7ClusterD1Ev(void) {
    ALOGD("_ZN9mkvparser7ClusterD1Ev() called");
    return 0;
}

/* Demangled: android::DrmUtil::checkExistence(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil14checkExistenceENS_7String8E(void) {
    ALOGD("_ZN7android7DrmUtil14checkExistenceENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Colour::Parse(mkvparser::IMkvReader*, long long, long long, mkvparser::Colour**) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6Colour5ParseEPNS_10IMkvReaderExxPPS0_(void) {
    ALOGD("_ZN9mkvparser6Colour5ParseEPNS_10IMkvReaderExxPPS0_() called");
    return 0;
}

/* Exported Object: android::DrmDef::CONTENT_DIRECTORY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef17CONTENT_DIRECTORYE = NULL;

/* Demangled: android::Cta5File::Cta5File(android::String8, unsigned long, android::String8, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileC2ENS_7String8EmS1_b(void) {
    ALOGD("_ZN7android8Cta5FileC2ENS_7String8EmS1_b() called");
    return 0;
}

/* Exported Object: type */
extern "C" __attribute__((visibility("default"))) void* type = NULL;

/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5AVIFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::SegmentInfo(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SegmentInfoC2EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser11SegmentInfoC2EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::Cluster() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7ClusterC2Ev(void) {
    ALOGD("_ZN9mkvparser7ClusterC2Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::MIME_DRM_CONTENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef16MIME_DRM_CONTENTE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CHECK_RIGHTS_STATUS_BY_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType32ACTION_CHECK_RIGHTS_STATUS_BY_FDE = NULL;

/* Demangled: android::CipherFileUtil::CipherFileInstall(__sFILE*, int, int, __sFILE*, android::CryptoHelper&, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14CipherFileUtil17CipherFileInstallEP7__sFILEiiS2_RNS_12CryptoHelperEPh(void) {
    ALOGD("_ZN7android14CipherFileUtil17CipherFileInstallEP7__sFILEiiS2_RNS_12CryptoHelperEPh() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::getClearHeaderOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader20getClearHeaderOffsetEv(void) {
    ALOGD("_ZN7android20PartialEncryptHeader20getClearHeaderOffsetEv() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5NormalFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14Cta5NormalFileE = NULL;

/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android16Cta5MatroskaFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetPosition() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster11GetPositionEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster11GetPositionEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::~Tag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3TagD1Ev(void) {
    ALOGD("_ZN9mkvparser4Tags3TagD1Ev() called");
    return 0;
}

/* Demangled: android::DrmUtil::getDrmKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil9getDrmKeyEv(void) {
    ALOGD("_ZN7android7DrmUtil9getDrmKeyEv() called");
    return 0;
}

/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android12Cta5MPEGFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::SimpleBlock::GetBlock() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SimpleBlock8GetBlockEv(void) {
    ALOGD("_ZNK9mkvparser11SimpleBlock8GetBlockEv() called");
    return 0;
}

/* Demangled: android::StrUtil::intervalStrToTick(char*, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil17intervalStrToTickEPcRl(void) {
    ALOGD("_ZN7android7StrUtil17intervalStrToTickEPcRl() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::nettohosts(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil10nettohostsEt(void) {
    ALOGD("_ZN7android12Cta5FileUtil10nettohostsEt() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::Tag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3TagC2Ev(void) {
    ALOGD("_ZN9mkvparser4Tags3TagC2Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::~ByteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferD1Ev(void) {
    ALOGD("_ZN7android10ByteBufferD1Ev() called");
    return 0;
}

/* Demangled: android::StrUtil::getContentUri(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil13getContentUriENS_7String8E(void) {
    ALOGD("_ZN7android7StrUtil13getContentUriENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::setCta5FileHeader(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader17setCta5FileHeaderENS_7String8E(void) {
    ALOGD("_ZN7android14Cta5FileHeader17setCta5FileHeaderENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5File::getCipherHeaderOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File21getCipherHeaderOffsetEv(void) {
    ALOGD("_ZN7android8Cta5File21getCipherHeaderOffsetEv() called");
    return 0;
}

/* Exported Object: sCta5MimeTypeMap */
extern "C" __attribute__((visibility("default"))) void* sCta5MimeTypeMap = NULL;

/* Demangled: mkvparser::Track::GetCodecNameAsUTF8() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track18GetCodecNameAsUTF8Ev(void) {
    ALOGD("_ZNK9mkvparser5Track18GetCodecNameAsUTF8Ev() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::VideoTrack(mkvparser::Segment*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10VideoTrackC2EPNS_7SegmentExx(void) {
    ALOGD("_ZN9mkvparser10VideoTrackC2EPNS_7SegmentExx() called");
    return 0;
}

/* Demangled: android::ByteBuffer::buffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10ByteBuffer6bufferEv(void) {
    ALOGD("_ZNK7android10ByteBuffer6bufferEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::MTK_FL_CID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef10MTK_FL_CIDE = NULL;

/* Demangled: mkvparser::Chapters::Display::~Display() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7DisplayD1Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7DisplayD1Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC2Ev(void) {
    ALOGD("_ZN7android10ByteBufferC2Ev() called");
    return 0;
}

/* Demangled: android::CipherFileUtil::isEnableDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14CipherFileUtil13isEnableDebugEv(void) {
    ALOGD("_ZN7android14CipherFileUtil13isEnableDebugEv() called");
    return 0;
}

/* Demangled: android::Cta5AVIFile::Cta5AVIFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5AVIFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::~Tracks() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6TracksD1Ev(void) {
    ALOGD("_ZN9mkvparser6TracksD1Ev() called");
    return 0;
}

/* Demangled: mkvparser::SimpleBlock::SimpleBlock(mkvparser::Cluster*, long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SimpleBlockC1EPNS_7ClusterElxx(void) {
    ALOGD("_ZN9mkvparser11SimpleBlockC1EPNS_7ClusterElxx() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_LOAD_DEVICE_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType21ACTION_LOAD_DEVICE_IDE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CHECK_CONSUME_IN_APP_CLIENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType34ACTION_CHECK_CONSUME_IN_APP_CLIENTE = NULL;

/* Demangled: android::Cta5WAVFile::Cta5WAVFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5WAVFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::Display() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7DisplayC2Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7DisplayC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetTime(mkvparser::Cluster const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block7GetTimeEPKNS_7ClusterE(void) {
    ALOGD("_ZNK9mkvparser5Block7GetTimeEPKNS_7ClusterE() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int fn___cfi_check(void) __asm__("__cfi_check");
int fn___cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_CTA5_CANCEL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType18ACTION_CTA5_CANCELE = NULL;

/* Demangled: mkvparser::Chapters::GetEditionCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters15GetEditionCountEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters15GetEditionCountEv() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(android::ByteBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC2ERKS0_(void) {
    ALOGD("_ZN7android10ByteBufferC2ERKS0_() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_CTA5_TOKEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType14KEY_CTA5_TOKENE = NULL;

/* Demangled: android::KeyInfo::KeyInfo(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfoC1ENS_7String8E(void) {
    ALOGD("_ZN7android7KeyInfoC1ENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ParseContentEncAESSettingsEntry(long long, long long, mkvparser::IMkvReader*, mkvparser::ContentEncoding::ContentEncAESSettings*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding31ParseContentEncAESSettingsEntryExxPNS_10IMkvReaderEPNS0_21ContentEncAESSettingsE(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding31ParseContentEncAESSettingsEntryExxPNS_10IMkvReaderEPNS0_21ContentEncAESSettingsE() called");
    return 0;
}

/* Exported Object: android::DrmDef::MIME_RIGHTS_XML */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef15MIME_RIGHTS_XMLE = NULL;

/* Demangled: android::PartialEncryptHeader::PartialEncryptHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeaderC2Ev(void) {
    ALOGD("_ZN7android20PartialEncryptHeaderC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cues::GetLast() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues7GetLastEv(void) {
    ALOGD("_ZNK9mkvparser4Cues7GetLastEv() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::~VideoTrack() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10VideoTrackD0Ev(void) {
    ALOGD("_ZN9mkvparser10VideoTrackD0Ev() called");
    return 0;
}

/* Demangled: android::CipherFileUtil::CipherFileDump(android::String8, int, int, int, android::CryptoHelper&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14CipherFileUtil14CipherFileDumpENS_7String8EiiiRNS_12CryptoHelperE(void) {
    ALOGD("_ZN7android14CipherFileUtil14CipherFileDumpENS_7String8EiiiRNS_12CryptoHelperE() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::getProcessName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil14getProcessNameEi(void) {
    ALOGD("_ZN7android10DrmMtkUtil14getProcessNameEi() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getClearHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader17getClearHeaderLenEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader17getClearHeaderLenEv() called");
    return 0;
}

/* Exported Object: android::Cta5FileUtil::CRC32Table */
extern "C" __attribute__((visibility("default"))) void* _ZN7android12Cta5FileUtil10CRC32TableE = NULL;

/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android12Cta5MPEGFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::ParseSimpleBlock(long long, long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster16ParseSimpleBlockExRxRl(void) {
    ALOGD("_ZN9mkvparser7Cluster16ParseSimpleBlockExRxRl() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetFirstTime() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster12GetFirstTimeEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster12GetFirstTimeEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_PLUGIN_DESCRIPTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef23CTA5_PLUGIN_DESCRIPTIONE = NULL;

/* Demangled: android::Cta5FLVFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFile12parseHeadersEi(void) {
    ALOGD("_ZN7android11Cta5FLVFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetTimeCode(mkvparser::Cluster const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block11GetTimeCodeEPKNS_7ClusterE(void) {
    ALOGD("_ZNK9mkvparser5Block11GetTimeCodeEPKNS_7ClusterE() called");
    return 0;
}

/* Exported Object: android::DrmDef::HEADER_TOKEN_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef15HEADER_TOKEN_IDE = NULL;

/* Demangled: android::DrmCtaUtil::getErrorCallbackMsg(android::String8, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil19getErrorCallbackMsgENS_7String8ES1_(void) {
    ALOGD("_ZN7android10DrmCtaUtil19getErrorCallbackMsgENS_7String8ES1_() called");
    return 0;
}

/* Demangled: mkvparser::ParseElementHeader(mkvparser::IMkvReader*, long long&, long long, long long&, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser18ParseElementHeaderEPNS_10IMkvReaderERxxS2_S2_(void) {
    ALOGD("_ZN9mkvparser18ParseElementHeaderEPNS_10IMkvReaderERxxS2_S2_() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::GetTagString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags9SimpleTag12GetTagStringEv(void) {
    ALOGD("_ZNK9mkvparser4Tags9SimpleTag12GetTagStringEv() called");
    return 0;
}

/* Demangled: mkvparser::Block::~Block() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5BlockD2Ev(void) {
    ALOGD("_ZN9mkvparser5BlockD2Ev() called");
    return 0;
}

/* Demangled: android::KeyInfo::KeyInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfoC1Ev(void) {
    ALOGD("_ZN7android7KeyInfoC1Ev() called");
    return 0;
}

/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5ASFFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Segment::FindOrPreloadCluster(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment20FindOrPreloadClusterEx(void) {
    ALOGD("_ZN9mkvparser7Segment20FindOrPreloadClusterEx() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::Load(long long&, long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster4LoadERxRl(void) {
    ALOGD("_ZNK9mkvparser7Cluster4LoadERxRl() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetEntryCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster13GetEntryCountEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster13GetEntryCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetStopTimecode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom15GetStopTimecodeEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom15GetStopTimecodeEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::Copy(mkvparser::Track::Info&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track4Info4CopyERS1_(void) {
    ALOGD("_ZNK9mkvparser5Track4Info4CopyERS1_() called");
    return 0;
}

/* Demangled: mkvparser::Block::Parse(mkvparser::Cluster const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Block5ParseEPKNS_7ClusterE(void) {
    ALOGD("_ZN9mkvparser5Block5ParseEPKNS_7ClusterE() called");
    return 0;
}

/* Exported Object: android::DrmDef::EXT_DRM_CONTENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef15EXT_DRM_CONTENTE = NULL;

/* Demangled: android::KeyInfo::isKeyValid(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo10isKeyValidENS_7String8E(void) {
    ALOGD("_ZN7android7KeyInfo10isKeyValidENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::EBMLHeader::~EBMLHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10EBMLHeaderD1Ev(void) {
    ALOGD("_ZN9mkvparser10EBMLHeaderD1Ev() called");
    return 0;
}

/* Demangled: mkvparser::UnserializeString(mkvparser::IMkvReader*, long long, long long, char*&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser17UnserializeStringEPNS_10IMkvReaderExxRPc(void) {
    ALOGD("_ZN9mkvparser17UnserializeStringEPNS_10IMkvReaderExxRPc() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::ShallowCopy(mkvparser::Tags::Tag&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags3Tag11ShallowCopyERS1_(void) {
    ALOGD("_ZNK9mkvparser4Tags3Tag11ShallowCopyERS1_() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::GetEncryptionCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser15ContentEncoding18GetEncryptionCountEv(void) {
    ALOGD("_ZNK9mkvparser15ContentEncoding18GetEncryptionCountEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getCipherHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader18getCipherHeaderLenEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader18getCipherHeaderLenEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::GetAtom(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Edition7GetAtomEi(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Edition7GetAtomEi() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::setCipherHeaderOffset(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader21setCipherHeaderOffsetEm(void) {
    ALOGD("_ZN7android20PartialEncryptHeader21setCipherHeaderOffsetEm() called");
    return 0;
}

/* Demangled: android::Cta5File::getIv() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File5getIvEv(void) {
    ALOGD("_ZN7android8Cta5File5getIvEv() called");
    return 0;
}

/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5FLVFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::EBMLHeader::EBMLHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10EBMLHeaderC2Ev(void) {
    ALOGD("_ZN9mkvparser10EBMLHeaderC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::Parse(long long&, long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster5ParseERxRl(void) {
    ALOGD("_ZNK9mkvparser7Cluster5ParseERxRl() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::ShallowCopy(mkvparser::Tags::SimpleTag&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags9SimpleTag11ShallowCopyERS1_(void) {
    ALOGD("_ZNK9mkvparser4Tags9SimpleTag11ShallowCopyERS1_() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentCompression::~ContentCompression() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding18ContentCompressionD1Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding18ContentCompressionD1Ev() called");
    return 0;
}

/* Demangled: android::KeyInfo::KeyInfo(android::KeyInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfoC1ERKS0_(void) {
    ALOGD("_ZN7android7KeyInfoC1ERKS0_() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetEntry(mkvparser::CuePoint const&, mkvparser::CuePoint::TrackPosition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster8GetEntryERKNS_8CuePointERKNS1_13TrackPositionE(void) {
    ALOGD("_ZNK9mkvparser7Cluster8GetEntryERKNS_8CuePointERKNS1_13TrackPositionE() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::GetTagName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags9SimpleTag10GetTagNameEv(void) {
    ALOGD("_ZNK9mkvparser4Tags9SimpleTag10GetTagNameEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::EOS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster3EOSEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster3EOSEv() called");
    return 0;
}

/* Demangled: mkvparser::SimpleBlock::GetKind() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SimpleBlock7GetKindEv(void) {
    ALOGD("_ZNK9mkvparser11SimpleBlock7GetKindEv() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::~SeekHead() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHeadD1Ev(void) {
    ALOGD("_ZN9mkvparser8SeekHeadD1Ev() called");
    return 0;
}

/* Exported Object: android::Cta5FileHeader::HMAC_KEY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14Cta5FileHeader8HMAC_KEYE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: mkvparser::ContentEncoding::ContentCompression::ContentCompression() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding18ContentCompressionC2Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding18ContentCompressionC2Ev() called");
    return 0;
}

/* Demangled: android::StrUtil::trimLRSpace(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil11trimLRSpaceERNS_7String8E(void) {
    ALOGD("_ZN7android7StrUtil11trimLRSpaceERNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::readCipherFile(int, void*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFile14readCipherFileEiPviiii(void) {
    ALOGD("_ZN7android14Cta5NormalFile14readCipherFileEiPviiii() called");
    return 0;
}

/* Demangled: mkvparser::Segment::DoLoadClusterUnknownSize(long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment24DoLoadClusterUnknownSizeERxRl(void) {
    ALOGD("_ZN9mkvparser7Segment24DoLoadClusterUnknownSizeERxRl() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::ExpandSimpleTagsArray() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3Tag21ExpandSimpleTagsArrayEv(void) {
    ALOGD("_ZN9mkvparser4Tags3Tag21ExpandSimpleTagsArrayEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::ENCODING_BASE64 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef15ENCODING_BASE64E = NULL;

/* Demangled: android::Cta5File::getCipherFd() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File11getCipherFdEv(void) {
    ALOGD("_ZN7android8Cta5File11getCipherFdEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment7GetInfoEv(void) {
    ALOGD("_ZNK9mkvparser7Segment7GetInfoEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetCodecPrivate(unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track15GetCodecPrivateERm(void) {
    ALOGD("_ZNK9mkvparser5Track15GetCodecPrivateERm() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::~Edition() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7EditionD1Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7EditionD1Ev() called");
    return 0;
}

/* Demangled: android::StrUtil::strrpl(char*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil6strrplEPcPKcS3_(void) {
    ALOGD("_ZN7android7StrUtil6strrplEPcPKcS3_() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_DM_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType9KEY_DM_FDE = NULL;

/* Demangled: android::Cta5File::notify(android::Vector<android::DrmCtaUtil::Listener> const*, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File6notifyEPKNS_6VectorINS_10DrmCtaUtil8ListenerEEENS_7String8E(void) {
    ALOGD("_ZN7android8Cta5File6notifyEPKNS_6VectorINS_10DrmCtaUtil8ListenerEEENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5ASFFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::SeekHead(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHeadC1EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser8SeekHeadC1EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::isTrustedVideoClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil20isTrustedVideoClientERKNS_7String8E(void) {
    ALOGD("_ZN7android10DrmMtkUtil20isTrustedVideoClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getOriginalMimeType() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader19getOriginalMimeTypeEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader19getOriginalMimeTypeEv() called");
    return 0;
}

/* Demangled: android::Cta5File::getHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File9getHeaderEv(void) {
    ALOGD("_ZN7android8Cta5File9getHeaderEv() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFile12parseHeadersEi(void) {
    ALOGD("_ZN7android11Cta5APEFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::Edition() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7EditionC2Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7EditionC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::VideoTrack(mkvparser::Segment*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10VideoTrackC1EPNS_7SegmentExx(void) {
    ALOGD("_ZN9mkvparser10VideoTrackC1EPNS_7SegmentExx() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::markAsConsumeInAppClient(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil24markAsConsumeInAppClientERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android10DrmMtkUtil24markAsConsumeInAppClientERKNS_7String8ES3_() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_CONSUME_RIGHTS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType21ACTION_CONSUME_RIGHTSE = NULL;

/* Demangled: mkvparser::UnserializeInt(mkvparser::IMkvReader*, long long, long long, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser14UnserializeIntEPNS_10IMkvReaderExxRx(void) {
    ALOGD("_ZN9mkvparser14UnserializeIntEPNS_10IMkvReaderExxRx() called");
    return 0;
}

/* Exported Object: android::DrmDef::HEADER_TOKEN_CONTENT_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef25HEADER_TOKEN_CONTENT_TYPEE = NULL;

/* Exported Object: android::DrmRequestType::KEY_ACTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType10KEY_ACTIONE = NULL;

/* Exported Object: android::DrmRequestType::RESULT_FAILURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType14RESULT_FAILUREE = NULL;

/* Demangled: mkvparser::EBMLHeader::Parse(mkvparser::IMkvReader*, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10EBMLHeader5ParseEPNS_10IMkvReaderERx(void) {
    ALOGD("_ZN9mkvparser10EBMLHeader5ParseEPNS_10IMkvReaderERx() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::GetVoidElementCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8SeekHead19GetVoidElementCountEv(void) {
    ALOGD("_ZNK9mkvparser8SeekHead19GetVoidElementCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetDisplay(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom10GetDisplayEi(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom10GetDisplayEi() called");
    return 0;
}

/* Demangled: android::Cta5File::isNeedCancel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File12isNeedCancelEv(void) {
    ALOGD("_ZN7android8Cta5File12isNeedCancelEv() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::decryptHeader(long, long, long&, long&, android::Vector<android::DrmCtaUtil::Listener> const*, long, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile13decryptHeaderEllRlS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEElS1_(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile13decryptHeaderEllRlS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEElS1_() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC1EPc(void) {
    ALOGD("_ZN7android10ByteBufferC1EPc() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_PLAY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef9PATH_PLAYE = NULL;

/* Exported Object: android::DrmDef::PATH_PRINT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef10PATH_PRINTE = NULL;

/* Demangled: android::CryptoHelper::~CryptoHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelperD2Ev(void) {
    ALOGD("_ZN7android12CryptoHelperD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::GetCountry() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Display10GetCountryEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Display10GetCountryEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::~Track() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5TrackD0Ev(void) {
    ALOGD("_ZN9mkvparser5TrackD0Ev() called");
    return 0;
}

/* Demangled: mkvparser::AudioTrack::AudioTrack(mkvparser::Segment*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10AudioTrackC2EPNS_7SegmentExx(void) {
    ALOGD("_ZN9mkvparser10AudioTrackC2EPNS_7SegmentExx() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_CTA5_CIPHER_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType18KEY_CTA5_CIPHER_FDE = NULL;

/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android14Cta5NormalFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5WAVFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11Cta5WAVFileE = NULL;

/* Demangled: mkvparser::Chapters::Atom::ExpandDisplaysArray() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4Atom19ExpandDisplaysArrayEv(void) {
    ALOGD("_ZN9mkvparser8Chapters4Atom19ExpandDisplaysArrayEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetUid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track6GetUidEv(void) {
    ALOGD("_ZNK9mkvparser5Track6GetUidEv() called");
    return 0;
}

/* Demangled: android::DrmUtil::rc4_encrypt_buffer(unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil18rc4_encrypt_bufferEPhS1_i(void) {
    ALOGD("_ZN7android7DrmUtil18rc4_encrypt_bufferEPhS1_i() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::aes128cbcDecrypt(unsigned char const*, unsigned char*, unsigned long, unsigned char const*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil16aes128cbcDecryptEPKhPhmS2_S3_(void) {
    ALOGD("_ZN7android12Cta5FileUtil16aes128cbcDecryptEPKhPhmS2_S3_() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::getClearHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader17getClearHeaderLenEv(void) {
    ALOGD("_ZN7android20PartialEncryptHeader17getClearHeaderLenEv() called");
    return 0;
}

/* Demangled: android::Cta5File::getCta5FileHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File17getCta5FileHeaderEv(void) {
    ALOGD("_ZN7android8Cta5File17getCta5FileHeaderEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Edition4InitEv(void) {
    ALOGD("_ZN9mkvparser8Chapters7Edition4InitEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::~Tags() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4TagsD2Ev(void) {
    ALOGD("_ZN9mkvparser4TagsD2Ev() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_CTA5_CHECKTOKEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType22ACTION_CTA5_CHECKTOKENE = NULL;

/* Demangled: android::Cta5FileHeader::isPartialEncryptedFile() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader22isPartialEncryptedFileEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader22isPartialEncryptedFileEv() called");
    return 0;
}

/* Exported Object: android::DrmCtaMultiMediaUtil::MULTI_MEDIA_LIST */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20DrmCtaMultiMediaUtil16MULTI_MEDIA_LISTE = NULL;

/* Demangled: mkvparser::Chapters::Edition::ParseAtom(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Edition9ParseAtomEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser8Chapters7Edition9ParseAtomEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5APEFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: android::KeyInfo::changeKeyInfo(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo13changeKeyInfoENS_7String8E(void) {
    ALOGD("_ZN7android7KeyInfo13changeKeyInfoENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5AVIFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFile12parseHeadersEi(void) {
    ALOGD("_ZN7android11Cta5AVIFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::BlockEntry::~BlockEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockEntryD2Ev(void) {
    ALOGD("_ZN9mkvparser10BlockEntryD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::~SimpleTag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTagD1Ev(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTagD1Ev() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::setCipherHeaderLen(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader18setCipherHeaderLenEm(void) {
    ALOGD("_ZN7android14Cta5FileHeader18setCipherHeaderLenEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Cta5WAVFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFile12parseHeadersEi(void) {
    ALOGD("_ZN7android11Cta5WAVFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SegmentInfo5ParseEv(void) {
    ALOGD("_ZN9mkvparser11SegmentInfo5ParseEv() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetWidth() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack8GetWidthEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack8GetWidthEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::setCipherHeaderOffset(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader21setCipherHeaderOffsetEm(void) {
    ALOGD("_ZN7android14Cta5FileHeader21setCipherHeaderOffsetEm() called");
    return 0;
}

/* Demangled: android::Cta5File::Cta5File(android::String8, android::String8, android::String8, unsigned long, android::String8, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileC2ENS_7String8ES1_S1_mS1_b(void) {
    ALOGD("_ZN7android8Cta5FileC2ENS_7String8ES1_S1_mS1_b() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::Cta5FLACFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android12Cta5FLACFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Cues::PreloadCuePoint(long&, long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues15PreloadCuePointERlx(void) {
    ALOGD("_ZNK9mkvparser4Cues15PreloadCuePointERlx() called");
    return 0;
}

/* Demangled: mkvparser::Cues::GetBlock(mkvparser::CuePoint const*, mkvparser::CuePoint::TrackPosition const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues8GetBlockEPKNS_8CuePointEPKNS1_13TrackPositionE(void) {
    ALOGD("_ZNK9mkvparser4Cues8GetBlockEPKNS_8CuePointEPKNS1_13TrackPositionE() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::SimpleTag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTagC2Ev(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTagC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::SimpleBlock::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SimpleBlock5ParseEv(void) {
    ALOGD("_ZN9mkvparser11SimpleBlock5ParseEv() called");
    return 0;
}

/* Demangled: mkvparser::Block::Frame::Read(mkvparser::IMkvReader*, unsigned char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block5Frame4ReadEPNS_10IMkvReaderEPh(void) {
    ALOGD("_ZNK9mkvparser5Block5Frame4ReadEPNS_10IMkvReaderEPh() called");
    return 0;
}

/* Exported Object: vtable for mkvparser::SimpleBlock */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser11SimpleBlockE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CTA5_CLEARTOKEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType22ACTION_CTA5_CLEARTOKENE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags5ParseEv(void) {
    ALOGD("_ZN9mkvparser4Tags5ParseEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetTime(mkvparser::Chapters const*, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4Atom7GetTimeEPKS0_x(void) {
    ALOGD("_ZN9mkvparser8Chapters4Atom7GetTimeEPKS0_x() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::getContentLength(android::DecryptHandle*, android::DrmManagerClient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil16getContentLengthEPNS_13DecryptHandleEPNS_16DrmManagerClientE(void) {
    ALOGD("_ZN7android10DrmMtkUtil16getContentLengthEPNS_13DecryptHandleEPNS_16DrmManagerClientE() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_CTA5_GETTOKEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType20ACTION_CTA5_GETTOKENE = NULL;

/* Demangled: android::Cta5File::Cta5File(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android8Cta5FileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android14Cta5NormalFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Segment::PreloadCluster(mkvparser::Cluster*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment14PreloadClusterEPNS_7ClusterEl(void) {
    ALOGD("_ZN9mkvparser7Segment14PreloadClusterEPNS_7ClusterEl() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_CONTENTURI */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef16TOKEN_CONTENTURIE = NULL;

/* Exported Object: android::DrmDef::CTA5_MULTI_MEDIA_ENCRYPT_DONE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef29CTA5_MULTI_MEDIA_ENCRYPT_DONEE = NULL;

/* Exported Object: android::DrmRequestType::KEY_DATA_2_EXTRA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType16KEY_DATA_2_EXTRAE = NULL;

/* Demangled: mkvparser::SeekHead::GetEntry(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8SeekHead8GetEntryEi(void) {
    ALOGD("_ZNK9mkvparser8SeekHead8GetEntryEi() called");
    return 0;
}

/* Exported Object: android::DrmDef::HEADER_TOKEN_DESCRIPTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef24HEADER_TOKEN_DESCRIPTIONE = NULL;

/* Demangled: mkvparser::Chapters::Atom::ShallowCopy(mkvparser::Chapters::Atom&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom11ShallowCopyERS1_(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom11ShallowCopyERS1_() called");
    return 0;
}

/* Demangled: mkvparser::BlockEntry::GetCluster() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockEntry10GetClusterEv(void) {
    ALOGD("_ZNK9mkvparser10BlockEntry10GetClusterEv() called");
    return 0;
}

/* Demangled: android::CryptoHelper::getCipher(android::CryptoHelper::CIPHER) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper9getCipherENS0_6CIPHERE(void) {
    ALOGD("_ZN7android12CryptoHelper9getCipherENS0_6CIPHERE() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_IS_DRM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey15META_KEY_IS_DRME = NULL;

/* Demangled: android::Cta5File::setClearHeaderLen(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File17setClearHeaderLenEm(void) {
    ALOGD("_ZN7android8Cta5File17setClearHeaderLenEm() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android12Cta5FLACFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetNameAsUTF8() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track13GetNameAsUTF8Ev(void) {
    ALOGD("_ZNK9mkvparser5Track13GetNameAsUTF8Ev() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_DATA_1_EXTRA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType16KEY_DATA_1_EXTRAE = NULL;

/* Demangled: android::PartialEncryptHeader::getCipherHeaderOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader21getCipherHeaderOffsetEv(void) {
    ALOGD("_ZN7android20PartialEncryptHeader21getCipherHeaderOffsetEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getContentKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader13getContentKeyEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader13getContentKeyEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetFirst(mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track8GetFirstERPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser5Track8GetFirstERPKNS_10BlockEntryE() called");
    return 0;
}

/* Demangled: android::DrmDef::getConstraintStr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef16getConstraintStrEi(void) {
    ALOGD("_ZN7android6DrmDef16getConstraintStrEi() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_OFFSET */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey15META_KEY_OFFSETE = NULL;

/* Demangled: mkvparser::Chapters::~Chapters() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8ChaptersD2Ev(void) {
    ALOGD("_ZN9mkvparser8ChaptersD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::ParseSimpleTag(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3Tag14ParseSimpleTagEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser4Tags3Tag14ParseSimpleTagEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::GetTracksCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser6Tracks14GetTracksCountEv(void) {
    ALOGD("_ZNK9mkvparser6Tracks14GetTracksCountEv() called");
    return 0;
}

/* Demangled: android::DrmDef::getPermissionIndex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef18getPermissionIndexEi(void) {
    ALOGD("_ZN7android6DrmDef18getPermissionIndexEi() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_ICON_URI */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey17META_KEY_ICON_URIE = NULL;

/* Exported Object: android::DrmDef::CONSTRAINT_DATETIME_START_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef29CONSTRAINT_DATETIME_START_STRE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_SHOW_DRM_DIALOG_IF_NEED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType30ACTION_SHOW_DRM_DIALOG_IF_NEEDE = NULL;

/* Demangled: android::Cta5FileHeader::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader4dumpEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader4dumpEv() called");
    return 0;
}

/* Demangled: android::Cta5File::isCta5NormalFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File16isCta5NormalFileEi(void) {
    ALOGD("_ZN7android8Cta5File16isCta5NormalFileEi() called");
    return 0;
}

/* Demangled: android::Cta5ASFFile::Cta5ASFFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5ASFFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5ASFFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::GetVoidElement(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8SeekHead14GetVoidElementEi(void) {
    ALOGD("_ZNK9mkvparser8SeekHead14GetVoidElementEi() called");
    return 0;
}

/* Demangled: mkvparser::Segment::ParseNext(mkvparser::Cluster const*, mkvparser::Cluster const*&, long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment9ParseNextEPKNS_7ClusterERS3_RxRl(void) {
    ALOGD("_ZN9mkvparser7Segment9ParseNextEPKNS_7ClusterERS3_RxRl() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::GetSimpleTag(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags3Tag12GetSimpleTagEi(void) {
    ALOGD("_ZNK9mkvparser4Tags3Tag12GetSimpleTagEi() called");
    return 0;
}

/* Demangled: mkvparser::Track::ParseContentEncodingsEntry(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track26ParseContentEncodingsEntryExx(void) {
    ALOGD("_ZN9mkvparser5Track26ParseContentEncodingsEntryExx() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::Seek(long long, mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack4SeekExRPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack4SeekExRPKNS_10BlockEntryE() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_KEY_ERROR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef14CTA5_KEY_ERRORE = NULL;

/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5FLVFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::decrypt(int, android::Vector<android::DrmCtaUtil::Listener> const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5CommonMultimediaFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android24Cta5CommonMultimediaFileE = NULL;

/* Demangled: mkvparser::UnserializeFloat(mkvparser::IMkvReader*, long long, long long, double&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser16UnserializeFloatEPNS_10IMkvReaderExxRd(void) {
    ALOGD("_ZN9mkvparser16UnserializeFloatEPNS_10IMkvReaderExxRd() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::HasBlockEntries(mkvparser::Segment const*, long long, long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster15HasBlockEntriesEPKNS_7SegmentExRxRl(void) {
    ALOGD("_ZN9mkvparser7Cluster15HasBlockEntriesEPKNS_7SegmentExRxRl() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetBlock(mkvparser::CuePoint const&, mkvparser::CuePoint::TrackPosition const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment8GetBlockERKNS_8CuePointERKNS1_13TrackPositionE(void) {
    ALOGD("_ZN9mkvparser7Segment8GetBlockERKNS_8CuePointERKNS1_13TrackPositionE() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_ERROR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef10CTA5_ERRORE = NULL;

/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long, android::String8, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeaderC1ENS_7String8EmS1_b(void) {
    ALOGD("_ZN7android14Cta5FileHeaderC1ENS_7String8EmS1_b() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::GetString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Display9GetStringEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Display9GetStringEv() called");
    return 0;
}

/* Demangled: android::CryptoHelper::calc_cipher_length(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper18calc_cipher_lengthEi(void) {
    ALOGD("_ZN7android12CryptoHelper18calc_cipher_lengthEi() called");
    return 0;
}

/* Exported Object: android::DrmDef::MIME_RIGHTS_WBXML */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef17MIME_RIGHTS_WBXMLE = NULL;

/* Demangled: android::Cta5FileFactory::createCta5File(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15Cta5FileFactory14createCta5FileEiNS_7String8E(void) {
    ALOGD("_ZN7android15Cta5FileFactory14createCta5FileEiNS_7String8E() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5MPEGFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12Cta5MPEGFileE = NULL;

/* Exported Object: vtable for mkvparser::VideoTrack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser10VideoTrackE = NULL;

/* Demangled: android::CryptoHelper::cipherKeyLen(android::CryptoHelper::CIPHER) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper12cipherKeyLenENS0_6CIPHERE(void) {
    ALOGD("_ZN7android12CryptoHelper12cipherKeyLenENS0_6CIPHERE() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_CONTENT_URI */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey20META_KEY_CONTENT_URIE = NULL;

/* Demangled: android::KeyInfo::restoreKeyInfo(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo14restoreKeyInfoENS_7String8E(void) {
    ALOGD("_ZN7android7KeyInfo14restoreKeyInfoENS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaMultiMediaUtil::MakeFourCCString(unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DrmCtaMultiMediaUtil16MakeFourCCStringEjPc(void) {
    ALOGD("_ZN7android20DrmCtaMultiMediaUtil16MakeFourCCStringEjPc() called");
    return 0;
}

/* Exported Object: vtable for mkvparser::Track::EOSBlock */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser5Track8EOSBlockE = NULL;

/* Demangled: android::Cta5File::getOriginalMimeType() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File19getOriginalMimeTypeEv(void) {
    ALOGD("_ZN7android8Cta5File19getOriginalMimeTypeEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::CONSTRAINT_DATETIME_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef23CONSTRAINT_DATETIME_STRE = NULL;

/* Demangled: android::StrUtil::toLower(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil7toLowerEPc(void) {
    ALOGD("_ZN7android7StrUtil7toLowerEPc() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::Cta5NormalFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android14Cta5NormalFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::CuePoint(long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8CuePointC2Elx(void) {
    ALOGD("_ZN9mkvparser8CuePointC2Elx() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::Parse(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTag5ParseEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTag5ParseEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: mkvparser::AudioTrack::AudioTrack(mkvparser::Segment*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10AudioTrackC1EPNS_7SegmentExx(void) {
    ALOGD("_ZN9mkvparser10AudioTrackC1EPNS_7SegmentExx() called");
    return 0;
}

/* Demangled: android::KeyInfo::deriveKeyInfo(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo13deriveKeyInfoENS_7String8E(void) {
    ALOGD("_ZN7android7KeyInfo13deriveKeyInfoENS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::calculateFileSig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader16calculateFileSigEi(void) {
    ALOGD("_ZN7android14Cta5FileHeader16calculateFileSigEi() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tags(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4TagsC2EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser4TagsC2EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::~SegmentInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SegmentInfoD2Ev(void) {
    ALOGD("_ZN9mkvparser11SegmentInfoD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetTimeCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster11GetTimeCodeEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster11GetTimeCodeEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::CreateBlockGroup(long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster16CreateBlockGroupExxx(void) {
    ALOGD("_ZN9mkvparser7Cluster16CreateBlockGroupExxx() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::Tracks(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6TracksC1EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser6TracksC1EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::wvcrc32n(unsigned char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil8wvcrc32nEPKhi(void) {
    ALOGD("_ZN7android12Cta5FileUtil8wvcrc32nEPKhi() called");
    return 0;
}

/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android16Cta5MatroskaFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetStringUID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom12GetStringUIDEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom12GetStringUIDEv() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::GetSimpleTagCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags3Tag17GetSimpleTagCountEv(void) {
    ALOGD("_ZNK9mkvparser4Tags3Tag17GetSimpleTagCountEv() called");
    return 0;
}

/* Demangled: android::DrmDef::getPermissionStr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef16getPermissionStrEi(void) {
    ALOGD("_ZN7android6DrmDef16getPermissionStrEi() called");
    return 0;
}

/* Demangled: android::KeyInfo::getContentKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfo13getContentKeyEv(void) {
    ALOGD("_ZN7android7KeyInfo13getContentKeyEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getContentPos() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader13getContentPosEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader13getContentPosEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::DoParseNext(mkvparser::Cluster const*&, long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment11DoParseNextERPKNS_7ClusterERxRl(void) {
    ALOGD("_ZN9mkvparser7Segment11DoParseNextERPKNS_7ClusterERxRl() called");
    return 0;
}

/* Demangled: mkvparser::Track::Track(mkvparser::Segment*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5TrackC2EPNS_7SegmentExx(void) {
    ALOGD("_ZN9mkvparser5TrackC2EPNS_7SegmentExx() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC2EPKcm(void) {
    ALOGD("_ZN7android10ByteBufferC2EPKcm() called");
    return 0;
}

/* Demangled: testUintVarFunction() */
extern "C" __attribute__((visibility("default"))) int _Z19testUintVarFunctionv(void) {
    ALOGD("_Z19testUintVarFunctionv() called");
    return 0;
}

/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5AVIFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::ParseDisplay(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4Atom12ParseDisplayEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser8Chapters4Atom12ParseDisplayEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Exported Object: android::DrmDef::MIME_DRM_MESSAGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef16MIME_DRM_MESSAGEE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_CHECK_SECURE_TIME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType24ACTION_CHECK_SECURE_TIMEE = NULL;

/* Demangled: mkvparser::VideoTrack::GetDisplayHeight() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack16GetDisplayHeightEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack16GetDisplayHeightEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::Info() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track4InfoC1Ev(void) {
    ALOGD("_ZN9mkvparser5Track4InfoC1Ev() called");
    return 0;
}

/* Demangled: android::CipherFileUtil::CipherFileRead(char*, void*, int, int, int, int, android::CryptoHelper&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14CipherFileUtil14CipherFileReadEPcPviiiiRNS_12CryptoHelperE(void) {
    ALOGD("_ZN7android14CipherFileUtil14CipherFileReadEPcPviiiiRNS_12CryptoHelperE() called");
    return 0;
}

/* Demangled: android::StrUtil::toHexStr(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil8toHexStrEPci(void) {
    ALOGD("_ZN7android7StrUtil8toHexStrEPci() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::isTrustCtaClient(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil16isTrustCtaClientEi(void) {
    ALOGD("_ZN7android10DrmCtaUtil16isTrustCtaClientEi() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getMimeType() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader11getMimeTypeEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader11getMimeTypeEv() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentEncryption::~ContentEncryption() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding17ContentEncryptionD1Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding17ContentEncryptionD1Ev() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentEncoding() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncodingC1Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncodingC1Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::IMEI_FILE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef9IMEI_FILEE = NULL;

/* Exported Object: android::DrmMetaKey::META_KEY_METHOD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey15META_KEY_METHODE = NULL;

/* Exported Object: android::DrmRequestType::KEY_CTA5_CLEAR_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType17KEY_CTA5_CLEAR_FDE = NULL;

/* Exported Object: android::DrmRequestType::KEY_CTA5_NEWKEY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType15KEY_CTA5_NEWKEYE = NULL;

/* Demangled: android::Cta5FileUtil::getUintVarFromNormal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil20getUintVarFromNormalEj(void) {
    ALOGD("_ZN7android12Cta5FileUtil20getUintVarFromNormalEj() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getCipherHeaderOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader21getCipherHeaderOffsetEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader21getCipherHeaderOffsetEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::setClearHeaderOffset(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader20setClearHeaderOffsetEm(void) {
    ALOGD("_ZN7android14Cta5FileHeader20setClearHeaderOffsetEm() called");
    return 0;
}

/* Demangled: android::Cta5File::~Cta5File() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5FileD2Ev(void) {
    ALOGD("_ZN7android8Cta5FileD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Tags::GetTag(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Tags6GetTagEi(void) {
    ALOGD("_ZNK9mkvparser4Tags6GetTagEi() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetLastTime() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster11GetLastTimeEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster11GetLastTimeEv() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::IsCtaTrustedCheckTokenClient(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil28IsCtaTrustedCheckTokenClientERNS_7String8E(void) {
    ALOGD("_ZN7android10DrmCtaUtil28IsCtaTrustedCheckTokenClientERNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5File::isCta5File(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File10isCta5FileEi(void) {
    ALOGD("_ZN7android8Cta5File10isCta5FileEi() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentEncryption::ContentEncryption() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding17ContentEncryptionC2Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding17ContentEncryptionC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetNext(mkvparser::BlockEntry const*, mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster7GetNextEPKNS_10BlockEntryERS3_(void) {
    ALOGD("_ZNK9mkvparser7Cluster7GetNextEPKNS_10BlockEntryERS3_() called");
    return 0;
}

/* Demangled: mkvparser::MasteringMetadata::Parse(mkvparser::IMkvReader*, long long, long long, mkvparser::MasteringMetadata**) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser17MasteringMetadata5ParseEPNS_10IMkvReaderExxPPS0_(void) {
    ALOGD("_ZN9mkvparser17MasteringMetadata5ParseEPNS_10IMkvReaderExxPPS0_() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(android::ByteBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC1ERKS0_(void) {
    ALOGD("_ZN7android10ByteBufferC1ERKS0_() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_CONSTRAINT_DATETIME_START */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef30PATH_CONSTRAINT_DATETIME_STARTE = NULL;

/* Demangled: android::Cta5FileUtil::aes128cbcEncrypt(unsigned char const*, unsigned char*, unsigned long, unsigned char const*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil16aes128cbcEncryptEPKhPhmS2_S3_(void) {
    ALOGD("_ZN7android12Cta5FileUtil16aes128cbcEncryptEPKhPhmS2_S3_() called");
    return 0;
}

/* Demangled: mkvparser::Cues::Cues(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4CuesC2EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser4CuesC2EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetEOS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track6GetEOSEv(void) {
    ALOGD("_ZNK9mkvparser5Track6GetEOSEv() called");
    return 0;
}

/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5FLVFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::CopyStr(char* mkvparser::Track::Info::*, mkvparser::Track::Info&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track4Info7CopyStrEMS1_PcRS1_(void) {
    ALOGD("_ZNK9mkvparser5Track4Info7CopyStrEMS1_PcRS1_() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::~Cluster() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7ClusterD2Ev(void) {
    ALOGD("_ZN9mkvparser7ClusterD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::GetCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8SeekHead8GetCountEv(void) {
    ALOGD("_ZNK9mkvparser8SeekHead8GetCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Chapters(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8ChaptersC2EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser8ChaptersC2EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: android::DrmCtaMultiMediaUtil::isCompatibleBrand(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DrmCtaMultiMediaUtil17isCompatibleBrandEj(void) {
    ALOGD("_ZN7android20DrmCtaMultiMediaUtil17isCompatibleBrandEj() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::recoverCipherData(int, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile17recoverCipherDataEillll(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile17recoverCipherDataEillll() called");
    return 0;
}

/* Demangled: mkvparser::Segment::ParseCues(long long, long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment9ParseCuesExRxRl(void) {
    ALOGD("_ZN9mkvparser7Segment9ParseCuesExRxRl() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetStartTime(mkvparser::Chapters const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom12GetStartTimeEPKS0_(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom12GetStartTimeEPKS0_() called");
    return 0;
}

/* Demangled: mkvparser::Track::EOSBlock::EOSBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track8EOSBlockC1Ev(void) {
    ALOGD("_ZN9mkvparser5Track8EOSBlockC1Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::CONSTRAINT_DATETIME_END_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef27CONSTRAINT_DATETIME_END_STRE = NULL;

/* Demangled: mkvparser::Track::GetNumber() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track9GetNumberEv(void) {
    ALOGD("_ZNK9mkvparser5Track9GetNumberEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::GetEdition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters10GetEditionEi(void) {
    ALOGD("_ZNK9mkvparser8Chapters10GetEditionEi() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetDisplayCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom15GetDisplayCountEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom15GetDisplayCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetEntry(long, mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster8GetEntryElRPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser7Cluster8GetEntryElRPKNS_10BlockEntryE() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetDiscardPadding() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block17GetDiscardPaddingEv(void) {
    ALOGD("_ZNK9mkvparser5Block17GetDiscardPaddingEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::Atom() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters4AtomC1Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters4AtomC1Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::PERMISSION_EXECUTE_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef22PERMISSION_EXECUTE_STRE = NULL;

/* Exported Object: android::DrmDef::HEADER_TOKEN_ENCODING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef21HEADER_TOKEN_ENCODINGE = NULL;

/* Demangled: android::DrmMtkUtil::isDrmConsumeInAppClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil23isDrmConsumeInAppClientERKNS_7String8E(void) {
    ALOGD("_ZN7android10DrmMtkUtil23isDrmConsumeInAppClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileUtil::md5Digest(unsigned char const*, unsigned long, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil9md5DigestEPKhmPh(void) {
    ALOGD("_ZN7android12Cta5FileUtil9md5DigestEPKhmPh() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::getCtaMultimediaHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile22getCtaMultimediaHeaderEv(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile22getCtaMultimediaHeaderEv() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::recoverClearData(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile16recoverClearDataEil(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile16recoverClearDataEil() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::~Tag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3TagD2Ev(void) {
    ALOGD("_ZN9mkvparser4Tags3TagD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetDisplayUnit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack14GetDisplayUnitEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack14GetDisplayUnitEv() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::toCommonMime(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil12toCommonMimeEPKc(void) {
    ALOGD("_ZN7android10DrmMtkUtil12toCommonMimeEPKc() called");
    return 0;
}

/* Demangled: mkvparser::Segment::ParseHeaders() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment12ParseHeadersEv(void) {
    ALOGD("_ZN9mkvparser7Segment12ParseHeadersEv() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::calculateHeaderSig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader18calculateHeaderSigEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader18calculateHeaderSigEv() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::Load(mkvparser::IMkvReader*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8CuePoint4LoadEPNS_10IMkvReaderE(void) {
    ALOGD("_ZN9mkvparser8CuePoint4LoadEPNS_10IMkvReaderE() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::Cluster(mkvparser::Segment*, long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7ClusterC2EPNS_7SegmentElx(void) {
    ALOGD("_ZN9mkvparser7ClusterC2EPNS_7SegmentElx() called");
    return 0;
}

/* Demangled: android::ByteBuffer::~ByteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferD2Ev(void) {
    ALOGD("_ZN7android10ByteBufferD2Ev() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::isTrustCtaClient(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil16isTrustCtaClientERNS_7String8E(void) {
    ALOGD("_ZN7android10DrmCtaUtil16isTrustCtaClientERNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::GetCompressionByIndex(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser15ContentEncoding21GetCompressionByIndexEm(void) {
    ALOGD("_ZNK9mkvparser15ContentEncoding21GetCompressionByIndexEm() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::GetTrackByIndex(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser6Tracks15GetTrackByIndexEm(void) {
    ALOGD("_ZNK9mkvparser6Tracks15GetTrackByIndexEm() called");
    return 0;
}

/* Exported Object: android::DrmDef::MTK_FL_HEADER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef13MTK_FL_HEADERE = NULL;

/* Exported Object: android::DrmDef::MTK_CD_HEADER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef13MTK_CD_HEADERE = NULL;

/* Demangled: mkvparser::CuePoint::Find(mkvparser::Track const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8CuePoint4FindEPKNS_5TrackE(void) {
    ALOGD("_ZNK9mkvparser8CuePoint4FindEPKNS_5TrackE() called");
    return 0;
}

/* Demangled: mkvparser::Segment::FindCluster(long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment11FindClusterEx(void) {
    ALOGD("_ZNK9mkvparser7Segment11FindClusterEx() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetTime() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster7GetTimeEv(void) {
    ALOGD("_ZNK9mkvparser7Cluster7GetTimeEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::~Display() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7DisplayD2Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7DisplayD2Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::PLUGIN_DESCRIPTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef18PLUGIN_DESCRIPTIONE = NULL;

/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5AVIFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFile12parseHeadersEi(void) {
    ALOGD("_ZN7android12Cta5FLACFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::Tracks::~Tracks() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser6TracksD2Ev(void) {
    ALOGD("_ZN9mkvparser6TracksD2Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_MULTI_MEDIA_DECRYPT_DONE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef29CTA5_MULTI_MEDIA_DECRYPT_DONEE = NULL;

/* Demangled: android::Cta5FileHeader::changeKey(android::String8, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader9changeKeyENS_7String8ES1_(void) {
    ALOGD("_ZN7android14Cta5FileHeader9changeKeyENS_7String8ES1_() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::Cta5CommonMultimediaFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::UnserializeUInt(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15UnserializeUIntEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser15UnserializeUIntEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Exported Object: android::DrmDef::EXT_DRM_MESSAGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef15EXT_DRM_MESSAGEE = NULL;

/* Demangled: mkvparser::Segment::Segment(mkvparser::IMkvReader*, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7SegmentC1EPNS_10IMkvReaderExxx(void) {
    ALOGD("_ZN9mkvparser7SegmentC1EPNS_10IMkvReaderExxx() called");
    return 0;
}

/* Exported Object: vtable for android::DrmInfoEvent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12DrmInfoEventE = NULL;

/* Exported Object: android::DrmRequestType::KEY_CTA5_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType11KEY_CTA5_FDE = NULL;

/* Demangled: mkvparser::Tracks::ParseTrackEntry(long long, long long, long long, long long, mkvparser::Track*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser6Tracks15ParseTrackEntryExxxxRPNS_5TrackE(void) {
    ALOGD("_ZNK9mkvparser6Tracks15ParseTrackEntryExxxxRPNS_5TrackE() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::~VideoTrack() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10VideoTrackD1Ev(void) {
    ALOGD("_ZN9mkvparser10VideoTrackD1Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_ICON_URI */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef14TOKEN_ICON_URIE = NULL;

/* Demangled: android::Cta5File::setClearHeaderOffset(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File20setClearHeaderOffsetEm(void) {
    ALOGD("_ZN7android8Cta5File20setClearHeaderOffsetEm() called");
    return 0;
}

/* Exported Object: android::DrmDef::IMEI_DIR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef8IMEI_DIRE = NULL;

/* Demangled: android::DrmUtil::getMAC(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil6getMACERNS_7String8E(void) {
    ALOGD("_ZN7android7DrmUtil6getMACERNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::GetTimeCodeScale() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SegmentInfo16GetTimeCodeScaleEv(void) {
    ALOGD("_ZNK9mkvparser11SegmentInfo16GetTimeCodeScaleEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetChapters() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment11GetChaptersEv(void) {
    ALOGD("_ZNK9mkvparser7Segment11GetChaptersEv() called");
    return 0;
}

/* Exported Object: vtable for mkvparser::BlockGroup */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser10BlockGroupE = NULL;

/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFileC1EiNS_7String8E(void) {
    ALOGD("_ZN7android12Cta5MPEGFileC1EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetLanguage() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track11GetLanguageEv(void) {
    ALOGD("_ZNK9mkvparser5Track11GetLanguageEv() called");
    return 0;
}

/* Demangled: mkvparser::Block::IsKey() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block5IsKeyEv(void) {
    ALOGD("_ZNK9mkvparser5Block5IsKeyEv() called");
    return 0;
}

/* Demangled: mkvparser::SimpleBlock::SimpleBlock(mkvparser::Cluster*, long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser11SimpleBlockC2EPNS_7ClusterElxx(void) {
    ALOGD("_ZN9mkvparser11SimpleBlockC2EPNS_7ClusterElxx() called");
    return 0;
}

/* Demangled: mkvparser::Block::IsInvisible() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block11IsInvisibleEv(void) {
    ALOGD("_ZNK9mkvparser5Block11IsInvisibleEv() called");
    return 0;
}

/* Demangled: android::DrmUtil::getPathFromFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil13getPathFromFdEi(void) {
    ALOGD("_ZN7android7DrmUtil13getPathFromFdEi() called");
    return 0;
}

/* Demangled: android::KeyInfo::KeyInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7KeyInfoC2Ev(void) {
    ALOGD("_ZN7android7KeyInfoC2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Atom::GetUID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters4Atom6GetUIDEv(void) {
    ALOGD("_ZNK9mkvparser8Chapters4Atom6GetUIDEv() called");
    return 0;
}

/* Demangled: android::StrUtil::validateDatetime(tm const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7StrUtil16validateDatetimeERK2tm(void) {
    ALOGD("_ZN7android7StrUtil16validateDatetimeERK2tm() called");
    return 0;
}

/* Demangled: android::Cta5File::getKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File6getKeyEv(void) {
    ALOGD("_ZN7android8Cta5File6getKeyEv() called");
    return 0;
}

/* Demangled: android::Cta5File::getContentKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File13getContentKeyEv(void) {
    ALOGD("_ZN7android8Cta5File13getContentKeyEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetContentEncodingByIndex(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track25GetContentEncodingByIndexEm(void) {
    ALOGD("_ZNK9mkvparser5Track25GetContentEncodingByIndexEm() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetFrameRate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack12GetFrameRateEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack12GetFrameRateEv() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::ParseBlockGroup(long long, long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster15ParseBlockGroupExRxRl(void) {
    ALOGD("_ZN9mkvparser7Cluster15ParseBlockGroupExRxRl() called");
    return 0;
}

/* Demangled: mkvparser::Track::Track(mkvparser::Segment*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5TrackC1EPNS_7SegmentExx(void) {
    ALOGD("_ZN9mkvparser5TrackC1EPNS_7SegmentExx() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::isTrustedClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil15isTrustedClientERKNS_7String8E(void) {
    ALOGD("_ZN7android10DrmMtkUtil15isTrustedClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::GetUIntLength(mkvparser::IMkvReader*, long long, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser13GetUIntLengthEPNS_10IMkvReaderExRl(void) {
    ALOGD("_ZN9mkvparser13GetUIntLengthEPNS_10IMkvReaderExRl() called");
    return 0;
}

/* Demangled: mkvparser::EBMLHeader::~EBMLHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10EBMLHeaderD2Ev(void) {
    ALOGD("_ZN9mkvparser10EBMLHeaderD2Ev() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_CONSTRAINT_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef21PATH_CONSTRAINT_COUNTE = NULL;

/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5WAVFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::Entry::Entry() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHead5EntryC1Ev(void) {
    ALOGD("_ZN9mkvparser8SeekHead5EntryC1Ev() called");
    return 0;
}

/* Demangled: android::DrmDef::getMetaDataStr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef14getMetaDataStrEi(void) {
    ALOGD("_ZN7android6DrmDef14getMetaDataStrEi() called");
    return 0;
}

/* Exported Object: android::DrmDef::CTA5_DONE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef9CTA5_DONEE = NULL;

/* Demangled: android::Cta5MatroskaFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFile12parseHeadersEi(void) {
    ALOGD("_ZN7android16Cta5MatroskaFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::ParseEntry(mkvparser::IMkvReader*, long long, long long, mkvparser::SeekHead::Entry*) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHead10ParseEntryEPNS_10IMkvReaderExxPNS0_5EntryE(void) {
    ALOGD("_ZN9mkvparser8SeekHead10ParseEntryEPNS_10IMkvReaderExxPNS0_5EntryE() called");
    return 0;
}

/* Exported Object: android::CipherFileUtil::sDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14CipherFileUtil6sDebugE = NULL;

/* Demangled: android::PartialEncryptHeader::getCipherHeaderLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader18getCipherHeaderLenEv(void) {
    ALOGD("_ZN7android20PartialEncryptHeader18getCipherHeaderLenEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::DrmCtaMultiMediaUtil::isExistedInMultiMediaList(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DrmCtaMultiMediaUtil25isExistedInMultiMediaListERKNS_7String8E(void) {
    ALOGD("_ZN7android20DrmCtaMultiMediaUtil25isExistedInMultiMediaListERKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Segment::DoLoadCluster(long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment13DoLoadClusterERxRl(void) {
    ALOGD("_ZN9mkvparser7Segment13DoLoadClusterERxRl() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::ContentCompression::~ContentCompression() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncoding18ContentCompressionD2Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncoding18ContentCompressionD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Projection::Parse(mkvparser::IMkvReader*, long long, long long, mkvparser::Projection**) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10Projection5ParseEPNS_10IMkvReaderExxPPS0_(void) {
    ALOGD("_ZN9mkvparser10Projection5ParseEPNS_10IMkvReaderExxPPS0_() called");
    return 0;
}

/* Demangled: android::DrmInfoEvent::DrmInfoEvent(int, int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmInfoEventC1EiiRKNS_7String8E(void) {
    ALOGD("_ZN7android12DrmInfoEventC1EiiRKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHead5ParseEv(void) {
    ALOGD("_ZN9mkvparser8SeekHead5ParseEv() called");
    return 0;
}

/* Demangled: mkvparser::SeekHead::~SeekHead() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHeadD2Ev(void) {
    ALOGD("_ZN9mkvparser8SeekHeadD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::AudioTrack::GetBitDepth() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10AudioTrack11GetBitDepthEv(void) {
    ALOGD("_ZNK9mkvparser10AudioTrack11GetBitDepthEv() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::notify(android::Vector<android::DrmCtaUtil::Listener> const*, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil6notifyEPKNS_6VectorINS0_8ListenerEEENS_7String8E(void) {
    ALOGD("_ZN7android10DrmCtaUtil6notifyEPKNS_6VectorINS0_8ListenerEEENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetNext(mkvparser::BlockEntry const*, mkvparser::BlockEntry const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track7GetNextEPKNS_10BlockEntryERS3_(void) {
    ALOGD("_ZNK9mkvparser5Track7GetNextEPKNS_10BlockEntryERS3_() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetLacing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block9GetLacingEv(void) {
    ALOGD("_ZNK9mkvparser5Block9GetLacingEv() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetFrame(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block8GetFrameEi(void) {
    ALOGD("_ZNK9mkvparser5Block8GetFrameEi() called");
    return 0;
}

/* Demangled: android::CryptoHelper::getIvLen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper8getIvLenEv(void) {
    ALOGD("_ZN7android12CryptoHelper8getIvLenEv() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::GetTimeCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8CuePoint11GetTimeCodeEv(void) {
    ALOGD("_ZNK9mkvparser8CuePoint11GetTimeCodeEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetSeekHead() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment11GetSeekHeadEv(void) {
    ALOGD("_ZNK9mkvparser7Segment11GetSeekHeadEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::getCipherHeader(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile15getCipherHeaderEl(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile15getCipherHeaderEl() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::ExpandEditionsArray() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters19ExpandEditionsArrayEv(void) {
    ALOGD("_ZN9mkvparser8Chapters19ExpandEditionsArrayEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::~Edition() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7EditionD2Ev(void) {
    ALOGD("_ZN9mkvparser8Chapters7EditionD2Ev() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetTrackNumber() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block14GetTrackNumberEv(void) {
    ALOGD("_ZNK9mkvparser5Block14GetTrackNumberEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::PATH_CONSTRAINT_INTERVAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef24PATH_CONSTRAINT_INTERVALE = NULL;

/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Cta5MatroskaFileC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android16Cta5MatroskaFileC1ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Edition5ClearEv(void) {
    ALOGD("_ZN9mkvparser8Chapters7Edition5ClearEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetDefaultDuration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track18GetDefaultDurationEv(void) {
    ALOGD("_ZNK9mkvparser5Track18GetDefaultDurationEv() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::VetEntry(mkvparser::BlockEntry const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack8VetEntryEPKNS_10BlockEntryE(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack8VetEntryEPKNS_10BlockEntryE() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::BlockGroup(mkvparser::Cluster*, long, long long, long long, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockGroupC1EPNS_7ClusterElxxxxxx(void) {
    ALOGD("_ZN9mkvparser10BlockGroupC1EPNS_7ClusterElxxxxxx() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_RIGHTS_ISSUER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey22META_KEY_RIGHTS_ISSUERE = NULL;

/* Demangled: android::Cta5FileUtil::wvrunningcrc32(unsigned char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil14wvrunningcrc32EPKhij(void) {
    ALOGD("_ZN7android12Cta5FileUtil14wvrunningcrc32EPKhij() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::Cta5FileHeader(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeaderC2EiNS_7String8E(void) {
    ALOGD("_ZN7android14Cta5FileHeaderC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeaderC1ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android14Cta5FileHeaderC1ENS_7String8EmS1_() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5ASFFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11Cta5ASFFileE = NULL;

/* Demangled: android::Cta5File::getContentPos() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File13getContentPosEv(void) {
    ALOGD("_ZN7android8Cta5File13getContentPosEv() called");
    return 0;
}

/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FLACFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android12Cta5FLACFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Edition::Parse(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Edition5ParseEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser8Chapters7Edition5ParseEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetColour() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack9GetColourEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack9GetColourEv() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC2EPc(void) {
    ALOGD("_ZN7android10ByteBufferC2EPc() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_CTA5_FILEPATH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType17KEY_CTA5_FILEPATHE = NULL;

/* Demangled: mkvparser::Cues::LoadCuePoint() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues12LoadCuePointEv(void) {
    ALOGD("_ZNK9mkvparser4Cues12LoadCuePointEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::DoneParsing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment11DoneParsingEv(void) {
    ALOGD("_ZNK9mkvparser7Segment11DoneParsingEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::Cta5CommonMultimediaFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Block::Block(long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5BlockC2Exxx(void) {
    ALOGD("_ZN9mkvparser5BlockC2Exxx() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::Cluster(mkvparser::Segment*, long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7ClusterC1EPNS_7SegmentElx(void) {
    ALOGD("_ZN9mkvparser7ClusterC1EPNS_7SegmentElx() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::decrypt(int, android::Vector<android::DrmCtaUtil::Listener> const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void) {
    ALOGD("_ZN7android14Cta5NormalFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE() called");
    return 0;
}

/* Exported Object: android::DrmMetaKey::META_KEY_CONTENT_NAME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10DrmMetaKey21META_KEY_CONTENT_NAMEE = NULL;

/* Exported Object: android::DrmDef::MTK_FLDCF_CID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef13MTK_FLDCF_CIDE = NULL;

/* Exported Object: android::DrmUtil::sVDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7DrmUtil7sVDebugE = NULL;

/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5AVIFileC1ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5AVIFileC1ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Block::GetFrameCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Block13GetFrameCountEv(void) {
    ALOGD("_ZNK9mkvparser5Block13GetFrameCountEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::~Track() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5TrackD1Ev(void) {
    ALOGD("_ZN9mkvparser5TrackD1Ev() called");
    return 0;
}

/* Demangled: android::DrmMtkUtil::getContentSize(android::DecryptHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmMtkUtil14getContentSizeEPNS_13DecryptHandleE(void) {
    ALOGD("_ZN7android10DrmMtkUtil14getContentSizeEPNS_13DecryptHandleE() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::CreateSimpleBlock(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Cluster17CreateSimpleBlockExx(void) {
    ALOGD("_ZN9mkvparser7Cluster17CreateSimpleBlockExx() called");
    return 0;
}

/* Demangled: android::ByteBuffer::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBuffer7cleanUpEv(void) {
    ALOGD("_ZN7android10ByteBuffer7cleanUpEv() called");
    return 0;
}

/* Demangled: mkvparser::Segment::GetTracks() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Segment9GetTracksEv(void) {
    ALOGD("_ZNK9mkvparser7Segment9GetTracksEv() called");
    return 0;
}

/* Demangled: mkvparser::Block::Block(long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5BlockC1Exxx(void) {
    ALOGD("_ZN9mkvparser5BlockC1Exxx() called");
    return 0;
}

/* Demangled: android::DrmUtil::hash(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil4hashEPci(void) {
    ALOGD("_ZN7android7DrmUtil4hashEPci() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::getOriginalMimetype(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile19getOriginalMimetypeEiRKNS_7String8E(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile19getOriginalMimetypeEiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Cta5CommonMultimediaFile::verifyCtaMultimediaHeader(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile25verifyCtaMultimediaHeaderEi(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile25verifyCtaMultimediaHeaderEi() called");
    return 0;
}

/* Demangled: mkvparser::Segment::LoadCluster(long long&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser7Segment11LoadClusterERxRl(void) {
    ALOGD("_ZN9mkvparser7Segment11LoadClusterERxRl() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track7GetTypeEv(void) {
    ALOGD("_ZNK9mkvparser5Track7GetTypeEv() called");
    return 0;
}

/* Demangled: android::Cta5File::isKeyValid(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File10isKeyValidENS_7String8E(void) {
    ALOGD("_ZN7android8Cta5File10isKeyValidENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Tags::SimpleTag::~SimpleTag() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags9SimpleTagD2Ev(void) {
    ALOGD("_ZN9mkvparser4Tags9SimpleTagD2Ev() called");
    return 0;
}

/* Demangled: android::DrmDef::getPermissionPath(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6DrmDef17getPermissionPathEi(void) {
    ALOGD("_ZN7android6DrmDef17getPermissionPathEi() called");
    return 0;
}

/* Demangled: android::Cta5FileHeader::getClearHeaderOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5FileHeader20getClearHeaderOffsetEv(void) {
    ALOGD("_ZN7android14Cta5FileHeader20getClearHeaderOffsetEv() called");
    return 0;
}

/* Demangled: android::DrmCtaUtil::getNormalFromUintVar(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtil20getNormalFromUintVarENS_7String8E(void) {
    ALOGD("_ZN7android10DrmCtaUtil20getNormalFromUintVarENS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::BlockGroup::GetBlock() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10BlockGroup8GetBlockEv(void) {
    ALOGD("_ZNK9mkvparser10BlockGroup8GetBlockEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::PERMISSION_DISPLAY_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef22PERMISSION_DISPLAY_STRE = NULL;

/* Demangled: mkvparser::SeekHead::SeekHead(mkvparser::Segment*, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8SeekHeadC2EPNS_7SegmentExxxx(void) {
    ALOGD("_ZN9mkvparser8SeekHeadC2EPNS_7SegmentExxxx() called");
    return 0;
}

/* Demangled: mkvparser::CuePoint::~CuePoint() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8CuePointD1Ev(void) {
    ALOGD("_ZN9mkvparser8CuePointD1Ev() called");
    return 0;
}

/* Exported Object: android::DrmCtaMultiMediaUtil::MULTI_MEDIA_LIST_CNT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20DrmCtaMultiMediaUtil20MULTI_MEDIA_LIST_CNTE = NULL;

/* Demangled: android::Cta5CommonMultimediaFile::getTotalHeaderSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24Cta5CommonMultimediaFile18getTotalHeaderSizeEv(void) {
    ALOGD("_ZN7android24Cta5CommonMultimediaFile18getTotalHeaderSizeEv() called");
    return 0;
}

/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5APEFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5APEFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::GetCodecId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track10GetCodecIdEv(void) {
    ALOGD("_ZNK9mkvparser5Track10GetCodecIdEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::TOKEN_CONTENT_NAME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef18TOKEN_CONTENT_NAMEE = NULL;

/* Exported Object: android::DrmRequestType::ACTION_INSTALL_DRM_MSG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType22ACTION_INSTALL_DRM_MSGE = NULL;

/* Demangled: android::Cta5FileUtil::getNormalFromUintVar(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5FileUtil20getNormalFromUintVarENS_7String8E(void) {
    ALOGD("_ZN7android12Cta5FileUtil20getNormalFromUintVarENS_7String8E() called");
    return 0;
}

/* Demangled: android::PartialEncryptHeader::setCipherHeaderLen(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20PartialEncryptHeader18setCipherHeaderLenEm(void) {
    ALOGD("_ZN7android20PartialEncryptHeader18setCipherHeaderLenEm() called");
    return 0;
}

/* Demangled: android::Cta5MPEGFile::parseHeaders(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12Cta5MPEGFile12parseHeadersEi(void) {
    ALOGD("_ZN7android12Cta5MPEGFile12parseHeadersEi() called");
    return 0;
}

/* Demangled: mkvparser::Track::EOSBlock::GetBlock() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser5Track8EOSBlock8GetBlockEv(void) {
    ALOGD("_ZNK9mkvparser5Track8EOSBlock8GetBlockEv() called");
    return 0;
}

/* Demangled: android::Cta5NormalFile::encrypt(int, int, android::Vector<android::DrmCtaUtil::Listener> const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Cta5NormalFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void) {
    ALOGD("_ZN7android14Cta5NormalFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE() called");
    return 0;
}

/* Demangled: mkvparser::Cluster::GetEntry(mkvparser::Track const*, long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser7Cluster8GetEntryEPKNS_5TrackEx(void) {
    ALOGD("_ZNK9mkvparser7Cluster8GetEntryEPKNS_5TrackEx() called");
    return 0;
}

/* Demangled: android::CipherFileUtil::CipherFileRead(int, void*, int, int, int, int, android::CryptoHelper&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14CipherFileUtil14CipherFileReadEiPviiiiRNS_12CryptoHelperE(void) {
    ALOGD("_ZN7android14CipherFileUtil14CipherFileReadEiPviiiiRNS_12CryptoHelperE() called");
    return 0;
}

/* Demangled: android::Cta5FLVFile::Cta5FLVFile(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFileC2EiNS_7String8E(void) {
    ALOGD("_ZN7android11Cta5FLVFileC2EiNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Block::SetKey(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Block6SetKeyEb(void) {
    ALOGD("_ZN9mkvparser5Block6SetKeyEb() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::KEY_CTA5_KEY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType12KEY_CTA5_KEYE = NULL;

/* Demangled: android::DrmCtaUtil::DrmCtaUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DrmCtaUtilC1Ev(void) {
    ALOGD("_ZN7android10DrmCtaUtilC1Ev() called");
    return 0;
}

/* Exported Object: mkvparser::MasteringMetadata::kValueNotPresent */
extern "C" __attribute__((visibility("default"))) void* _ZN9mkvparser17MasteringMetadata16kValueNotPresentE = NULL;

/* Demangled: mkvparser::Cues::~Cues() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4CuesD1Ev(void) {
    ALOGD("_ZN9mkvparser4CuesD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: mkvparser::BlockEntry::~BlockEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser10BlockEntryD0Ev(void) {
    ALOGD("_ZN9mkvparser10BlockEntryD0Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::operator=(android::ByteBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferaSERKS0_(void) {
    ALOGD("_ZN7android10ByteBufferaSERKS0_() called");
    return 0;
}

/* Demangled: android::DrmUtil::saveId(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil6saveIdERKNS_7String8E(void) {
    ALOGD("_ZN7android7DrmUtil6saveIdERKNS_7String8E() called");
    return 0;
}

/* Demangled: mkvparser::Cues::GetFirst() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser4Cues8GetFirstEv(void) {
    ALOGD("_ZNK9mkvparser4Cues8GetFirstEv() called");
    return 0;
}

/* Demangled: mkvparser::VideoTrack::GetHeight() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10VideoTrack9GetHeightEv(void) {
    ALOGD("_ZNK9mkvparser10VideoTrack9GetHeightEv() called");
    return 0;
}

/* Exported Object: vtable for mkvparser::Track */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9mkvparser5TrackE = NULL;

/* Exported Object: android::DrmDef::CONSTRAINT_NONE_STR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef19CONSTRAINT_NONE_STRE = NULL;

/* Demangled: android::Cta5File::getFd() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File5getFdEv(void) {
    ALOGD("_ZN7android8Cta5File5getFdEv() called");
    return 0;
}

/* Demangled: mkvparser::Chapters::Display::Parse(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser8Chapters7Display5ParseEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser8Chapters7Display5ParseEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: mkvparser::PrimaryChromaticity::Parse(mkvparser::IMkvReader*, long long, long long, bool, mkvparser::PrimaryChromaticity**) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser19PrimaryChromaticity5ParseEPNS_10IMkvReaderExxbPPS0_(void) {
    ALOGD("_ZN9mkvparser19PrimaryChromaticity5ParseEPNS_10IMkvReaderExxbPPS0_() called");
    return 0;
}

/* Demangled: android::DrmUtil::base64_decrypt_buffer(unsigned char*, unsigned char*, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil21base64_decrypt_bufferEPhS1_iRi(void) {
    ALOGD("_ZN7android7DrmUtil21base64_decrypt_bufferEPhS1_iRi() called");
    return 0;
}

/* Demangled: android::DrmUtil::getTZOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmUtil11getTZOffsetEv(void) {
    ALOGD("_ZN7android7DrmUtil11getTZOffsetEv() called");
    return 0;
}

/* Demangled: android::DrmInfoEvent::getType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12DrmInfoEvent7getTypeEv(void) {
    ALOGD("_ZNK7android12DrmInfoEvent7getTypeEv() called");
    return 0;
}

/* Demangled: mkvparser::AudioTrack::GetSamplingRate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser10AudioTrack15GetSamplingRateEv(void) {
    ALOGD("_ZNK9mkvparser10AudioTrack15GetSamplingRateEv() called");
    return 0;
}

/* Exported Object: android::DrmDef::ST_FILE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6DrmDef7ST_FILEE = NULL;

/* Exported Object: android::DrmRequestType::KEY_CTA5_RAW_MIME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType17KEY_CTA5_RAW_MIMEE = NULL;

/* Demangled: android::Cta5File::getClearHeaderOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Cta5File20getClearHeaderOffsetEv(void) {
    ALOGD("_ZN7android8Cta5File20getClearHeaderOffsetEv() called");
    return 0;
}

/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5FLVFileC2ENS_7String8EmS1_(void) {
    ALOGD("_ZN7android11Cta5FLVFileC2ENS_7String8EmS1_() called");
    return 0;
}

/* Demangled: mkvparser::Tags::Tag::Parse(mkvparser::IMkvReader*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser4Tags3Tag5ParseEPNS_10IMkvReaderExx(void) {
    ALOGD("_ZN9mkvparser4Tags3Tag5ParseEPNS_10IMkvReaderExx() called");
    return 0;
}

/* Demangled: android::CryptoHelper::getBlkSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12CryptoHelper10getBlkSizeEv(void) {
    ALOGD("_ZN7android12CryptoHelper10getBlkSizeEv() called");
    return 0;
}

/* Exported Object: vtable for android::Cta5FLACFile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12Cta5FLACFileE = NULL;

/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, android::String8, android::String8, unsigned long, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11Cta5WAVFileC2ENS_7String8ES1_S1_mS1_(void) {
    ALOGD("_ZN7android11Cta5WAVFileC2ENS_7String8ES1_S1_mS1_() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::~Info() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track4InfoD1Ev(void) {
    ALOGD("_ZN9mkvparser5Track4InfoD1Ev() called");
    return 0;
}

/* Exported Object: android::DrmRequestType::ACTION_INSTALL_DRM_TO_DEVICE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmRequestType28ACTION_INSTALL_DRM_TO_DEVICEE = NULL;

/* Demangled: mkvparser::Chapters::Edition::ShallowCopy(mkvparser::Chapters::Edition&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser8Chapters7Edition11ShallowCopyERS1_(void) {
    ALOGD("_ZNK9mkvparser8Chapters7Edition11ShallowCopyERS1_() called");
    return 0;
}

/* Demangled: mkvparser::ContentEncoding::~ContentEncoding() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser15ContentEncodingD1Ev(void) {
    ALOGD("_ZN9mkvparser15ContentEncodingD1Ev() called");
    return 0;
}

/* Demangled: android::ByteBuffer::ByteBuffer(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ByteBufferC2EPcm(void) {
    ALOGD("_ZN7android10ByteBufferC2EPcm() called");
    return 0;
}

/* Demangled: flv_get_keyregion(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17flv_get_keyregioniPiS_(void) {
    ALOGD("_Z17flv_get_keyregioniPiS_() called");
    return 0;
}

/* Demangled: mkvparser::SegmentInfo::GetDuration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9mkvparser11SegmentInfo11GetDurationEv(void) {
    ALOGD("_ZNK9mkvparser11SegmentInfo11GetDurationEv() called");
    return 0;
}

/* Demangled: mkvparser::Track::Info::Info() */
extern "C" __attribute__((visibility("default"))) int _ZN9mkvparser5Track4InfoC2Ev(void) {
    ALOGD("_ZN9mkvparser5Track4InfoC2Ev() called");
    return 0;
}
