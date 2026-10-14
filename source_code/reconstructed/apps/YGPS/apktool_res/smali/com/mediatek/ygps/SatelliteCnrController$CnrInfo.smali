.class Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;
.super Ljava/lang/Object;
.source "SatelliteCnrController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/SatelliteCnrController;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "CnrInfo"
.end annotation


# instance fields
.field cnrL1:F

.field cnrL5:F

.field color:I

.field usedInFixL1:Z

.field usedInFixL5:Z


# direct methods
.method private constructor <init>(Lcom/mediatek/ygps/SatelliteCnrController;)V
    .locals 0

    .line 68
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/high16 p1, -0x40800000    # -1.0f

    .line 69
    iput p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->cnrL1:F

    .line 70
    iput p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->cnrL5:F

    const/4 p1, 0x0

    .line 71
    iput-boolean p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->usedInFixL1:Z

    .line 72
    iput-boolean p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->usedInFixL5:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/ygps/SatelliteCnrController;Lcom/mediatek/ygps/SatelliteCnrController$1;)V
    .locals 0

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;-><init>(Lcom/mediatek/ygps/SatelliteCnrController;)V

    return-void
.end method


# virtual methods
.method getCnrSummary()Landroid/text/SpannableString;
    .locals 8

    .line 76
    iget v0, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->cnrL1:F

    const/4 v1, 0x0

    cmpg-float v2, v0, v1

    const-string v3, "-"

    const-string v4, "%3.1f"

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-gez v2, :cond_0

    move-object v0, v3

    goto :goto_0

    :cond_0
    new-array v2, v6, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    aput-object v0, v2, v5

    invoke-static {v4, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 77
    :goto_0
    iget v2, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->cnrL5:F

    cmpg-float v1, v2, v1

    if-gez v1, :cond_1

    goto :goto_1

    :cond_1
    new-array v1, v6, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v1, v5

    invoke-static {v4, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    .line 78
    :goto_1
    new-instance v1, Landroid/text/SpannableString;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    .line 79
    iget-boolean v2, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->usedInFixL1:Z

    const/16 v3, 0x21

    const/16 v4, -0x100

    if-eqz v2, :cond_2

    .line 80
    new-instance v2, Landroid/text/style/BackgroundColorSpan;

    invoke-direct {v2, v4}, Landroid/text/style/BackgroundColorSpan;-><init>(I)V

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v7

    invoke-virtual {v1, v2, v5, v7, v3}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    .line 83
    :cond_2
    iget-boolean p0, p0, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->usedInFixL5:Z

    if-eqz p0, :cond_3

    .line 84
    new-instance p0, Landroid/text/style/BackgroundColorSpan;

    invoke-direct {p0, v4}, Landroid/text/style/BackgroundColorSpan;-><init>(I)V

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    add-int/2addr v0, v6

    invoke-virtual {v1}, Landroid/text/SpannableString;->length()I

    move-result v2

    invoke-virtual {v1, p0, v0, v2, v3}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    :cond_3
    return-object v1
.end method
