.class Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
.super Ljava/lang/Object;
.source "BandSelect.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bandselect/BandSelect;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "BandModeMap"
.end annotation


# instance fields
.field public mBit:I

.field public mChkBox:Landroid/widget/CheckBox;

.field public mIndex:I


# direct methods
.method constructor <init>(Landroid/widget/CheckBox;II)V
    .locals 0
    .param p1, "chkbox"    # Landroid/widget/CheckBox;
    .param p2, "index"    # I
    .param p3, "bit"    # I

    .line 955
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 956
    iput-object p1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    .line 957
    iput p2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mIndex:I

    .line 958
    iput p3, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    .line 959
    return-void
.end method
