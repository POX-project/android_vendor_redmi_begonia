.class Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
.super Ljava/lang/Object;
.source "LteSingleBandSetting.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "BandModeMap"
.end annotation


# instance fields
.field public mBit:I

.field public mChkBox:Landroid/widget/CheckBox;


# direct methods
.method constructor <init>(Landroid/widget/CheckBox;I)V
    .locals 1
    .param p1, "chkbox"    # Landroid/widget/CheckBox;
    .param p2, "bit"    # I

    .line 228
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 229
    iput-object p1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    .line 230
    rem-int/lit8 v0, p2, 0x20

    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mBit:I

    .line 231
    return-void
.end method
