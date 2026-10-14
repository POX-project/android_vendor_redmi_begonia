.class public Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
.super Landroid/app/Activity;
.source "AudioSpeechEnhancementV2.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;
    }
.end annotation


# static fields
.field private static final CMD_GET_COMMON_PARAMETER:Ljava/lang/String; = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para"

.field private static final CMD_GET_DEBUG_INFO:Ljava/lang/String; = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info"

.field private static final CMD_GET_LIST_PREFIX:Ljava/lang/String; = "APP_GET_CATEGORY="

.field private static final CMD_GET_MODE_LIST:Ljava/lang/String; = "APP_GET_CATEGORY=Speech#Band"

.field private static final CMD_GET_PARAMETER:Ljava/lang/String; = "APP_GET_PARAM=Speech#Band,%s,Profile,%s,VolIndex,%s,Network,GSM#speech_mode_para"

.field private static final CMD_GET_PARAMETER_LIST:Ljava/lang/String; = "APP_GET_CATEGORY=Speech#Profile"

.field private static final CMD_GET_VOLINDEX_LIST:Ljava/lang/String; = "APP_GET_CATEGORY=Speech#VolIndex"

.field private static final CMD_PREFIX:Ljava/lang/String; = "APP_GET_PARAM="

.field private static final CMD_SET_COMMON_PARAMETER:Ljava/lang/String; = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para#"

.field private static final CMD_SET_DEBUG_INFO:Ljava/lang/String; = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#"

.field private static final CMD_SET_PARAMETER:Ljava/lang/String; = "APP_SET_PARAM=Speech#Band,%s,Profile,%s,VolIndex,%s,Network,GSM#speech_mode_para#"

.field private static final CMD_SPH_PARSER_SET:Ljava/lang/String; = "SPH_PARSER_SET_PARAM,PHONE_CALL,TestMode,"

.field private static final CUST_XML_PARAM:Ljava/lang/String; = "GET_CUST_XML_ENABLE"

.field private static final CUST_XML_SET_SUPPORT_PARAM:Ljava/lang/String; = "SET_CUST_XML_ENABLE=1"

.field private static final CUST_XML_SET_UNSUPPORT_PARAM:Ljava/lang/String; = "SET_CUST_XML_ENABLE=0"

.field private static final DIALOG_GET_DATA_ERROR:I = 0x1

.field private static final DIALOG_GET_WBDATA_ERROR:I = 0x2

.field private static final DIALOG_SET_SE_ERROR:I = 0x4

.field private static final DIALOG_SET_SE_SUCCESS:I = 0x3

.field private static final DIALOG_SET_WB_ERROR:I = 0x6

.field private static final DIALOG_SET_WB_SUCCESS:I = 0x5

.field private static final INDEX_COMMON:I = 0x0

.field private static final INDEX_DEBUG:I = 0x1

.field private static final INDEX_DEBUGMODE_DEFAULT:I = 0x0

.field private static final PARAM_DEVIDER:Ljava/lang/String; = "#"

.field private static final RESULT_SUPPORT:Ljava/lang/String; = "GET_CUST_XML_ENABLE=1"

.field private static final RESULT_UNSUPPORT:Ljava/lang/String; = "GET_CUST_XML_ENABLE=0"

.field public static final TAG:Ljava/lang/String; = "Audio/SpeechEnhancement2"

.field private static final VERSION_DEVIDER:Ljava/lang/String; = "="


# instance fields
.field private mAdapter:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;

.field private mAudioManager:Landroid/media/AudioManager;

.field private mBtnSet:Landroid/widget/Button;

.field private mList:Landroid/widget/ListView;

.field private mModeAdatper:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mModeEntries:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mModeEntryValues:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mModeIndex:I

.field private mModeSpinner:Landroid/widget/Spinner;

.field private mParaAdatper:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mParaEntries:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mParaEntryValues:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mParaIndex:I

.field private mParaSpinner:Landroid/widget/Spinner;

.field private mParameterViews:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private mParameters:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mParserEntries:[Ljava/lang/String;

.field private mParserMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mVolumeAdatper:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mVolumeEntries:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mVolumeEntryValues:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mVolumeIndex:I

.field private mVolumeSpinner:Landroid/widget/Spinner;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 89
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 135
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntries:Ljava/util/List;

    .line 136
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    .line 137
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntries:Ljava/util/List;

    .line 138
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntryValues:Ljava/util/List;

    .line 139
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntries:Ljava/util/List;

    .line 140
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntryValues:Ljava/util/List;

    .line 141
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    .line 142
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameterViews:Ljava/util/List;

    .line 152
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParserMap:Ljava/util/Map;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameterViews:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntryValues:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeIndex:I

    return v0
.end method

.method static synthetic access$1202(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
    .param p1, "x1"    # I

    .line 89
    iput p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeIndex:I

    return p1
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntryValues:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeIndex:I

    return v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
    .param p1, "x1"    # I

    .line 89
    iput p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeIndex:I

    return p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
    .param p1, "x1"    # Ljava/lang/String;

    .line 89
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
    .param p1, "x1"    # Ljava/lang/String;

    .line 89
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->handleParameters(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
    .param p1, "x1"    # Ljava/lang/String;

    .line 89
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->handleParameterList(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 89
    iget v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaIndex:I

    return v0
.end method

.method static synthetic access$902(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;
    .param p1, "x1"    # I

    .line 89
    iput p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaIndex:I

    return p1
.end method

.method private getParameters(Ljava/lang/String;)Ljava/lang/String;
    .locals 11
    .param p1, "command"    # Ljava/lang/String;

    .line 218
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->getAudioTuningVer()Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    move-result-object v1

    const-string v2, " return "

    const-string v3, "getParameters "

    const-string v4, "Audio/SpeechEnhancement2"

    if-eq v0, v1, :cond_3

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v0, p1}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 220
    .local v0, "ret":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    const-string v1, "APP_GET_PARAM="

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    .line 222
    .local v1, "prefixLength":I
    const-string v2, "APP_GET_CATEGORY=Speech#Band"

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "APP_GET_CATEGORY=Speech#Profile"

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 223
    const-string v2, "APP_GET_CATEGORY=Speech#VolIndex"

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 224
    :cond_0
    const-string v2, "APP_GET_CATEGORY="

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v1

    .line 226
    :cond_1
    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    if-le v2, v1, :cond_2

    .line 227
    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    .line 229
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getParameters return "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    return-object v0

    .line 232
    .end local v0    # "ret":Ljava/lang/String;
    .end local v1    # "prefixLength":I
    :cond_3
    const-string v0, "="

    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    .line 233
    .local v0, "index":I
    add-int/lit8 v1, v0, 0x1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 234
    const-string v1, "#"

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 235
    .local v1, "params":[Ljava/lang/String;
    const/4 v5, 0x0

    .line 237
    .local v5, "result":Ljava/lang/String;
    array-length v6, v1

    const/4 v7, 0x3

    const/4 v8, 0x0

    const/4 v9, 0x2

    const/4 v10, 0x1

    if-ne v6, v7, :cond_4

    .line 238
    aget-object v6, v1, v8

    aget-object v7, v1, v10

    aget-object v8, v1, v9

    invoke-static {v6, v7, v8}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    .line 239
    :cond_4
    array-length v6, v1

    if-ne v6, v9, :cond_5

    .line 240
    aget-object v6, v1, v8

    aget-object v7, v1, v10

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getCategory(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    .line 243
    :cond_5
    const-string v6, "error parameter"

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    :goto_0
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    return-object v5
.end method

.method private handleModeList(Ljava/lang/String;)Z
    .locals 4
    .param p1, "data"    # Ljava/lang/String;

    .line 295
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 296
    return v0

    .line 298
    :cond_0
    const-string v1, ","

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 299
    .local v1, "values":[Ljava/lang/String;
    array-length v2, v1

    if-lez v2, :cond_4

    array-length v2, v1

    rem-int/lit8 v2, v2, 0x2

    if-eqz v2, :cond_1

    goto :goto_2

    .line 303
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntries:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 304
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 305
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntries:Ljava/util/List;

    const-string v2, "Common Parameter"

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 306
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntries:Ljava/util/List;

    const-string v2, "Debug Info"

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 307
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    const-string v2, ""

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 308
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 309
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v2, v1

    if-ge v0, v2, :cond_3

    .line 310
    rem-int/lit8 v2, v0, 0x2

    if-nez v2, :cond_2

    .line 311
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    aget-object v3, v1, v0

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 313
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntries:Ljava/util/List;

    aget-object v3, v1, v0

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 309
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 316
    .end local v0    # "i":I
    :cond_3
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v2, 0x1090008

    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntries:Ljava/util/List;

    invoke-direct {v0, p0, v2, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeAdatper:Landroid/widget/ArrayAdapter;

    .line 318
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 319
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeAdatper:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 320
    const/4 v0, 0x1

    return v0

    .line 300
    :cond_4
    :goto_2
    return v0
.end method

.method private handleParameterList(Ljava/lang/String;)Z
    .locals 4
    .param p1, "data"    # Ljava/lang/String;

    .line 324
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 325
    return v0

    .line 327
    :cond_0
    const-string v1, ","

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 328
    .local v1, "values":[Ljava/lang/String;
    array-length v2, v1

    if-lez v2, :cond_4

    array-length v2, v1

    rem-int/lit8 v2, v2, 0x2

    if-eqz v2, :cond_1

    goto :goto_2

    .line 332
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntries:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 333
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntryValues:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 334
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v2, v1

    if-ge v0, v2, :cond_3

    .line 335
    rem-int/lit8 v2, v0, 0x2

    if-nez v2, :cond_2

    .line 336
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntryValues:Ljava/util/List;

    aget-object v3, v1, v0

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 338
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntries:Ljava/util/List;

    aget-object v3, v1, v0

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 334
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 341
    .end local v0    # "i":I
    :cond_3
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v2, 0x1090008

    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntries:Ljava/util/List;

    invoke-direct {v0, p0, v2, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaAdatper:Landroid/widget/ArrayAdapter;

    .line 343
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 344
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaAdatper:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 345
    const/4 v0, 0x1

    return v0

    .line 329
    :cond_4
    :goto_2
    return v0
.end method

.method private handleParameters(Ljava/lang/String;)V
    .locals 5
    .param p1, "data"    # Ljava/lang/String;

    .line 268
    if-nez p1, :cond_0

    .line 269
    return-void

    .line 271
    :cond_0
    const-string v0, ","

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 273
    .local v0, "entries":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 274
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameterViews:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 275
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_2

    .line 276
    aget-object v2, v0, v1

    .line 277
    .local v2, "entry":Ljava/lang/String;
    if-eqz v2, :cond_1

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v4, 0x2

    if-le v3, v4, :cond_1

    .line 279
    :try_start_0
    invoke-virtual {v2, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    const/16 v4, 0x10

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(Ljava/lang/String;I)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Long;->toString()Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v3

    goto :goto_1

    .line 280
    :catch_0
    move-exception v3

    .line 281
    .local v3, "e":Ljava/lang/NumberFormatException;
    const-string v2, "ERROR"

    .line 282
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :goto_1
    goto :goto_2

    .line 284
    :cond_1
    const-string v2, "ERROR"

    .line 286
    :goto_2
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 287
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameterViews:Ljava/util/List;

    const/4 v4, 0x0

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 275
    .end local v2    # "entry":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 290
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAdapter:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;->clear()V

    .line 291
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAdapter:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;->addAll(Ljava/util/Collection;)V

    .line 292
    return-void
.end method

.method private handleVolindexList(Ljava/lang/String;)Z
    .locals 4
    .param p1, "data"    # Ljava/lang/String;

    .line 348
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 349
    return v0

    .line 351
    :cond_0
    const-string v1, ","

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 352
    .local v1, "values":[Ljava/lang/String;
    array-length v2, v1

    if-lez v2, :cond_4

    array-length v2, v1

    rem-int/lit8 v2, v2, 0x2

    if-eqz v2, :cond_1

    goto :goto_2

    .line 356
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntries:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 357
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntryValues:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 358
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v2, v1

    if-ge v0, v2, :cond_3

    .line 359
    rem-int/lit8 v2, v0, 0x2

    if-nez v2, :cond_2

    .line 360
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntryValues:Ljava/util/List;

    aget-object v3, v1, v0

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 362
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntries:Ljava/util/List;

    aget-object v3, v1, v0

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 358
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 365
    .end local v0    # "i":I
    :cond_3
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v2, 0x1090008

    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntries:Ljava/util/List;

    invoke-direct {v0, p0, v2, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeAdatper:Landroid/widget/ArrayAdapter;

    .line 367
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 368
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeAdatper:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 369
    const/4 v0, 0x1

    return v0

    .line 353
    :cond_4
    :goto_2
    return v0
.end method

.method private initComponents()V
    .locals 5

    .line 372
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAudioManager:Landroid/media/AudioManager;

    .line 373
    const v0, 0x7f060040

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeSpinner:Landroid/widget/Spinner;

    .line 374
    const v0, 0x7f060041

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaSpinner:Landroid/widget/Spinner;

    .line 375
    const v0, 0x7f060043

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeSpinner:Landroid/widget/Spinner;

    .line 376
    const v0, 0x7f06003f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mList:Landroid/widget/ListView;

    .line 377
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;

    invoke-direct {v0, p0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAdapter:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$MyAdapter;

    .line 378
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mList:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 379
    const v0, 0x7f06003d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mBtnSet:Landroid/widget/Button;

    .line 380
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 382
    const-string v0, "APP_GET_CATEGORY=Speech#Band"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 383
    .local v0, "modes1":Ljava/lang/String;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->handleModeList(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    const-string v3, "Wrong format"

    if-nez v1, :cond_0

    .line 384
    invoke-static {p0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 387
    :cond_0
    const-string v1, "APP_GET_CATEGORY=Speech#VolIndex"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 388
    .local v1, "modes2":Ljava/lang/String;
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->handleVolindexList(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 389
    invoke-static {p0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 391
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeSpinner:Landroid/widget/Spinner;

    const/16 v3, 0x8

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 393
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeSpinner:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)V

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 426
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaSpinner:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$2;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)V

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 440
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeSpinner:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$3;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$3;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)V

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 454
    return-void
.end method

.method private setDebugInfoIndex10Param()V
    .locals 6

    .line 467
    const-string v0, "Audio/SpeechEnhancement2"

    const-string v1, "setDebugInfoIndex10Param"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 469
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    const/16 v2, 0xa

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 470
    .local v1, "index":I
    if-ltz v1, :cond_0

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParserEntries:[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_0

    .line 471
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParserEntries:[Ljava/lang/String;

    aget-object v2, v2, v1

    .line 472
    .local v2, "cmd":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAudioManager:Landroid/media/AudioManager;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "SPH_PARSER_SET_PARAM,PHONE_CALL,TestMode,"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 473
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "setDebugInfoIndex10Param "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 478
    .end local v1    # "index":I
    .end local v2    # "cmd":Ljava/lang/String;
    :cond_0
    nop

    .line 479
    return-void

    .line 475
    :catch_0
    move-exception v0

    .line 476
    .local v0, "e":Ljava/lang/NumberFormatException;
    const/4 v1, 0x0

    const-string v2, "Wrong format"

    invoke-static {p0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 477
    return-void
.end method

.method private setParameters(Ljava/lang/String;)V
    .locals 7
    .param p1, "command"    # Ljava/lang/String;

    .line 252
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->getAudioTuningVer()Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 253
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v0, p1}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    goto :goto_0

    .line 255
    :cond_0
    const-string v0, "="

    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    .line 256
    .local v0, "index":I
    add-int/lit8 v1, v0, 0x1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 257
    const-string v1, "#"

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 258
    .local v1, "params":[Ljava/lang/String;
    array-length v2, v1

    const/4 v3, 0x4

    if-ne v2, v3, :cond_1

    .line 259
    const/4 v2, 0x0

    aget-object v3, v1, v2

    const/4 v4, 0x1

    aget-object v4, v1, v4

    const/4 v5, 0x2

    aget-object v5, v1, v5

    const/4 v6, 0x3

    aget-object v6, v1, v6

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 260
    aget-object v2, v1, v2

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->saveToWork(Ljava/lang/String;)Z

    .line 263
    .end local v0    # "index":I
    .end local v1    # "params":[Ljava/lang/String;
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setParameters "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Audio/SpeechEnhancement2"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 265
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 9
    .param p1, "arg0"    # Landroid/view/View;

    .line 487
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mBtnSet:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 488
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 489
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v2, "GET_CUST_XML_ENABLE"

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 490
    .local v0, "check":Ljava/lang/String;
    const-string v2, "Audio/SpeechEnhancement2"

    if-eqz v0, :cond_0

    const-string v3, "GET_CUST_XML_ENABLE=1"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 491
    const-string v3, "get CUST_XML_PARAM = 1"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 493
    :cond_0
    const-string v3, "set CUST_XML_PARAM = 1"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 494
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v3, "SET_CUST_XML_ENABLE=1"

    invoke-virtual {v2, v3}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 495
    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->CustXmlEnableChanged(I)Z

    .line 498
    .end local v0    # "check":Ljava/lang/String;
    :cond_1
    :goto_0
    const-string v0, ""

    .line 499
    .local v0, "cmd":Ljava/lang/String;
    iget v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeIndex:I

    const/4 v3, 0x0

    if-eqz v2, :cond_5

    if-eq v2, v1, :cond_4

    .line 508
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntryValues:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-gtz v2, :cond_2

    goto :goto_1

    .line 511
    :cond_2
    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeEntryValues:Ljava/util/List;

    iget v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mModeIndex:I

    .line 512
    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    aput-object v4, v2, v3

    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaEntryValues:Ljava/util/List;

    iget v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParaIndex:I

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    aput-object v4, v2, v1

    const/4 v4, 0x2

    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeEntryValues:Ljava/util/List;

    iget v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mVolumeIndex:I

    .line 513
    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    aput-object v5, v2, v4

    .line 511
    const-string v4, "APP_SET_PARAM=Speech#Band,%s,Profile,%s,VolIndex,%s,Network,GSM#speech_mode_para#"

    invoke-static {v4, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 509
    :cond_3
    :goto_1
    return-void

    .line 504
    :cond_4
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->setDebugInfoIndex10Param()V

    .line 505
    const-string v0, "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#"

    .line 506
    goto :goto_2

    .line 501
    :cond_5
    const-string v0, "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para#"

    .line 502
    nop

    .line 516
    :goto_2
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParameters:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_6

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 518
    .local v4, "p":Ljava/lang/String;
    :try_start_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "0x"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v4}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v6

    const/16 v8, 0x10

    invoke-static {v6, v7, v8}, Ljava/lang/Long;->toString(JI)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ","

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v5

    .line 522
    nop

    .line 523
    .end local v4    # "p":Ljava/lang/String;
    goto :goto_3

    .line 519
    .restart local v4    # "p":Ljava/lang/String;
    :catch_0
    move-exception v1

    .line 520
    .local v1, "e":Ljava/lang/NumberFormatException;
    const-string v2, "Wrong format"

    invoke-static {p0, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 521
    return-void

    .line 524
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    .end local v4    # "p":Ljava/lang/String;
    :cond_6
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    sub-int/2addr v2, v1

    invoke-virtual {v0, v3, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 525
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->setParameters(Ljava/lang/String;)V

    .line 526
    const-string v1, "Set parameter done"

    invoke-static {p0, v1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 528
    .end local v0    # "cmd":Ljava/lang/String;
    :cond_7
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 457
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 458
    const v0, 0x7f080016

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->setContentView(I)V

    .line 459
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->initComponents()V

    .line 460
    invoke-virtual {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01009b

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParserEntries:[Ljava/lang/String;

    .line 461
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParserEntries:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 462
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->mParserMap:Ljava/util/Map;

    aget-object v1, v1, v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 461
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 464
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public onCreateDialog(I)Landroid/app/Dialog;
    .locals 5
    .param p1, "dialogId"    # I

    .line 532
    const v0, 0x7f0a05ab

    const v1, 0x7f0a05b7

    const/high16 v2, 0x1040000

    const v3, 0x104000a

    const/4 v4, 0x0

    packed-switch p1, :pswitch_data_0

    .line 582
    return-object v4

    .line 577
    :pswitch_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 578
    invoke-virtual {v1, v0}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a05b8

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 579
    invoke-virtual {v0, v3, v4}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 580
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 577
    return-object v0

    .line 572
    :pswitch_1
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 573
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a05b9

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 574
    invoke-virtual {v0, v3, v4}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 575
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 572
    return-object v0

    .line 567
    :pswitch_2
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 568
    invoke-virtual {v1, v0}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a05b1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 569
    invoke-virtual {v0, v3, v4}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 570
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 567
    return-object v0

    .line 562
    :pswitch_3
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 563
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a05b2

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 564
    invoke-virtual {v0, v3, v4}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 565
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 562
    return-object v0

    .line 548
    :pswitch_4
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v1, 0x7f0a0339

    .line 549
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a0338

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$5;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$5;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)V

    .line 550
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 559
    invoke-virtual {v0, v2, v4}, Landroid/app/AlertDialog$Builder;->setNegativeButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 560
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 548
    return-object v0

    .line 534
    :pswitch_5
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v1, 0x7f0a0337

    .line 535
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a0336

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$4;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$4;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)V

    .line 536
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 545
    invoke-virtual {v0, v2, v4}, Landroid/app/AlertDialog$Builder;->setNegativeButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 546
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 534
    return-object v0

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
