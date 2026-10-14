.class Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;
.super Ljava/lang/Object;
.source "NmeaParser.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/NmeaParser;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "SVExtraInfro"
.end annotation


# instance fields
.field public mHdop:Ljava/lang/String;

.field public mPdop:Ljava/lang/String;

.field public mVdop:Ljava/lang/String;

.field public mfixtype:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/mediatek/lbs/em2/ui/NmeaParser;)V
    .locals 0

    .line 628
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/lbs/em2/ui/NmeaParser;Lcom/mediatek/lbs/em2/ui/NmeaParser$1;)V
    .locals 0

    .line 621
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;-><init>(Lcom/mediatek/lbs/em2/ui/NmeaParser;)V

    return-void
.end method
