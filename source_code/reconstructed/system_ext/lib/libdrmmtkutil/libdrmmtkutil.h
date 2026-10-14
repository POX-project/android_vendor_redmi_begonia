/*
 * Reverse-Engineered ABI Specification for: libdrmmtkutil.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdrmmtkutil.so
 */

#ifndef BEGONIA_RE_LIBDRMMTKUTIL_H
#define BEGONIA_RE_LIBDRMMTKUTIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK9mkvparser5Block17GetDiscardPaddingEv */
/* Demangled: mkvparser::Block::GetDiscardPadding() const */
int _ZNK9mkvparser5Block17GetDiscardPaddingEv(void);

/* Symbol: _ZN7android6DrmDef16MIME_DRM_MESSAGEE */
/* Demangled: android::DrmDef::MIME_DRM_MESSAGE */
extern void* _ZN7android6DrmDef16MIME_DRM_MESSAGEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom15GetDisplayCountEv */
/* Demangled: mkvparser::Chapters::Atom::GetDisplayCount() const */
int _ZNK9mkvparser8Chapters4Atom15GetDisplayCountEv(void);

/* Symbol: _ZN7android10ByteBufferC1EPcj */
/* Demangled: android::ByteBuffer::ByteBuffer(char*, unsigned int) */
int _ZN7android10ByteBufferC1EPcj(void);

/* Symbol: _ZN7android14Cta5NormalFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE */
/* Demangled: android::Cta5NormalFile::decrypt(int, android::Vector<android::DrmCtaUtil::Listener> const*) */
int _ZN7android14Cta5NormalFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void);

/* Symbol: _ZN9mkvparser7ClusterC1Ev */
/* Demangled: mkvparser::Cluster::Cluster() */
int _ZN9mkvparser7ClusterC1Ev(void);

/* Symbol: _ZNK9mkvparser7Cluster4LoadERxRl */
/* Demangled: mkvparser::Cluster::Load(long long&, long&) const */
int _ZNK9mkvparser7Cluster4LoadERxRl(void);

/* Symbol: _ZN7android6DrmDef10PATH_PRINTE */
/* Demangled: android::DrmDef::PATH_PRINT */
extern void* _ZN7android6DrmDef10PATH_PRINTE;

/* Symbol: _ZN7android6DrmDef25HEADER_TOKEN_CONTENT_TYPEE */
/* Demangled: android::DrmDef::HEADER_TOKEN_CONTENT_TYPE */
extern void* _ZN7android6DrmDef25HEADER_TOKEN_CONTENT_TYPEE;

/* Symbol: _ZN7android6DrmDef7ST_FILEE */
/* Demangled: android::DrmDef::ST_FILE */
extern void* _ZN7android6DrmDef7ST_FILEE;

/* Symbol: _ZN7android8Cta5File9changeKeyENS_7String8ES1_ */
/* Demangled: android::Cta5File::changeKey(android::String8, android::String8) */
int _ZN7android8Cta5File9changeKeyENS_7String8ES1_(void);

/* Symbol: _ZN9mkvparser15ContentEncoding21ParseCompressionEntryExxPNS_10IMkvReaderEPNS0_18ContentCompressionE */
/* Demangled: mkvparser::ContentEncoding::ParseCompressionEntry(long long, long long, mkvparser::IMkvReader*, mkvparser::ContentEncoding::ContentCompression*) */
int _ZN9mkvparser15ContentEncoding21ParseCompressionEntryExxPNS_10IMkvReaderEPNS0_18ContentCompressionE(void);

/* Symbol: _ZNK9mkvparser5Block9GetLacingEv */
/* Demangled: mkvparser::Block::GetLacing() const */
int _ZNK9mkvparser5Block9GetLacingEv(void);

/* Symbol: _ZNK9mkvparser5Track11GetLanguageEv */
/* Demangled: mkvparser::Track::GetLanguage() const */
int _ZNK9mkvparser5Track11GetLanguageEv(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom12GetStartTimeEPKS0_ */
/* Demangled: mkvparser::Chapters::Atom::GetStartTime(mkvparser::Chapters const*) const */
int _ZNK9mkvparser8Chapters4Atom12GetStartTimeEPKS0_(void);

/* Symbol: _ZN7android6DrmDef19PERMISSION_PLAY_STRE */
/* Demangled: android::DrmDef::PERMISSION_PLAY_STR */
extern void* _ZN7android6DrmDef19PERMISSION_PLAY_STRE;

/* Symbol: _ZN7android8Cta5File20getClearHeaderOffsetEv */
/* Demangled: android::Cta5File::getClearHeaderOffset() */
int _ZN7android8Cta5File20getClearHeaderOffsetEv(void);

/* Symbol: _ZN7android14Cta5NormalFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android14Cta5NormalFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser4Tags9SimpleTag5ParseEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Tags::SimpleTag::Parse(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser4Tags9SimpleTag5ParseEPNS_10IMkvReaderExx(void);

/* Symbol: _ZNK9mkvparser5Track6GetEOSEv */
/* Demangled: mkvparser::Track::GetEOS() const */
int _ZNK9mkvparser5Track6GetEOSEv(void);

/* Symbol: _ZN7android7DrmUtil13getPathFromFdEi */
/* Demangled: android::DrmUtil::getPathFromFd(int) */
int _ZN7android7DrmUtil13getPathFromFdEi(void);

/* Symbol: _ZN7android15Cta5FileFactory14createCta5FileEiNS_7String8E */
/* Demangled: android::Cta5FileFactory::createCta5File(int, android::String8) */
int _ZN7android15Cta5FileFactory14createCta5FileEiNS_7String8E(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil16MakeFourCCStringEjPc */
/* Demangled: android::DrmCtaMultiMediaUtil::MakeFourCCString(unsigned int, char*) */
int _ZN7android20DrmCtaMultiMediaUtil16MakeFourCCStringEjPc(void);

/* Symbol: _ZN7android14DrmRequestType24ACTION_CHECK_SECURE_TIMEE */
/* Demangled: android::DrmRequestType::ACTION_CHECK_SECURE_TIME */
extern void* _ZN7android14DrmRequestType24ACTION_CHECK_SECURE_TIMEE;

/* Symbol: _ZN9mkvparser4Tags8ParseTagExx */
/* Demangled: mkvparser::Tags::ParseTag(long long, long long) */
int _ZN9mkvparser4Tags8ParseTagExx(void);

/* Symbol: _ZN9mkvparser7Segment9ParseCuesExRxRl */
/* Demangled: mkvparser::Segment::ParseCues(long long, long long&, long&) */
int _ZN9mkvparser7Segment9ParseCuesExRxRl(void);

/* Symbol: _ZNK9mkvparser8SeekHead19GetVoidElementCountEv */
/* Demangled: mkvparser::SeekHead::GetVoidElementCount() const */
int _ZNK9mkvparser8SeekHead19GetVoidElementCountEv(void);

/* Symbol: _ZN7android14DrmRequestType15KEY_CTA5_OLDKEYE */
/* Demangled: android::DrmRequestType::KEY_CTA5_OLDKEY */
extern void* _ZN7android14DrmRequestType15KEY_CTA5_OLDKEYE;

/* Symbol: _ZN7android12Cta5FileUtil10CRC32TableE */
/* Demangled: android::Cta5FileUtil::CRC32Table */
extern void* _ZN7android12Cta5FileUtil10CRC32TableE;

/* Symbol: _ZN7android8Cta5FileD0Ev */
/* Demangled: android::Cta5File::~Cta5File() */
int _ZN7android8Cta5FileD0Ev(void);

/* Symbol: _ZN9mkvparser10GetVersionERiS0_S0_S0_ */
/* Demangled: mkvparser::GetVersion(int&, int&, int&, int&) */
int _ZN9mkvparser10GetVersionERiS0_S0_S0_(void);

/* Symbol: _ZN9mkvparser15ContentEncodingC2Ev */
/* Demangled: mkvparser::ContentEncoding::ContentEncoding() */
int _ZN9mkvparser15ContentEncodingC2Ev(void);

/* Symbol: _ZN7android8Cta5File21getCipherHeaderOffsetEv */
/* Demangled: android::Cta5File::getCipherHeaderOffset() */
int _ZN7android8Cta5File21getCipherHeaderOffsetEv(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile20overwriteClearHeaderEixxxx */
/* Demangled: android::Cta5CommonMultimediaFile::overwriteClearHeader(int, long long, long long, long long, long long) */
int _ZN7android24Cta5CommonMultimediaFile20overwriteClearHeaderEixxxx(void);

/* Symbol: _ZN9mkvparser8Chapters7EditionC2Ev */
/* Demangled: mkvparser::Chapters::Edition::Edition() */
int _ZN9mkvparser8Chapters7EditionC2Ev(void);

/* Symbol: _ZNK9mkvparser5Block5IsKeyEv */
/* Demangled: mkvparser::Block::IsKey() const */
int _ZNK9mkvparser5Block5IsKeyEv(void);

/* Symbol: _ZNK9mkvparser6Tracks15GetTrackByIndexEm */
/* Demangled: mkvparser::Tracks::GetTrackByIndex(unsigned long) const */
int _ZNK9mkvparser6Tracks15GetTrackByIndexEm(void);

/* Symbol: _ZN7android6DrmDef12PATH_VERSIONE */
/* Demangled: android::DrmDef::PATH_VERSION */
extern void* _ZN7android6DrmDef12PATH_VERSIONE;

/* Symbol: _ZN7android7StrUtil13getContentUriENS_7String8E */
/* Demangled: android::StrUtil::getContentUri(android::String8) */
int _ZN7android7StrUtil13getContentUriENS_7String8E(void);

/* Symbol: _ZN7android14DrmRequestType22ACTION_CTA5_CHECKTOKENE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_CHECKTOKEN */
extern void* _ZN7android14DrmRequestType22ACTION_CTA5_CHECKTOKENE;

/* Symbol: _ZN9mkvparser4Tags3TagC1Ev */
/* Demangled: mkvparser::Tags::Tag::Tag() */
int _ZN9mkvparser4Tags3TagC1Ev(void);

/* Symbol: _ZN9mkvparser8Chapters4AtomC1Ev */
/* Demangled: mkvparser::Chapters::Atom::Atom() */
int _ZN9mkvparser8Chapters4AtomC1Ev(void);

/* Symbol: _ZNK9mkvparser4Tags9SimpleTag11ShallowCopyERS1_ */
/* Demangled: mkvparser::Tags::SimpleTag::ShallowCopy(mkvparser::Tags::SimpleTag&) const */
int _ZNK9mkvparser4Tags9SimpleTag11ShallowCopyERS1_(void);

/* Symbol: _ZN7android14CipherFileUtil14CipherFileReadEiPviiiiRNS_12CryptoHelperE */
/* Demangled: android::CipherFileUtil::CipherFileRead(int, void*, int, int, int, int, android::CryptoHelper&) */
int _ZN7android14CipherFileUtil14CipherFileReadEiPviiiiRNS_12CryptoHelperE(void);

/* Symbol: _ZN7android7DrmUtil6readIdEv */
/* Demangled: android::DrmUtil::readId() */
int _ZN7android7DrmUtil6readIdEv(void);

/* Symbol: _ZN9mkvparser10BlockGroupC2EPNS_7ClusterElxxxxxx */
/* Demangled: mkvparser::BlockGroup::BlockGroup(mkvparser::Cluster*, long, long long, long long, long long, long long, long long, long long) */
int _ZN9mkvparser10BlockGroupC2EPNS_7ClusterElxxxxxx(void);

/* Symbol: _ZN9mkvparser5BlockD2Ev */
/* Demangled: mkvparser::Block::~Block() */
int _ZN9mkvparser5BlockD2Ev(void);

/* Symbol: _ZNK9mkvparser10BlockGroup7GetKindEv */
/* Demangled: mkvparser::BlockGroup::GetKind() const */
int _ZNK9mkvparser10BlockGroup7GetKindEv(void);

/* Symbol: _ZN7android7StrUtil17intervalStrToTickEPcRl */
/* Demangled: android::StrUtil::intervalStrToTick(char*, long&) */
int _ZN7android7StrUtil17intervalStrToTickEPcRl(void);

/* Symbol: _ZN7android14DrmRequestType21ACTION_CTA5_ISCTAFILEE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_ISCTAFILE */
extern void* _ZN7android14DrmRequestType21ACTION_CTA5_ISCTAFILEE;

/* Symbol: _ZN9mkvparser8Chapters12ParseEditionExx */
/* Demangled: mkvparser::Chapters::ParseEdition(long long, long long) */
int _ZN9mkvparser8Chapters12ParseEditionExx(void);

/* Symbol: _ZN7android6DrmDef10CTA5_ERRORE */
/* Demangled: android::DrmDef::CTA5_ERROR */
extern void* _ZN7android6DrmDef10CTA5_ERRORE;

/* Symbol: _ZN7android6DrmDef13PATH_KEYVALUEE */
/* Demangled: android::DrmDef::PATH_KEYVALUE */
extern void* _ZN7android6DrmDef13PATH_KEYVALUEE;

/* Symbol: _ZN7android7StrUtil8toHexStrENS_7String8E */
/* Demangled: android::StrUtil::toHexStr(android::String8) */
int _ZN7android7StrUtil8toHexStrENS_7String8E(void);

/* Symbol: _ZN7android12Cta5FileUtil10hosttonetlEj */
/* Demangled: android::Cta5FileUtil::hosttonetl(unsigned int) */
int _ZN7android12Cta5FileUtil10hosttonetlEj(void);

/* Symbol: _ZN9mkvparser8CuePointC2Elx */
/* Demangled: mkvparser::CuePoint::CuePoint(long, long long) */
int _ZN9mkvparser8CuePointC2Elx(void);

/* Symbol: _ZNK9mkvparser10VideoTrack12GetFrameRateEv */
/* Demangled: mkvparser::VideoTrack::GetFrameRate() const */
int _ZNK9mkvparser10VideoTrack12GetFrameRateEv(void);

/* Symbol: _ZNK9mkvparser11SegmentInfo16GetTimeCodeScaleEv */
/* Demangled: mkvparser::SegmentInfo::GetTimeCodeScale() const */
int _ZNK9mkvparser11SegmentInfo16GetTimeCodeScaleEv(void);

/* Symbol: _ZN7android6DrmDef16TOKEN_CONTENT_IDE */
/* Demangled: android::DrmDef::TOKEN_CONTENT_ID */
extern void* _ZN7android6DrmDef16TOKEN_CONTENT_IDE;

/* Symbol: _ZN9mkvparser4Tags3Tag14ParseSimpleTagEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Tags::Tag::ParseSimpleTag(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser4Tags3Tag14ParseSimpleTagEPNS_10IMkvReaderExx(void);

/* Symbol: _ZN9mkvparser5Track4InfoD1Ev */
/* Demangled: mkvparser::Track::Info::~Info() */
int _ZN9mkvparser5Track4InfoD1Ev(void);

/* Symbol: _ZN7android6DrmDef15ENCODING_BASE64E */
/* Demangled: android::DrmDef::ENCODING_BASE64 */
extern void* _ZN7android6DrmDef15ENCODING_BASE64E;

/* Symbol: _ZN7android14Cta5FileHeader5_initENS_7String8EyS1_b */
/* Demangled: android::Cta5FileHeader::_init(android::String8, unsigned long long, android::String8, bool) */
int _ZN7android14Cta5FileHeader5_initENS_7String8EyS1_b(void);

/* Symbol: _ZN7android8Cta5File10isCta5FileEi */
/* Demangled: android::Cta5File::isCta5File(int) */
int _ZN7android8Cta5File10isCta5FileEi(void);

/* Symbol: _ZN9mkvparser10BlockEntryC2EPNS_7ClusterEl */
/* Demangled: mkvparser::BlockEntry::BlockEntry(mkvparser::Cluster*, long) */
int _ZN9mkvparser10BlockEntryC2EPNS_7ClusterEl(void);

/* Symbol: _ZNK9mkvparser10AudioTrack11GetChannelsEv */
/* Demangled: mkvparser::AudioTrack::GetChannels() const */
int _ZNK9mkvparser10AudioTrack11GetChannelsEv(void);

/* Symbol: _ZNK9mkvparser5Track15GetCodecPrivateERj */
/* Demangled: mkvparser::Track::GetCodecPrivate(unsigned int&) const */
int _ZNK9mkvparser5Track15GetCodecPrivateERj(void);

/* Symbol: _ZN7android6DrmDef15getMetaTokenStrEi */
/* Demangled: android::DrmDef::getMetaTokenStr(int) */
int _ZN7android6DrmDef15getMetaTokenStrEi(void);

/* Symbol: _ZN7android12Cta5FileUtil16aes128cbcEncryptEPKhPhjS2_S3_ */
/* Demangled: android::Cta5FileUtil::aes128cbcEncrypt(unsigned char const*, unsigned char*, unsigned int, unsigned char const*, unsigned char*) */
int _ZN7android12Cta5FileUtil16aes128cbcEncryptEPKhPhjS2_S3_(void);

/* Symbol: _ZN7android10DrmMtkUtil20isTrustedVideoClientERKNS_7String8E */
/* Demangled: android::DrmMtkUtil::isTrustedVideoClient(android::String8 const&) */
int _ZN7android10DrmMtkUtil20isTrustedVideoClientERKNS_7String8E(void);

/* Symbol: _ZN7android14Cta5FileHeader13getContentPosEv */
/* Demangled: android::Cta5FileHeader::getContentPos() */
int _ZN7android14Cta5FileHeader13getContentPosEv(void);

/* Symbol: _ZN7android10DrmMetaKey15META_KEY_METHODE */
/* Demangled: android::DrmMetaKey::META_KEY_METHOD */
extern void* _ZN7android10DrmMetaKey15META_KEY_METHODE;

/* Symbol: _ZN9mkvparser4Tags15ExpandTagsArrayEv */
/* Demangled: mkvparser::Tags::ExpandTagsArray() */
int _ZN9mkvparser4Tags15ExpandTagsArrayEv(void);

/* Symbol: _ZTVN9mkvparser10BlockGroupE */
/* Demangled: vtable for mkvparser::BlockGroup */
extern void* _ZTVN9mkvparser10BlockGroupE;

/* Symbol: _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE10do_destroyEPvj */
/* Demangled: android::Vector<android::Cta5CommonMultimediaFile::Header*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE10do_destroyEPvj(void);

/* Symbol: _ZN7android11Cta5AVIFileC1EiNS_7String8E */
/* Demangled: android::Cta5AVIFile::Cta5AVIFile(int, android::String8) */
int _ZN7android11Cta5AVIFileC1EiNS_7String8E(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5CommonMultimediaFile::Cta5CommonMultimediaFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android24Cta5CommonMultimediaFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZNK9mkvparser5Track18GetDefaultDurationEv */
/* Demangled: mkvparser::Track::GetDefaultDuration() const */
int _ZNK9mkvparser5Track18GetDefaultDurationEv(void);

/* Symbol: _ZNK9mkvparser5Track23GetContentEncodingCountEv */
/* Demangled: mkvparser::Track::GetContentEncodingCount() const */
int _ZNK9mkvparser5Track23GetContentEncodingCountEv(void);

/* Symbol: _ZN7android14Cta5FileHeaderC2ENS_7String8EyS1_b */
/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long long, android::String8, bool) */
int _ZN7android14Cta5FileHeaderC2ENS_7String8EyS1_b(void);

/* Symbol: _ZN7android7KeyInfoC2ERKS0_ */
/* Demangled: android::KeyInfo::KeyInfo(android::KeyInfo const&) */
int _ZN7android7KeyInfoC2ERKS0_(void);

/* Symbol: _ZN7android14Cta5NormalFileC1EiNS_7String8E */
/* Demangled: android::Cta5NormalFile::Cta5NormalFile(int, android::String8) */
int _ZN7android14Cta5NormalFileC1EiNS_7String8E(void);

/* Symbol: _ZN7android12Cta5MPEGFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5MPEGFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil6readAtEixPvj */
/* Demangled: android::DrmCtaMultiMediaUtil::readAt(int, long long, void*, unsigned int) */
int _ZN7android20DrmCtaMultiMediaUtil6readAtEixPvj(void);

/* Symbol: _ZN7android11Cta5FLVFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5FLVFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser4TagsC2EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Tags::Tags(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser4TagsC2EPNS_7SegmentExxxx(void);

/* Symbol: _ZN9mkvparser8Chapters4Atom4InitEv */
/* Demangled: mkvparser::Chapters::Atom::Init() */
int _ZN9mkvparser8Chapters4Atom4InitEv(void);

/* Symbol: _ZN7android14DrmRequestType26ACTION_CTA5_CHANGEPASSWORDE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_CHANGEPASSWORD */
extern void* _ZN7android14DrmRequestType26ACTION_CTA5_CHANGEPASSWORDE;

/* Symbol: _ZN7android11Cta5FLVFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5FLVFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZNK9mkvparser10VideoTrack13GetProjectionEv */
/* Demangled: mkvparser::VideoTrack::GetProjection() const */
int _ZNK9mkvparser10VideoTrack13GetProjectionEv(void);

/* Symbol: _ZN7android6DrmDef14TOKEN_ICON_URIE */
/* Demangled: android::DrmDef::TOKEN_ICON_URI */
extern void* _ZN7android6DrmDef14TOKEN_ICON_URIE;

/* Symbol: _ZN7android6DrmDef16EXT_RIGHTS_WBXMLE */
/* Demangled: android::DrmDef::EXT_RIGHTS_WBXML */
extern void* _ZN7android6DrmDef16EXT_RIGHTS_WBXMLE;

/* Symbol: _ZN7android10DrmCtaUtilC2Ev */
/* Demangled: android::DrmCtaUtil::DrmCtaUtil() */
int _ZN7android10DrmCtaUtilC2Ev(void);

/* Symbol: _ZN7android12Cta5MPEGFileC1EiNS_7String8E */
/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(int, android::String8) */
int _ZN7android12Cta5MPEGFileC1EiNS_7String8E(void);

/* Symbol: _ZN7android12Cta5FileUtil7wvcrc32EPKhi */
/* Demangled: android::Cta5FileUtil::wvcrc32(unsigned char const*, int) */
int _ZN7android12Cta5FileUtil7wvcrc32EPKhi(void);

/* Symbol: _ZN9mkvparser8CuePointC1Elx */
/* Demangled: mkvparser::CuePoint::CuePoint(long, long long) */
int _ZN9mkvparser8CuePointC1Elx(void);

/* Symbol: _ZN7android10DrmMetaKey20META_KEY_CONTENT_URIE */
/* Demangled: android::DrmMetaKey::META_KEY_CONTENT_URI */
extern void* _ZN7android10DrmMetaKey20META_KEY_CONTENT_URIE;

/* Symbol: _ZN7android14DrmRequestType20ACTION_UPDATE_OFFSETE */
/* Demangled: android::DrmRequestType::ACTION_UPDATE_OFFSET */
extern void* _ZN7android14DrmRequestType20ACTION_UPDATE_OFFSETE;

/* Symbol: _ZN7android8Cta5File20setClearHeaderOffsetEy */
/* Demangled: android::Cta5File::setClearHeaderOffset(unsigned long long) */
int _ZN7android8Cta5File20setClearHeaderOffsetEy(void);

/* Symbol: _ZN9mkvparser5Track4InfoC1Ev */
/* Demangled: mkvparser::Track::Info::Info() */
int _ZN9mkvparser5Track4InfoC1Ev(void);

/* Symbol: _ZN7android12CryptoHelper8getIvLenEv */
/* Demangled: android::CryptoHelper::getIvLen() */
int _ZN7android12CryptoHelper8getIvLenEv(void);

/* Symbol: _ZN7android6DrmDef15MIME_RIGHTS_XMLE */
/* Demangled: android::DrmDef::MIME_RIGHTS_XML */
extern void* _ZN7android6DrmDef15MIME_RIGHTS_XMLE;

/* Symbol: _ZN7android20PartialEncryptHeader20getClearHeaderOffsetEv */
/* Demangled: android::PartialEncryptHeader::getClearHeaderOffset() */
int _ZN7android20PartialEncryptHeader20getClearHeaderOffsetEv(void);

/* Symbol: _ZN9mkvparser8SeekHead10ParseEntryEPNS_10IMkvReaderExxPNS0_5EntryE */
/* Demangled: mkvparser::SeekHead::ParseEntry(mkvparser::IMkvReader*, long long, long long, mkvparser::SeekHead::Entry*) */
int _ZN9mkvparser8SeekHead10ParseEntryEPNS_10IMkvReaderExxPNS0_5EntryE(void);

/* Symbol: _ZN7android7StrUtil7toLowerEPc */
/* Demangled: android::StrUtil::toLower(char*) */
int _ZN7android7StrUtil7toLowerEPc(void);

/* Symbol: _ZN9mkvparser11SimpleBlockC1EPNS_7ClusterElxx */
/* Demangled: mkvparser::SimpleBlock::SimpleBlock(mkvparser::Cluster*, long, long long, long long) */
int _ZN9mkvparser11SimpleBlockC1EPNS_7ClusterElxx(void);

/* Symbol: _ZNK9mkvparser15ContentEncoding19GetCompressionCountEv */
/* Demangled: mkvparser::ContentEncoding::GetCompressionCount() const */
int _ZNK9mkvparser15ContentEncoding19GetCompressionCountEv(void);

/* Symbol: _ZN7android6DrmDef12PATH_EXECUTEE */
/* Demangled: android::DrmDef::PATH_EXECUTE */
extern void* _ZN7android6DrmDef12PATH_EXECUTEE;

/* Symbol: _ZN7android6DrmDef18getPermissionIndexEi */
/* Demangled: android::DrmDef::getPermissionIndex(int) */
int _ZN7android6DrmDef18getPermissionIndexEi(void);

/* Symbol: _ZTVN7android12DrmInfoEventE */
/* Demangled: vtable for android::DrmInfoEvent */
extern void* _ZTVN7android12DrmInfoEventE;

/* Symbol: _ZN9mkvparser17MasteringMetadata16kValueNotPresentE */
/* Demangled: mkvparser::MasteringMetadata::kValueNotPresent */
extern void* _ZN9mkvparser17MasteringMetadata16kValueNotPresentE;

/* Symbol: _ZN7android7DrmUtil7sDDebugE */
/* Demangled: android::DrmUtil::sDDebug */
extern void* _ZN7android7DrmUtil7sDDebugE;

/* Symbol: _ZN7android14DrmRequestType18KEY_FILEDESCRIPTORE */
/* Demangled: android::DrmRequestType::KEY_FILEDESCRIPTOR */
extern void* _ZN7android14DrmRequestType18KEY_FILEDESCRIPTORE;

/* Symbol: _ZNK7android6VectorIxE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<long long>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android12CryptoHelper11cipherIvLenENS0_6CIPHERE */
/* Demangled: android::CryptoHelper::cipherIvLen(android::CryptoHelper::CIPHER) */
int _ZN7android12CryptoHelper11cipherIvLenENS0_6CIPHERE(void);

/* Symbol: _ZN7android6DrmDef30PATH_CONSTRAINT_DATETIME_STARTE */
/* Demangled: android::DrmDef::PATH_CONSTRAINT_DATETIME_START */
extern void* _ZN7android6DrmDef30PATH_CONSTRAINT_DATETIME_STARTE;

/* Symbol: _ZTV16DataSourceReader */
/* Demangled: vtable for DataSourceReader */
extern void* _ZTV16DataSourceReader;

/* Symbol: _ZN9mkvparser4Tags9SimpleTag5ClearEv */
/* Demangled: mkvparser::Tags::SimpleTag::Clear() */
int _ZN9mkvparser4Tags9SimpleTag5ClearEv(void);

/* Symbol: _ZNK9mkvparser10BlockEntry10GetClusterEv */
/* Demangled: mkvparser::BlockEntry::GetCluster() const */
int _ZNK9mkvparser10BlockEntry10GetClusterEv(void);

/* Symbol: _ZN7android10ByteBuffer5setToEPc */
/* Demangled: android::ByteBuffer::setTo(char*) */
int _ZN7android10ByteBuffer5setToEPc(void);

/* Symbol: _ZN7android12Cta5FileUtil8wvcrc32nEPKhi */
/* Demangled: android::Cta5FileUtil::wvcrc32n(unsigned char const*, int) */
int _ZN7android12Cta5FileUtil8wvcrc32nEPKhi(void);

/* Symbol: _ZN7android11Cta5ASFFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5ASFFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN7android11Cta5WAVFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5WAVFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom12GetStringUIDEv */
/* Demangled: mkvparser::Chapters::Atom::GetStringUID() const */
int _ZNK9mkvparser8Chapters4Atom12GetStringUIDEv(void);

/* Symbol: _ZNK9mkvparser8SeekHead8GetEntryEi */
/* Demangled: mkvparser::SeekHead::GetEntry(int) const */
int _ZNK9mkvparser8SeekHead8GetEntryEi(void);

/* Symbol: _ZN7android6DrmDef13CTA5_UPDATINGE */
/* Demangled: android::DrmDef::CTA5_UPDATING */
extern void* _ZN7android6DrmDef13CTA5_UPDATINGE;

/* Symbol: _ZN7android7DrmUtil18rc4_decrypt_bufferEPhS1_i */
/* Demangled: android::DrmUtil::rc4_decrypt_buffer(unsigned char*, unsigned char*, int) */
int _ZN7android7DrmUtil18rc4_decrypt_bufferEPhS1_i(void);

/* Symbol: _ZN7android10ByteBuffer7cleanUpEv */
/* Demangled: android::ByteBuffer::cleanUp() */
int _ZN7android10ByteBuffer7cleanUpEv(void);

/* Symbol: _ZN7android15Cta5FileFactory14createCta5FileENS_7String8EyS1_b */
/* Demangled: android::Cta5FileFactory::createCta5File(android::String8, unsigned long long, android::String8, bool) */
int _ZN7android15Cta5FileFactory14createCta5FileENS_7String8EyS1_b(void);

/* Symbol: _ZNK9mkvparser7Cluster11GetLastTimeEv */
/* Demangled: mkvparser::Cluster::GetLastTime() const */
int _ZNK9mkvparser7Cluster11GetLastTimeEv(void);

/* Symbol: _ZN7android10DrmMtkUtil12toCommonMimeEPKc */
/* Demangled: android::DrmMtkUtil::toCommonMime(char const*) */
int _ZN7android10DrmMtkUtil12toCommonMimeEPKc(void);

/* Symbol: _ZN7android8Cta5File9getHeaderEv */
/* Demangled: android::Cta5File::getHeader() */
int _ZN7android8Cta5File9getHeaderEv(void);

/* Symbol: _ZN9mkvparser7ClusterD2Ev */
/* Demangled: mkvparser::Cluster::~Cluster() */
int _ZN9mkvparser7ClusterD2Ev(void);

/* Symbol: _ZNK9mkvparser7Segment11GetChaptersEv */
/* Demangled: mkvparser::Segment::GetChapters() const */
int _ZNK9mkvparser7Segment11GetChaptersEv(void);

/* Symbol: _ZTVN9mkvparser5Track8EOSBlockE */
/* Demangled: vtable for mkvparser::Track::EOSBlock */
extern void* _ZTVN9mkvparser5Track8EOSBlockE;

/* Symbol: _ZN7android12Cta5FileUtil11hosttonetllEy */
/* Demangled: android::Cta5FileUtil::hosttonetll(unsigned long long) */
int _ZN7android12Cta5FileUtil11hosttonetllEy(void);

/* Symbol: _ZN9mkvparser7Cluster11CreateBlockExxxx */
/* Demangled: mkvparser::Cluster::CreateBlock(long long, long long, long long, long long) */
int _ZN9mkvparser7Cluster11CreateBlockExxxx(void);

/* Symbol: _ZNK9mkvparser7Cluster7GetNextEPKNS_10BlockEntryERS3_ */
/* Demangled: mkvparser::Cluster::GetNext(mkvparser::BlockEntry const*, mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser7Cluster7GetNextEPKNS_10BlockEntryERS3_(void);

/* Symbol: _ZN7android16Cta5MatroskaFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, unsigned long long, android::String8) */
int _ZN7android16Cta5MatroskaFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN7android14Cta5FileHeader15getCtaHeaderLenEv */
/* Demangled: android::Cta5FileHeader::getCtaHeaderLen() */
int _ZN7android14Cta5FileHeader15getCtaHeaderLenEv(void);

/* Symbol: _ZN7android8Cta5File5getIvEv */
/* Demangled: android::Cta5File::getIv() */
int _ZN7android8Cta5File5getIvEv(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile14notifyProgressExxiNS_7String8EPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE */
/* Demangled: android::Cta5CommonMultimediaFile::notifyProgress(long long, long long, int, android::String8, android::Vector<android::DrmCtaUtil::Listener> const*) */
int _ZN7android24Cta5CommonMultimediaFile14notifyProgressExxiNS_7String8EPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void);

/* Symbol: _ZN7android10ByteBufferC1EPKc */
/* Demangled: android::ByteBuffer::ByteBuffer(char const*) */
int _ZN7android10ByteBufferC1EPKc(void);

/* Symbol: _ZN7android14DrmRequestType28ACTION_INSTALL_DRM_TO_DEVICEE */
/* Demangled: android::DrmRequestType::ACTION_INSTALL_DRM_TO_DEVICE */
extern void* _ZN7android14DrmRequestType28ACTION_INSTALL_DRM_TO_DEVICEE;

/* Symbol: _ZN7android8Cta5File13getContentLenEv */
/* Demangled: android::Cta5File::getContentLen() */
int _ZN7android8Cta5File13getContentLenEv(void);

/* Symbol: _ZN9mkvparser10EBMLHeader5ParseEPNS_10IMkvReaderERx */
/* Demangled: mkvparser::EBMLHeader::Parse(mkvparser::IMkvReader*, long long&) */
int _ZN9mkvparser10EBMLHeader5ParseEPNS_10IMkvReaderERx(void);

/* Symbol: _ZN9mkvparser7Segment12ParseHeadersEv */
/* Demangled: mkvparser::Segment::ParseHeaders() */
int _ZN9mkvparser7Segment12ParseHeadersEv(void);

/* Symbol: _ZN9mkvparser8CuePointD1Ev */
/* Demangled: mkvparser::CuePoint::~CuePoint() */
int _ZN9mkvparser8CuePointD1Ev(void);

/* Symbol: _ZTVN9mkvparser10BlockEntryE */
/* Demangled: vtable for mkvparser::BlockEntry */
extern void* _ZTVN9mkvparser10BlockEntryE;

/* Symbol: _ZN7android6DrmDef14EXT_RIGHTS_XMLE */
/* Demangled: android::DrmDef::EXT_RIGHTS_XML */
extern void* _ZN7android6DrmDef14EXT_RIGHTS_XMLE;

/* Symbol: _ZN7android6DrmDef18TOKEN_CONTENT_TYPEE */
/* Demangled: android::DrmDef::TOKEN_CONTENT_TYPE */
extern void* _ZN7android6DrmDef18TOKEN_CONTENT_TYPEE;

/* Symbol: _ZN7android10DrmMtkUtil23isDrmConsumeInAppClientERKNS_7String8E */
/* Demangled: android::DrmMtkUtil::isDrmConsumeInAppClient(android::String8 const&) */
int _ZN7android10DrmMtkUtil23isDrmConsumeInAppClientERKNS_7String8E(void);

/* Symbol: _ZN9mkvparser7SegmentD1Ev */
/* Demangled: mkvparser::Segment::~Segment() */
int _ZN9mkvparser7SegmentD1Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7Edition9ParseAtomEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Chapters::Edition::ParseAtom(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser8Chapters7Edition9ParseAtomEPNS_10IMkvReaderExx(void);

/* Symbol: _ZN7android7StrUtil8toStringEi */
/* Demangled: android::StrUtil::toString(int) */
int _ZN7android7StrUtil8toStringEi(void);

/* Symbol: _ZN7android14DrmRequestType21ACTION_SAVE_DEVICE_IDE */
/* Demangled: android::DrmRequestType::ACTION_SAVE_DEVICE_ID */
extern void* _ZN7android14DrmRequestType21ACTION_SAVE_DEVICE_IDE;

/* Symbol: _ZN7android14Cta5FileHeader12getCtaHeaderEv */
/* Demangled: android::Cta5FileHeader::getCtaHeader() */
int _ZN7android14Cta5FileHeader12getCtaHeaderEv(void);

/* Symbol: _ZN7android7KeyInfo10getKeyInfoEv */
/* Demangled: android::KeyInfo::getKeyInfo() */
int _ZN7android7KeyInfo10getKeyInfoEv(void);

/* Symbol: _ZNK7android12DrmInfoEvent11getUniqueIdEv */
/* Demangled: android::DrmInfoEvent::getUniqueId() const */
int _ZNK7android12DrmInfoEvent11getUniqueIdEv(void);

/* Symbol: _ZN9mkvparser11SegmentInfoC1EPNS_7SegmentExxxx */
/* Demangled: mkvparser::SegmentInfo::SegmentInfo(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser11SegmentInfoC1EPNS_7SegmentExxxx(void);

/* Symbol: _ZN9mkvparser15ContentEncoding17ContentEncryptionD1Ev */
/* Demangled: mkvparser::ContentEncoding::ContentEncryption::~ContentEncryption() */
int _ZN9mkvparser15ContentEncoding17ContentEncryptionD1Ev(void);

/* Symbol: _ZN7android11Cta5AVIFileC2EiNS_7String8E */
/* Demangled: android::Cta5AVIFile::Cta5AVIFile(int, android::String8) */
int _ZN7android11Cta5AVIFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser4Tags3TagD2Ev */
/* Demangled: mkvparser::Tags::Tag::~Tag() */
int _ZN9mkvparser4Tags3TagD2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters4AtomD2Ev */
/* Demangled: mkvparser::Chapters::Atom::~Atom() */
int _ZN9mkvparser8Chapters4AtomD2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7Edition4InitEv */
/* Demangled: mkvparser::Chapters::Edition::Init() */
int _ZN9mkvparser8Chapters7Edition4InitEv(void);

/* Symbol: _ZN9mkvparser8SeekHead5EntryC2Ev */
/* Demangled: mkvparser::SeekHead::Entry::Entry() */
int _ZN9mkvparser8SeekHead5EntryC2Ev(void);

/* Symbol: _ZNK9mkvparser10BlockEntry8GetIndexEv */
/* Demangled: mkvparser::BlockEntry::GetIndex() const */
int _ZNK9mkvparser10BlockEntry8GetIndexEv(void);

/* Symbol: _ZN7android14Cta5FileHeader17setCta5FileHeaderENS_7String8E */
/* Demangled: android::Cta5FileHeader::setCta5FileHeader(android::String8) */
int _ZN7android14Cta5FileHeader17setCta5FileHeaderENS_7String8E(void);

/* Symbol: _ZN7android20PartialEncryptHeaderC2Ev */
/* Demangled: android::PartialEncryptHeader::PartialEncryptHeader() */
int _ZN7android20PartialEncryptHeaderC2Ev(void);

/* Symbol: _ZN7android7KeyInfoC1Ev */
/* Demangled: android::KeyInfo::KeyInfo() */
int _ZN7android7KeyInfoC1Ev(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile13decryptHeaderExxRxS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEExS1_ */
/* Demangled: android::Cta5CommonMultimediaFile::decryptHeader(long long, long long, long long&, long long&, android::Vector<android::DrmCtaUtil::Listener> const*, long long, long long&) */
int _ZN7android24Cta5CommonMultimediaFile13decryptHeaderExxRxS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEExS1_(void);

/* Symbol: _ZN7android12CryptoHelperC1ENS0_6CIPHEREPhi */
/* Demangled: android::CryptoHelper::CryptoHelper(android::CryptoHelper::CIPHER, unsigned char*, int) */
int _ZN7android12CryptoHelperC1ENS0_6CIPHEREPhi(void);

/* Symbol: _ZN7android7StrUtil8toStringEl */
/* Demangled: android::StrUtil::toString(long) */
int _ZN7android7StrUtil8toStringEl(void);

/* Symbol: _ZN7android10DrmCtaUtil16isTrustCtaClientERNS_7String8E */
/* Demangled: android::DrmCtaUtil::isTrustCtaClient(android::String8&) */
int _ZN7android10DrmCtaUtil16isTrustCtaClientERNS_7String8E(void);

/* Symbol: _ZN9mkvparser8Chapters19ExpandEditionsArrayEv */
/* Demangled: mkvparser::Chapters::ExpandEditionsArray() */
int _ZN9mkvparser8Chapters19ExpandEditionsArrayEv(void);

/* Symbol: _ZN7android6DrmDef19CONSTRAINT_NONE_STRE */
/* Demangled: android::DrmDef::CONSTRAINT_NONE_STR */
extern void* _ZN7android6DrmDef19CONSTRAINT_NONE_STRE;

/* Symbol: _ZN7android6DrmDef21HEADER_TOKEN_ENCODINGE */
/* Demangled: android::DrmDef::HEADER_TOKEN_ENCODING */
extern void* _ZN7android6DrmDef21HEADER_TOKEN_ENCODINGE;

/* Symbol: _ZN7android14Cta5FileHeader22isPartialEncryptedFileEv */
/* Demangled: android::Cta5FileHeader::isPartialEncryptedFile() */
int _ZN7android14Cta5FileHeader22isPartialEncryptedFileEv(void);

/* Symbol: _ZN7android20PartialEncryptHeader20setClearHeaderOffsetEy */
/* Demangled: android::PartialEncryptHeader::setClearHeaderOffset(unsigned long long) */
int _ZN7android20PartialEncryptHeader20setClearHeaderOffsetEy(void);

/* Symbol: _ZN7android12Cta5MPEGFileC2EiNS_7String8E */
/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(int, android::String8) */
int _ZN7android12Cta5MPEGFileC2EiNS_7String8E(void);

/* Symbol: _ZN7android14Cta5FileHeader10isKeyValidENS_7String8E */
/* Demangled: android::Cta5FileHeader::isKeyValid(android::String8) */
int _ZN7android14Cta5FileHeader10isKeyValidENS_7String8E(void);

/* Symbol: _ZN7android12Cta5FLACFile12parseHeadersEi */
/* Demangled: android::Cta5FLACFile::parseHeaders(int) */
int _ZN7android12Cta5FLACFile12parseHeadersEi(void);

/* Symbol: _ZN9mkvparser7ClusterC2Ev */
/* Demangled: mkvparser::Cluster::Cluster() */
int _ZN9mkvparser7ClusterC2Ev(void);

/* Symbol: _ZN7android11Cta5FLVFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5FLVFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser10VideoTrack8GetWidthEv */
/* Demangled: mkvparser::VideoTrack::GetWidth() const */
int _ZNK9mkvparser10VideoTrack8GetWidthEv(void);

/* Symbol: _ZNK9mkvparser5Track13GetCodecDelayEv */
/* Demangled: mkvparser::Track::GetCodecDelay() const */
int _ZNK9mkvparser5Track13GetCodecDelayEv(void);

/* Symbol: _ZN7android10DrmMetaKey28META_KEY_CONTENT_DESCRIPTIONE */
/* Demangled: android::DrmMetaKey::META_KEY_CONTENT_DESCRIPTION */
extern void* _ZN7android10DrmMetaKey28META_KEY_CONTENT_DESCRIPTIONE;

/* Symbol: _ZN7android14DrmRequestType34ACTION_CHECK_CONSUME_IN_APP_CLIENTE */
/* Demangled: android::DrmRequestType::ACTION_CHECK_CONSUME_IN_APP_CLIENT */
extern void* _ZN7android14DrmRequestType34ACTION_CHECK_CONSUME_IN_APP_CLIENTE;

/* Symbol: _ZN9mkvparser15ContentEncoding20ParseEncryptionEntryExxPNS_10IMkvReaderEPNS0_17ContentEncryptionE */
/* Demangled: mkvparser::ContentEncoding::ParseEncryptionEntry(long long, long long, mkvparser::IMkvReader*, mkvparser::ContentEncoding::ContentEncryption*) */
int _ZN9mkvparser15ContentEncoding20ParseEncryptionEntryExxPNS_10IMkvReaderEPNS0_17ContentEncryptionE(void);

/* Symbol: _ZN9mkvparser8ReadUIntEPNS_10IMkvReaderExRl */
/* Demangled: mkvparser::ReadUInt(mkvparser::IMkvReader*, long long, long&) */
int _ZN9mkvparser8ReadUIntEPNS_10IMkvReaderExRl(void);

/* Symbol: _ZTVN9mkvparser11SimpleBlockE */
/* Demangled: vtable for mkvparser::SimpleBlock */
extern void* _ZTVN9mkvparser11SimpleBlockE;

/* Symbol: _ZN7android14CipherFileUtil14CipherFileDumpEiiiRNS_12CryptoHelperE */
/* Demangled: android::CipherFileUtil::CipherFileDump(int, int, int, android::CryptoHelper&) */
int _ZN7android14CipherFileUtil14CipherFileDumpEiiiRNS_12CryptoHelperE(void);

/* Symbol: _ZN7android8Cta5File10setClearFdEi */
/* Demangled: android::Cta5File::setClearFd(int) */
int _ZN7android8Cta5File10setClearFdEi(void);

/* Symbol: _ZNK7android6VectorIxE10do_destroyEPvj */
/* Demangled: android::Vector<long long>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIxE10do_destroyEPvj(void);

/* Symbol: _ZN9mkvparser13GetUIntLengthEPNS_10IMkvReaderExRl */
/* Demangled: mkvparser::GetUIntLength(mkvparser::IMkvReader*, long long, long&) */
int _ZN9mkvparser13GetUIntLengthEPNS_10IMkvReaderExRl(void);

/* Symbol: _ZNK9mkvparser7Cluster3EOSEv */
/* Demangled: mkvparser::Cluster::EOS() const */
int _ZNK9mkvparser7Cluster3EOSEv(void);

/* Symbol: _ZN7android14DrmRequestType21ACTION_LOAD_DEVICE_IDE */
/* Demangled: android::DrmRequestType::ACTION_LOAD_DEVICE_ID */
extern void* _ZN7android14DrmRequestType21ACTION_LOAD_DEVICE_IDE;

/* Symbol: _ZN7android8Cta5File13getContentKeyEv */
/* Demangled: android::Cta5File::getContentKey() */
int _ZN7android8Cta5File13getContentKeyEv(void);

/* Symbol: sCta5MimeTypeMap */
/* Demangled: sCta5MimeTypeMap */
extern void* sCta5MimeTypeMap;

/* Symbol: _ZN7android6DrmDef10MTK_FL_CIDE */
/* Demangled: android::DrmDef::MTK_FL_CID */
extern void* _ZN7android6DrmDef10MTK_FL_CIDE;

/* Symbol: _ZN7android6DrmDef18TOKEN_CONTENT_NAMEE */
/* Demangled: android::DrmDef::TOKEN_CONTENT_NAME */
extern void* _ZN7android6DrmDef18TOKEN_CONTENT_NAMEE;

/* Symbol: _ZN7android8Cta5FileD1Ev */
/* Demangled: android::Cta5File::~Cta5File() */
int _ZN7android8Cta5FileD1Ev(void);

/* Symbol: _ZN9mkvparser10EBMLHeaderD1Ev */
/* Demangled: mkvparser::EBMLHeader::~EBMLHeader() */
int _ZN9mkvparser10EBMLHeaderD1Ev(void);

/* Symbol: _ZN7android6DrmDef28PATH_CONSTRAINT_DATETIME_ENDE */
/* Demangled: android::DrmDef::PATH_CONSTRAINT_DATETIME_END */
extern void* _ZN7android6DrmDef28PATH_CONSTRAINT_DATETIME_ENDE;

/* Symbol: _ZN7android7StrUtil17datetimeStrToTickEPcRl */
/* Demangled: android::StrUtil::datetimeStrToTick(char*, long&) */
int _ZN7android7StrUtil17datetimeStrToTickEPcRl(void);

/* Symbol: _ZN7android14DrmRequestType14RESULT_FAILUREE */
/* Demangled: android::DrmRequestType::RESULT_FAILURE */
extern void* _ZN7android14DrmRequestType14RESULT_FAILUREE;

/* Symbol: _ZTVN7android12Cta5FLACFileE */
/* Demangled: vtable for android::Cta5FLACFile */
extern void* _ZTVN7android12Cta5FLACFileE;

/* Symbol: _ZN9mkvparser15ContentEncoding17ContentEncryptionC1Ev */
/* Demangled: mkvparser::ContentEncoding::ContentEncryption::ContentEncryption() */
int _ZN9mkvparser15ContentEncoding17ContentEncryptionC1Ev(void);

/* Symbol: _ZN7android14DrmRequestType11KEY_CTA5_FDE */
/* Demangled: android::DrmRequestType::KEY_CTA5_FD */
extern void* _ZN7android14DrmRequestType11KEY_CTA5_FDE;

/* Symbol: _ZN9mkvparser4Tags3TagC2Ev */
/* Demangled: mkvparser::Tags::Tag::Tag() */
int _ZN9mkvparser4Tags3TagC2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters4AtomC2Ev */
/* Demangled: mkvparser::Chapters::Atom::Atom() */
int _ZN9mkvparser8Chapters4AtomC2Ev(void);

/* Symbol: _ZNK9mkvparser5Track13GetNameAsUTF8Ev */
/* Demangled: mkvparser::Track::GetNameAsUTF8() const */
int _ZNK9mkvparser5Track13GetNameAsUTF8Ev(void);

/* Symbol: _ZNK9mkvparser5Track4SeekExRPKNS_10BlockEntryE */
/* Demangled: mkvparser::Track::Seek(long long, mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser5Track4SeekExRPKNS_10BlockEntryE(void);

/* Symbol: _ZNK9mkvparser8Chapters7Display11ShallowCopyERS1_ */
/* Demangled: mkvparser::Chapters::Display::ShallowCopy(mkvparser::Chapters::Display&) const */
int _ZNK9mkvparser8Chapters7Display11ShallowCopyERS1_(void);

/* Symbol: _ZN7android6DrmDef13MTK_CD_HEADERE */
/* Demangled: android::DrmDef::MTK_CD_HEADER */
extern void* _ZN7android6DrmDef13MTK_CD_HEADERE;

/* Symbol: _ZN7android10DrmMetaKey15META_KEY_IS_DRME */
/* Demangled: android::DrmMetaKey::META_KEY_IS_DRM */
extern void* _ZN7android10DrmMetaKey15META_KEY_IS_DRME;

/* Symbol: _ZN7android14Cta5NormalFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android14Cta5NormalFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZNK9mkvparser10BlockGroup15GetNextTimeCodeEv */
/* Demangled: mkvparser::BlockGroup::GetNextTimeCode() const */
int _ZNK9mkvparser10BlockGroup15GetNextTimeCodeEv(void);

/* Symbol: _ZN7android14DrmRequestType20ACTION_CTA5_GETTOKENE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_GETTOKEN */
extern void* _ZN7android14DrmRequestType20ACTION_CTA5_GETTOKENE;

/* Symbol: _ZN7android14Cta5NormalFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, unsigned long long, android::String8) */
int _ZN7android14Cta5NormalFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN9mkvparser17MasteringMetadata5ParseEPNS_10IMkvReaderExxPPS0_ */
/* Demangled: mkvparser::MasteringMetadata::Parse(mkvparser::IMkvReader*, long long, long long, mkvparser::MasteringMetadata**) */
int _ZN9mkvparser17MasteringMetadata5ParseEPNS_10IMkvReaderExxPPS0_(void);

/* Symbol: _ZN9mkvparser7Segment14PreloadClusterEPNS_7ClusterEi */
/* Demangled: mkvparser::Segment::PreloadCluster(mkvparser::Cluster*, int) */
int _ZN9mkvparser7Segment14PreloadClusterEPNS_7ClusterEi(void);

/* Symbol: _ZNK9mkvparser11SegmentInfo18GetMuxingAppAsUTF8Ev */
/* Demangled: mkvparser::SegmentInfo::GetMuxingAppAsUTF8() const */
int _ZNK9mkvparser11SegmentInfo18GetMuxingAppAsUTF8Ev(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom6GetUIDEv */
/* Demangled: mkvparser::Chapters::Atom::GetUID() const */
int _ZNK9mkvparser8Chapters4Atom6GetUIDEv(void);

/* Symbol: _ZN7android6DrmDef15EXT_DRM_CONTENTE */
/* Demangled: android::DrmDef::EXT_DRM_CONTENT */
extern void* _ZN7android6DrmDef15EXT_DRM_CONTENTE;

/* Symbol: _ZNK9mkvparser8SeekHead14GetVoidElementEi */
/* Demangled: mkvparser::SeekHead::GetVoidElement(int) const */
int _ZNK9mkvparser8SeekHead14GetVoidElementEi(void);

/* Symbol: _ZN7android10ByteBufferC2EPcj */
/* Demangled: android::ByteBuffer::ByteBuffer(char*, unsigned int) */
int _ZN7android10ByteBufferC2EPcj(void);

/* Symbol: _ZN7android6DrmDef16TOKEN_CONTENTURIE */
/* Demangled: android::DrmDef::TOKEN_CONTENTURI */
extern void* _ZN7android6DrmDef16TOKEN_CONTENTURIE;

/* Symbol: _ZN7android10DrmMtkUtil13isNeedConsumeERKNS_7String8E */
/* Demangled: android::DrmMtkUtil::isNeedConsume(android::String8 const&) */
int _ZN7android10DrmMtkUtil13isNeedConsumeERKNS_7String8E(void);

/* Symbol: _ZN7android7DrmUtil6saveIdERKNS_7String8E */
/* Demangled: android::DrmUtil::saveId(android::String8 const&) */
int _ZN7android7DrmUtil6saveIdERKNS_7String8E(void);

/* Symbol: _ZN7android14DrmRequestType10KEY_DCF_FDE */
/* Demangled: android::DrmRequestType::KEY_DCF_FD */
extern void* _ZN7android14DrmRequestType10KEY_DCF_FDE;

/* Symbol: _ZN7android14DrmRequestType22ACTION_INSTALL_DRM_MSGE */
/* Demangled: android::DrmRequestType::ACTION_INSTALL_DRM_MSG */
extern void* _ZN7android14DrmRequestType22ACTION_INSTALL_DRM_MSGE;

/* Symbol: _ZN7android20PartialEncryptHeader21setCipherHeaderOffsetEy */
/* Demangled: android::PartialEncryptHeader::setCipherHeaderOffset(unsigned long long) */
int _ZN7android20PartialEncryptHeader21setCipherHeaderOffsetEy(void);

/* Symbol: _ZN7android7KeyInfo4dumpEv */
/* Demangled: android::KeyInfo::dump() */
int _ZN7android7KeyInfo4dumpEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN9mkvparser5Track4InfoD2Ev */
/* Demangled: mkvparser::Track::Info::~Info() */
int _ZN9mkvparser5Track4InfoD2Ev(void);

/* Symbol: _ZN7android7KeyInfoC2ENS_7String8E */
/* Demangled: android::KeyInfo::KeyInfo(android::String8) */
int _ZN7android7KeyInfoC2ENS_7String8E(void);

/* Symbol: _ZNK9mkvparser5Track7GetNextEPKNS_10BlockEntryERS3_ */
/* Demangled: mkvparser::Track::GetNext(mkvparser::BlockEntry const*, mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser5Track7GetNextEPKNS_10BlockEntryERS3_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android24Cta5CommonMultimediaFileC2EiNS_7String8E */
/* Demangled: android::Cta5CommonMultimediaFile::Cta5CommonMultimediaFile(int, android::String8) */
int _ZN7android24Cta5CommonMultimediaFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser5Track6CreateEPNS_7SegmentERKNS0_4InfoExxRPS0_ */
/* Demangled: mkvparser::Track::Create(mkvparser::Segment*, mkvparser::Track::Info const&, long long, long long, mkvparser::Track*&) */
int _ZN9mkvparser5Track6CreateEPNS_7SegmentERKNS0_4InfoExxRPS0_(void);

/* Symbol: _ZNK7android6VectorIxE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<long long>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android7DrmUtil7mROLockE */
/* Demangled: android::DrmUtil::mROLock */
extern void* _ZN7android7DrmUtil7mROLockE;

/* Symbol: _ZN7android6DrmDef29CONSTRAINT_DATETIME_START_STRE */
/* Demangled: android::DrmDef::CONSTRAINT_DATETIME_START_STR */
extern void* _ZN7android6DrmDef29CONSTRAINT_DATETIME_START_STRE;

/* Symbol: _ZN7android7DrmUtil18rc4_encrypt_bufferEPhS1_i */
/* Demangled: android::DrmUtil::rc4_encrypt_buffer(unsigned char*, unsigned char*, int) */
int _ZN7android7DrmUtil18rc4_encrypt_bufferEPhS1_i(void);

/* Symbol: _ZN7android7StrUtil8toHexStrEPci */
/* Demangled: android::StrUtil::toHexStr(char*, int) */
int _ZN7android7StrUtil8toHexStrEPci(void);

/* Symbol: _ZN9mkvparser10EBMLHeaderC1Ev */
/* Demangled: mkvparser::EBMLHeader::EBMLHeader() */
int _ZN9mkvparser10EBMLHeaderC1Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7Edition16ExpandAtomsArrayEv */
/* Demangled: mkvparser::Chapters::Edition::ExpandAtomsArray() */
int _ZN9mkvparser8Chapters7Edition16ExpandAtomsArrayEv(void);

/* Symbol: _ZTVN9mkvparser5TrackE */
/* Demangled: vtable for mkvparser::Track */
extern void* _ZTVN9mkvparser5TrackE;

/* Symbol: _ZN7android6DrmDef23CONSTRAINT_DATETIME_STRE */
/* Demangled: android::DrmDef::CONSTRAINT_DATETIME_STR */
extern void* _ZN7android6DrmDef23CONSTRAINT_DATETIME_STRE;

/* Symbol: _ZN9mkvparser7SegmentC1EPNS_10IMkvReaderExxx */
/* Demangled: mkvparser::Segment::Segment(mkvparser::IMkvReader*, long long, long long, long long) */
int _ZN9mkvparser7SegmentC1EPNS_10IMkvReaderExxx(void);

/* Symbol: _ZN7android6DrmDef16getConstraintStrEi */
/* Demangled: android::DrmDef::getConstraintStr(int) */
int _ZN7android6DrmDef16getConstraintStrEi(void);

/* Symbol: _ZN7android6DrmDef20TOKEN_CONTENT_VENDORE */
/* Demangled: android::DrmDef::TOKEN_CONTENT_VENDOR */
extern void* _ZN7android6DrmDef20TOKEN_CONTENT_VENDORE;

/* Symbol: _ZNK9mkvparser8Chapters7Display11GetLanguageEv */
/* Demangled: mkvparser::Chapters::Display::GetLanguage() const */
int _ZNK9mkvparser8Chapters7Display11GetLanguageEv(void);

/* Symbol: _ZN7android14CipherFileUtil14CipherFileReadEPcPviiiiRNS_12CryptoHelperE */
/* Demangled: android::CipherFileUtil::CipherFileRead(char*, void*, int, int, int, int, android::CryptoHelper&) */
int _ZN7android14CipherFileUtil14CipherFileReadEPcPviiiiRNS_12CryptoHelperE(void);

/* Symbol: _Z19testUintVarFunctionv */
/* Demangled: testUintVarFunction() */
int _Z19testUintVarFunctionv(void);

/* Symbol: _ZN7android8Cta5File16isCta5NormalFileEi */
/* Demangled: android::Cta5File::isCta5NormalFile(int) */
int _ZN7android8Cta5File16isCta5NormalFileEi(void);

/* Symbol: _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE12do_constructEPvj */
/* Demangled: android::Vector<android::Cta5CommonMultimediaFile::Header*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE12do_constructEPvj(void);

/* Symbol: _ZN9mkvparser7Segment13AppendClusterEPNS_7ClusterE */
/* Demangled: mkvparser::Segment::AppendCluster(mkvparser::Cluster*) */
int _ZN9mkvparser7Segment13AppendClusterEPNS_7ClusterE(void);

/* Symbol: _ZN9mkvparser8SeekHeadC2EPNS_7SegmentExxxx */
/* Demangled: mkvparser::SeekHead::SeekHead(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser8SeekHeadC2EPNS_7SegmentExxxx(void);

/* Symbol: _ZN7android14DrmRequestType18ACTION_CTA5_CANCELE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_CANCEL */
extern void* _ZN7android14DrmRequestType18ACTION_CTA5_CANCELE;

/* Symbol: _ZN9mkvparser4CuesD1Ev */
/* Demangled: mkvparser::Cues::~Cues() */
int _ZN9mkvparser4CuesD1Ev(void);

/* Symbol: _ZNK9mkvparser10BlockGroup8GetBlockEv */
/* Demangled: mkvparser::BlockGroup::GetBlock() const */
int _ZNK9mkvparser10BlockGroup8GetBlockEv(void);

/* Symbol: _ZN7android8Cta5FileC2EiNS_7String8E */
/* Demangled: android::Cta5File::Cta5File(int, android::String8) */
int _ZN7android8Cta5FileC2EiNS_7String8E(void);

/* Symbol: _ZNK9mkvparser10VideoTrack15GetDisplayWidthEv */
/* Demangled: mkvparser::VideoTrack::GetDisplayWidth() const */
int _ZNK9mkvparser10VideoTrack15GetDisplayWidthEv(void);

/* Symbol: _ZNK9mkvparser15ContentEncoding18GetEncryptionCountEv */
/* Demangled: mkvparser::ContentEncoding::GetEncryptionCount() const */
int _ZNK9mkvparser15ContentEncoding18GetEncryptionCountEv(void);

/* Symbol: _ZNK9mkvparser8Chapters7Edition11ShallowCopyERS1_ */
/* Demangled: mkvparser::Chapters::Edition::ShallowCopy(mkvparser::Chapters::Edition&) const */
int _ZNK9mkvparser8Chapters7Edition11ShallowCopyERS1_(void);

/* Symbol: _ZN7android10DrmMetaKey15META_KEY_OFFSETE */
/* Demangled: android::DrmMetaKey::META_KEY_OFFSET */
extern void* _ZN7android10DrmMetaKey15META_KEY_OFFSETE;

/* Symbol: _ZN7android20PartialEncryptHeader23setPartialEncryptHeaderEPKc */
/* Demangled: android::PartialEncryptHeader::setPartialEncryptHeader(char const*) */
int _ZN7android20PartialEncryptHeader23setPartialEncryptHeaderEPKc(void);

/* Symbol: _ZN9mkvparser5Track4InfoC2Ev */
/* Demangled: mkvparser::Track::Info::Info() */
int _ZN9mkvparser5Track4InfoC2Ev(void);

/* Symbol: _ZN7android6DrmDef17CONTENT_DIRECTORYE */
/* Demangled: android::DrmDef::CONTENT_DIRECTORY */
extern void* _ZN7android6DrmDef17CONTENT_DIRECTORYE;

/* Symbol: _ZN7android14DrmRequestType16KEY_DATA_1_EXTRAE */
/* Demangled: android::DrmRequestType::KEY_DATA_1_EXTRA */
extern void* _ZN7android14DrmRequestType16KEY_DATA_1_EXTRAE;

/* Symbol: value */
/* Demangled: value */
extern void* value;

/* Symbol: _ZTVN7android12Cta5MPEGFileE */
/* Demangled: vtable for android::Cta5MPEGFile */
extern void* _ZTVN7android12Cta5MPEGFileE;

/* Symbol: _ZN9mkvparser7Cluster16CreateBlockGroupExxx */
/* Demangled: mkvparser::Cluster::CreateBlockGroup(long long, long long, long long) */
int _ZN9mkvparser7Cluster16CreateBlockGroupExxx(void);

/* Symbol: _ZN7android14Cta5FileHeaderC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long long, android::String8) */
int _ZN7android14Cta5FileHeaderC1ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser4Cues7GetLastEv */
/* Demangled: mkvparser::Cues::GetLast() const */
int _ZNK9mkvparser4Cues7GetLastEv(void);

/* Symbol: _ZNK9mkvparser5Block11GetTimeCodeEPKNS_7ClusterE */
/* Demangled: mkvparser::Block::GetTimeCode(mkvparser::Cluster const*) const */
int _ZNK9mkvparser5Block11GetTimeCodeEPKNS_7ClusterE(void);

/* Symbol: _ZN7android15Cta5FileFactory12isMultiMediaEiRKNS_7String8E */
/* Demangled: android::Cta5FileFactory::isMultiMedia(int, android::String8 const&) */
int _ZN7android15Cta5FileFactory12isMultiMediaEiRKNS_7String8E(void);

/* Symbol: _ZTVN7android11Cta5WAVFileE */
/* Demangled: vtable for android::Cta5WAVFile */
extern void* _ZTVN7android11Cta5WAVFileE;

/* Symbol: _ZN7android6DrmDef12RO_DIRECTORYE */
/* Demangled: android::DrmDef::RO_DIRECTORY */
extern void* _ZN7android6DrmDef12RO_DIRECTORYE;

/* Symbol: _ZN7android14DrmRequestType16KEY_DATA_EXTRA_1E */
/* Demangled: android::DrmRequestType::KEY_DATA_EXTRA_1 */
extern void* _ZN7android14DrmRequestType16KEY_DATA_EXTRA_1E;

/* Symbol: _ZN7android11Cta5APEFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5APEFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser5TrackD0Ev */
/* Demangled: mkvparser::Track::~Track() */
int _ZN9mkvparser5TrackD0Ev(void);

/* Symbol: _ZN9mkvparser7Segment8GetBlockERKNS_8CuePointERKNS1_13TrackPositionE */
/* Demangled: mkvparser::Segment::GetBlock(mkvparser::CuePoint const&, mkvparser::CuePoint::TrackPosition const&) */
int _ZN9mkvparser7Segment8GetBlockERKNS_8CuePointERKNS1_13TrackPositionE(void);

/* Symbol: _ZNK9mkvparser4Tags3Tag17GetSimpleTagCountEv */
/* Demangled: mkvparser::Tags::Tag::GetSimpleTagCount() const */
int _ZNK9mkvparser4Tags3Tag17GetSimpleTagCountEv(void);

/* Symbol: _ZN7android14Cta5FileHeader18setCipherHeaderLenEy */
/* Demangled: android::Cta5FileHeader::setCipherHeaderLen(unsigned long long) */
int _ZN7android14Cta5FileHeader18setCipherHeaderLenEy(void);

/* Symbol: _ZN7android11Cta5APEFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5APEFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser15ContentEncoding18ContentCompressionD1Ev */
/* Demangled: mkvparser::ContentEncoding::ContentCompression::~ContentCompression() */
int _ZN9mkvparser15ContentEncoding18ContentCompressionD1Ev(void);

/* Symbol: _ZN7android10ByteBufferC1ERKS0_ */
/* Demangled: android::ByteBuffer::ByteBuffer(android::ByteBuffer const&) */
int _ZN7android10ByteBufferC1ERKS0_(void);

/* Symbol: _ZN7android10ByteBufferaSERKS0_ */
/* Demangled: android::ByteBuffer::operator=(android::ByteBuffer const&) */
int _ZN7android10ByteBufferaSERKS0_(void);

/* Symbol: _ZN7android7KeyInfoC1ENS_7String8E */
/* Demangled: android::KeyInfo::KeyInfo(android::String8) */
int _ZN7android7KeyInfoC1ENS_7String8E(void);

/* Symbol: _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::Cta5CommonMultimediaFile::Header*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android12Cta5FLACFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5FLACFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser7Cluster12GetFirstTimeEv */
/* Demangled: mkvparser::Cluster::GetFirstTime() const */
int _ZNK9mkvparser7Cluster12GetFirstTimeEv(void);

/* Symbol: _ZN7android14Cta5FileHeaderC2EiNS_7String8E */
/* Demangled: android::Cta5FileHeader::Cta5FileHeader(int, android::String8) */
int _ZN7android14Cta5FileHeaderC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser11SimpleBlock5ParseEv */
/* Demangled: mkvparser::SimpleBlock::Parse() */
int _ZN9mkvparser11SimpleBlock5ParseEv(void);

/* Symbol: _ZN9mkvparser16UnserializeFloatEPNS_10IMkvReaderExxRd */
/* Demangled: mkvparser::UnserializeFloat(mkvparser::IMkvReader*, long long, long long, double&) */
int _ZN9mkvparser16UnserializeFloatEPNS_10IMkvReaderExxRd(void);

/* Symbol: _ZN9mkvparser7ClusterC2EPNS_7SegmentElx */
/* Demangled: mkvparser::Cluster::Cluster(mkvparser::Segment*, long, long long) */
int _ZN9mkvparser7ClusterC2EPNS_7SegmentElx(void);

/* Symbol: _ZN7android6DrmDef19TOKEN_RIGHTS_ISSUERE */
/* Demangled: android::DrmDef::TOKEN_RIGHTS_ISSUER */
extern void* _ZN7android6DrmDef19TOKEN_RIGHTS_ISSUERE;

/* Symbol: _ZN7android6DrmDef7MTK_CD_E */
/* Demangled: android::DrmDef::MTK_CD_ */
extern void* _ZN7android6DrmDef7MTK_CD_E;

/* Symbol: _ZN7android24Cta5CommonMultimediaFile18getTotalHeaderSizeEv */
/* Demangled: android::Cta5CommonMultimediaFile::getTotalHeaderSize() */
int _ZN7android24Cta5CommonMultimediaFile18getTotalHeaderSizeEv(void);

/* Symbol: _ZN9mkvparser7SegmentC2EPNS_10IMkvReaderExxx */
/* Demangled: mkvparser::Segment::Segment(mkvparser::IMkvReader*, long long, long long, long long) */
int _ZN9mkvparser7SegmentC2EPNS_10IMkvReaderExxx(void);

/* Symbol: _ZTVN9mkvparser10VideoTrackE */
/* Demangled: vtable for mkvparser::VideoTrack */
extern void* _ZTVN9mkvparser10VideoTrackE;

/* Symbol: _ZN7android6DrmDef8IMEI_DIRE */
/* Demangled: android::DrmDef::IMEI_DIR */
extern void* _ZN7android6DrmDef8IMEI_DIRE;

/* Symbol: _ZN7android14Cta5FileHeader9changeKeyENS_7String8ES1_ */
/* Demangled: android::Cta5FileHeader::changeKey(android::String8, android::String8) */
int _ZN7android14Cta5FileHeader9changeKeyENS_7String8ES1_(void);

/* Symbol: _ZN7android11Cta5ASFFileC2EiNS_7String8E */
/* Demangled: android::Cta5ASFFile::Cta5ASFFile(int, android::String8) */
int _ZN7android11Cta5ASFFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser7Segment13DoLoadClusterERxRl */
/* Demangled: mkvparser::Segment::DoLoadCluster(long long&, long&) */
int _ZN9mkvparser7Segment13DoLoadClusterERxRl(void);

/* Symbol: _ZN9mkvparser6Colour16kValueNotPresentE */
/* Demangled: mkvparser::Colour::kValueNotPresent */
extern void* _ZN9mkvparser6Colour16kValueNotPresentE;

/* Symbol: _ZN9mkvparser6TracksD1Ev */
/* Demangled: mkvparser::Tracks::~Tracks() */
int _ZN9mkvparser6TracksD1Ev(void);

/* Symbol: _ZNK9mkvparser10BlockGroup19GetDurationTimeCodeEv */
/* Demangled: mkvparser::BlockGroup::GetDurationTimeCode() const */
int _ZNK9mkvparser10BlockGroup19GetDurationTimeCodeEv(void);

/* Symbol: _ZNK9mkvparser15ContentEncoding21GetCompressionByIndexEm */
/* Demangled: mkvparser::ContentEncoding::GetCompressionByIndex(unsigned long) const */
int _ZNK9mkvparser15ContentEncoding21GetCompressionByIndexEm(void);

/* Symbol: _ZNK9mkvparser8Chapters7Display9GetStringEv */
/* Demangled: mkvparser::Chapters::Display::GetString() const */
int _ZNK9mkvparser8Chapters7Display9GetStringEv(void);

/* Symbol: _ZN7android14DrmRequestType17KEY_CTA5_FILEPATHE */
/* Demangled: android::DrmRequestType::KEY_CTA5_FILEPATH */
extern void* _ZN7android14DrmRequestType17KEY_CTA5_FILEPATHE;

/* Symbol: _ZN9mkvparser7Cluster17CreateSimpleBlockExx */
/* Demangled: mkvparser::Cluster::CreateSimpleBlock(long long, long long) */
int _ZN9mkvparser7Cluster17CreateSimpleBlockExx(void);

/* Symbol: _ZN9mkvparser7Segment4LoadEv */
/* Demangled: mkvparser::Segment::Load() */
int _ZN9mkvparser7Segment4LoadEv(void);

/* Symbol: _ZN7android10ByteBuffer5setToEPcj */
/* Demangled: android::ByteBuffer::setTo(char*, unsigned int) */
int _ZN7android10ByteBuffer5setToEPcj(void);

/* Symbol: _ZN7android7DrmUtil24base64_decode_bytebufferERNS_10ByteBufferE */
/* Demangled: android::DrmUtil::base64_decode_bytebuffer(android::ByteBuffer&) */
int _ZN7android7DrmUtil24base64_decode_bytebufferERNS_10ByteBufferE(void);

/* Symbol: _ZN7android8Cta5File16calculateFileSigEi */
/* Demangled: android::Cta5File::calculateFileSig(int) */
int _ZN7android8Cta5File16calculateFileSigEi(void);

/* Symbol: _ZN7android8Cta5File6cancelEv */
/* Demangled: android::Cta5File::cancel() */
int _ZN7android8Cta5File6cancelEv(void);

/* Symbol: _ZNK9mkvparser5Track7GetTypeEv */
/* Demangled: mkvparser::Track::GetType() const */
int _ZNK9mkvparser5Track7GetTypeEv(void);

/* Symbol: _ZN7android10DrmMtkUtil15isTrustedClientERKNS_7String8E */
/* Demangled: android::DrmMtkUtil::isTrustedClient(android::String8 const&) */
int _ZN7android10DrmMtkUtil15isTrustedClientERKNS_7String8E(void);

/* Symbol: _ZN7android7KeyInfo13deriveKeyInfoENS_7String8E */
/* Demangled: android::KeyInfo::deriveKeyInfo(android::String8) */
int _ZN7android7KeyInfo13deriveKeyInfoENS_7String8E(void);

/* Symbol: _ZN9mkvparser8CuePointD2Ev */
/* Demangled: mkvparser::CuePoint::~CuePoint() */
int _ZN9mkvparser8CuePointD2Ev(void);

/* Symbol: _ZN9mkvparser7SegmentD2Ev */
/* Demangled: mkvparser::Segment::~Segment() */
int _ZN9mkvparser7SegmentD2Ev(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom16GetStartTimecodeEv */
/* Demangled: mkvparser::Chapters::Atom::GetStartTimecode() const */
int _ZNK9mkvparser8Chapters4Atom16GetStartTimecodeEv(void);

/* Symbol: _ZN7android10ByteBufferD1Ev */
/* Demangled: android::ByteBuffer::~ByteBuffer() */
int _ZN7android10ByteBufferD1Ev(void);

/* Symbol: _ZN7android14Cta5FileHeader17getCurrentKeyInfoEv */
/* Demangled: android::Cta5FileHeader::getCurrentKeyInfo() */
int _ZN7android14Cta5FileHeader17getCurrentKeyInfoEv(void);

/* Symbol: _ZN7android7KeyInfo8getCountEv */
/* Demangled: android::KeyInfo::getCount() */
int _ZN7android7KeyInfo8getCountEv(void);

/* Symbol: _ZN9mkvparser10AudioTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_ */
/* Demangled: mkvparser::AudioTrack::Parse(mkvparser::Segment*, mkvparser::Track::Info const&, long long, long long, mkvparser::AudioTrack*&) */
int _ZN9mkvparser10AudioTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_(void);

/* Symbol: _ZN9mkvparser15ContentEncoding17ContentEncryptionD2Ev */
/* Demangled: mkvparser::ContentEncoding::ContentEncryption::~ContentEncryption() */
int _ZN9mkvparser15ContentEncoding17ContentEncryptionD2Ev(void);

/* Symbol: _ZNK9mkvparser4Tags9SimpleTag12GetTagStringEv */
/* Demangled: mkvparser::Tags::SimpleTag::GetTagString() const */
int _ZNK9mkvparser4Tags9SimpleTag12GetTagStringEv(void);

/* Symbol: _ZN7android6DrmDef15HEADER_TOKEN_IDE */
/* Demangled: android::DrmDef::HEADER_TOKEN_ID */
extern void* _ZN7android6DrmDef15HEADER_TOKEN_IDE;

/* Symbol: _ZN9mkvparser15ContentEncoding18ContentCompressionC1Ev */
/* Demangled: mkvparser::ContentEncoding::ContentCompression::ContentCompression() */
int _ZN9mkvparser15ContentEncoding18ContentCompressionC1Ev(void);

/* Symbol: _ZNK9mkvparser7Cluster8GetEntryEPKNS_5TrackEx */
/* Demangled: mkvparser::Cluster::GetEntry(mkvparser::Track const*, long long) const */
int _ZNK9mkvparser7Cluster8GetEntryEPKNS_5TrackEx(void);

/* Symbol: _ZNK9mkvparser7Segment7GetCuesEv */
/* Demangled: mkvparser::Segment::GetCues() const */
int _ZNK9mkvparser7Segment7GetCuesEv(void);

/* Symbol: _ZNK9mkvparser8CuePoint7GetTimeEPKNS_7SegmentE */
/* Demangled: mkvparser::CuePoint::GetTime(mkvparser::Segment const*) const */
int _ZNK9mkvparser8CuePoint7GetTimeEPKNS_7SegmentE(void);

/* Symbol: _ZN7android6DrmDef23getPermissionFromActionEi */
/* Demangled: android::DrmDef::getPermissionFromAction(int) */
int _ZN7android6DrmDef23getPermissionFromActionEi(void);

/* Symbol: _ZN7android6DrmDef25TOKEN_CONTENT_DESCRIPTIONE */
/* Demangled: android::DrmDef::TOKEN_CONTENT_DESCRIPTION */
extern void* _ZN7android6DrmDef25TOKEN_CONTENT_DESCRIPTIONE;

/* Symbol: _ZN7android10DrmMtkUtil14getProcessNameEi */
/* Demangled: android::DrmMtkUtil::getProcessName(int) */
int _ZN7android10DrmMtkUtil14getProcessNameEi(void);

/* Symbol: _ZN7android7DrmUtil9getDrmKeyEv */
/* Demangled: android::DrmUtil::getDrmKey() */
int _ZN7android7DrmUtil9getDrmKeyEv(void);

/* Symbol: _ZN7android12Cta5FileUtil10nettohostlEj */
/* Demangled: android::Cta5FileUtil::nettohostl(unsigned int) */
int _ZN7android12Cta5FileUtil10nettohostlEj(void);

/* Symbol: _ZN7android7KeyInfoC2Ev */
/* Demangled: android::KeyInfo::KeyInfo() */
int _ZN7android7KeyInfoC2Ev(void);

/* Symbol: _ZN9mkvparser6TracksC1EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Tracks::Tracks(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser6TracksC1EPNS_7SegmentExxxx(void);

/* Symbol: _ZNK9mkvparser7Segment8GetFirstEv */
/* Demangled: mkvparser::Segment::GetFirst() const */
int _ZNK9mkvparser7Segment8GetFirstEv(void);

/* Symbol: _ZNK9mkvparser8Chapters7Edition7GetAtomEi */
/* Demangled: mkvparser::Chapters::Edition::GetAtom(int) const */
int _ZNK9mkvparser8Chapters7Edition7GetAtomEi(void);

/* Symbol: _ZN7android14DrmRequestType15KEY_CTA5_NEWKEYE */
/* Demangled: android::DrmRequestType::KEY_CTA5_NEWKEY */
extern void* _ZN7android14DrmRequestType15KEY_CTA5_NEWKEYE;

/* Symbol: _ZN7android24Cta5CommonMultimediaFile17recoverCipherDataEixxxx */
/* Demangled: android::Cta5CommonMultimediaFile::recoverCipherData(int, long long, long long, long long, long long) */
int _ZN7android24Cta5CommonMultimediaFile17recoverCipherDataEixxxx(void);

/* Symbol: _ZN7android12DrmInfoEventC2EiiRKNS_7String8E */
/* Demangled: android::DrmInfoEvent::DrmInfoEvent(int, int, android::String8 const&) */
int _ZN7android12DrmInfoEventC2EiiRKNS_7String8E(void);

/* Symbol: _ZN9mkvparser10BlockEntryD0Ev */
/* Demangled: mkvparser::BlockEntry::~BlockEntry() */
int _ZN9mkvparser10BlockEntryD0Ev(void);

/* Symbol: _ZNK9mkvparser5Track18GetCodecNameAsUTF8Ev */
/* Demangled: mkvparser::Track::GetCodecNameAsUTF8() const */
int _ZNK9mkvparser5Track18GetCodecNameAsUTF8Ev(void);

/* Symbol: _ZNK9mkvparser5Track8EOSBlock8GetBlockEv */
/* Demangled: mkvparser::Track::EOSBlock::GetBlock() const */
int _ZNK9mkvparser5Track8EOSBlock8GetBlockEv(void);

/* Symbol: _ZNK9mkvparser6Tracks14GetTracksCountEv */
/* Demangled: mkvparser::Tracks::GetTracksCount() const */
int _ZNK9mkvparser6Tracks14GetTracksCountEv(void);

/* Symbol: _ZN7android10DrmMtkUtil16getContentLengthEPNS_13DecryptHandleEPNS_16DrmManagerClientE */
/* Demangled: android::DrmMtkUtil::getContentLength(android::DecryptHandle*, android::DrmManagerClient*) */
int _ZN7android10DrmMtkUtil16getContentLengthEPNS_13DecryptHandleEPNS_16DrmManagerClientE(void);

/* Symbol: _ZN7android14DrmRequestType8KEY_DATAE */
/* Demangled: android::DrmRequestType::KEY_DATA */
extern void* _ZN7android14DrmRequestType8KEY_DATAE;

/* Symbol: _ZN7android11Cta5FLVFile12parseHeadersEi */
/* Demangled: android::Cta5FLVFile::parseHeaders(int) */
int _ZN7android11Cta5FLVFile12parseHeadersEi(void);

/* Symbol: _ZNK9mkvparser4Cues8GetFirstEv */
/* Demangled: mkvparser::Cues::GetFirst() const */
int _ZNK9mkvparser4Cues8GetFirstEv(void);

/* Symbol: _ZN7android12CryptoHelper10doCryptionEPhiS1_RiS1_b */
/* Demangled: android::CryptoHelper::doCryption(unsigned char*, int, unsigned char*, int&, unsigned char*, bool) */
int _ZN7android12CryptoHelper10doCryptionEPhiS1_RiS1_b(void);

/* Symbol: _ZN7android14DrmRequestType10KEY_DATA_1E */
/* Demangled: android::DrmRequestType::KEY_DATA_1 */
extern void* _ZN7android14DrmRequestType10KEY_DATA_1E;

/* Symbol: _ZN7android8Cta5FileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5File::Cta5File(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android8Cta5FileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser5TrackC1EPNS_7SegmentExx */
/* Demangled: mkvparser::Track::Track(mkvparser::Segment*, long long, long long) */
int _ZN9mkvparser5TrackC1EPNS_7SegmentExx(void);

/* Symbol: _ZN7android14DrmRequestType17KEY_CTA5_RAW_MIMEE */
/* Demangled: android::DrmRequestType::KEY_CTA5_RAW_MIME */
extern void* _ZN7android14DrmRequestType17KEY_CTA5_RAW_MIMEE;

/* Symbol: _ZN7android7KeyInfo14restoreKeyInfoENS_7String8E */
/* Demangled: android::KeyInfo::restoreKeyInfo(android::String8) */
int _ZN7android7KeyInfo14restoreKeyInfoENS_7String8E(void);

/* Symbol: _ZN7android8Cta5File17getClearHeaderLenEv */
/* Demangled: android::Cta5File::getClearHeaderLen() */
int _ZN7android8Cta5File17getClearHeaderLenEv(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil25isExistedInMultiMediaListERKNS_7String8E */
/* Demangled: android::DrmCtaMultiMediaUtil::isExistedInMultiMediaList(android::String8 const&) */
int _ZN7android20DrmCtaMultiMediaUtil25isExistedInMultiMediaListERKNS_7String8E(void);

/* Symbol: _ZN7android11Cta5WAVFileC2EiNS_7String8E */
/* Demangled: android::Cta5WAVFile::Cta5WAVFile(int, android::String8) */
int _ZN7android11Cta5WAVFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser7Segment11LoadClusterERxRl */
/* Demangled: mkvparser::Segment::LoadCluster(long long&, long&) */
int _ZN9mkvparser7Segment11LoadClusterERxRl(void);

/* Symbol: _ZNK9mkvparser11SimpleBlock7GetKindEv */
/* Demangled: mkvparser::SimpleBlock::GetKind() const */
int _ZNK9mkvparser11SimpleBlock7GetKindEv(void);

/* Symbol: _ZN7android10DrmCtaUtil19getErrorCallbackMsgENS_7String8ES1_ */
/* Demangled: android::DrmCtaUtil::getErrorCallbackMsg(android::String8, android::String8) */
int _ZN7android10DrmCtaUtil19getErrorCallbackMsgENS_7String8ES1_(void);

/* Symbol: _ZN7android12Cta5FileUtil9md5DigestEPKhjPh */
/* Demangled: android::Cta5FileUtil::md5Digest(unsigned char const*, unsigned int, unsigned char*) */
int _ZN7android12Cta5FileUtil9md5DigestEPKhjPh(void);

/* Symbol: _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::Cta5CommonMultimediaFile::Header*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK9mkvparser5Track6GetUidEv */
/* Demangled: mkvparser::Track::GetUid() const */
int _ZNK9mkvparser5Track6GetUidEv(void);

/* Symbol: _ZN7android7DrmUtil14CreateMulvPathEPc */
/* Demangled: android::DrmUtil::CreateMulvPath(char*) */
int _ZN7android7DrmUtil14CreateMulvPathEPc(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile11cipherPreadEiPvixxx */
/* Demangled: android::Cta5CommonMultimediaFile::cipherPread(int, void*, int, long long, long long, long long) */
int _ZN7android24Cta5CommonMultimediaFile11cipherPreadEiPvixxx(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile22getCtaMultimediaHeaderEv */
/* Demangled: android::Cta5CommonMultimediaFile::getCtaMultimediaHeader() */
int _ZN7android24Cta5CommonMultimediaFile22getCtaMultimediaHeaderEv(void);

/* Symbol: _ZN7android10ByteBufferC2EPKc */
/* Demangled: android::ByteBuffer::ByteBuffer(char const*) */
int _ZN7android10ByteBufferC2EPKc(void);

/* Symbol: _ZN7android6DrmDef24PATH_CONSTRAINT_INTERVALE */
/* Demangled: android::DrmDef::PATH_CONSTRAINT_INTERVAL */
extern void* _ZN7android6DrmDef24PATH_CONSTRAINT_INTERVALE;

/* Symbol: _ZN7android11Cta5AVIFile12parseHeadersEi */
/* Demangled: android::Cta5AVIFile::parseHeaders(int) */
int _ZN7android11Cta5AVIFile12parseHeadersEi(void);

/* Symbol: _ZN9mkvparser5MatchEPNS_10IMkvReaderERxmS2_ */
/* Demangled: mkvparser::Match(mkvparser::IMkvReader*, long long&, unsigned long, long long&) */
int _ZN9mkvparser5MatchEPNS_10IMkvReaderERxmS2_(void);

/* Symbol: _ZN9mkvparser7Segment14CreateInstanceEPNS_10IMkvReaderExRPS0_ */
/* Demangled: mkvparser::Segment::CreateInstance(mkvparser::IMkvReader*, long long, mkvparser::Segment*&) */
int _ZN9mkvparser7Segment14CreateInstanceEPNS_10IMkvReaderExRPS0_(void);

/* Symbol: _ZN7android10DrmMetaKey13META_KEY_MIMEE */
/* Demangled: android::DrmMetaKey::META_KEY_MIME */
extern void* _ZN7android10DrmMetaKey13META_KEY_MIMEE;

/* Symbol: _ZN7android10DrmCtaUtil13getPathFromFdEi */
/* Demangled: android::DrmCtaUtil::getPathFromFd(int) */
int _ZN7android10DrmCtaUtil13getPathFromFdEi(void);

/* Symbol: _ZN7android8Cta5FileD2Ev */
/* Demangled: android::Cta5File::~Cta5File() */
int _ZN7android8Cta5FileD2Ev(void);

/* Symbol: _ZN9mkvparser10EBMLHeaderD2Ev */
/* Demangled: mkvparser::EBMLHeader::~EBMLHeader() */
int _ZN9mkvparser10EBMLHeaderD2Ev(void);

/* Symbol: _ZN7android10ByteBufferC1Ev */
/* Demangled: android::ByteBuffer::ByteBuffer() */
int _ZN7android10ByteBufferC1Ev(void);

/* Symbol: _ZN7android6DrmDef14CTA5_KEY_ERRORE */
/* Demangled: android::DrmDef::CTA5_KEY_ERROR */
extern void* _ZN7android6DrmDef14CTA5_KEY_ERRORE;

/* Symbol: _ZTVN7android14Cta5NormalFileE */
/* Demangled: vtable for android::Cta5NormalFile */
extern void* _ZTVN7android14Cta5NormalFileE;

/* Symbol: _ZN9mkvparser15ContentEncoding17ContentEncryptionC2Ev */
/* Demangled: mkvparser::ContentEncoding::ContentEncryption::ContentEncryption() */
int _ZN9mkvparser15ContentEncoding17ContentEncryptionC2Ev(void);

/* Symbol: _ZN9mkvparser4CuesC1EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Cues::Cues(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser4CuesC1EPNS_7SegmentExxxx(void);

/* Symbol: _ZNK9mkvparser5Track9GetNumberEv */
/* Demangled: mkvparser::Track::GetNumber() const */
int _ZNK9mkvparser5Track9GetNumberEv(void);

/* Symbol: _ZN7android6DrmDef18PLUGIN_DESCRIPTIONE */
/* Demangled: android::DrmDef::PLUGIN_DESCRIPTION */
extern void* _ZN7android6DrmDef18PLUGIN_DESCRIPTIONE;

/* Symbol: _ZN7android12Cta5MPEGFile12parseHeadersEi */
/* Demangled: android::Cta5MPEGFile::parseHeaders(int) */
int _ZN7android12Cta5MPEGFile12parseHeadersEi(void);

/* Symbol: _ZNK9mkvparser10AudioTrack11GetBitDepthEv */
/* Demangled: mkvparser::AudioTrack::GetBitDepth() const */
int _ZNK9mkvparser10AudioTrack11GetBitDepthEv(void);

/* Symbol: _ZNK9mkvparser5Block11IsInvisibleEv */
/* Demangled: mkvparser::Block::IsInvisible() const */
int _ZNK9mkvparser5Block11IsInvisibleEv(void);

/* Symbol: _ZNK9mkvparser8Chapters10GetEditionEi */
/* Demangled: mkvparser::Chapters::GetEdition(int) const */
int _ZNK9mkvparser8Chapters10GetEditionEi(void);

/* Symbol: _ZN7android12CryptoHelper12cipherKeyLenENS0_6CIPHERE */
/* Demangled: android::CryptoHelper::cipherKeyLen(android::CryptoHelper::CIPHER) */
int _ZN7android12CryptoHelper12cipherKeyLenENS0_6CIPHERE(void);

/* Symbol: _ZN7android12Cta5FileUtil13getPathFromFdEi */
/* Demangled: android::Cta5FileUtil::getPathFromFd(int) */
int _ZN7android12Cta5FileUtil13getPathFromFdEi(void);

/* Symbol: _ZN7android14Cta5FileHeader17getClearHeaderLenEv */
/* Demangled: android::Cta5FileHeader::getClearHeaderLen() */
int _ZN7android14Cta5FileHeader17getClearHeaderLenEv(void);

/* Symbol: _ZTVN7android6VectorIxEE */
/* Demangled: vtable for android::Vector<long long> */
extern void* _ZTVN7android6VectorIxEE;

/* Symbol: _ZN7android10ByteBufferC2EPKcj */
/* Demangled: android::ByteBuffer::ByteBuffer(char const*, unsigned int) */
int _ZN7android10ByteBufferC2EPKcj(void);

/* Symbol: _ZN7android14CipherFileUtil14CipherFileDumpENS_7String8EiiiRNS_12CryptoHelperE */
/* Demangled: android::CipherFileUtil::CipherFileDump(android::String8, int, int, int, android::CryptoHelper&) */
int _ZN7android14CipherFileUtil14CipherFileDumpENS_7String8EiiiRNS_12CryptoHelperE(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile19getOriginalMimetypeEiRKNS_7String8E */
/* Demangled: android::Cta5CommonMultimediaFile::getOriginalMimetype(int, android::String8 const&) */
int _ZN7android24Cta5CommonMultimediaFile19getOriginalMimetypeEiRKNS_7String8E(void);

/* Symbol: _ZN7android16Cta5MatroskaFileC2EiNS_7String8E */
/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(int, android::String8) */
int _ZN7android16Cta5MatroskaFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser8SeekHeadD1Ev */
/* Demangled: mkvparser::SeekHead::~SeekHead() */
int _ZN9mkvparser8SeekHeadD1Ev(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile15getCipherHeaderEx */
/* Demangled: android::Cta5CommonMultimediaFile::getCipherHeader(long long) */
int _ZN7android24Cta5CommonMultimediaFile15getCipherHeaderEx(void);

/* Symbol: _ZN9mkvparser8Chapters7DisplayD1Ev */
/* Demangled: mkvparser::Chapters::Display::~Display() */
int _ZN9mkvparser8Chapters7DisplayD1Ev(void);

/* Symbol: _ZN7android6DrmDef29CTA5_MULTI_MEDIA_ENCRYPT_DONEE */
/* Demangled: android::DrmDef::CTA5_MULTI_MEDIA_ENCRYPT_DONE */
extern void* _ZN7android6DrmDef29CTA5_MULTI_MEDIA_ENCRYPT_DONEE;

/* Symbol: _ZN7android8Cta5File10isKeyValidENS_7String8E */
/* Demangled: android::Cta5File::isKeyValid(android::String8) */
int _ZN7android8Cta5File10isKeyValidENS_7String8E(void);

/* Symbol: _ZN7android12CryptoHelperD1Ev */
/* Demangled: android::CryptoHelper::~CryptoHelper() */
int _ZN7android12CryptoHelperD1Ev(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile5preadEPvyx */
/* Demangled: android::Cta5CommonMultimediaFile::pread(void*, unsigned long long, long long) */
int _ZN7android24Cta5CommonMultimediaFile5preadEPvyx(void);

/* Symbol: _ZN7android11Cta5APEFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5APEFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZN9mkvparser10AudioTrackC2EPNS_7SegmentExx */
/* Demangled: mkvparser::AudioTrack::AudioTrack(mkvparser::Segment*, long long, long long) */
int _ZN9mkvparser10AudioTrackC2EPNS_7SegmentExx(void);

/* Symbol: _ZN7android14Cta5FileHeader13getContentLenEv */
/* Demangled: android::Cta5FileHeader::getContentLen() */
int _ZN7android14Cta5FileHeader13getContentLenEv(void);

/* Symbol: _ZTVN7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEEE */
/* Demangled: vtable for android::Vector<android::Cta5CommonMultimediaFile::Header*> */
extern void* _ZTVN7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEEE;

/* Symbol: _ZN9mkvparser5Track26ParseContentEncodingsEntryExx */
/* Demangled: mkvparser::Track::ParseContentEncodingsEntry(long long, long long) */
int _ZN9mkvparser5Track26ParseContentEncodingsEntryExx(void);

/* Symbol: _ZN7android6DrmDef9PATH_PLAYE */
/* Demangled: android::DrmDef::PATH_PLAY */
extern void* _ZN7android6DrmDef9PATH_PLAYE;

/* Symbol: _ZN7android14DrmRequestType22ACTION_CTA5_CLEARTOKENE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_CLEARTOKEN */
extern void* _ZN7android14DrmRequestType22ACTION_CTA5_CLEARTOKENE;

/* Symbol: _ZN7android14Cta5FileHeaderC1EiNS_7String8E */
/* Demangled: android::Cta5FileHeader::Cta5FileHeader(int, android::String8) */
int _ZN7android14Cta5FileHeaderC1EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser18ParseElementHeaderEPNS_10IMkvReaderERxxS2_S2_ */
/* Demangled: mkvparser::ParseElementHeader(mkvparser::IMkvReader*, long long&, long long, long long&, long long&) */
int _ZN9mkvparser18ParseElementHeaderEPNS_10IMkvReaderERxxS2_S2_(void);

/* Symbol: _ZN7android14CipherFileUtil13isEnableDebugEv */
/* Demangled: android::CipherFileUtil::isEnableDebug() */
int _ZN7android14CipherFileUtil13isEnableDebugEv(void);

/* Symbol: _ZN7android14DrmRequestType16KEY_DATA_EXTRA_2E */
/* Demangled: android::DrmRequestType::KEY_DATA_EXTRA_2 */
extern void* _ZN7android14DrmRequestType16KEY_DATA_EXTRA_2E;

/* Symbol: _ZN7android14Cta5NormalFile5preadEPvyx */
/* Demangled: android::Cta5NormalFile::pread(void*, unsigned long long, long long) */
int _ZN7android14Cta5NormalFile5preadEPvyx(void);

/* Symbol: _ZN7android11Cta5WAVFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5WAVFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN9mkvparser10EBMLHeaderC2Ev */
/* Demangled: mkvparser::EBMLHeader::EBMLHeader() */
int _ZN9mkvparser10EBMLHeaderC2Ev(void);

/* Symbol: _ZN9mkvparser4Tags3Tag5ParseEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Tags::Tag::Parse(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser4Tags3Tag5ParseEPNS_10IMkvReaderExx(void);

/* Symbol: _ZNK9mkvparser4Cues15PreloadCuePointERlx */
/* Demangled: mkvparser::Cues::PreloadCuePoint(long&, long long) const */
int _ZNK9mkvparser4Cues15PreloadCuePointERlx(void);

/* Symbol: _ZN7android11Cta5ASFFileC1EiNS_7String8E */
/* Demangled: android::Cta5ASFFile::Cta5ASFFile(int, android::String8) */
int _ZN7android11Cta5ASFFileC1EiNS_7String8E(void);

/* Symbol: _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::Cta5CommonMultimediaFile::Header*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android6DrmDef17getPermissionPathEi */
/* Demangled: android::DrmDef::getPermissionPath(int) */
int _ZN7android6DrmDef17getPermissionPathEi(void);

/* Symbol: _ZN7android7KeyInfoC1ERKS0_ */
/* Demangled: android::KeyInfo::KeyInfo(android::KeyInfo const&) */
int _ZN7android7KeyInfoC1ERKS0_(void);

/* Symbol: _ZN7android11Cta5APEFileC1EiNS_7String8E */
/* Demangled: android::Cta5APEFile::Cta5APEFile(int, android::String8) */
int _ZN7android11Cta5APEFileC1EiNS_7String8E(void);

/* Symbol: _ZNK7android10ByteBuffer6lengthEv */
/* Demangled: android::ByteBuffer::length() const */
int _ZNK7android10ByteBuffer6lengthEv(void);

/* Symbol: _ZN7android14Cta5FileHeader8HMAC_KEYE */
/* Demangled: android::Cta5FileHeader::HMAC_KEY */
extern void* _ZN7android14Cta5FileHeader8HMAC_KEYE;

/* Symbol: _ZN9mkvparser4Tags9SimpleTag4InitEv */
/* Demangled: mkvparser::Tags::SimpleTag::Init() */
int _ZN9mkvparser4Tags9SimpleTag4InitEv(void);

/* Symbol: _ZN7android12CryptoHelper18calc_cipher_lengthEi */
/* Demangled: android::CryptoHelper::calc_cipher_length(int) */
int _ZN7android12CryptoHelper18calc_cipher_lengthEi(void);

/* Symbol: _ZN7android6DrmDef13MTK_FLDCF_CIDE */
/* Demangled: android::DrmDef::MTK_FLDCF_CID */
extern void* _ZN7android6DrmDef13MTK_FLDCF_CIDE;

/* Symbol: _ZN7android12Cta5FileUtil9isDcfFileEi */
/* Demangled: android::Cta5FileUtil::isDcfFile(int) */
int _ZN7android12Cta5FileUtil9isDcfFileEi(void);

/* Symbol: _ZTVN7android11Cta5ASFFileE */
/* Demangled: vtable for android::Cta5ASFFile */
extern void* _ZTVN7android11Cta5ASFFileE;

/* Symbol: _ZN9mkvparser4CuesD2Ev */
/* Demangled: mkvparser::Cues::~Cues() */
int _ZN9mkvparser4CuesD2Ev(void);

/* Symbol: _ZNK9mkvparser5Track8EOSBlock7GetKindEv */
/* Demangled: mkvparser::Track::EOSBlock::GetKind() const */
int _ZNK9mkvparser5Track8EOSBlock7GetKindEv(void);

/* Symbol: _ZN7android8Cta5File5preadEPvyx */
/* Demangled: android::Cta5File::pread(void*, unsigned long long, long long) */
int _ZN7android8Cta5File5preadEPvyx(void);

/* Symbol: _ZN9mkvparser10Projection16kValueNotPresentE */
/* Demangled: mkvparser::Projection::kValueNotPresent */
extern void* _ZN9mkvparser10Projection16kValueNotPresentE;

/* Symbol: _ZN9mkvparser15UnserializeUIntEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::UnserializeUInt(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser15UnserializeUIntEPNS_10IMkvReaderExx(void);

/* Symbol: _ZN9mkvparser8Chapters7DisplayC1Ev */
/* Demangled: mkvparser::Chapters::Display::Display() */
int _ZN9mkvparser8Chapters7DisplayC1Ev(void);

/* Symbol: _ZNK9mkvparser10VideoTrack4SeekExRPKNS_10BlockEntryE */
/* Demangled: mkvparser::VideoTrack::Seek(long long, mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser10VideoTrack4SeekExRPKNS_10BlockEntryE(void);

/* Symbol: _ZNK9mkvparser4Cues8GetBlockEPKNS_8CuePointEPKNS1_13TrackPositionE */
/* Demangled: mkvparser::Cues::GetBlock(mkvparser::CuePoint const*, mkvparser::CuePoint::TrackPosition const*) const */
int _ZNK9mkvparser4Cues8GetBlockEPKNS_8CuePointEPKNS1_13TrackPositionE(void);

/* Symbol: _ZNK9mkvparser5Track9GetLacingEv */
/* Demangled: mkvparser::Track::GetLacing() const */
int _ZNK9mkvparser5Track9GetLacingEv(void);

/* Symbol: _ZNK9mkvparser7Cluster8GetEntryERKNS_8CuePointERKNS1_13TrackPositionE */
/* Demangled: mkvparser::Cluster::GetEntry(mkvparser::CuePoint const&, mkvparser::CuePoint::TrackPosition const&) const */
int _ZNK9mkvparser7Cluster8GetEntryERKNS_8CuePointERKNS1_13TrackPositionE(void);

/* Symbol: _ZN7android7DrmUtil4hashEPci */
/* Demangled: android::DrmUtil::hash(char*, int) */
int _ZN7android7DrmUtil4hashEPci(void);

/* Symbol: _ZN7android14Cta5FileHeader11getMimeTypeEv */
/* Demangled: android::Cta5FileHeader::getMimeType() */
int _ZN7android14Cta5FileHeader11getMimeTypeEv(void);

/* Symbol: _ZN7android8Cta5File11getMimeTypeEv */
/* Demangled: android::Cta5File::getMimeType() */
int _ZN7android8Cta5File11getMimeTypeEv(void);

/* Symbol: _ZN7android16Cta5MatroskaFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android16Cta5MatroskaFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser10EBMLHeader4InitEv */
/* Demangled: mkvparser::EBMLHeader::Init() */
int _ZN9mkvparser10EBMLHeader4InitEv(void);

/* Symbol: _ZN7android6DrmDef16MIME_DRM_CONTENTE */
/* Demangled: android::DrmDef::MIME_DRM_CONTENT */
extern void* _ZN7android6DrmDef16MIME_DRM_CONTENTE;

/* Symbol: _ZN7android14Cta5FileHeader19getOriginalMimeTypeEv */
/* Demangled: android::Cta5FileHeader::getOriginalMimeType() */
int _ZN7android14Cta5FileHeader19getOriginalMimeTypeEv(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile25verifyCtaMultimediaHeaderEi */
/* Demangled: android::Cta5CommonMultimediaFile::verifyCtaMultimediaHeader(int) */
int _ZN7android24Cta5CommonMultimediaFile25verifyCtaMultimediaHeaderEi(void);

/* Symbol: _ZN7android11Cta5AVIFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5AVIFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser7Cluster11GetTimeCodeEv */
/* Demangled: mkvparser::Cluster::GetTimeCode() const */
int _ZNK9mkvparser7Cluster11GetTimeCodeEv(void);

/* Symbol: _ZN7android7DrmUtil8checkDirENS_7String8E */
/* Demangled: android::DrmUtil::checkDir(android::String8) */
int _ZN7android7DrmUtil8checkDirENS_7String8E(void);

/* Symbol: _ZN7android14DrmRequestType12KEY_CTA5_KEYE */
/* Demangled: android::DrmRequestType::KEY_CTA5_KEY */
extern void* _ZN7android14DrmRequestType12KEY_CTA5_KEYE;

/* Symbol: _ZN7android14DrmRequestType32ACTION_CHECK_RIGHTS_STATUS_BY_FDE */
/* Demangled: android::DrmRequestType::ACTION_CHECK_RIGHTS_STATUS_BY_FD */
extern void* _ZN7android14DrmRequestType32ACTION_CHECK_RIGHTS_STATUS_BY_FDE;

/* Symbol: _ZN7android14Cta5FileHeader13getContentKeyEv */
/* Demangled: android::Cta5FileHeader::getContentKey() */
int _ZN7android14Cta5FileHeader13getContentKeyEv(void);

/* Symbol: _ZN7android8Cta5File5getFdEv */
/* Demangled: android::Cta5File::getFd() */
int _ZN7android8Cta5File5getFdEv(void);

/* Symbol: _ZTVN7android24Cta5CommonMultimediaFileE */
/* Demangled: vtable for android::Cta5CommonMultimediaFile */
extern void* _ZTVN7android24Cta5CommonMultimediaFileE;

/* Symbol: _ZN9mkvparser15ContentEncoding25ParseContentEncodingEntryExxPNS_10IMkvReaderE */
/* Demangled: mkvparser::ContentEncoding::ParseContentEncodingEntry(long long, long long, mkvparser::IMkvReader*) */
int _ZN9mkvparser15ContentEncoding25ParseContentEncodingEntryExxPNS_10IMkvReaderE(void);

/* Symbol: _ZN7android6DrmDef12PATH_DISPLAYE */
/* Demangled: android::DrmDef::PATH_DISPLAY */
extern void* _ZN7android6DrmDef12PATH_DISPLAYE;

/* Symbol: _ZN9mkvparser14UnserializeIntEPNS_10IMkvReaderExxRx */
/* Demangled: mkvparser::UnserializeInt(mkvparser::IMkvReader*, long long, long long, long long&) */
int _ZN9mkvparser14UnserializeIntEPNS_10IMkvReaderExxRx(void);

/* Symbol: _ZN7android10DrmCtaUtil16isTrustCtaClientEi */
/* Demangled: android::DrmCtaUtil::isTrustCtaClient(int) */
int _ZN7android10DrmCtaUtil16isTrustCtaClientEi(void);

/* Symbol: _ZTVN7android11Cta5AVIFileE */
/* Demangled: vtable for android::Cta5AVIFile */
extern void* _ZTVN7android11Cta5AVIFileE;

/* Symbol: _ZN9mkvparser4Tags9SimpleTagD1Ev */
/* Demangled: mkvparser::Tags::SimpleTag::~SimpleTag() */
int _ZN9mkvparser4Tags9SimpleTagD1Ev(void);

/* Symbol: _ZN9mkvparser5TrackD1Ev */
/* Demangled: mkvparser::Track::~Track() */
int _ZN9mkvparser5TrackD1Ev(void);

/* Symbol: _ZNK9mkvparser8Chapters7Edition12GetAtomCountEv */
/* Demangled: mkvparser::Chapters::Edition::GetAtomCount() const */
int _ZNK9mkvparser8Chapters7Edition12GetAtomCountEv(void);

/* Symbol: _ZN9mkvparser10VideoTrackD0Ev */
/* Demangled: mkvparser::VideoTrack::~VideoTrack() */
int _ZN9mkvparser10VideoTrackD0Ev(void);

/* Symbol: _ZN9mkvparser7Cluster15HasBlockEntriesEPKNS_7SegmentExRxRl */
/* Demangled: mkvparser::Cluster::HasBlockEntries(mkvparser::Segment const*, long long, long long&, long&) */
int _ZN9mkvparser7Cluster15HasBlockEntriesEPKNS_7SegmentExRxRl(void);

/* Symbol: _ZN7android10ByteBuffer5setToEPKc */
/* Demangled: android::ByteBuffer::setTo(char const*) */
int _ZN7android10ByteBuffer5setToEPKc(void);

/* Symbol: _ZN7android14Cta5FileHeader12writeFileSigEi */
/* Demangled: android::Cta5FileHeader::writeFileSig(int) */
int _ZN7android14Cta5FileHeader12writeFileSigEi(void);

/* Symbol: _ZN7android11Cta5WAVFileC1EiNS_7String8E */
/* Demangled: android::Cta5WAVFile::Cta5WAVFile(int, android::String8) */
int _ZN7android11Cta5WAVFileC1EiNS_7String8E(void);

/* Symbol: _ZNK7android6VectorIxE12do_constructEPvj */
/* Demangled: android::Vector<long long>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIxE12do_constructEPvj(void);

/* Symbol: _ZN9mkvparser11SegmentInfoD1Ev */
/* Demangled: mkvparser::SegmentInfo::~SegmentInfo() */
int _ZN9mkvparser11SegmentInfoD1Ev(void);

/* Symbol: _ZN9mkvparser15ContentEncoding18ContentCompressionD2Ev */
/* Demangled: mkvparser::ContentEncoding::ContentCompression::~ContentCompression() */
int _ZN9mkvparser15ContentEncoding18ContentCompressionD2Ev(void);

/* Symbol: _ZN7android7DrmUtil14checkExistenceENS_7String8E */
/* Demangled: android::DrmUtil::checkExistence(android::String8) */
int _ZN7android7DrmUtil14checkExistenceENS_7String8E(void);

/* Symbol: ctaType */
/* Demangled: ctaType */
extern void* ctaType;

/* Symbol: _ZN9mkvparser8ChaptersD1Ev */
/* Demangled: mkvparser::Chapters::~Chapters() */
int _ZN9mkvparser8ChaptersD1Ev(void);

/* Symbol: _ZNK9mkvparser4Tags6GetTagEi */
/* Demangled: mkvparser::Tags::GetTag(int) const */
int _ZNK9mkvparser4Tags6GetTagEi(void);

/* Symbol: _ZN7android10ByteBufferC2EPc */
/* Demangled: android::ByteBuffer::ByteBuffer(char*) */
int _ZN7android10ByteBufferC2EPc(void);

/* Symbol: _ZN7android12Cta5FileUtil10hosttonetsEt */
/* Demangled: android::Cta5FileUtil::hosttonets(unsigned short) */
int _ZN7android12Cta5FileUtil10hosttonetsEt(void);

/* Symbol: _ZN7android7KeyInfo12calculateCRCEv */
/* Demangled: android::KeyInfo::calculateCRC() */
int _ZN7android7KeyInfo12calculateCRCEv(void);

/* Symbol: _ZN9mkvparser10Projection5ParseEPNS_10IMkvReaderExxPPS0_ */
/* Demangled: mkvparser::Projection::Parse(mkvparser::IMkvReader*, long long, long long, mkvparser::Projection**) */
int _ZN9mkvparser10Projection5ParseEPNS_10IMkvReaderExxPPS0_(void);

/* Symbol: _ZNK9mkvparser7Cluster8GetEntryElRPKNS_10BlockEntryE */
/* Demangled: mkvparser::Cluster::GetEntry(long, mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser7Cluster8GetEntryElRPKNS_10BlockEntryE(void);

/* Symbol: _ZN7android6DrmDef17CTA5_CANCEL_ERRORE */
/* Demangled: android::DrmDef::CTA5_CANCEL_ERROR */
extern void* _ZN7android6DrmDef17CTA5_CANCEL_ERRORE;

/* Symbol: _ZN7android14Cta5FileHeaderC1ENS_7String8EyS1_b */
/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long long, android::String8, bool) */
int _ZN7android14Cta5FileHeaderC1ENS_7String8EyS1_b(void);

/* Symbol: _ZN7android8Cta5File11setCipherFdEi */
/* Demangled: android::Cta5File::setCipherFd(int) */
int _ZN7android8Cta5File11setCipherFdEi(void);

/* Symbol: _ZN7android8Cta5FileC2ENS_7String8ES1_S1_yS1_b */
/* Demangled: android::Cta5File::Cta5File(android::String8, android::String8, android::String8, unsigned long long, android::String8, bool) */
int _ZN7android8Cta5FileC2ENS_7String8ES1_S1_yS1_b(void);

/* Symbol: _ZN9mkvparser4TagsC1EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Tags::Tags(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser4TagsC1EPNS_7SegmentExxxx(void);

/* Symbol: _ZN9mkvparser7Segment11DoParseNextERPKNS_7ClusterERxRl */
/* Demangled: mkvparser::Segment::DoParseNext(mkvparser::Cluster const*&, long long&, long&) */
int _ZN9mkvparser7Segment11DoParseNextERPKNS_7ClusterERxRl(void);

/* Symbol: _ZNK9mkvparser7Cluster14GetElementSizeEv */
/* Demangled: mkvparser::Cluster::GetElementSize() const */
int _ZNK9mkvparser7Cluster14GetElementSizeEv(void);

/* Symbol: _ZNK9mkvparser7Cluster8GetFirstERPKNS_10BlockEntryE */
/* Demangled: mkvparser::Cluster::GetFirst(mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser7Cluster8GetFirstERPKNS_10BlockEntryE(void);

/* Symbol: _ZN7android14DrmRequestType10KEY_DATA_2E */
/* Demangled: android::DrmRequestType::KEY_DATA_2 */
extern void* _ZN7android14DrmRequestType10KEY_DATA_2E;

/* Symbol: _ZN7android11Cta5FLVFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5FLVFile::Cta5FLVFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5FLVFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZNK7android6VectorIxE8do_splatEPvPKvj */
/* Demangled: android::Vector<long long>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE8do_splatEPvPKvj(void);

/* Symbol: _ZNK9mkvparser15ContentEncoding20GetEncryptionByIndexEm */
/* Demangled: mkvparser::ContentEncoding::GetEncryptionByIndex(unsigned long) const */
int _ZNK9mkvparser15ContentEncoding20GetEncryptionByIndexEm(void);

/* Symbol: _ZNK9mkvparser7Segment11GetSeekHeadEv */
/* Demangled: mkvparser::Segment::GetSeekHead() const */
int _ZNK9mkvparser7Segment11GetSeekHeadEv(void);

/* Symbol: _ZN7android6DrmDef14getMetaDataStrEi */
/* Demangled: android::DrmDef::getMetaDataStr(int) */
int _ZN7android6DrmDef14getMetaDataStrEi(void);

/* Symbol: _ZN7android11Cta5WAVFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5WAVFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser5MatchEPNS_10IMkvReaderERxmRPhRj */
/* Demangled: mkvparser::Match(mkvparser::IMkvReader*, long long&, unsigned long, unsigned char*&, unsigned int&) */
int _ZN9mkvparser5MatchEPNS_10IMkvReaderERxmRPhRj(void);

/* Symbol: _ZN9mkvparser6TracksD2Ev */
/* Demangled: mkvparser::Tracks::~Tracks() */
int _ZN9mkvparser6TracksD2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7Display5ClearEv */
/* Demangled: mkvparser::Chapters::Display::Clear() */
int _ZN9mkvparser8Chapters7Display5ClearEv(void);

/* Symbol: _ZN9mkvparser8Chapters7Display5ParseEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Chapters::Display::Parse(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser8Chapters7Display5ParseEPNS_10IMkvReaderExx(void);

/* Symbol: _ZNK9mkvparser7Segment8GetCountEv */
/* Demangled: mkvparser::Segment::GetCount() const */
int _ZNK9mkvparser7Segment8GetCountEv(void);

/* Symbol: _ZN7android8Cta5File17getCta5FileHeaderEv */
/* Demangled: android::Cta5File::getCta5FileHeader() */
int _ZN7android8Cta5File17getCta5FileHeaderEv(void);

/* Symbol: _ZNK9mkvparser5Track8VetEntryEPKNS_10BlockEntryE */
/* Demangled: mkvparser::Track::VetEntry(mkvparser::BlockEntry const*) const */
int _ZNK9mkvparser5Track8VetEntryEPKNS_10BlockEntryE(void);

/* Symbol: _ZN7android12Cta5FileUtil16hmac128Md5DigestEPKhS2_jPh */
/* Demangled: android::Cta5FileUtil::hmac128Md5Digest(unsigned char const*, unsigned char const*, unsigned int, unsigned char*) */
int _ZN7android12Cta5FileUtil16hmac128Md5DigestEPKhS2_jPh(void);

/* Symbol: _ZN7android20PartialEncryptHeader4dumpEv */
/* Demangled: android::PartialEncryptHeader::dump() */
int _ZN7android20PartialEncryptHeader4dumpEv(void);

/* Symbol: _ZN9mkvparser5Block5ParseEPKNS_7ClusterE */
/* Demangled: mkvparser::Block::Parse(mkvparser::Cluster const*) */
int _ZN9mkvparser5Block5ParseEPKNS_7ClusterE(void);

/* Symbol: _ZN9mkvparser7Cluster16ParseSimpleBlockExRxRl */
/* Demangled: mkvparser::Cluster::ParseSimpleBlock(long long, long long&, long&) */
int _ZN9mkvparser7Cluster16ParseSimpleBlockExRxRl(void);

/* Symbol: _ZNK9mkvparser5Track25GetContentEncodingByIndexEm */
/* Demangled: mkvparser::Track::GetContentEncodingByIndex(unsigned long) const */
int _ZNK9mkvparser5Track25GetContentEncodingByIndexEm(void);

/* Symbol: _ZN7android7DrmUtil11getTZOffsetEv */
/* Demangled: android::DrmUtil::getTZOffset() */
int _ZN7android7DrmUtil11getTZOffsetEv(void);

/* Symbol: _ZN7android14DrmRequestType10KEY_ACTIONE */
/* Demangled: android::DrmRequestType::KEY_ACTION */
extern void* _ZN7android14DrmRequestType10KEY_ACTIONE;

/* Symbol: _ZN7android14Cta5NormalFile14readCipherFileEiPviiii */
/* Demangled: android::Cta5NormalFile::readCipherFile(int, void*, int, int, int, int) */
int _ZN7android14Cta5NormalFile14readCipherFileEiPviiii(void);

/* Symbol: _ZN7android16Cta5MatroskaFileC1EiNS_7String8E */
/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(int, android::String8) */
int _ZN7android16Cta5MatroskaFileC1EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser4Tags9SimpleTagC1Ev */
/* Demangled: mkvparser::Tags::SimpleTag::SimpleTag() */
int _ZN9mkvparser4Tags9SimpleTagC1Ev(void);

/* Symbol: _ZN7android10ByteBufferD2Ev */
/* Demangled: android::ByteBuffer::~ByteBuffer() */
int _ZN7android10ByteBufferD2Ev(void);

/* Symbol: _ZN7android12CryptoHelper9getKeyLenEv */
/* Demangled: android::CryptoHelper::getKeyLen() */
int _ZN7android12CryptoHelper9getKeyLenEv(void);

/* Symbol: _ZN7android14Cta5FileHeader18getCipherHeaderLenEv */
/* Demangled: android::Cta5FileHeader::getCipherHeaderLen() */
int _ZN7android14Cta5FileHeader18getCipherHeaderLenEv(void);

/* Symbol: _ZN7android8Cta5File17setClearHeaderLenEy */
/* Demangled: android::Cta5File::setClearHeaderLen(unsigned long long) */
int _ZN7android8Cta5File17setClearHeaderLenEy(void);

/* Symbol: _ZN7android12Cta5FLACFileC1EiNS_7String8E */
/* Demangled: android::Cta5FLACFile::Cta5FLACFile(int, android::String8) */
int _ZN7android12Cta5FLACFileC1EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser8ChaptersC1EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Chapters::Chapters(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser8ChaptersC1EPNS_7SegmentExxxx(void);

/* Symbol: _ZNK9mkvparser10VideoTrack13GetStereoModeEv */
/* Demangled: mkvparser::VideoTrack::GetStereoMode() const */
int _ZNK9mkvparser10VideoTrack13GetStereoModeEv(void);

/* Symbol: _ZN7android6DrmDef22PERMISSION_DISPLAY_STRE */
/* Demangled: android::DrmDef::PERMISSION_DISPLAY_STR */
extern void* _ZN7android6DrmDef22PERMISSION_DISPLAY_STRE;

/* Symbol: _ZN7android24Cta5CommonMultimediaFile13getContentPosEv */
/* Demangled: android::Cta5CommonMultimediaFile::getContentPos() */
int _ZN7android24Cta5CommonMultimediaFile13getContentPosEv(void);

/* Symbol: _ZN9mkvparser15ContentEncoding18ContentCompressionC2Ev */
/* Demangled: mkvparser::ContentEncoding::ContentCompression::ContentCompression() */
int _ZN9mkvparser15ContentEncoding18ContentCompressionC2Ev(void);

/* Symbol: _ZN7android8Cta5FileC2ENS_7String8EyS1_b */
/* Demangled: android::Cta5File::Cta5File(android::String8, unsigned long long, android::String8, bool) */
int _ZN7android8Cta5FileC2ENS_7String8EyS1_b(void);

/* Symbol: _ZN7android11Cta5APEFileC2EiNS_7String8E */
/* Demangled: android::Cta5APEFile::Cta5APEFile(int, android::String8) */
int _ZN7android11Cta5APEFileC2EiNS_7String8E(void);

/* Symbol: _ZNK9mkvparser5Track8GetFirstERPKNS_10BlockEntryE */
/* Demangled: mkvparser::Track::GetFirst(mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser5Track8GetFirstERPKNS_10BlockEntryE(void);

/* Symbol: _ZN7android10ByteBufferC1EPc */
/* Demangled: android::ByteBuffer::ByteBuffer(char*) */
int _ZN7android10ByteBufferC1EPc(void);

/* Symbol: _ZN7android10DrmMtkUtil14getContentSizeEPNS_13DecryptHandleE */
/* Demangled: android::DrmMtkUtil::getContentSize(android::DecryptHandle*) */
int _ZN7android10DrmMtkUtil14getContentSizeEPNS_13DecryptHandleE(void);

/* Symbol: _ZN7android11Cta5ASFFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5ASFFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser10BlockEntryD1Ev */
/* Demangled: mkvparser::BlockEntry::~BlockEntry() */
int _ZN9mkvparser10BlockEntryD1Ev(void);

/* Symbol: _ZN9mkvparser4Tags3Tag5ClearEv */
/* Demangled: mkvparser::Tags::Tag::Clear() */
int _ZN9mkvparser4Tags3Tag5ClearEv(void);

/* Symbol: _ZN9mkvparser7Segment9ParseNextEPKNS_7ClusterERS3_RxRl */
/* Demangled: mkvparser::Segment::ParseNext(mkvparser::Cluster const*, mkvparser::Cluster const*&, long long&, long&) */
int _ZN9mkvparser7Segment9ParseNextEPKNS_7ClusterERS3_RxRl(void);

/* Symbol: _ZNK9mkvparser4Tags11GetTagCountEv */
/* Demangled: mkvparser::Tags::GetTagCount() const */
int _ZNK9mkvparser4Tags11GetTagCountEv(void);

/* Symbol: _ZN7android11Cta5ASFFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5ASFFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser6Colour5ParseEPNS_10IMkvReaderExxPPS0_ */
/* Demangled: mkvparser::Colour::Parse(mkvparser::IMkvReader*, long long, long long, mkvparser::Colour**) */
int _ZN9mkvparser6Colour5ParseEPNS_10IMkvReaderExxPPS0_(void);

/* Symbol: _ZN7android6DrmDef13MTK_FL_HEADERE */
/* Demangled: android::DrmDef::MTK_FL_HEADER */
extern void* _ZN7android6DrmDef13MTK_FL_HEADERE;

/* Symbol: _ZNK9mkvparser11SimpleBlock8GetBlockEv */
/* Demangled: mkvparser::SimpleBlock::GetBlock() const */
int _ZNK9mkvparser11SimpleBlock8GetBlockEv(void);

/* Symbol: _ZN7android10DrmCtaUtil6notifyEPKNS_6VectorINS0_8ListenerEEENS_7String8E */
/* Demangled: android::DrmCtaUtil::notify(android::Vector<android::DrmCtaUtil::Listener> const*, android::String8) */
int _ZN7android10DrmCtaUtil6notifyEPKNS_6VectorINS0_8ListenerEEENS_7String8E(void);

/* Symbol: _ZN7android14Cta5FileHeader21setCipherHeaderOffsetEy */
/* Demangled: android::Cta5FileHeader::setCipherHeaderOffset(unsigned long long) */
int _ZN7android14Cta5FileHeader21setCipherHeaderOffsetEy(void);

/* Symbol: _ZN7android20PartialEncryptHeader21getCipherHeaderOffsetEv */
/* Demangled: android::PartialEncryptHeader::getCipherHeaderOffset() */
int _ZN7android20PartialEncryptHeader21getCipherHeaderOffsetEv(void);

/* Symbol: _ZN9mkvparser7Segment24DoLoadClusterUnknownSizeERxRl */
/* Demangled: mkvparser::Segment::DoLoadClusterUnknownSize(long long&, long&) */
int _ZN9mkvparser7Segment24DoLoadClusterUnknownSizeERxRl(void);

/* Symbol: _ZNK9mkvparser4Cues12LoadCuePointEv */
/* Demangled: mkvparser::Cues::LoadCuePoint() const */
int _ZNK9mkvparser4Cues12LoadCuePointEv(void);

/* Symbol: _ZN7android6DrmDef17MIME_RIGHTS_WBXMLE */
/* Demangled: android::DrmDef::MIME_RIGHTS_WBXML */
extern void* _ZN7android6DrmDef17MIME_RIGHTS_WBXMLE;

/* Symbol: _ZN7android14Cta5FileHeader17setClearHeaderLenEy */
/* Demangled: android::Cta5FileHeader::setClearHeaderLen(unsigned long long) */
int _ZN7android14Cta5FileHeader17setClearHeaderLenEy(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: _ZN9mkvparser15ContentEncoding31ParseContentEncAESSettingsEntryExxPNS_10IMkvReaderEPNS0_21ContentEncAESSettingsE */
/* Demangled: mkvparser::ContentEncoding::ParseContentEncAESSettingsEntry(long long, long long, mkvparser::IMkvReader*, mkvparser::ContentEncoding::ContentEncAESSettings*) */
int _ZN9mkvparser15ContentEncoding31ParseContentEncAESSettingsEntryExxPNS_10IMkvReaderEPNS0_21ContentEncAESSettingsE(void);

/* Symbol: _ZN7android11Cta5AVIFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5AVIFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom11GetStopTimeEPKS0_ */
/* Demangled: mkvparser::Chapters::Atom::GetStopTime(mkvparser::Chapters const*) const */
int _ZNK9mkvparser8Chapters4Atom11GetStopTimeEPKS0_(void);

/* Symbol: _ZN7android8Cta5File6getKeyEv */
/* Demangled: android::Cta5File::getKey() */
int _ZN7android8Cta5File6getKeyEv(void);

/* Symbol: _ZN7android15Cta5FileFactory12isMultiMediaENS_7String8E */
/* Demangled: android::Cta5FileFactory::isMultiMedia(android::String8) */
int _ZN7android15Cta5FileFactory12isMultiMediaENS_7String8E(void);

/* Symbol: _ZTVN7android11Cta5FLVFileE */
/* Demangled: vtable for android::Cta5FLVFile */
extern void* _ZTVN7android11Cta5FLVFileE;

/* Symbol: _ZN9mkvparser10VideoTrackC2EPNS_7SegmentExx */
/* Demangled: mkvparser::VideoTrack::VideoTrack(mkvparser::Segment*, long long, long long) */
int _ZN9mkvparser10VideoTrackC2EPNS_7SegmentExx(void);

/* Symbol: _ZNK9mkvparser11SegmentInfo19GetWritingAppAsUTF8Ev */
/* Demangled: mkvparser::SegmentInfo::GetWritingAppAsUTF8() const */
int _ZNK9mkvparser11SegmentInfo19GetWritingAppAsUTF8Ev(void);

/* Symbol: _ZN7android12CryptoHelperC2ENS0_6CIPHEREPhi */
/* Demangled: android::CryptoHelper::CryptoHelper(android::CryptoHelper::CIPHER, unsigned char*, int) */
int _ZN7android12CryptoHelperC2ENS0_6CIPHEREPhi(void);

/* Symbol: _ZN9mkvparser8Chapters4Atom12ParseDisplayEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Chapters::Atom::ParseDisplay(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser8Chapters4Atom12ParseDisplayEPNS_10IMkvReaderExx(void);

/* Symbol: _ZNK9mkvparser7Segment11DoneParsingEv */
/* Demangled: mkvparser::Segment::DoneParsing() const */
int _ZNK9mkvparser7Segment11DoneParsingEv(void);

/* Symbol: _ZN7android10ByteBufferC2Ev */
/* Demangled: android::ByteBuffer::ByteBuffer() */
int _ZN7android10ByteBufferC2Ev(void);

/* Symbol: _ZN9mkvparser4TagsD1Ev */
/* Demangled: mkvparser::Tags::~Tags() */
int _ZN9mkvparser4TagsD1Ev(void);

/* Symbol: _ZNK9mkvparser5Track4Info4CopyERS1_ */
/* Demangled: mkvparser::Track::Info::Copy(mkvparser::Track::Info&) const */
int _ZNK9mkvparser5Track4Info4CopyERS1_(void);

/* Symbol: _ZN7android6DrmDef14TOKEN_ENCODINGE */
/* Demangled: android::DrmDef::TOKEN_ENCODING */
extern void* _ZN7android6DrmDef14TOKEN_ENCODINGE;

/* Symbol: _ZN7android8Cta5File20isCta5MultimediaFileEi */
/* Demangled: android::Cta5File::isCta5MultimediaFile(int) */
int _ZN7android8Cta5File20isCta5MultimediaFileEi(void);

/* Symbol: _ZNK9mkvparser7Segment7GetTagsEv */
/* Demangled: mkvparser::Segment::GetTags() const */
int _ZNK9mkvparser7Segment7GetTagsEv(void);

/* Symbol: _ZN7android14CipherFileUtil6sDebugE */
/* Demangled: android::CipherFileUtil::sDebug */
extern void* _ZN7android14CipherFileUtil6sDebugE;

/* Symbol: _ZN7android7DrmUtil21base64_decrypt_bufferEPhS1_iRi */
/* Demangled: android::DrmUtil::base64_decrypt_buffer(unsigned char*, unsigned char*, int, int&) */
int _ZN7android7DrmUtil21base64_decrypt_bufferEPhS1_iRi(void);

/* Symbol: _ZN7android14DrmRequestType19ACTION_CTA5_DECRYPTE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_DECRYPT */
extern void* _ZN7android14DrmRequestType19ACTION_CTA5_DECRYPTE;

/* Symbol: _ZN7android7StrUtil6strrplEPcPKcS3_ */
/* Demangled: android::StrUtil::strrpl(char*, char const*, char const*) */
int _ZN7android7StrUtil6strrplEPcPKcS3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZN9mkvparser8SeekHeadD2Ev */
/* Demangled: mkvparser::SeekHead::~SeekHead() */
int _ZN9mkvparser8SeekHeadD2Ev(void);

/* Symbol: _ZNK9mkvparser5Track10GetCodecIdEv */
/* Demangled: mkvparser::Track::GetCodecId() const */
int _ZNK9mkvparser5Track10GetCodecIdEv(void);

/* Symbol: _ZNK7android12DrmInfoEvent7getTypeEv */
/* Demangled: android::DrmInfoEvent::getType() const */
int _ZNK7android12DrmInfoEvent7getTypeEv(void);

/* Symbol: _ZN9mkvparser8Chapters7DisplayD2Ev */
/* Demangled: mkvparser::Chapters::Display::~Display() */
int _ZN9mkvparser8Chapters7DisplayD2Ev(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil20MULTI_MEDIA_LIST_CNTE */
/* Demangled: android::DrmCtaMultiMediaUtil::MULTI_MEDIA_LIST_CNT */
extern void* _ZN7android20DrmCtaMultiMediaUtil20MULTI_MEDIA_LIST_CNTE;

/* Symbol: _ZN9mkvparser5BlockC1Exxx */
/* Demangled: mkvparser::Block::Block(long long, long long, long long) */
int _ZN9mkvparser5BlockC1Exxx(void);

/* Symbol: _ZNK9mkvparser10VideoTrack14GetDisplayUnitEv */
/* Demangled: mkvparser::VideoTrack::GetDisplayUnit() const */
int _ZNK9mkvparser10VideoTrack14GetDisplayUnitEv(void);

/* Symbol: _ZN7android6DrmDef6ST_DIRE */
/* Demangled: android::DrmDef::ST_DIR */
extern void* _ZN7android6DrmDef6ST_DIRE;

/* Symbol: _ZN7android7KeyInfo13changeKeyInfoENS_7String8E */
/* Demangled: android::KeyInfo::changeKeyInfo(android::String8) */
int _ZN7android7KeyInfo13changeKeyInfoENS_7String8E(void);

/* Symbol: _ZN9mkvparser8Chapters4Atom5ClearEv */
/* Demangled: mkvparser::Chapters::Atom::Clear() */
int _ZN9mkvparser8Chapters4Atom5ClearEv(void);

/* Symbol: _ZN7android12CryptoHelperD2Ev */
/* Demangled: android::CryptoHelper::~CryptoHelper() */
int _ZN7android12CryptoHelperD2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7Edition5ParseEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Chapters::Edition::Parse(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser8Chapters7Edition5ParseEPNS_10IMkvReaderExx(void);

/* Symbol: _ZN7android14Cta5FileHeader20getClearHeaderOffsetEv */
/* Demangled: android::Cta5FileHeader::getClearHeaderOffset() */
int _ZN7android14Cta5FileHeader20getClearHeaderOffsetEv(void);

/* Symbol: _ZN9mkvparser11SegmentInfoC2EPNS_7SegmentExxxx */
/* Demangled: mkvparser::SegmentInfo::SegmentInfo(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser11SegmentInfoC2EPNS_7SegmentExxxx(void);

/* Symbol: _ZN7android7DrmUtil8readIMEIEv */
/* Demangled: android::DrmUtil::readIMEI() */
int _ZN7android7DrmUtil8readIMEIEv(void);

/* Symbol: _ZNK9mkvparser5Block13GetFrameCountEv */
/* Demangled: mkvparser::Block::GetFrameCount() const */
int _ZNK9mkvparser5Block13GetFrameCountEv(void);

/* Symbol: _ZNK9mkvparser5Block14GetTrackNumberEv */
/* Demangled: mkvparser::Block::GetTrackNumber() const */
int _ZNK9mkvparser5Block14GetTrackNumberEv(void);

/* Symbol: _ZN7android10DrmMetaKey17META_KEY_ICON_URIE */
/* Demangled: android::DrmMetaKey::META_KEY_ICON_URI */
extern void* _ZN7android10DrmMetaKey17META_KEY_ICON_URIE;

/* Symbol: _ZN7android6DrmDef15EXT_DRM_MESSAGEE */
/* Demangled: android::DrmDef::EXT_DRM_MESSAGE */
extern void* _ZN7android6DrmDef15EXT_DRM_MESSAGEE;

/* Symbol: _ZN7android14DrmRequestType18KEY_CTA5_CIPHER_FDE */
/* Demangled: android::DrmRequestType::KEY_CTA5_CIPHER_FD */
extern void* _ZN7android14DrmRequestType18KEY_CTA5_CIPHER_FDE;

/* Symbol: _ZN7android12Cta5FLACFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5FLACFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN7android12Cta5FLACFileC2EiNS_7String8E */
/* Demangled: android::Cta5FLACFile::Cta5FLACFile(int, android::String8) */
int _ZN7android12Cta5FLACFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser17UnserializeStringEPNS_10IMkvReaderExxRPc */
/* Demangled: mkvparser::UnserializeString(mkvparser::IMkvReader*, long long, long long, char*&) */
int _ZN9mkvparser17UnserializeStringEPNS_10IMkvReaderExxRPc(void);

/* Symbol: _ZN9mkvparser6ReadIDEPNS_10IMkvReaderExRl */
/* Demangled: mkvparser::ReadID(mkvparser::IMkvReader*, long long, long&) */
int _ZN9mkvparser6ReadIDEPNS_10IMkvReaderExRl(void);

/* Symbol: _ZNK9mkvparser7Cluster5ParseERxRl */
/* Demangled: mkvparser::Cluster::Parse(long long&, long&) const */
int _ZNK9mkvparser7Cluster5ParseERxRl(void);

/* Symbol: _ZN7android10ByteBuffer8allocateEPKcj */
/* Demangled: android::ByteBuffer::allocate(char const*, unsigned int) */
int _ZN7android10ByteBuffer8allocateEPKcj(void);

/* Symbol: _ZN7android12CryptoHelper12cipherBlkLenENS0_6CIPHERE */
/* Demangled: android::CryptoHelper::cipherBlkLen(android::CryptoHelper::CIPHER) */
int _ZN7android12CryptoHelper12cipherBlkLenENS0_6CIPHERE(void);

/* Symbol: _ZN7android7StrUtil16validateDatetimeERK2tm */
/* Demangled: android::StrUtil::validateDatetime(tm const&) */
int _ZN7android7StrUtil16validateDatetimeERK2tm(void);

/* Symbol: _ZN7android10DrmCtaUtil20getNormalFromUintVarENS_7String8E */
/* Demangled: android::DrmCtaUtil::getNormalFromUintVar(android::String8) */
int _ZN7android10DrmCtaUtil20getNormalFromUintVarENS_7String8E(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android8Cta5FileE */
/* Demangled: vtable for android::Cta5File */
extern void* _ZTVN7android8Cta5FileE;

/* Symbol: _ZN7android12Cta5MPEGFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5MPEGFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZN9mkvparser10BlockGroupC1EPNS_7ClusterElxxxxxx */
/* Demangled: mkvparser::BlockGroup::BlockGroup(mkvparser::Cluster*, long, long long, long long, long long, long long, long long, long long) */
int _ZN9mkvparser10BlockGroupC1EPNS_7ClusterElxxxxxx(void);

/* Symbol: _ZN9mkvparser5Track8EOSBlockC1Ev */
/* Demangled: mkvparser::Track::EOSBlock::EOSBlock() */
int _ZN9mkvparser5Track8EOSBlockC1Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7Edition5ClearEv */
/* Demangled: mkvparser::Chapters::Edition::Clear() */
int _ZN9mkvparser8Chapters7Edition5ClearEv(void);

/* Symbol: _ZNK9mkvparser10VideoTrack9GetHeightEv */
/* Demangled: mkvparser::VideoTrack::GetHeight() const */
int _ZNK9mkvparser10VideoTrack9GetHeightEv(void);

/* Symbol: _ZN7android6DrmDef23CTA5_PLUGIN_DESCRIPTIONE */
/* Demangled: android::DrmDef::CTA5_PLUGIN_DESCRIPTION */
extern void* _ZN7android6DrmDef23CTA5_PLUGIN_DESCRIPTIONE;

/* Symbol: _ZNK9mkvparser10BlockGroup15GetPrevTimeCodeEv */
/* Demangled: mkvparser::BlockGroup::GetPrevTimeCode() const */
int _ZNK9mkvparser10BlockGroup15GetPrevTimeCodeEv(void);

/* Symbol: _ZN7android6DrmDef21PATH_CONSTRAINT_COUNTE */
/* Demangled: android::DrmDef::PATH_CONSTRAINT_COUNT */
extern void* _ZN7android6DrmDef21PATH_CONSTRAINT_COUNTE;

/* Symbol: _ZN7android10DrmMetaKey16META_KEY_DATALENE */
/* Demangled: android::DrmMetaKey::META_KEY_DATALEN */
extern void* _ZN7android10DrmMetaKey16META_KEY_DATALENE;

/* Symbol: _ZN7android12Cta5FileUtil16aes128cbcDecryptEPKhPhjS2_S3_ */
/* Demangled: android::Cta5FileUtil::aes128cbcDecrypt(unsigned char const*, unsigned char*, unsigned int, unsigned char const*, unsigned char*) */
int _ZN7android12Cta5FileUtil16aes128cbcDecryptEPKhPhjS2_S3_(void);

/* Symbol: _ZN7android8Cta5File6notifyEPKNS_6VectorINS_10DrmCtaUtil8ListenerEEENS_7String8E */
/* Demangled: android::Cta5File::notify(android::Vector<android::DrmCtaUtil::Listener> const*, android::String8) */
int _ZN7android8Cta5File6notifyEPKNS_6VectorINS_10DrmCtaUtil8ListenerEEENS_7String8E(void);

/* Symbol: _ZN7android12Cta5MPEGFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5MPEGFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser6Tracks5ParseEv */
/* Demangled: mkvparser::Tracks::Parse() */
int _ZN9mkvparser6Tracks5ParseEv(void);

/* Symbol: _ZN9mkvparser8Chapters7DisplayC2Ev */
/* Demangled: mkvparser::Chapters::Display::Display() */
int _ZN9mkvparser8Chapters7DisplayC2Ev(void);

/* Symbol: _ZTVN9mkvparser10AudioTrackE */
/* Demangled: vtable for mkvparser::AudioTrack */
extern void* _ZTVN9mkvparser10AudioTrackE;

/* Symbol: _ZN7android14DrmRequestType18ACTION_CTA5_SETKEYE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_SETKEY */
extern void* _ZN7android14DrmRequestType18ACTION_CTA5_SETKEYE;

/* Symbol: _ZN7android14Cta5FileHeader11getKeyInofsEv */
/* Demangled: android::Cta5FileHeader::getKeyInofs() */
int _ZN7android14Cta5FileHeader11getKeyInofsEv(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil16MULTI_MEDIA_LISTE */
/* Demangled: android::DrmCtaMultiMediaUtil::MULTI_MEDIA_LIST */
extern void* _ZN7android20DrmCtaMultiMediaUtil16MULTI_MEDIA_LISTE;

/* Symbol: _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::Cta5CommonMultimediaFile::Header*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_24Cta5CommonMultimediaFile6HeaderEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android14DrmRequestType36ACTION_MARK_AS_CONSUME_IN_APP_CLIENTE */
/* Demangled: android::DrmRequestType::ACTION_MARK_AS_CONSUME_IN_APP_CLIENT */
extern void* _ZN7android14DrmRequestType36ACTION_MARK_AS_CONSUME_IN_APP_CLIENTE;

/* Symbol: _ZN7android10DrmCtaUtil28IsCtaTrustedCheckTokenClientERNS_7String8E */
/* Demangled: android::DrmCtaUtil::IsCtaTrustedCheckTokenClient(android::String8&) */
int _ZN7android10DrmCtaUtil28IsCtaTrustedCheckTokenClientERNS_7String8E(void);

/* Symbol: _ZN7android14Cta5FileHeader4dumpEv */
/* Demangled: android::Cta5FileHeader::dump() */
int _ZN7android14Cta5FileHeader4dumpEv(void);

/* Symbol: _ZN9mkvparser11SimpleBlockC2EPNS_7ClusterElxx */
/* Demangled: mkvparser::SimpleBlock::SimpleBlock(mkvparser::Cluster*, long, long long, long long) */
int _ZN9mkvparser11SimpleBlockC2EPNS_7ClusterElxx(void);

/* Symbol: _ZN7android14CipherFileUtil17CipherFileInstallEP7__sFILEiiS2_RNS_12CryptoHelperEPh */
/* Demangled: android::CipherFileUtil::CipherFileInstall(__sFILE*, int, int, __sFILE*, android::CryptoHelper&, unsigned char*) */
int _ZN7android14CipherFileUtil17CipherFileInstallEP7__sFILEiiS2_RNS_12CryptoHelperEPh(void);

/* Symbol: _ZN7android8Cta5File10getClearFdEv */
/* Demangled: android::Cta5File::getClearFd() */
int _ZN7android8Cta5File10getClearFdEv(void);

/* Symbol: _ZN7android8Cta5File13getContentPosEv */
/* Demangled: android::Cta5File::getContentPos() */
int _ZN7android8Cta5File13getContentPosEv(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile22setCtaMultimediaHeaderEi */
/* Demangled: android::Cta5CommonMultimediaFile::setCtaMultimediaHeader(int) */
int _ZN7android24Cta5CommonMultimediaFile22setCtaMultimediaHeaderEi(void);

/* Symbol: _Z17flv_get_keyregioniPiS_ */
/* Demangled: flv_get_keyregion(int, int*, int*) */
int _Z17flv_get_keyregioniPiS_(void);

/* Symbol: _ZN9mkvparser5Track4Info5ClearEv */
/* Demangled: mkvparser::Track::Info::Clear() */
int _ZN9mkvparser5Track4Info5ClearEv(void);

/* Symbol: _ZN7android6DrmDef10MTK_FLDCF_E */
/* Demangled: android::DrmDef::MTK_FLDCF_ */
extern void* _ZN7android6DrmDef10MTK_FLDCF_E;

/* Symbol: _ZN7android14Cta5FileHeader18calculateHeaderSigEv */
/* Demangled: android::Cta5FileHeader::calculateHeaderSig() */
int _ZN7android14Cta5FileHeader18calculateHeaderSigEv(void);

/* Symbol: _ZN7android20PartialEncryptHeader17getClearHeaderLenEv */
/* Demangled: android::PartialEncryptHeader::getClearHeaderLen() */
int _ZN7android20PartialEncryptHeader17getClearHeaderLenEv(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil6ntoh64Ey */
/* Demangled: android::DrmCtaMultiMediaUtil::ntoh64(unsigned long long) */
int _ZN7android20DrmCtaMultiMediaUtil6ntoh64Ey(void);

/* Symbol: _ZN9mkvparser10BlockGroup5ParseEv */
/* Demangled: mkvparser::BlockGroup::Parse() */
int _ZN9mkvparser10BlockGroup5ParseEv(void);

/* Symbol: _ZN9mkvparser15ContentEncodingD1Ev */
/* Demangled: mkvparser::ContentEncoding::~ContentEncoding() */
int _ZN9mkvparser15ContentEncodingD1Ev(void);

/* Symbol: _ZN9mkvparser4Tags9SimpleTagD2Ev */
/* Demangled: mkvparser::Tags::SimpleTag::~SimpleTag() */
int _ZN9mkvparser4Tags9SimpleTagD2Ev(void);

/* Symbol: _ZN9mkvparser5TrackD2Ev */
/* Demangled: mkvparser::Track::~Track() */
int _ZN9mkvparser5TrackD2Ev(void);

/* Symbol: _ZNK9mkvparser4Tags9SimpleTag10GetTagNameEv */
/* Demangled: mkvparser::Tags::SimpleTag::GetTagName() const */
int _ZNK9mkvparser4Tags9SimpleTag10GetTagNameEv(void);

/* Symbol: _ZN7android7DrmUtil7sVDebugE */
/* Demangled: android::DrmUtil::sVDebug */
extern void* _ZN7android7DrmUtil7sVDebugE;

/* Symbol: _ZN7android14Cta5FileHeader21getCipherHeaderOffsetEv */
/* Demangled: android::Cta5FileHeader::getCipherHeaderOffset() */
int _ZN7android14Cta5FileHeader21getCipherHeaderOffsetEv(void);

/* Symbol: _ZN9mkvparser10VideoTrackD1Ev */
/* Demangled: mkvparser::VideoTrack::~VideoTrack() */
int _ZN9mkvparser10VideoTrackD1Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7EditionD1Ev */
/* Demangled: mkvparser::Chapters::Edition::~Edition() */
int _ZN9mkvparser8Chapters7EditionD1Ev(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile9changeKeyENS_7String8ES1_ */
/* Demangled: android::Cta5CommonMultimediaFile::changeKey(android::String8, android::String8) */
int _ZN7android24Cta5CommonMultimediaFile9changeKeyENS_7String8ES1_(void);

/* Symbol: _ZN7android11Cta5ASFFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5ASFFile::Cta5ASFFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5ASFFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZN7android16Cta5MatroskaFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android16Cta5MatroskaFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser11SegmentInfoD2Ev */
/* Demangled: mkvparser::SegmentInfo::~SegmentInfo() */
int _ZN9mkvparser11SegmentInfoD2Ev(void);

/* Symbol: _ZNK9mkvparser7Segment7GetInfoEv */
/* Demangled: mkvparser::Segment::GetInfo() const */
int _ZNK9mkvparser7Segment7GetInfoEv(void);

/* Symbol: _ZNK9mkvparser7Segment7GetLastEv */
/* Demangled: mkvparser::Segment::GetLast() const */
int _ZNK9mkvparser7Segment7GetLastEv(void);

/* Symbol: _ZN7android12DrmInfoEventC1EiiRKNS_7String8E */
/* Demangled: android::DrmInfoEvent::DrmInfoEvent(int, int, android::String8 const&) */
int _ZN7android12DrmInfoEventC1EiiRKNS_7String8E(void);

/* Symbol: _ZN9mkvparser8ChaptersD2Ev */
/* Demangled: mkvparser::Chapters::~Chapters() */
int _ZN9mkvparser8ChaptersD2Ev(void);

/* Symbol: _ZNK9mkvparser4Cues11DoneParsingEv */
/* Demangled: mkvparser::Cues::DoneParsing() const */
int _ZNK9mkvparser4Cues11DoneParsingEv(void);

/* Symbol: _ZNK9mkvparser4Tags3Tag11ShallowCopyERS1_ */
/* Demangled: mkvparser::Tags::Tag::ShallowCopy(mkvparser::Tags::Tag&) const */
int _ZNK9mkvparser4Tags3Tag11ShallowCopyERS1_(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom10GetDisplayEi */
/* Demangled: mkvparser::Chapters::Atom::GetDisplay(int) const */
int _ZNK9mkvparser8Chapters4Atom10GetDisplayEi(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom15GetStopTimecodeEv */
/* Demangled: mkvparser::Chapters::Atom::GetStopTimecode() const */
int _ZNK9mkvparser8Chapters4Atom15GetStopTimecodeEv(void);

/* Symbol: _ZN7android10ByteBufferC1EPKcj */
/* Demangled: android::ByteBuffer::ByteBuffer(char const*, unsigned int) */
int _ZN7android10ByteBufferC1EPKcj(void);

/* Symbol: _ZN7android6DrmDef10MTK_CD_CIDE */
/* Demangled: android::DrmDef::MTK_CD_CID */
extern void* _ZN7android6DrmDef10MTK_CD_CIDE;

/* Symbol: _ZN7android6DrmDef20PERMISSION_PRINT_STRE */
/* Demangled: android::DrmDef::PERMISSION_PRINT_STR */
extern void* _ZN7android6DrmDef20PERMISSION_PRINT_STRE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN7android20DrmCtaMultiMediaUtil17isCompatibleBrandEj */
/* Demangled: android::DrmCtaMultiMediaUtil::isCompatibleBrand(unsigned int) */
int _ZN7android20DrmCtaMultiMediaUtil17isCompatibleBrandEj(void);

/* Symbol: _ZNK9mkvparser10AudioTrack15GetSamplingRateEv */
/* Demangled: mkvparser::AudioTrack::GetSamplingRate() const */
int _ZNK9mkvparser10AudioTrack15GetSamplingRateEv(void);

/* Symbol: _ZNK9mkvparser7Segment11FindClusterEx */
/* Demangled: mkvparser::Segment::FindCluster(long long) const */
int _ZNK9mkvparser7Segment11FindClusterEx(void);

/* Symbol: _ZNK9mkvparser8Chapters4Atom11ShallowCopyERS1_ */
/* Demangled: mkvparser::Chapters::Atom::ShallowCopy(mkvparser::Chapters::Atom&) const */
int _ZNK9mkvparser8Chapters4Atom11ShallowCopyERS1_(void);

/* Symbol: _ZN7android6DrmDef24HEADER_TOKEN_DESCRIPTIONE */
/* Demangled: android::DrmDef::HEADER_TOKEN_DESCRIPTION */
extern void* _ZN7android6DrmDef24HEADER_TOKEN_DESCRIPTIONE;

/* Symbol: _ZN9mkvparser10AudioTrackC1EPNS_7SegmentExx */
/* Demangled: mkvparser::AudioTrack::AudioTrack(mkvparser::Segment*, long long, long long) */
int _ZN9mkvparser10AudioTrackC1EPNS_7SegmentExx(void);

/* Symbol: _ZN7android6DrmDef8PATH_UIDE */
/* Demangled: android::DrmDef::PATH_UID */
extern void* _ZN7android6DrmDef8PATH_UIDE;

/* Symbol: _ZN9mkvparser8CuePoint13TrackPosition5ParseEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::CuePoint::TrackPosition::Parse(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser8CuePoint13TrackPosition5ParseEPNS_10IMkvReaderExx(void);

/* Symbol: _ZN9mkvparser8SeekHeadC1EPNS_7SegmentExxxx */
/* Demangled: mkvparser::SeekHead::SeekHead(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser8SeekHeadC1EPNS_7SegmentExxxx(void);

/* Symbol: _ZNK9mkvparser11SegmentInfo11GetDurationEv */
/* Demangled: mkvparser::SegmentInfo::GetDuration() const */
int _ZNK9mkvparser11SegmentInfo11GetDurationEv(void);

/* Symbol: _ZNK9mkvparser7Cluster7GetTimeEv */
/* Demangled: mkvparser::Cluster::GetTime() const */
int _ZNK9mkvparser7Cluster7GetTimeEv(void);

/* Symbol: _ZN7android10DrmCtaUtil26IsCtaTrustedGetTokenClientERNS_7String8E */
/* Demangled: android::DrmCtaUtil::IsCtaTrustedGetTokenClient(android::String8&) */
int _ZN7android10DrmCtaUtil26IsCtaTrustedGetTokenClientERNS_7String8E(void);

/* Symbol: _ZN7android14Cta5FileHeader20setClearHeaderOffsetEy */
/* Demangled: android::Cta5FileHeader::setClearHeaderOffset(unsigned long long) */
int _ZN7android14Cta5FileHeader20setClearHeaderOffsetEy(void);

/* Symbol: _ZNK9mkvparser10VideoTrack16GetDisplayHeightEv */
/* Demangled: mkvparser::VideoTrack::GetDisplayHeight() const */
int _ZNK9mkvparser10VideoTrack16GetDisplayHeightEv(void);

/* Symbol: _ZNK9mkvparser4Cues4FindExPKNS_5TrackERPKNS_8CuePointERPKNS4_13TrackPositionE */
/* Demangled: mkvparser::Cues::Find(long long, mkvparser::Track const*, mkvparser::CuePoint const*&, mkvparser::CuePoint::TrackPosition const*&) const */
int _ZNK9mkvparser4Cues4FindExPKNS_5TrackERPKNS_8CuePointERPKNS4_13TrackPositionE(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE */
/* Demangled: android::Cta5CommonMultimediaFile::encrypt(int, int, android::Vector<android::DrmCtaUtil::Listener> const*) */
int _ZN7android24Cta5CommonMultimediaFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void);

/* Symbol: _ZN9mkvparser8Chapters4Atom7GetTimeEPKS0_x */
/* Demangled: mkvparser::Chapters::Atom::GetTime(mkvparser::Chapters const*, long long) */
int _ZN9mkvparser8Chapters4Atom7GetTimeEPKS0_x(void);

/* Symbol: _ZNK9mkvparser8CuePoint11GetTimeCodeEv */
/* Demangled: mkvparser::CuePoint::GetTimeCode() const */
int _ZNK9mkvparser8CuePoint11GetTimeCodeEv(void);

/* Symbol: _ZN7android6DrmDef13getPermissionEi */
/* Demangled: android::DrmDef::getPermission(int) */
int _ZN7android6DrmDef13getPermissionEi(void);

/* Symbol: _ZN7android20PartialEncryptHeader18setCipherHeaderLenEy */
/* Demangled: android::PartialEncryptHeader::setCipherHeaderLen(unsigned long long) */
int _ZN7android20PartialEncryptHeader18setCipherHeaderLenEy(void);

/* Symbol: _ZN7android20PartialEncryptHeader23getPartialEncryptHeaderEv */
/* Demangled: android::PartialEncryptHeader::getPartialEncryptHeader() */
int _ZN7android20PartialEncryptHeader23getPartialEncryptHeaderEv(void);

/* Symbol: _ZN7android16Cta5MatroskaFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5MatroskaFile::Cta5MatroskaFile(android::String8, unsigned long long, android::String8) */
int _ZN7android16Cta5MatroskaFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser8Chapters7Display10GetCountryEv */
/* Demangled: mkvparser::Chapters::Display::GetCountry() const */
int _ZNK9mkvparser8Chapters7Display10GetCountryEv(void);

/* Symbol: _ZN7android12Cta5FileUtil20getUintVarFromNormalEj */
/* Demangled: android::Cta5FileUtil::getUintVarFromNormal(unsigned int) */
int _ZN7android12Cta5FileUtil20getUintVarFromNormalEj(void);

/* Symbol: _ZNK9mkvparser7Cluster13GetEntryCountEv */
/* Demangled: mkvparser::Cluster::GetEntryCount() const */
int _ZNK9mkvparser7Cluster13GetEntryCountEv(void);

/* Symbol: _ZN7android10DrmMetaKey23META_KEY_CONTENT_VENDORE */
/* Demangled: android::DrmMetaKey::META_KEY_CONTENT_VENDOR */
extern void* _ZN7android10DrmMetaKey23META_KEY_CONTENT_VENDORE;

/* Symbol: _ZN7android14DrmRequestType17KEY_CTA5_CLEAR_FDE */
/* Demangled: android::DrmRequestType::KEY_CTA5_CLEAR_FD */
extern void* _ZN7android14DrmRequestType17KEY_CTA5_CLEAR_FDE;

/* Symbol: _ZN7android11Cta5FLVFileC1EiNS_7String8E */
/* Demangled: android::Cta5FLVFile::Cta5FLVFile(int, android::String8) */
int _ZN7android11Cta5FLVFileC1EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser10VideoTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_ */
/* Demangled: mkvparser::VideoTrack::Parse(mkvparser::Segment*, mkvparser::Track::Info const&, long long, long long, mkvparser::VideoTrack*&) */
int _ZN9mkvparser10VideoTrack5ParseEPNS_7SegmentERKNS_5Track4InfoExxRPS0_(void);

/* Symbol: _ZN9mkvparser15ContentEncodingC1Ev */
/* Demangled: mkvparser::ContentEncoding::ContentEncoding() */
int _ZN9mkvparser15ContentEncodingC1Ev(void);

/* Symbol: _ZN9mkvparser4Tags9SimpleTagC2Ev */
/* Demangled: mkvparser::Tags::SimpleTag::SimpleTag() */
int _ZN9mkvparser4Tags9SimpleTagC2Ev(void);

/* Symbol: _ZNK9mkvparser10VideoTrack9GetColourEv */
/* Demangled: mkvparser::VideoTrack::GetColour() const */
int _ZNK9mkvparser10VideoTrack9GetColourEv(void);

/* Symbol: _ZN9mkvparser8Chapters7EditionC1Ev */
/* Demangled: mkvparser::Chapters::Edition::Edition() */
int _ZN9mkvparser8Chapters7EditionC1Ev(void);

/* Symbol: _ZN7android10DrmMtkUtil24markAsConsumeInAppClientERKNS_7String8ES3_ */
/* Demangled: android::DrmMtkUtil::markAsConsumeInAppClient(android::String8 const&, android::String8 const&) */
int _ZN7android10DrmMtkUtil24markAsConsumeInAppClientERKNS_7String8ES3_(void);

/* Symbol: _ZN7android14DrmRequestType30ACTION_SHOW_DRM_DIALOG_IF_NEEDE */
/* Demangled: android::DrmRequestType::ACTION_SHOW_DRM_DIALOG_IF_NEED */
extern void* _ZN7android14DrmRequestType30ACTION_SHOW_DRM_DIALOG_IF_NEEDE;

/* Symbol: _ZN7android20PartialEncryptHeader18getCipherHeaderLenEv */
/* Demangled: android::PartialEncryptHeader::getCipherHeaderLen() */
int _ZN7android20PartialEncryptHeader18getCipherHeaderLenEv(void);

/* Symbol: type */
/* Demangled: type */
extern void* type;

/* Symbol: _ZN7android15Cta5FileFactory14createCta5FileENS_7String8EyS1_ */
/* Demangled: android::Cta5FileFactory::createCta5File(android::String8, unsigned long long, android::String8) */
int _ZN7android15Cta5FileFactory14createCta5FileENS_7String8EyS1_(void);

/* Symbol: _ZN7android11Cta5WAVFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5WAVFile::Cta5WAVFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5WAVFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser5BlockD1Ev */
/* Demangled: mkvparser::Block::~Block() */
int _ZN9mkvparser5BlockD1Ev(void);

/* Symbol: _ZNK9mkvparser4Cues7GetNextEPKNS_8CuePointE */
/* Demangled: mkvparser::Cues::GetNext(mkvparser::CuePoint const*) const */
int _ZNK9mkvparser4Cues7GetNextEPKNS_8CuePointE(void);

/* Symbol: _ZN9mkvparser10BlockEntryD2Ev */
/* Demangled: mkvparser::BlockEntry::~BlockEntry() */
int _ZN9mkvparser10BlockEntryD2Ev(void);

/* Symbol: _ZNK9mkvparser6Tracks15ParseTrackEntryExxxxRPNS_5TrackE */
/* Demangled: mkvparser::Tracks::ParseTrackEntry(long long, long long, long long, long long, mkvparser::Track*&) const */
int _ZNK9mkvparser6Tracks15ParseTrackEntryExxxxRPNS_5TrackE(void);

/* Symbol: _ZNK9mkvparser7Cluster7GetLastERPKNS_10BlockEntryE */
/* Demangled: mkvparser::Cluster::GetLast(mkvparser::BlockEntry const*&) const */
int _ZNK9mkvparser7Cluster7GetLastERPKNS_10BlockEntryE(void);

/* Symbol: _ZN7android12CryptoHelper10getBlkSizeEv */
/* Demangled: android::CryptoHelper::getBlkSize() */
int _ZN7android12CryptoHelper10getBlkSizeEv(void);

/* Symbol: _ZN7android12Cta5FileUtil14wvrunningcrc32EPKhij */
/* Demangled: android::Cta5FileUtil::wvrunningcrc32(unsigned char const*, int, unsigned int) */
int _ZN7android12Cta5FileUtil14wvrunningcrc32EPKhij(void);

/* Symbol: _ZNK9mkvparser4Cues8GetCountEv */
/* Demangled: mkvparser::Cues::GetCount() const */
int _ZNK9mkvparser4Cues8GetCountEv(void);

/* Symbol: _ZN7android14DrmRequestType23ACTION_SAVE_SECURE_TIMEE */
/* Demangled: android::DrmRequestType::ACTION_SAVE_SECURE_TIME */
extern void* _ZN7android14DrmRequestType23ACTION_SAVE_SECURE_TIMEE;

/* Symbol: _ZN7android8Cta5File22isPartialEncryptedFileEv */
/* Demangled: android::Cta5File::isPartialEncryptedFile() */
int _ZN7android8Cta5File22isPartialEncryptedFileEv(void);

/* Symbol: _ZN7android12CryptoHelper9getCipherENS0_6CIPHERE */
/* Demangled: android::CryptoHelper::getCipher(android::CryptoHelper::CIPHER) */
int _ZN7android12CryptoHelper9getCipherENS0_6CIPHERE(void);

/* Symbol: _ZN7android7KeyInfo10isKeyValidENS_7String8E */
/* Demangled: android::KeyInfo::isKeyValid(android::String8) */
int _ZN7android7KeyInfo10isKeyValidENS_7String8E(void);

/* Symbol: _ZN7android11Cta5APEFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5APEFile::Cta5APEFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5APEFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN7android10ByteBuffer5setToEPKcj */
/* Demangled: android::ByteBuffer::setTo(char const*, unsigned int) */
int _ZN7android10ByteBuffer5setToEPKcj(void);

/* Symbol: _ZN7android6DrmDef16getPermissionStrEi */
/* Demangled: android::DrmDef::getPermissionStr(int) */
int _ZN7android6DrmDef16getPermissionStrEi(void);

/* Symbol: _ZN7android14Cta5FileHeader16calculateFileSigEi */
/* Demangled: android::Cta5FileHeader::calculateFileSig(int) */
int _ZN7android14Cta5FileHeader16calculateFileSigEi(void);

/* Symbol: _ZTVN7android11Cta5APEFileE */
/* Demangled: vtable for android::Cta5APEFile */
extern void* _ZTVN7android11Cta5APEFileE;

/* Symbol: _ZN7android7KeyInfo10setKeyInfoEPKc */
/* Demangled: android::KeyInfo::setKeyInfo(char const*) */
int _ZN7android7KeyInfo10setKeyInfoEPKc(void);

/* Symbol: _ZN9mkvparser4Tags3Tag4InitEv */
/* Demangled: mkvparser::Tags::Tag::Init() */
int _ZN9mkvparser4Tags3Tag4InitEv(void);

/* Symbol: _ZN7android10DrmMetaKey22META_KEY_RIGHTS_ISSUERE */
/* Demangled: android::DrmMetaKey::META_KEY_RIGHTS_ISSUER */
extern void* _ZN7android10DrmMetaKey22META_KEY_RIGHTS_ISSUERE;

/* Symbol: _ZN7android7StrUtil11trimLRSpaceERNS_7String8E */
/* Demangled: android::StrUtil::trimLRSpace(android::String8&) */
int _ZN7android7StrUtil11trimLRSpaceERNS_7String8E(void);

/* Symbol: _ZN7android11Cta5ASFFile12parseHeadersEi */
/* Demangled: android::Cta5ASFFile::parseHeaders(int) */
int _ZN7android11Cta5ASFFile12parseHeadersEi(void);

/* Symbol: _ZN7android12CryptoHelper17desiredInDataSizeEi */
/* Demangled: android::CryptoHelper::desiredInDataSize(int) */
int _ZN7android12CryptoHelper17desiredInDataSizeEi(void);

/* Symbol: _ZN7android10DrmMetaKey21META_KEY_CONTENT_NAMEE */
/* Demangled: android::DrmMetaKey::META_KEY_CONTENT_NAME */
extern void* _ZN7android10DrmMetaKey21META_KEY_CONTENT_NAMEE;

/* Symbol: _ZN7android14DrmRequestType16KEY_DATA_2_EXTRAE */
/* Demangled: android::DrmRequestType::KEY_DATA_2_EXTRA */
extern void* _ZN7android14DrmRequestType16KEY_DATA_2_EXTRAE;

/* Symbol: _ZN7android14DrmRequestType9KEY_DM_FDE */
/* Demangled: android::DrmRequestType::KEY_DM_FD */
extern void* _ZN7android14DrmRequestType9KEY_DM_FDE;

/* Symbol: _ZN7android11Cta5APEFile12parseHeadersEi */
/* Demangled: android::Cta5APEFile::parseHeaders(int) */
int _ZN7android11Cta5APEFile12parseHeadersEi(void);

/* Symbol: _ZN9mkvparser11SegmentInfo5ParseEv */
/* Demangled: mkvparser::SegmentInfo::Parse() */
int _ZN9mkvparser11SegmentInfo5ParseEv(void);

/* Symbol: _ZN9mkvparser7Cluster15ParseBlockGroupExRxRl */
/* Demangled: mkvparser::Cluster::ParseBlockGroup(long long, long long&, long&) */
int _ZN9mkvparser7Cluster15ParseBlockGroupExRxRl(void);

/* Symbol: _ZN7android6DrmDef29CTA5_MULTI_MEDIA_DECRYPT_DONEE */
/* Demangled: android::DrmDef::CTA5_MULTI_MEDIA_DECRYPT_DONE */
extern void* _ZN7android6DrmDef29CTA5_MULTI_MEDIA_DECRYPT_DONEE;

/* Symbol: _ZN7android7StrUtil9toTimeStrEPl */
/* Demangled: android::StrUtil::toTimeStr(long*) */
int _ZN7android7StrUtil9toTimeStrEPl(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile13encryptHeaderEixxRxS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEExS1_ */
/* Demangled: android::Cta5CommonMultimediaFile::encryptHeader(int, long long, long long, long long&, long long&, android::Vector<android::DrmCtaUtil::Listener> const*, long long, long long&) */
int _ZN7android24Cta5CommonMultimediaFile13encryptHeaderEixxRxS1_PKNS_6VectorINS_10DrmCtaUtil8ListenerEEExS1_(void);

/* Symbol: _ZN9mkvparser4TagsD2Ev */
/* Demangled: mkvparser::Tags::~Tags() */
int _ZN9mkvparser4TagsD2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters4Atom5ParseEPNS_10IMkvReaderExx */
/* Demangled: mkvparser::Chapters::Atom::Parse(mkvparser::IMkvReader*, long long, long long) */
int _ZN9mkvparser8Chapters4Atom5ParseEPNS_10IMkvReaderExx(void);

/* Symbol: _ZN9mkvparser5TrackC2EPNS_7SegmentExx */
/* Demangled: mkvparser::Track::Track(mkvparser::Segment*, long long, long long) */
int _ZN9mkvparser5TrackC2EPNS_7SegmentExx(void);

/* Symbol: _ZN9mkvparser8ChaptersC2EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Chapters::Chapters(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser8ChaptersC2EPNS_7SegmentExxxx(void);

/* Symbol: _ZNK9mkvparser7Segment9GetTracksEv */
/* Demangled: mkvparser::Segment::GetTracks() const */
int _ZNK9mkvparser7Segment9GetTracksEv(void);

/* Symbol: _ZNK9mkvparser8Chapters15GetEditionCountEv */
/* Demangled: mkvparser::Chapters::GetEditionCount() const */
int _ZNK9mkvparser8Chapters15GetEditionCountEv(void);

/* Symbol: _ZN9mkvparser4Tags5ParseEv */
/* Demangled: mkvparser::Tags::Parse() */
int _ZN9mkvparser4Tags5ParseEv(void);

/* Symbol: _ZN9mkvparser8CuePoint4LoadEPNS_10IMkvReaderE */
/* Demangled: mkvparser::CuePoint::Load(mkvparser::IMkvReader*) */
int _ZN9mkvparser8CuePoint4LoadEPNS_10IMkvReaderE(void);

/* Symbol: _ZN7android7StrUtil19validateDatetimeStrEPKcRKi */
/* Demangled: android::StrUtil::validateDatetimeStr(char const*, int const&) */
int _ZN7android7StrUtil19validateDatetimeStrEPKcRKi(void);

/* Symbol: _ZN7android14DrmRequestType14KEY_CTA5_TOKENE */
/* Demangled: android::DrmRequestType::KEY_CTA5_TOKEN */
extern void* _ZN7android14DrmRequestType14KEY_CTA5_TOKENE;

/* Symbol: _ZN7android10DrmCtaUtilC1Ev */
/* Demangled: android::DrmCtaUtil::DrmCtaUtil() */
int _ZN7android10DrmCtaUtilC1Ev(void);

/* Symbol: _ZN7android11Cta5AVIFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5AVIFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZNK9mkvparser5Track14GetSeekPreRollEv */
/* Demangled: mkvparser::Track::GetSeekPreRoll() const */
int _ZNK9mkvparser5Track14GetSeekPreRollEv(void);

/* Symbol: _ZNK9mkvparser6Tracks16GetTrackByNumberEl */
/* Demangled: mkvparser::Tracks::GetTrackByNumber(long) const */
int _ZNK9mkvparser6Tracks16GetTrackByNumberEl(void);

/* Symbol: _ZN7android14Cta5NormalFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5NormalFile::Cta5NormalFile(android::String8, unsigned long long, android::String8) */
int _ZN7android14Cta5NormalFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser7Segment11GetDurationEv */
/* Demangled: mkvparser::Segment::GetDuration() const */
int _ZNK9mkvparser7Segment11GetDurationEv(void);

/* Symbol: _ZNK9mkvparser5Block5Frame4ReadEPNS_10IMkvReaderEPh */
/* Demangled: mkvparser::Block::Frame::Read(mkvparser::IMkvReader*, unsigned char*) const */
int _ZNK9mkvparser5Block5Frame4ReadEPNS_10IMkvReaderEPh(void);

/* Symbol: _ZNK9mkvparser7Cluster8GetIndexEv */
/* Demangled: mkvparser::Cluster::GetIndex() const */
int _ZNK9mkvparser7Cluster8GetIndexEv(void);

/* Symbol: _ZN7android8Cta5File18setCipherHeaderLenEy */
/* Demangled: android::Cta5File::setCipherHeaderLen(unsigned long long) */
int _ZN7android8Cta5File18setCipherHeaderLenEy(void);

/* Symbol: _ZN7android8Cta5File21setCipherHeaderOffsetEy */
/* Demangled: android::Cta5File::setCipherHeaderOffset(unsigned long long) */
int _ZN7android8Cta5File21setCipherHeaderOffsetEy(void);

/* Symbol: _ZN7android8Cta5File4dumpEv */
/* Demangled: android::Cta5File::dump() */
int _ZN7android8Cta5File4dumpEv(void);

/* Symbol: _ZN7android11Cta5AVIFileC1ENS_7String8EyS1_ */
/* Demangled: android::Cta5AVIFile::Cta5AVIFile(android::String8, unsigned long long, android::String8) */
int _ZN7android11Cta5AVIFileC1ENS_7String8EyS1_(void);

/* Symbol: _ZN7android6DrmDef23CONSTRAINT_INTERVAL_STRE */
/* Demangled: android::DrmDef::CONSTRAINT_INTERVAL_STR */
extern void* _ZN7android6DrmDef23CONSTRAINT_INTERVAL_STRE;

/* Symbol: _ZN7android10DrmCtaUtil20getUintVarFromNormalEj */
/* Demangled: android::DrmCtaUtil::getUintVarFromNormal(unsigned int) */
int _ZN7android10DrmCtaUtil20getUintVarFromNormalEj(void);

/* Symbol: _ZN7android12Cta5FLACFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5FLACFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser5Block6SetKeyEb */
/* Demangled: mkvparser::Block::SetKey(bool) */
int _ZN9mkvparser5Block6SetKeyEb(void);

/* Symbol: _ZN9mkvparser7ClusterC1EPNS_7SegmentElx */
/* Demangled: mkvparser::Cluster::Cluster(mkvparser::Segment*, long, long long) */
int _ZN9mkvparser7ClusterC1EPNS_7SegmentElx(void);

/* Symbol: _ZN7android12Cta5FLACFileC1ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5FLACFile::Cta5FLACFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5FLACFileC1ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZNK9mkvparser8SeekHead8GetCountEv */
/* Demangled: mkvparser::SeekHead::GetCount() const */
int _ZNK9mkvparser8SeekHead8GetCountEv(void);

/* Symbol: _ZN7android14DrmRequestType19ACTION_CTA5_ENCRYPTE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_ENCRYPT */
extern void* _ZN7android14DrmRequestType19ACTION_CTA5_ENCRYPTE;

/* Symbol: _ZN7android8Cta5File11getCipherFdEv */
/* Demangled: android::Cta5File::getCipherFd() */
int _ZN7android8Cta5File11getCipherFdEv(void);

/* Symbol: _ZNK9mkvparser5Block8GetFrameEi */
/* Demangled: mkvparser::Block::GetFrame(int) const */
int _ZNK9mkvparser5Block8GetFrameEi(void);

/* Symbol: _ZN7android14DrmRequestType14RESULT_SUCCESSE */
/* Demangled: android::DrmRequestType::RESULT_SUCCESS */
extern void* _ZN7android14DrmRequestType14RESULT_SUCCESSE;

/* Symbol: _ZN7android8Cta5File18getCipherHeaderLenEv */
/* Demangled: android::Cta5File::getCipherHeaderLen() */
int _ZN7android8Cta5File18getCipherHeaderLenEv(void);

/* Symbol: _ZN7android11Cta5WAVFile12parseHeadersEi */
/* Demangled: android::Cta5WAVFile::parseHeaders(int) */
int _ZN7android11Cta5WAVFile12parseHeadersEi(void);

/* Symbol: _ZN9mkvparser6TracksC2EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Tracks::Tracks(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser6TracksC2EPNS_7SegmentExxxx(void);

/* Symbol: _ZN9mkvparser7Segment20FindOrPreloadClusterEx */
/* Demangled: mkvparser::Segment::FindOrPreloadCluster(long long) */
int _ZN9mkvparser7Segment20FindOrPreloadClusterEx(void);

/* Symbol: _ZNK9mkvparser11SegmentInfo14GetTitleAsUTF8Ev */
/* Demangled: mkvparser::SegmentInfo::GetTitleAsUTF8() const */
int _ZNK9mkvparser11SegmentInfo14GetTitleAsUTF8Ev(void);

/* Symbol: _ZN7android8Cta5File12isNeedCancelEv */
/* Demangled: android::Cta5File::isNeedCancel() */
int _ZN7android8Cta5File12isNeedCancelEv(void);

/* Symbol: _ZN7android11Cta5FLVFileC2EiNS_7String8E */
/* Demangled: android::Cta5FLVFile::Cta5FLVFile(int, android::String8) */
int _ZN7android11Cta5FLVFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser8Chapters5ParseEv */
/* Demangled: mkvparser::Chapters::Parse() */
int _ZN9mkvparser8Chapters5ParseEv(void);

/* Symbol: _ZN7android6DrmDef17MIME_CTA5_MESSAGEE */
/* Demangled: android::DrmDef::MIME_CTA5_MESSAGE */
extern void* _ZN7android6DrmDef17MIME_CTA5_MESSAGEE;

/* Symbol: _ZN7android6DrmDef9CTA5_DONEE */
/* Demangled: android::DrmDef::CTA5_DONE */
extern void* _ZN7android6DrmDef9CTA5_DONEE;

/* Symbol: _ZN7android12Cta5FileUtil10nettohostsEt */
/* Demangled: android::Cta5FileUtil::nettohosts(unsigned short) */
int _ZN7android12Cta5FileUtil10nettohostsEt(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFileC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5CommonMultimediaFile::Cta5CommonMultimediaFile(android::String8, unsigned long long, android::String8) */
int _ZN7android24Cta5CommonMultimediaFileC2ENS_7String8EyS1_(void);

/* Symbol: _ZNK9mkvparser5Track4Info7CopyStrEMS1_PcRS1_ */
/* Demangled: mkvparser::Track::Info::CopyStr(char* mkvparser::Track::Info::*, mkvparser::Track::Info&) const */
int _ZNK9mkvparser5Track4Info7CopyStrEMS1_PcRS1_(void);

/* Symbol: _ZN7android10ByteBufferC2ERKS0_ */
/* Demangled: android::ByteBuffer::ByteBuffer(android::ByteBuffer const&) */
int _ZN7android10ByteBufferC2ERKS0_(void);

/* Symbol: _ZN7android12Cta5FileUtil20getNormalFromUintVarENS_7String8E */
/* Demangled: android::Cta5FileUtil::getNormalFromUintVar(android::String8) */
int _ZN7android12Cta5FileUtil20getNormalFromUintVarENS_7String8E(void);

/* Symbol: _ZN7android7KeyInfo13getContentKeyEv */
/* Demangled: android::KeyInfo::getContentKey() */
int _ZN7android7KeyInfo13getContentKeyEv(void);

/* Symbol: _ZN9mkvparser5Track8EOSBlockC2Ev */
/* Demangled: mkvparser::Track::EOSBlock::EOSBlock() */
int _ZN9mkvparser5Track8EOSBlockC2Ev(void);

/* Symbol: _ZN7android6DrmDef27CONSTRAINT_DATETIME_END_STRE */
/* Demangled: android::DrmDef::CONSTRAINT_DATETIME_END_STR */
extern void* _ZN7android6DrmDef27CONSTRAINT_DATETIME_END_STRE;

/* Symbol: _ZNK7android6VectorIxE7do_copyEPvPKvj */
/* Demangled: android::Vector<long long>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE7do_copyEPvPKvj(void);

/* Symbol: _ZN9mkvparser19PrimaryChromaticity5ParseEPNS_10IMkvReaderExxbPPS0_ */
/* Demangled: mkvparser::PrimaryChromaticity::Parse(mkvparser::IMkvReader*, long long, long long, bool, mkvparser::PrimaryChromaticity**) */
int _ZN9mkvparser19PrimaryChromaticity5ParseEPNS_10IMkvReaderExxbPPS0_(void);

/* Symbol: _ZN9mkvparser7Cluster6CreateEPNS_7SegmentElx */
/* Demangled: mkvparser::Cluster::Create(mkvparser::Segment*, long, long long) */
int _ZN9mkvparser7Cluster6CreateEPNS_7SegmentElx(void);

/* Symbol: _ZNK7android10ByteBuffer6bufferEv */
/* Demangled: android::ByteBuffer::buffer() const */
int _ZNK7android10ByteBuffer6bufferEv(void);

/* Symbol: _ZN7android20PartialEncryptHeader17setClearHeaderLenEy */
/* Demangled: android::PartialEncryptHeader::setClearHeaderLen(unsigned long long) */
int _ZN7android20PartialEncryptHeader17setClearHeaderLenEy(void);

/* Symbol: _ZTVN7android16Cta5MatroskaFileE */
/* Demangled: vtable for android::Cta5MatroskaFile */
extern void* _ZTVN7android16Cta5MatroskaFileE;

/* Symbol: _ZN9mkvparser8Chapters4Atom19ExpandDisplaysArrayEv */
/* Demangled: mkvparser::Chapters::Atom::ExpandDisplaysArray() */
int _ZN9mkvparser8Chapters4Atom19ExpandDisplaysArrayEv(void);

/* Symbol: _ZN7android7StrUtil9trimRCRLFERNS_7String8E */
/* Demangled: android::StrUtil::trimRCRLF(android::String8&) */
int _ZN7android7StrUtil9trimRCRLFERNS_7String8E(void);

/* Symbol: _ZN7android8Cta5File19getOriginalMimeTypeEv */
/* Demangled: android::Cta5File::getOriginalMimeType() */
int _ZN7android8Cta5File19getOriginalMimeTypeEv(void);

/* Symbol: _ZN9mkvparser5BlockC2Exxx */
/* Demangled: mkvparser::Block::Block(long long, long long, long long) */
int _ZN9mkvparser5BlockC2Exxx(void);

/* Symbol: _ZN9mkvparser7ClusterD1Ev */
/* Demangled: mkvparser::Cluster::~Cluster() */
int _ZN9mkvparser7ClusterD1Ev(void);

/* Symbol: _ZN7android14DrmRequestType21ACTION_CONSUME_RIGHTSE */
/* Demangled: android::DrmRequestType::ACTION_CONSUME_RIGHTS */
extern void* _ZN7android14DrmRequestType21ACTION_CONSUME_RIGHTSE;

/* Symbol: _ZN7android14Cta5NormalFileC2EiNS_7String8E */
/* Demangled: android::Cta5NormalFile::Cta5NormalFile(int, android::String8) */
int _ZN7android14Cta5NormalFileC2EiNS_7String8E(void);

/* Symbol: _ZN9mkvparser10VideoTrackC1EPNS_7SegmentExx */
/* Demangled: mkvparser::VideoTrack::VideoTrack(mkvparser::Segment*, long long, long long) */
int _ZN9mkvparser10VideoTrackC1EPNS_7SegmentExx(void);

/* Symbol: _ZN9mkvparser8Chapters7Display4InitEv */
/* Demangled: mkvparser::Chapters::Display::Init() */
int _ZN9mkvparser8Chapters7Display4InitEv(void);

/* Symbol: _ZNK9mkvparser4Tags3Tag12GetSimpleTagEi */
/* Demangled: mkvparser::Tags::Tag::GetSimpleTag(int) const */
int _ZNK9mkvparser4Tags3Tag12GetSimpleTagEi(void);

/* Symbol: _ZNK9mkvparser8CuePoint4FindEPKNS_5TrackE */
/* Demangled: mkvparser::CuePoint::Find(mkvparser::Track const*) const */
int _ZNK9mkvparser8CuePoint4FindEPKNS_5TrackE(void);

/* Symbol: _ZN7android6DrmDef13EXT_CTA5_FILEE */
/* Demangled: android::DrmDef::EXT_CTA5_FILE */
extern void* _ZN7android6DrmDef13EXT_CTA5_FILEE;

/* Symbol: _ZN7android12Cta5FileUtil11nettohostllEy */
/* Demangled: android::Cta5FileUtil::nettohostll(unsigned long long) */
int _ZN7android12Cta5FileUtil11nettohostllEy(void);

/* Symbol: _ZN7android16Cta5MatroskaFile12parseHeadersEi */
/* Demangled: android::Cta5MatroskaFile::parseHeaders(int) */
int _ZN7android16Cta5MatroskaFile12parseHeadersEi(void);

/* Symbol: _ZN9mkvparser7Segment7GetNextEPKNS_7ClusterE */
/* Demangled: mkvparser::Segment::GetNext(mkvparser::Cluster const*) */
int _ZN9mkvparser7Segment7GetNextEPKNS_7ClusterE(void);

/* Symbol: _ZNK9mkvparser10VideoTrack8VetEntryEPKNS_10BlockEntryE */
/* Demangled: mkvparser::VideoTrack::VetEntry(mkvparser::BlockEntry const*) const */
int _ZNK9mkvparser10VideoTrack8VetEntryEPKNS_10BlockEntryE(void);

/* Symbol: _ZNK9mkvparser5Block7GetTimeEPKNS_7ClusterE */
/* Demangled: mkvparser::Block::GetTime(mkvparser::Cluster const*) const */
int _ZNK9mkvparser5Block7GetTimeEPKNS_7ClusterE(void);

/* Symbol: _ZN9mkvparser4CuesC2EPNS_7SegmentExxxx */
/* Demangled: mkvparser::Cues::Cues(mkvparser::Segment*, long long, long long, long long, long long) */
int _ZN9mkvparser4CuesC2EPNS_7SegmentExxxx(void);

/* Symbol: _ZN9mkvparser4Tags3Tag21ExpandSimpleTagsArrayEv */
/* Demangled: mkvparser::Tags::Tag::ExpandSimpleTagsArray() */
int _ZN9mkvparser4Tags3Tag21ExpandSimpleTagsArrayEv(void);

/* Symbol: _ZN9mkvparser8SeekHead5ParseEv */
/* Demangled: mkvparser::SeekHead::Parse() */
int _ZN9mkvparser8SeekHead5ParseEv(void);

/* Symbol: _ZNK9mkvparser7Cluster11GetPositionEv */
/* Demangled: mkvparser::Cluster::GetPosition() const */
int _ZNK9mkvparser7Cluster11GetPositionEv(void);

/* Symbol: _ZN7android6DrmDef22PERMISSION_EXECUTE_STRE */
/* Demangled: android::DrmDef::PERMISSION_EXECUTE_STR */
extern void* _ZN7android6DrmDef22PERMISSION_EXECUTE_STRE;

/* Symbol: _ZN7android14Cta5FileHeaderC2ENS_7String8EyS1_ */
/* Demangled: android::Cta5FileHeader::Cta5FileHeader(android::String8, unsigned long long, android::String8) */
int _ZN7android14Cta5FileHeaderC2ENS_7String8EyS1_(void);

/* Symbol: _ZN7android7DrmUtil6getMACERNS_7String8E */
/* Demangled: android::DrmUtil::getMAC(android::String8&) */
int _ZN7android7DrmUtil6getMACERNS_7String8E(void);

/* Symbol: _ZN7android7DrmUtil8mDCFLockE */
/* Demangled: android::DrmUtil::mDCFLock */
extern void* _ZN7android7DrmUtil8mDCFLockE;

/* Symbol: _ZN7android14DrmRequestType22ACTION_CTA5_GETPROGESSE */
/* Demangled: android::DrmRequestType::ACTION_CTA5_GETPROGESS */
extern void* _ZN7android14DrmRequestType22ACTION_CTA5_GETPROGESSE;

/* Symbol: _ZN7android12Cta5MPEGFileC2ENS_7String8ES1_S1_yS1_ */
/* Demangled: android::Cta5MPEGFile::Cta5MPEGFile(android::String8, android::String8, android::String8, unsigned long long, android::String8) */
int _ZN7android12Cta5MPEGFileC2ENS_7String8ES1_S1_yS1_(void);

/* Symbol: _ZN9mkvparser15ContentEncodingD2Ev */
/* Demangled: mkvparser::ContentEncoding::~ContentEncoding() */
int _ZN9mkvparser15ContentEncodingD2Ev(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE */
/* Demangled: android::Cta5CommonMultimediaFile::decrypt(int, android::Vector<android::DrmCtaUtil::Listener> const*) */
int _ZN7android24Cta5CommonMultimediaFile7decryptEiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void);

/* Symbol: _ZNK7android12DrmInfoEvent10getMessageEv */
/* Demangled: android::DrmInfoEvent::getMessage() const */
int _ZNK7android12DrmInfoEvent10getMessageEv(void);

/* Symbol: _ZN9mkvparser10VideoTrackD2Ev */
/* Demangled: mkvparser::VideoTrack::~VideoTrack() */
int _ZN9mkvparser10VideoTrackD2Ev(void);

/* Symbol: _ZN9mkvparser8Chapters7EditionD2Ev */
/* Demangled: mkvparser::Chapters::Edition::~Edition() */
int _ZN9mkvparser8Chapters7EditionD2Ev(void);

/* Symbol: _ZN7android12CryptoHelper17desiredOutBufSizeEi */
/* Demangled: android::CryptoHelper::desiredOutBufSize(int) */
int _ZN7android12CryptoHelper17desiredOutBufSizeEi(void);

/* Symbol: _ZN7android6DrmDef16CTA5_CANCEL_DONEE */
/* Demangled: android::DrmDef::CTA5_CANCEL_DONE */
extern void* _ZN7android6DrmDef16CTA5_CANCEL_DONEE;

/* Symbol: _ZN7android6DrmDef20CONSTRAINT_COUNT_STRE */
/* Demangled: android::DrmDef::CONSTRAINT_COUNT_STR */
extern void* _ZN7android6DrmDef20CONSTRAINT_COUNT_STRE;

/* Symbol: _ZN7android6DrmDef9IMEI_FILEE */
/* Demangled: android::DrmDef::IMEI_FILE */
extern void* _ZN7android6DrmDef9IMEI_FILEE;

/* Symbol: _ZN7android14Cta5NormalFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE */
/* Demangled: android::Cta5NormalFile::encrypt(int, int, android::Vector<android::DrmCtaUtil::Listener> const*) */
int _ZN7android14Cta5NormalFile7encryptEiiPKNS_6VectorINS_10DrmCtaUtil8ListenerEEE(void);

/* Symbol: _ZN9mkvparser4Tags3TagD1Ev */
/* Demangled: mkvparser::Tags::Tag::~Tag() */
int _ZN9mkvparser4Tags3TagD1Ev(void);

/* Symbol: _ZN9mkvparser8Chapters4AtomD1Ev */
/* Demangled: mkvparser::Chapters::Atom::~Atom() */
int _ZN9mkvparser8Chapters4AtomD1Ev(void);

/* Symbol: _ZN9mkvparser8SeekHead5EntryC1Ev */
/* Demangled: mkvparser::SeekHead::Entry::Entry() */
int _ZN9mkvparser8SeekHead5EntryC1Ev(void);

/* Symbol: _ZNK9mkvparser4Cues4InitEv */
/* Demangled: mkvparser::Cues::Init() const */
int _ZNK9mkvparser4Cues4InitEv(void);

/* Symbol: _ZN7android20PartialEncryptHeaderC1Ev */
/* Demangled: android::PartialEncryptHeader::PartialEncryptHeader() */
int _ZN7android20PartialEncryptHeaderC1Ev(void);

/* Symbol: _ZN7android24Cta5CommonMultimediaFile16recoverClearDataEix */
/* Demangled: android::Cta5CommonMultimediaFile::recoverClearData(int, long long) */
int _ZN7android24Cta5CommonMultimediaFile16recoverClearDataEix(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDRMMTKUTIL_H */
