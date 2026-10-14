.class public Lcom/mediatek/engineermode/wifi/ChannelInfo;
.super Ljava/lang/Object;
.source "ChannelInfo.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    }
.end annotation


# static fields
.field static final BW_160M:I = 0x8

.field static final BW_20M:I = 0x1

.field static final BW_40M:I = 0x2

.field static final BW_80M:I = 0x4

.field static final CHANNEL_2DOT4G:I = 0xa

.field static final CHANNEL_5G:I = 0xb

.field public static final CHANNEL_NUMBER_14:I = 0xe

.field private static final DEFAULT_CHANNEL_COUNT:I = 0xb

.field private static final MAX_CHANNEL_COUNT:I = 0x4b

.field private static final TAG:Ljava/lang/String; = "WifiChannelInfo"

.field private static final sBw40mUnsupported2dot4GChannels:[I

.field private static sCachedSupportChannels:[J

.field private static sCachedSupportedChs:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "[I>;"
        }
    .end annotation
.end field

.field private static sChannelDataDb:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;",
            ">;"
        }
    .end annotation
.end field

.field private static sChannelGroupMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;",
            ">;>;"
        }
    .end annotation
.end field

.field protected static sChannels:[J

.field protected static sHas14Ch:Z

.field protected static sHasUpper14Ch:Z

.field private static final sWifiChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

.field private static final sWifiFormatChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;


# instance fields
.field private mChannelSelect:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 16

    .line 90
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    .line 91
    const/4 v1, 0x0

    sput-boolean v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sHas14Ch:Z

    .line 92
    sput-boolean v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sHasUpper14Ch:Z

    .line 94
    const/4 v2, 0x5

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    sput-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sBw40mUnsupported2dot4GChannels:[I

    .line 96
    const/16 v3, 0x5c

    new-array v3, v3, [Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v5, 0x1

    const-string v6, "Channel 1 [2412MHz]"

    const v7, 0x24cde0

    invoke-direct {v4, v5, v6, v7, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v1

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v6, 0x2

    const-string v7, "Channel 2 [2417MHz]"

    const v8, 0x24e168

    invoke-direct {v4, v6, v7, v8, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v5

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v7, 0x3

    const-string v8, "Channel 3 [2422MHz]"

    const v9, 0x24f4f0

    invoke-direct {v4, v7, v8, v9, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v6

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v8, 0x4

    const-string v9, "Channel 4 [2427MHz]"

    const v10, 0x250878

    invoke-direct {v4, v8, v9, v10, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v7

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const-string v9, "Channel 5 [2432MHz]"

    const v10, 0x251c00

    invoke-direct {v4, v2, v9, v10, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v8

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v9, 0x6

    const-string v10, "Channel 6 [2437MHz]"

    const v11, 0x252f88

    invoke-direct {v4, v9, v10, v11, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v2

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v10, 0x7

    const-string v11, "Channel 7 [2442MHz]"

    const v12, 0x254310

    invoke-direct {v4, v10, v11, v12, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v9

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v11, 0x8

    const-string v12, "Channel 8 [2447MHz]"

    const v13, 0x255698

    invoke-direct {v4, v11, v12, v13, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v10

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v12, 0x9

    const-string v13, "Channel 9 [2452MHz]"

    const v14, 0x256a20

    invoke-direct {v4, v12, v13, v14, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v11

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v13, 0xa

    const-string v14, "Channel 10 [2457MHz]"

    const v15, 0x257da8

    invoke-direct {v4, v13, v14, v15, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v12

    new-instance v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v14, 0xb

    const-string v15, "Channel 11 [2462MHz]"

    const v0, 0x259130

    invoke-direct {v4, v14, v15, v0, v7}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v4, v3, v13

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v4, 0xc

    const-string v15, "Channel 12 [2467MHz]"

    const v13, 0x25a4b8

    invoke-direct {v0, v4, v15, v13, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v14

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v13, 0xd

    const-string v15, "Channel 13 [2472MHz]"

    const v14, 0x25b840

    invoke-direct {v0, v13, v15, v14, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v4

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v14, 0xe

    const-string v15, "Channel 14 [2484MHz]"

    const v4, 0x25e720

    invoke-direct {v0, v14, v15, v4, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v13

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v4, 0x12

    const-string v15, "Channel 8 5G [5040MHz]"

    const v13, 0x4ce780

    invoke-direct {v0, v4, v15, v13, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v14

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v4, 0x14

    const-string v13, "Channel 10 5G [5050MHz]"

    const v15, 0x4d0e90

    invoke-direct {v0, v4, v13, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v4, 0xf

    aput-object v0, v3, v4

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v4, 0x16

    const-string v13, "Channel 12 5G [5060MHz]"

    const v15, 0x4d35a0

    invoke-direct {v0, v4, v13, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v4, 0x10

    aput-object v0, v3, v4

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v4, 0x1a

    const-string v13, "Channel 16 5G [5080MHz]"

    const v15, 0x4d83c0

    invoke-direct {v0, v4, v13, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v4, 0x11

    aput-object v0, v3, v4

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v4, 0x24

    const-string v13, "Channel 36 [5180MHz]"

    const v15, 0x4f0a60

    invoke-direct {v0, v4, v13, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v13, 0x12

    aput-object v0, v3, v13

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v13, 0x26

    const-string v15, "Channel 38 [5190MHz]"

    const v14, 0x4f3170

    invoke-direct {v0, v13, v15, v14, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v14, 0x13

    aput-object v0, v3, v14

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v14, 0x28

    const-string v15, "Channel 40 [5200MHz]"

    const v12, 0x4f5880

    invoke-direct {v0, v14, v15, v12, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v12, 0x14

    aput-object v0, v3, v12

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v12, 0x2a

    const-string v15, "Channel 42 [5210MHz]"

    const v10, 0x4f7f90

    invoke-direct {v0, v12, v15, v10, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v10, 0x15

    aput-object v0, v3, v10

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v10, 0x2c

    const-string v15, "Channel 44 [5220MHz]"

    const v9, 0x4fa6a0

    invoke-direct {v0, v10, v15, v9, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v9, 0x16

    aput-object v0, v3, v9

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v9, 0x2e

    const-string v15, "Channel 46 [5230MHz]"

    const v2, 0x4fcdb0

    invoke-direct {v0, v9, v15, v2, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x17

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x30

    const-string v15, "Channel 48 [5240MHz]"

    const v7, 0x4ff4c0

    invoke-direct {v0, v2, v15, v7, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x18

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x32

    const-string v7, "Channel 50 [5250MHz]"

    const v15, 0x501bd0

    invoke-direct {v0, v2, v7, v15, v11}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x19

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x34

    const-string v7, "Channel 52 [5260MHz]"

    const v15, 0x5042e0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x1a

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x36

    const-string v7, "Channel 54 [5270MHz]"

    const v15, 0x5069f0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x1b

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x38

    const-string v7, "Channel 56 [5280MHz]"

    const v15, 0x509100

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x1c

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x3a

    const-string v7, "Channel 58 [5290MHz]"

    const v15, 0x50b810

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x1d

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x3c

    const-string v7, "Channel 60 [5300MHz]"

    const v15, 0x50df20

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x1e

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x3e

    const-string v7, "Channel 62 [5310MHz]"

    const v15, 0x510630

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x1f

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x40

    const-string v7, "Channel 64 [5320MHz]"

    const v15, 0x512d40

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x20

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x44

    const-string v7, "Channel 68 [5340MHz]"

    const v15, 0x517b60

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x21

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x46

    const-string v7, "Channel 70 [5350MHz]"

    const v15, 0x51a270

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x22

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x48

    const-string v7, "Channel 72 [5360MHz]"

    const v15, 0x51c980

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x23

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x4a

    const-string v7, "Channel 74 [5370MHz]"

    const v15, 0x51f090

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v4

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x4c

    const-string v7, "Channel 76 [5380MHz]"

    const v15, 0x5217a0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x25

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x4e

    const-string v7, "Channel 78 [5390MHz]"

    const v15, 0x523eb0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v13

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x50

    const-string v7, "Channel 80 [5400MHz]"

    const v15, 0x5265c0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x27

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x52

    const-string v7, "Channel 82 [5410MHz]"

    const v15, 0x528cd0

    invoke-direct {v0, v2, v7, v15, v11}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v14

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x54

    const-string v7, "Channel 84 [5420MHz]"

    const v15, 0x52b3e0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x29

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x56

    const-string v7, "Channel 86 [5430MHz]"

    const v15, 0x52daf0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v12

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x58

    const-string v7, "Channel 88 [5440MHz]"

    const v15, 0x530200

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x2b

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x5a

    const-string v7, "Channel 90 [5450MHz]"

    const v15, 0x532910

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v10

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x5c

    const-string v7, "Channel 92 [5460MHz]"

    const v15, 0x535020

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x2d

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x5e

    const-string v7, "Channel 94 [5470MHz]"

    const v15, 0x537730

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    aput-object v0, v3, v9

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x60

    const-string v7, "Channel 96 [5480MHz]"

    const v15, 0x539e40

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x2f

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x64

    const-string v7, "Channel 100 [5500MHz]"

    const v15, 0x53ec60

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x30

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x66

    const-string v7, "Channel 102 [5510MHz]"

    const v15, 0x541370

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x31

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x68

    const-string v7, "Channel 104 [5520MHz]"

    const v15, 0x543a80

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x32

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x6a

    const-string v7, "Channel 106 [5530MHz]"

    const v15, 0x546190

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x33

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x6c

    const-string v7, "Channel 108 [5540MHz]"

    const v15, 0x5488a0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x34

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x6e

    const-string v7, "Channel 110 [5550MHz]"

    const v15, 0x54afb0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x35

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x70

    const-string v7, "Channel 112 [5560MHz]"

    const v15, 0x54d6c0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x36

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x72

    const-string v7, "Channel 114 [5570MHz]"

    const v15, 0x54fdd0

    invoke-direct {v0, v2, v7, v15, v11}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x37

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x74

    const-string v7, "Channel 116 [5580MHz]"

    const v15, 0x5524e0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x38

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x76

    const-string v7, "Channel 118 [5590MHz]"

    const v15, 0x554bf0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x39

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x78

    const-string v7, "Channel 120 [5600MHz]"

    const v15, 0x557300

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x3a

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x7a

    const-string v7, "Channel 122 [5610MHz]"

    const v15, 0x559a10

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x3b

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x7c

    const-string v7, "Channel 124 [5620MHz]"

    const v15, 0x55c120

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x3c

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x7e

    const-string v7, "Channel 126 [5630MHz]"

    const v15, 0x55e830

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x3d

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x80

    const-string v7, "Channel 128 [5640MHz]"

    const v15, 0x560f40

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x3e

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x84

    const-string v7, "Channel 132 [5660MHz]"

    const v15, 0x565d60

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x3f

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x86

    const-string v7, "Channel 134 [5670MHz]"

    const v15, 0x568470

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x40

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x88

    const-string v7, "Channel 136 [5680MHz]"

    const v15, 0x56ab80

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x41

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x8a

    const-string v7, "Channel 138 [5690MHz]"

    const v15, 0x56d290

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x42

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x8c

    const-string v7, "Channel 140 [5700MHz]"

    const v15, 0x56f9a0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x43

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x8e

    const-string v7, "Channel 142 [5710MHz]"

    const v15, 0x5720b0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x44

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x90

    const-string v7, "Channel 144 [5720MHz]"

    const v15, 0x5747c0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x45

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x95

    const-string v7, "Channel 149 [5745MHz]"

    const v15, 0x57a968

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x46

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x97

    const-string v7, "Channel 151 [5755MHz]"

    const v15, 0x57d078

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x47

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x99

    const-string v7, "Channel 153 [5765MHz]"

    const v15, 0x57f788

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x48

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x9b

    const-string v7, "Channel 155 [5775MHz]"

    const v15, 0x581e98

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x49

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x9d

    const-string v7, "Channel 157 [5785MHz]"

    const v15, 0x5845a8

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x4a

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0x9f

    const-string v7, "Channel 159 [5795MHz]"

    const v15, 0x586cb8

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x4b

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xa1

    const-string v7, "Channel 161 [5805MHz]"

    const v15, 0x5893c8

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x4c

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xa3

    const-string v7, "Channel 163 [5815MHz]"

    const v15, 0x58bad8

    invoke-direct {v0, v2, v7, v15, v11}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x4d

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xa5

    const-string v7, "Channel 165 [5825MHz]"

    const v15, 0x58e1e8

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x4e

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xa7

    const-string v7, "Channel 167 [5835MHz]"

    const v15, 0x5908f8

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x4f

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xa9

    const-string v7, "Channel 169 [5845MHz]"

    const v15, 0x593008

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x50

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xab

    const-string v7, "Channel 171 [5855MHz]"

    const v15, 0x595718

    invoke-direct {v0, v2, v7, v15, v8}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x51

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xad

    const-string v7, "Channel 173 [5865MHz]"

    const v15, 0x597e28

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x52

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xaf

    const-string v7, "Channel 175 [5875MHz]"

    const v15, 0x59a538

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x53

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xb1

    const-string v7, "Channel 177 [5885MHz]"

    const v15, 0x59cc48

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x54

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xb5

    const-string v7, "Channel 181 [5905MHz]"

    const v15, 0x5a1a68

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x55

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xb8

    const-string v7, "Channel 184 [4920MHz]"

    const v15, 0x4b12c0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x56

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xba

    const-string v7, "Channel 186 [4930MHz]"

    const v15, 0x4b39d0

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x57

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xbc

    const-string v7, "Channel 188 [4940MHz]"

    const v15, 0x4b60e0

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x58

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xc0

    const-string v7, "Channel 192 [4960MHz]"

    const v15, 0x4baf00

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x59

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xc2

    const-string v7, "Channel 194 [4970MHz]"

    const v15, 0x4bd610

    invoke-direct {v0, v2, v7, v15, v6}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x5a

    aput-object v0, v3, v2

    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/16 v2, 0xc4

    const-string v7, "Channel 196 [4980MHz]"

    const v15, 0x4bfd20

    invoke-direct {v0, v2, v7, v15, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;-><init>(ILjava/lang/String;II)V

    const/16 v2, 0x5b

    aput-object v0, v3, v2

    sput-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sWifiChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 195
    const/16 v0, 0x48

    new-array v0, v0, [Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "1 [2412MHz]"

    invoke-direct {v2, v5, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v1

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "2 [2417MHz]"

    invoke-direct {v2, v6, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v5

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "3 [2422MHz]"

    const/4 v7, 0x3

    invoke-direct {v2, v7, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v6

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "4 [2427MHz]"

    invoke-direct {v2, v8, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v7

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "5 [2432MHz]"

    const/4 v6, 0x5

    invoke-direct {v2, v6, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v8

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "6 [2437MHz]"

    const/4 v7, 0x6

    invoke-direct {v2, v7, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v6

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "7 [2442MHz]"

    const/4 v6, 0x7

    invoke-direct {v2, v6, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v7

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "8 [2447MHz]"

    invoke-direct {v2, v11, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v6

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "9 [2452MHz]"

    const/16 v6, 0x9

    invoke-direct {v2, v6, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v11

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "10 [2457MHz]"

    const/16 v7, 0xa

    invoke-direct {v2, v7, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v6

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "11 [2462MHz]"

    const/16 v6, 0xb

    invoke-direct {v2, v6, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v7

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "12 [2467MHz]"

    const/16 v7, 0xc

    invoke-direct {v2, v7, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v6

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "13 [2472MHz]"

    const/16 v6, 0xd

    invoke-direct {v2, v6, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v7

    new-instance v2, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v3, "14 [2484MHz]"

    const/16 v7, 0xe

    invoke-direct {v2, v7, v3, v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v2, v0, v6

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "8 [5040MHz]"

    invoke-direct {v1, v11, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v7

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "10 [5050MHz]"

    const/16 v3, 0xa

    invoke-direct {v1, v3, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0xf

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "12 [5060MHz]"

    const/16 v3, 0xc

    invoke-direct {v1, v3, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x10

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "14 [5070MHz]"

    const/16 v3, 0xe

    invoke-direct {v1, v3, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x11

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x10

    const-string v3, "16 [5080MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x12

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "36 [5180MHz]"

    invoke-direct {v1, v4, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x13

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "38 [5190MHz]"

    invoke-direct {v1, v13, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x14

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "40 [5200MHz]"

    invoke-direct {v1, v14, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x15

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "42 [5210MHz]"

    invoke-direct {v1, v12, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x16

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "44 [5220MHz]"

    invoke-direct {v1, v10, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x17

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const-string v2, "46 [5230MHz]"

    invoke-direct {v1, v9, v2, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x18

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x30

    const-string v3, "48 [5240MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x19

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x32

    const-string v3, "50 [5250MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x1a

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x34

    const-string v3, "52 [5260MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x1b

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x36

    const-string v3, "54 [5270MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x1c

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x38

    const-string v3, "56 [5280MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x1d

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x3a

    const-string v3, "58 [5290MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x1e

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x3c

    const-string v3, "60 [5300MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x1f

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x3e

    const-string v3, "62 [5310MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x20

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x40

    const-string v3, "64 [5320MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x21

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x64

    const-string v3, "100 [5500MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x22

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x66

    const-string v3, "102 [5510MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x23

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x68

    const-string v3, "104 [5520MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v4

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x6a

    const-string v3, "106 [5530MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x25

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x6c

    const-string v3, "108 [5540MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v13

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x6e

    const-string v3, "110 [5550MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x27

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x70

    const-string v3, "112 [5560MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v14

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x72

    const-string v3, "114 [5570MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x29

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x74

    const-string v3, "116 [5580MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v12

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x76

    const-string v3, "118 [5590MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x2b

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x78

    const-string v3, "120 [5600MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v10

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x7a

    const-string v3, "122 [5610MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x2d

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x7c

    const-string v3, "124 [5620MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    aput-object v1, v0, v9

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x7e

    const-string v3, "126 [5630MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x2f

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x80

    const-string v3, "128 [5640MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x30

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x84

    const-string v3, "132 [5660MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x31

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x86

    const-string v3, "134 [5670MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x32

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x88

    const-string v3, "136 [5680MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x33

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x8a

    const-string v3, "138 [5690MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x34

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x8c

    const-string v3, "140 [5700MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x35

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x8e

    const-string v3, "142 [5710MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x36

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x90

    const-string v3, "144 [5720MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x37

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x95

    const-string v3, "149 [5745MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x38

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x97

    const-string v3, "151 [5755MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x39

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x99

    const-string v3, "153 [5765MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x3a

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x9b

    const-string v3, "155 [5775MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x3b

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x9d

    const-string v3, "157 [5785MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x3c

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0x9f

    const-string v3, "159 [5795MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x3d

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xa1

    const-string v3, "161 [5805MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x3e

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xa5

    const-string v3, "165 [5825MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x3f

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xa9

    const-string v3, "169 [5845MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x40

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xad

    const-string v3, "173 [5865MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x41

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xb8

    const-string v3, "184 [4920MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x42

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xba

    const-string v3, "186 [4930MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x43

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xbc

    const-string v3, "188 [4940MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x44

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xc0

    const-string v3, "192 [4960MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x45

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xc2

    const-string v3, "194 [4970MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x46

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    const/16 v2, 0xc4

    const-string v3, "196 [4980MHz]"

    invoke-direct {v1, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;-><init>(ILjava/lang/String;Z)V

    const/16 v2, 0x47

    aput-object v1, v0, v2

    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sWifiFormatChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    .line 269
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    .line 270
    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelGroupMap:Ljava/util/HashMap;

    .line 271
    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportChannels:[J

    .line 272
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    .line 873
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->initChannelDataDatabase()Z

    .line 874
    return-void

    :array_0
    .array-data 4
        0x1
        0x2
        0xc
        0xd
        0xe
    .end array-data
.end method

.method public constructor <init>()V
    .locals 2

    .line 867
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 89
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->mChannelSelect:Ljava/lang/String;

    .line 868
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sWifiChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    const/4 v1, 0x0

    aget-object v0, v0, v1

    iget-object v0, v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->mChannelSelect:Ljava/lang/String;

    .line 870
    return-void
.end method

.method private static addToChannelGroup(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)V
    .locals 3
    .param p0, "groupId"    # I
    .param p1, "cd"    # Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 330
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelGroupMap:Ljava/util/HashMap;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    .line 331
    .local v0, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v0, :cond_0

    .line 332
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    move-object v0, v1

    .line 333
    sget-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelGroupMap:Ljava/util/HashMap;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 335
    :cond_0
    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 336
    return-void
.end method

.method private computeInsertIndex(Landroid/widget/ArrayAdapter;I)I
    .locals 4
    .param p2, "channel"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;I)I"
        }
    .end annotation

    .line 707
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, -0x1

    .line 708
    .local v0, "targetIndex":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {p1}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 709
    invoke-virtual {p1, v1}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 710
    .local v2, "name":Ljava/lang/String;
    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->extractChannelIdFromName(Ljava/lang/String;)I

    move-result v3

    .line 711
    .local v3, "id":I
    if-le v3, p2, :cond_0

    .line 712
    move v0, v1

    .line 713
    goto :goto_1

    .line 708
    .end local v2    # "name":Ljava/lang/String;
    .end local v3    # "id":I
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 716
    .end local v1    # "i":I
    :cond_1
    :goto_1
    const/4 v1, -0x1

    if-ne v0, v1, :cond_2

    .line 717
    invoke-virtual {p1}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v0

    .line 719
    :cond_2
    return v0
.end method

.method private static extractChannelIdFromName(Ljava/lang/String;)I
    .locals 7
    .param p0, "fullName"    # Ljava/lang/String;

    .line 727
    const/4 v0, -0x1

    .line 728
    .local v0, "id":I
    const-string v1, " +"

    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 729
    .local v1, "strs":[Ljava/lang/String;
    array-length v2, v1

    const-string v3, "NumberFormatException:"

    const/4 v4, 0x1

    const-string v5, "WifiChannelInfo"

    const/4 v6, 0x3

    if-ne v2, v6, :cond_0

    .line 731
    :try_start_0
    aget-object v2, v1, v4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v2

    .line 734
    :goto_0
    goto :goto_2

    .line 732
    :catch_0
    move-exception v2

    .line 733
    .local v2, "e":Ljava/lang/NumberFormatException;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v2    # "e":Ljava/lang/NumberFormatException;
    goto :goto_0

    .line 735
    :cond_0
    array-length v2, v1

    const/4 v6, 0x4

    if-ne v2, v6, :cond_1

    .line 737
    :try_start_1
    aget-object v2, v1, v4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    add-int/lit8 v0, v2, 0xa

    .line 740
    :goto_1
    goto :goto_2

    .line 738
    :catch_1
    move-exception v2

    .line 739
    .restart local v2    # "e":Ljava/lang/NumberFormatException;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v2    # "e":Ljava/lang/NumberFormatException;
    goto :goto_1

    .line 742
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "extractChannelIdFromName(): "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " invalid name format!"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 744
    :goto_2
    return v0
.end method

.method static getAllChannels()[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    .locals 1

    .line 192
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sWifiFormatChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    return-object v0
.end method

.method private static getCachedSupportChannels()[J
    .locals 5

    .line 384
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportChannels:[J

    if-nez v0, :cond_0

    .line 386
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    const/4 v1, 0x0

    aget-wide v0, v0, v1

    long-to-int v0, v0

    .line 387
    .local v0, "len":I
    new-array v1, v0, [J

    sput-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportChannels:[J

    .line 388
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 389
    sget-object v2, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportChannels:[J

    sget-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    add-int/lit8 v4, v1, 0x1

    aget-wide v3, v3, v4

    aput-wide v3, v2, v1

    .line 388
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 392
    .end local v0    # "len":I
    .end local v1    # "i":I
    :cond_0
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportChannels:[J

    return-object v0
.end method

.method static getChannelFrequency(I)I
    .locals 2
    .param p0, "channelId"    # I

    .line 811
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 812
    .local v0, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    if-nez v0, :cond_0

    .line 813
    const/4 v1, 0x0

    return v1

    .line 815
    :cond_0
    iget v1, v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->frequency:I

    return v1
.end method

.method private static getChannelGroup(I)Ljava/util/ArrayList;
    .locals 2
    .param p0, "groupId"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;",
            ">;"
        }
    .end annotation

    .line 339
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelGroupMap:Ljava/util/HashMap;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    return-object v0
.end method

.method static getChannelGroupArray(I)[I
    .locals 6
    .param p0, "groupId"    # I

    .line 316
    invoke-static {p0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v0

    .line 317
    .local v0, "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v0, :cond_0

    .line 318
    const/4 v1, 0x0

    return-object v1

    .line 320
    :cond_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 321
    .local v1, "length":I
    new-array v2, v1, [I

    .line 322
    .local v2, "array":[I
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_1

    .line 323
    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 324
    .local v4, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v5, v4, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    aput v5, v2, v3

    .line 322
    .end local v4    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 326
    .end local v3    # "i":I
    :cond_1
    return-object v2
.end method

.method static getChannelName(I)Ljava/lang/String;
    .locals 2
    .param p0, "channelId"    # I

    .line 803
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 804
    .local v0, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    if-nez v0, :cond_0

    .line 805
    const/4 v1, 0x0

    return-object v1

    .line 807
    :cond_0
    iget-object v1, v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    return-object v1
.end method

.method static getSupportChannels()V
    .locals 9

    .line 838
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    if-nez v0, :cond_6

    .line 839
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->isInTestMode()Z

    move-result v0

    const-string v1, "WifiChannelInfo"

    if-eqz v0, :cond_5

    .line 840
    const/16 v0, 0x4b

    new-array v0, v0, [J

    sput-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    .line 841
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->getSupportChannelList([J)I

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_3

    .line 842
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "LENGTH channels[0] = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    aget-wide v3, v3, v2

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 843
    const/4 v0, 0x1

    .local v0, "i":I
    :goto_0
    int-to-long v3, v0

    sget-object v5, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    aget-wide v6, v5, v2

    cmp-long v3, v3, v6

    if-gtz v3, :cond_2

    .line 844
    aget-wide v3, v5, v0

    const-wide/16 v5, 0xe

    cmp-long v3, v5, v3

    const/4 v4, 0x1

    if-nez v3, :cond_0

    .line 845
    sput-boolean v4, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sHas14Ch:Z

    .line 847
    :cond_0
    sget-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    aget-wide v7, v3, v0

    cmp-long v3, v7, v5

    if-lez v3, :cond_1

    .line 848
    sput-boolean v4, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sHasUpper14Ch:Z

    .line 850
    :cond_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "channels["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    aget-wide v4, v4, v0

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 843
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .end local v0    # "i":I
    :cond_2
    goto :goto_2

    .line 853
    :cond_3
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    const-wide/16 v3, 0xb

    aput-wide v3, v0, v2

    .line 854
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    const/16 v1, 0xb

    if-ge v0, v1, :cond_4

    .line 855
    sget-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    add-int/lit8 v2, v0, 0x1

    add-int/lit8 v3, v0, 0x1

    int-to-long v3, v3

    aput-wide v3, v1, v2

    .line 854
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .end local v0    # "i":I
    :cond_4
    goto :goto_2

    .line 859
    :cond_5
    const-string v0, "Wifi is not initialed"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 862
    :cond_6
    :goto_2
    return-void
.end method

.method private getSupported2dot4gChannels()[I
    .locals 9

    .line 538
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    const/16 v1, 0xa

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [I

    .line 539
    .local v0, "cachedChs":[I
    if-eqz v0, :cond_0

    .line 540
    return-object v0

    .line 542
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getCachedSupportChannels()[J

    move-result-object v2

    .line 543
    .local v2, "chsupported":[J
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 544
    .local v3, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Long;>;"
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    array-length v5, v2

    if-ge v4, v5, :cond_2

    .line 545
    aget-wide v5, v2, v4

    .line 546
    .local v5, "id":J
    const-wide/16 v7, 0x1

    cmp-long v7, v5, v7

    if-ltz v7, :cond_1

    const-wide/16 v7, 0xe

    cmp-long v7, v5, v7

    if-gtz v7, :cond_1

    .line 547
    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 544
    .end local v5    # "id":J
    :cond_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 550
    .end local v4    # "i":I
    :cond_2
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_4

    .line 551
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v4

    new-array v4, v4, [I

    .line 552
    .local v4, "target":[I
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_1
    array-length v6, v4

    if-ge v5, v6, :cond_3

    .line 553
    invoke-interface {v3, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Long;

    invoke-virtual {v6}, Ljava/lang/Long;->intValue()I

    move-result v6

    aput v6, v4, v5

    .line 552
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 555
    .end local v5    # "i":I
    :cond_3
    sget-object v5, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    invoke-virtual {v5, v1, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 556
    return-object v4

    .line 558
    .end local v4    # "target":[I
    :cond_4
    const/4 v1, 0x0

    return-object v1
.end method

.method private getSupported5gChannelsByBandwidth(I)[I
    .locals 10
    .param p1, "bandwidth"    # I

    .line 579
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 580
    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Integer;>;"
    const/4 v1, 0x1

    .line 581
    .local v1, "isCached":Z
    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne p1, v3, :cond_3

    .line 582
    sget-object v4, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [I

    .line 583
    .local v3, "cachedChs":[I
    if-eqz v3, :cond_0

    .line 584
    return-object v3

    .line 586
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getCachedSupportChannels()[J

    move-result-object v4

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->longs2ints([J)[I

    move-result-object v4

    .line 587
    .local v4, "chsupported":[I
    if-eqz v4, :cond_2

    .line 588
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    array-length v6, v4

    if-ge v5, v6, :cond_2

    .line 589
    aget v6, v4, v5

    .line 590
    .local v6, "id":I
    invoke-direct {p0, v6, p1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isIn5gChannelBandwidth(II)Z

    move-result v7

    if-eqz v7, :cond_1

    .line 591
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {v0, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 588
    .end local v6    # "id":I
    :cond_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 596
    .end local v3    # "cachedChs":[I
    .end local v4    # "chsupported":[I
    .end local v5    # "i":I
    :cond_2
    goto/16 :goto_3

    :cond_3
    const-string v3, "WifiChannelInfo"

    const/4 v4, 0x2

    if-ne p1, v4, :cond_8

    .line 597
    sget-object v5, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [I

    .line 598
    .local v5, "cachedChs":[I
    if-eqz v5, :cond_4

    .line 599
    return-object v5

    .line 601
    :cond_4
    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v6

    .line 602
    .local v6, "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v6, :cond_5

    .line 603
    const-string v4, "getSupported5gChannelsByBandwidth BW_40M channel group is null"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 604
    return-object v2

    .line 606
    :cond_5
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_1
    invoke-virtual {v6}, Ljava/util/ArrayList;->size()I

    move-result v7

    if-ge v3, v7, :cond_7

    .line 607
    invoke-virtual {v6, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 608
    .local v7, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v8, v7, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 609
    .local v8, "id":I
    const/16 v9, 0xe

    if-le v8, v9, :cond_6

    .line 610
    invoke-direct {p0, v8, v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v9

    if-eqz v9, :cond_6

    .line 611
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 606
    .end local v7    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v8    # "id":I
    :cond_6
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 615
    .end local v3    # "i":I
    .end local v5    # "cachedChs":[I
    .end local v6    # "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    :cond_7
    goto :goto_3

    :cond_8
    const/4 v4, 0x4

    if-ne p1, v4, :cond_d

    .line 616
    sget-object v5, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [I

    .line 617
    .restart local v5    # "cachedChs":[I
    if-eqz v5, :cond_9

    .line 618
    return-object v5

    .line 620
    :cond_9
    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v6

    .line 621
    .restart local v6    # "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v6, :cond_a

    .line 622
    const-string v4, "getSupported5gChannelsByBandwidth BW_80M channel group is null"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 623
    return-object v2

    .line 625
    :cond_a
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_2
    invoke-virtual {v6}, Ljava/util/ArrayList;->size()I

    move-result v7

    if-ge v3, v7, :cond_c

    .line 626
    invoke-virtual {v6, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 627
    .restart local v7    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v8, v7, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 628
    .restart local v8    # "id":I
    invoke-direct {p0, v8, v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v9

    if-eqz v9, :cond_b

    .line 629
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 625
    .end local v7    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v8    # "id":I
    :cond_b
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    .line 632
    .end local v3    # "i":I
    .end local v5    # "cachedChs":[I
    .end local v6    # "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    :cond_c
    goto :goto_3

    .line 633
    :cond_d
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getSupported5gChannelsByBandwidth invalid bandwidth:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 634
    const/4 v1, 0x0

    .line 636
    :goto_3
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_10

    .line 637
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    new-array v2, v2, [I

    .line 638
    .local v2, "target":[I
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_4
    array-length v4, v2

    if-ge v3, v4, :cond_e

    .line 639
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    aput v4, v2, v3

    .line 638
    add-int/lit8 v3, v3, 0x1

    goto :goto_4

    .line 641
    .end local v3    # "i":I
    :cond_e
    if-eqz v1, :cond_f

    .line 642
    sget-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sCachedSupportedChs:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 644
    :cond_f
    return-object v2

    .line 646
    .end local v2    # "target":[I
    :cond_10
    return-object v2
.end method

.method private static initChannelDataDatabase()Z
    .locals 11

    .line 274
    const/4 v0, 0x1

    .line 275
    .local v0, "result":Z
    sget-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    if-nez v1, :cond_7

    .line 276
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    .line 277
    sget-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelGroupMap:Ljava/util/HashMap;

    if-nez v1, :cond_0

    .line 278
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelGroupMap:Ljava/util/HashMap;

    .line 280
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sWifiChannelDatas:[Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    array-length v3, v2

    if-ge v1, v3, :cond_7

    .line 281
    aget-object v2, v2, v1

    .line 282
    .local v2, "channel":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    add-int/lit8 v3, v1, 0x1

    iput v3, v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->sequence:I

    .line 283
    iget-object v3, v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    .line 284
    .local v3, "name":Ljava/lang/String;
    iget v4, v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->frequency:I

    .line 285
    .local v4, "frequency":I
    div-int/lit16 v5, v4, 0x3e8

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    .line 286
    .local v5, "freqStr":Ljava/lang/String;
    invoke-virtual {v3, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    const-string v7, "WifiChannelInfo"

    if-nez v6, :cond_1

    .line 287
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "UnMatch name & frequency at index:"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " name:"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " frequency:"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 289
    .local v6, "msg":Ljava/lang/String;
    invoke-static {v7, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 290
    goto :goto_1

    .line 292
    .end local v6    # "msg":Ljava/lang/String;
    :cond_1
    iget v6, v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 293
    .local v6, "id":I
    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->extractChannelIdFromName(Ljava/lang/String;)I

    move-result v8

    .line 294
    .local v8, "nameId":I
    if-eq v8, v6, :cond_2

    .line 295
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "UnMatch id :"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " and name:"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v7, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    :cond_2
    sget-object v7, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v7, v9, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 298
    const/4 v7, 0x1

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v9

    if-eqz v9, :cond_3

    .line 299
    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addToChannelGroup(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)V

    .line 301
    :cond_3
    const/4 v7, 0x2

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v9

    if-eqz v9, :cond_4

    .line 302
    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addToChannelGroup(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)V

    .line 304
    :cond_4
    const/4 v7, 0x4

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v9

    if-eqz v9, :cond_5

    .line 305
    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addToChannelGroup(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)V

    .line 307
    :cond_5
    const/16 v7, 0x8

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v9

    if-eqz v9, :cond_6

    .line 308
    invoke-static {v7, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addToChannelGroup(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)V

    .line 280
    .end local v2    # "channel":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v3    # "name":Ljava/lang/String;
    .end local v4    # "frequency":I
    .end local v5    # "freqStr":Ljava/lang/String;
    .end local v6    # "id":I
    .end local v8    # "nameId":I
    :cond_6
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 312
    .end local v1    # "i":I
    :cond_7
    return v0
.end method

.method private static ints2longs([I)[J
    .locals 4
    .param p0, "array"    # [I

    .line 662
    if-eqz p0, :cond_2

    array-length v0, p0

    if-nez v0, :cond_0

    goto :goto_1

    .line 665
    :cond_0
    array-length v0, p0

    new-array v0, v0, [J

    .line 666
    .local v0, "longs":[J
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_1

    .line 667
    aget v2, p0, v1

    int-to-long v2, v2

    aput-wide v2, v0, v1

    .line 666
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 669
    .end local v1    # "i":I
    :cond_1
    return-object v0

    .line 663
    .end local v0    # "longs":[J
    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private isChannelSupported(II)Z
    .locals 9
    .param p1, "channel"    # I
    .param p2, "bandwidth"    # I

    .line 775
    const/4 v0, 0x1

    .line 777
    .local v0, "supported":Z
    const/4 v1, 0x0

    .line 778
    .local v1, "testChannels":[I
    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne p2, v3, :cond_0

    .line 779
    new-array v3, v3, [I

    aput p1, v3, v2

    move-object v1, v3

    goto :goto_0

    .line 780
    :cond_0
    const/4 v4, 0x2

    if-ne p2, v4, :cond_1

    .line 781
    new-array v4, v4, [I

    add-int/lit8 v5, p1, -0x2

    aput v5, v4, v2

    add-int/lit8 v2, p1, 0x2

    aput v2, v4, v3

    move-object v1, v4

    goto :goto_0

    .line 782
    :cond_1
    const/4 v5, 0x3

    const/4 v6, 0x4

    if-ne p2, v6, :cond_2

    .line 783
    new-array v6, v6, [I

    add-int/lit8 v7, p1, -0x6

    aput v7, v6, v2

    add-int/lit8 v2, p1, -0x2

    aput v2, v6, v3

    add-int/lit8 v2, p1, 0x2

    aput v2, v6, v4

    add-int/lit8 v2, p1, 0x6

    aput v2, v6, v5

    move-object v1, v6

    goto :goto_0

    .line 784
    :cond_2
    const/16 v7, 0x8

    if-ne p2, v7, :cond_5

    .line 785
    new-array v7, v7, [I

    add-int/lit8 v8, p1, -0xe

    aput v8, v7, v2

    add-int/lit8 v2, p1, -0xa

    aput v2, v7, v3

    add-int/lit8 v2, p1, -0x6

    aput v2, v7, v4

    add-int/lit8 v2, p1, -0x2

    aput v2, v7, v5

    add-int/lit8 v2, p1, 0x2

    aput v2, v7, v6

    const/4 v2, 0x5

    add-int/lit8 v3, p1, 0x6

    aput v3, v7, v2

    add-int/lit8 v2, p1, 0xa

    const/4 v3, 0x6

    aput v2, v7, v3

    const/4 v2, 0x7

    add-int/lit8 v3, p1, 0xe

    aput v3, v7, v2

    move-object v1, v7

    .line 792
    :goto_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_1
    array-length v3, v1

    if-ge v2, v3, :cond_4

    .line 793
    aget v3, v1, v2

    .line 794
    .local v3, "ch":I
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isContains(I)Z

    move-result v4

    if-nez v4, :cond_3

    .line 795
    const/4 v0, 0x0

    .line 796
    goto :goto_2

    .line 792
    .end local v3    # "ch":I
    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 799
    .end local v2    # "i":I
    :cond_4
    :goto_2
    return v0

    .line 788
    :cond_5
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Invalid bandwidth:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "WifiChannelInfo"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 789
    return v2
.end method

.method private isIn5gChannelBandwidth(II)Z
    .locals 5
    .param p1, "channel"    # I
    .param p2, "bandwidth"    # I

    .line 756
    const/16 v0, 0xe

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-lt p1, v1, :cond_0

    if-gt p1, v0, :cond_0

    .line 757
    return v2

    .line 760
    :cond_0
    sget-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 761
    .local v3, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    if-nez v3, :cond_1

    .line 762
    return v2

    .line 764
    :cond_1
    if-le p1, v0, :cond_2

    invoke-static {p2, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 765
    return v1

    .line 767
    :cond_2
    return v2
.end method

.method private static isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z
    .locals 1
    .param p0, "bandwidth"    # I
    .param p1, "cd"    # Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 771
    iget v0, p1, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->bandwidth:I

    and-int/2addr v0, p0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private isSupported(I)Z
    .locals 5
    .param p1, "channelId"    # I

    .line 396
    sget-object v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannelDataDb:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 397
    .local v0, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 398
    return v1

    .line 401
    :cond_0
    const/4 v2, 0x1

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 402
    invoke-direct {p0, p1, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 403
    return v2

    .line 406
    :cond_1
    const/4 v3, 0x2

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 407
    invoke-direct {p0, p1, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 408
    return v2

    .line 411
    :cond_2
    const/4 v3, 0x4

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isInBandwidth(ILcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 412
    invoke-direct {p0, p1, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 413
    return v2

    .line 416
    :cond_3
    return v1
.end method

.method private static longs2ints([J)[I
    .locals 4
    .param p0, "array"    # [J

    .line 651
    if-eqz p0, :cond_2

    array-length v0, p0

    if-nez v0, :cond_0

    goto :goto_1

    .line 654
    :cond_0
    array-length v0, p0

    new-array v0, v0, [I

    .line 655
    .local v0, "ints":[I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_1

    .line 656
    aget-wide v2, p0, v1

    long-to-int v2, v2

    aput v2, v0, v1

    .line 655
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 658
    .end local v1    # "i":I
    :cond_1
    return-object v0

    .line 652
    .end local v0    # "ints":[I
    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method static parseChannelId(Ljava/lang/String;)I
    .locals 1
    .param p0, "fullName"    # Ljava/lang/String;

    .line 723
    invoke-static {p0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->extractChannelIdFromName(Ljava/lang/String;)I

    move-result v0

    return v0
.end method


# virtual methods
.method addChannelsIntoAdapter([JLandroid/widget/ArrayAdapter;Z)V
    .locals 1
    .param p1, "channels"    # [J
    .param p3, "byOrder"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([J",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation

    .line 445
    .local p2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x1

    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addChannelsIntoAdapter([JLandroid/widget/ArrayAdapter;ZZ)V

    .line 446
    return-void
.end method

.method addChannelsIntoAdapter([JLandroid/widget/ArrayAdapter;ZZ)V
    .locals 4
    .param p1, "channels"    # [J
    .param p3, "byOrder"    # Z
    .param p4, "checkSupported"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([J",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;ZZ)V"
        }
    .end annotation

    .line 421
    .local p2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x0

    .line 422
    .local v0, "name":Ljava/lang/String;
    if-nez p1, :cond_0

    .line 423
    return-void

    .line 425
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_4

    .line 426
    aget-wide v2, p1, v1

    long-to-int v2, v2

    .line 427
    .local v2, "id":I
    if-eqz p4, :cond_1

    .line 428
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isSupported(I)Z

    move-result v3

    if-nez v3, :cond_1

    .line 429
    goto :goto_1

    .line 432
    :cond_1
    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelName(I)Ljava/lang/String;

    move-result-object v0

    .line 433
    if-nez v0, :cond_2

    .line 434
    goto :goto_1

    .line 436
    :cond_2
    if-eqz p3, :cond_3

    .line 437
    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    goto :goto_1

    .line 439
    :cond_3
    invoke-virtual {p2, v0}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 425
    .end local v2    # "id":I
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 442
    .end local v1    # "i":I
    :cond_4
    return-void
.end method

.method addSupported2dot4gChannels(Landroid/widget/ArrayAdapter;Z)V
    .locals 2
    .param p2, "byOrder"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation

    .line 563
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSupported2dot4gChannels()[I

    move-result-object v0

    .line 564
    .local v0, "ch2dot4g":[I
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->ints2longs([I)[J

    move-result-object v1

    .line 565
    .local v1, "target":[J
    invoke-virtual {p0, v1, p1, p2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addChannelsIntoAdapter([JLandroid/widget/ArrayAdapter;Z)V

    .line 566
    return-void
.end method

.method addSupported5gChannelsByBandwidth(Landroid/widget/ArrayAdapter;IZ)V
    .locals 3
    .param p2, "bandwidth"    # I
    .param p3, "byOrder"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;IZ)V"
        }
    .end annotation

    .line 570
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSupported5gChannelsByBandwidth(I)[I

    move-result-object v0

    .line 571
    .local v0, "channels":[I
    if-nez v0, :cond_0

    .line 572
    return-void

    .line 574
    :cond_0
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->ints2longs([I)[J

    move-result-object v1

    .line 575
    .local v1, "target":[J
    const/4 v2, 0x0

    invoke-virtual {p0, v1, p1, p3, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addChannelsIntoAdapter([JLandroid/widget/ArrayAdapter;ZZ)V

    .line 576
    return-void
.end method

.method getSelectedChannelId()I
    .locals 1

    .line 354
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->mChannelSelect:Ljava/lang/String;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->extractChannelIdFromName(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method getSelectedFrequency()I
    .locals 1

    .line 358
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSelectedChannelId()I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelFrequency(I)I

    move-result v0

    return v0
.end method

.method insert5GChannels(Landroid/widget/ArrayAdapter;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 523
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getCachedSupportChannels()[J

    move-result-object v0

    .line 524
    .local v0, "channels":[J
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-gt v1, v2, :cond_2

    .line 525
    aget-wide v2, v0, v1

    long-to-int v2, v2

    .line 526
    .local v2, "id":I
    const/16 v3, 0xe

    if-le v2, v3, :cond_1

    .line 527
    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelName(I)Ljava/lang/String;

    move-result-object v3

    .line 528
    .local v3, "tag":Ljava/lang/String;
    if-eqz v3, :cond_0

    .line 529
    invoke-virtual {p0, p1, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    goto :goto_1

    .line 531
    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "UNKnown channel:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "WifiChannelInfo"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 524
    .end local v2    # "id":I
    .end local v3    # "tag":Ljava/lang/String;
    :cond_1
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 535
    .end local v1    # "i":I
    :cond_2
    return-void
.end method

.method insertBw160MChannels(Landroid/widget/ArrayAdapter;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 482
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/16 v0, 0x8

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v1

    .line 483
    .local v1, "bw160mChannelList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v1, :cond_0

    .line 484
    const-string v0, "WifiChannelInfo"

    const-string v2, "BW_160M channel group is null"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 485
    return-void

    .line 487
    :cond_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 488
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 489
    .local v3, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v4, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 490
    .local v4, "ch":I
    invoke-direct {p0, v4, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 491
    iget-object v5, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    .line 492
    .local v5, "name":Ljava/lang/String;
    invoke-virtual {p0, p1, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    .line 487
    .end local v3    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v4    # "ch":I
    .end local v5    # "name":Ljava/lang/String;
    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 495
    .end local v2    # "i":I
    :cond_2
    return-void
.end method

.method insertBw20MChannels(Landroid/widget/ArrayAdapter;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 673
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v1

    .line 674
    .local v1, "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v1, :cond_0

    .line 675
    const-string v0, "WifiChannelInfo"

    const-string v2, "BW_20M channel group is null"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 676
    return-void

    .line 678
    :cond_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 679
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 680
    .local v3, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v4, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 681
    .local v4, "id":I
    invoke-direct {p0, v4, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 682
    iget-object v5, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    .line 683
    .local v5, "name":Ljava/lang/String;
    invoke-virtual {p0, p1, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    .line 678
    .end local v3    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v4    # "id":I
    .end local v5    # "name":Ljava/lang/String;
    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 686
    .end local v2    # "i":I
    :cond_2
    return-void
.end method

.method insertBw40MChannels(Landroid/widget/ArrayAdapter;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 689
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x2

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v1

    .line 690
    .local v1, "groupList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v1, :cond_0

    .line 691
    const-string v0, "WifiChannelInfo"

    const-string v2, "BW_40M channel group is null"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 692
    return-void

    .line 694
    :cond_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 695
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 696
    .local v3, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v4, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 698
    .local v4, "id":I
    invoke-direct {p0, v4, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 699
    iget-object v5, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    .line 700
    .local v5, "name":Ljava/lang/String;
    invoke-virtual {p0, p1, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    .line 694
    .end local v3    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v4    # "id":I
    .end local v5    # "name":Ljava/lang/String;
    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 704
    .end local v2    # "i":I
    :cond_2
    return-void
.end method

.method insertBw40mUnsupported2dot4GChannels(Landroid/widget/ArrayAdapter;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 365
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sBw40mUnsupported2dot4GChannels:[I

    array-length v2, v1

    if-ge v0, v2, :cond_2

    .line 366
    aget v1, v1, v0

    .line 367
    .local v1, "channel":I
    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelName(I)Ljava/lang/String;

    move-result-object v2

    .line 368
    .local v2, "name":Ljava/lang/String;
    if-nez v2, :cond_0

    .line 369
    goto :goto_1

    .line 371
    :cond_0
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isSupported(I)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 372
    invoke-virtual {p0, p1, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    .line 365
    .end local v1    # "channel":I
    .end local v2    # "name":Ljava/lang/String;
    :cond_1
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 375
    .end local v0    # "i":I
    :cond_2
    return-void
.end method

.method insertBw80MChannels(Landroid/widget/ArrayAdapter;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 466
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x4

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v1

    .line 467
    .local v1, "bw80mChannelList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v1, :cond_0

    .line 468
    const-string v0, "WifiChannelInfo"

    const-string v2, "BW_80M channel group is null"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 469
    return-void

    .line 471
    :cond_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 472
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 473
    .local v3, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v4, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    .line 474
    .local v4, "ch":I
    invoke-direct {p0, v4, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->isChannelSupported(II)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 475
    iget-object v5, v3, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    .line 476
    .local v5, "name":Ljava/lang/String;
    invoke-virtual {p0, p1, v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V

    .line 471
    .end local v3    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v4    # "ch":I
    .end local v5    # "name":Ljava/lang/String;
    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 479
    .end local v2    # "i":I
    :cond_2
    return-void
.end method

.method insertChannelIntoAdapterByOrder(Landroid/widget/ArrayAdapter;Ljava/lang/String;)V
    .locals 2
    .param p2, "channelName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 748
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {p1, p2}, Landroid/widget/ArrayAdapter;->getPosition(Ljava/lang/Object;)I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 749
    invoke-static {p2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->extractChannelIdFromName(Ljava/lang/String;)I

    move-result v0

    .line 750
    .local v0, "id":I
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->computeInsertIndex(Landroid/widget/ArrayAdapter;I)I

    move-result v1

    .line 751
    .local v1, "targetIndex":I
    invoke-virtual {p1, p2, v1}, Landroid/widget/ArrayAdapter;->insert(Ljava/lang/Object;I)V

    .line 753
    .end local v0    # "id":I
    .end local v1    # "targetIndex":I
    :cond_0
    return-void
.end method

.method public isContains(I)Z
    .locals 7
    .param p1, "channel"    # I

    .line 826
    const/4 v0, 0x1

    .local v0, "i":I
    :goto_0
    int-to-long v1, v0

    sget-object v3, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sChannels:[J

    const/4 v4, 0x0

    aget-wide v5, v3, v4

    cmp-long v1, v1, v5

    if-gtz v1, :cond_1

    .line 827
    int-to-long v1, p1

    aget-wide v3, v3, v0

    cmp-long v1, v1, v3

    if-nez v1, :cond_0

    .line 828
    const/4 v1, 0x1

    return v1

    .line 826
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 831
    .end local v0    # "i":I
    :cond_1
    return v4
.end method

.method remove2dot4GChannels(Landroid/widget/ArrayAdapter;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 459
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x1

    .local v0, "i":I
    :goto_0
    const/16 v1, 0xe

    if-gt v0, v1, :cond_0

    .line 460
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelName(I)Ljava/lang/String;

    move-result-object v1

    .line 461
    .local v1, "name":Ljava/lang/String;
    invoke-virtual {p1, v1}, Landroid/widget/ArrayAdapter;->remove(Ljava/lang/Object;)V

    .line 459
    .end local v1    # "name":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 463
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method remove5GChannels(Landroid/widget/ArrayAdapter;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 513
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {p1}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    .local v0, "i":I
    :goto_0
    if-ltz v0, :cond_1

    .line 514
    invoke-virtual {p1, v0}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 515
    .local v1, "name":Ljava/lang/String;
    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->extractChannelIdFromName(Ljava/lang/String;)I

    move-result v2

    .line 516
    .local v2, "id":I
    const/16 v3, 0xe

    if-le v2, v3, :cond_0

    .line 517
    invoke-virtual {p1, v1}, Landroid/widget/ArrayAdapter;->remove(Ljava/lang/Object;)V

    .line 513
    .end local v1    # "name":Ljava/lang/String;
    .end local v2    # "id":I
    :cond_0
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    .line 520
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method removeBw40MChannels(Landroid/widget/ArrayAdapter;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 498
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x2

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelGroup(I)Ljava/util/ArrayList;

    move-result-object v0

    .line 499
    .local v0, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;>;"
    if-nez v0, :cond_0

    .line 500
    const-string v1, "WifiChannelInfo"

    const-string v2, "BW_40M channel group is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 501
    return-void

    .line 503
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 504
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;

    .line 505
    .local v2, "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    iget v3, v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->id:I

    const/16 v4, 0xe

    if-le v3, v4, :cond_1

    .line 506
    iget-object v3, v2, Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;->name:Ljava/lang/String;

    .line 507
    .local v3, "name":Ljava/lang/String;
    invoke-virtual {p1, v3}, Landroid/widget/ArrayAdapter;->remove(Ljava/lang/Object;)V

    .line 503
    .end local v2    # "cd":Lcom/mediatek/engineermode/wifi/ChannelInfo$ChannelData;
    .end local v3    # "name":Ljava/lang/String;
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 510
    .end local v1    # "i":I
    :cond_2
    return-void
.end method

.method removeBw40mUnsupported2dot4GChannels(Landroid/widget/ArrayAdapter;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 343
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;->sBw40mUnsupported2dot4GChannels:[I

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 344
    aget v1, v1, v0

    .line 345
    .local v1, "channel":I
    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelName(I)Ljava/lang/String;

    move-result-object v2

    .line 346
    .local v2, "name":Ljava/lang/String;
    if-nez v2, :cond_0

    .line 347
    goto :goto_1

    .line 349
    :cond_0
    invoke-virtual {p1, v2}, Landroid/widget/ArrayAdapter;->remove(Ljava/lang/Object;)V

    .line 343
    .end local v1    # "channel":I
    .end local v2    # "name":Ljava/lang/String;
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 351
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method removeChannels([ILandroid/widget/ArrayAdapter;)V
    .locals 3
    .param p1, "channels"    # [I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([I",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 449
    .local p2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_1

    .line 450
    aget v1, p1, v0

    .line 451
    .local v1, "ch":I
    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelName(I)Ljava/lang/String;

    move-result-object v2

    .line 452
    .local v2, "name":Ljava/lang/String;
    if-eqz v2, :cond_0

    .line 453
    invoke-virtual {p2, v2}, Landroid/widget/ArrayAdapter;->remove(Ljava/lang/Object;)V

    .line 449
    .end local v1    # "ch":I
    .end local v2    # "name":Ljava/lang/String;
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 456
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method resetSupportedChannels(Landroid/widget/ArrayAdapter;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 378
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {p1}, Landroid/widget/ArrayAdapter;->clear()V

    .line 379
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getCachedSupportChannels()[J

    move-result-object v0

    .line 380
    .local v0, "supportedCh":[J
    const/4 v1, 0x0

    invoke-virtual {p0, v0, p1, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addChannelsIntoAdapter([JLandroid/widget/ArrayAdapter;Z)V

    .line 381
    return-void
.end method

.method setSelectedChannel(Ljava/lang/String;)V
    .locals 0
    .param p1, "channelName"    # Ljava/lang/String;

    .line 361
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/ChannelInfo;->mChannelSelect:Ljava/lang/String;

    .line 362
    return-void
.end method
