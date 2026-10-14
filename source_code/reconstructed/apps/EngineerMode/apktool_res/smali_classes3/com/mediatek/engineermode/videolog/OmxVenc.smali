.class Lcom/mediatek/engineermode/videolog/OmxVenc;
.super Lcom/mediatek/engineermode/videolog/VideoLogItem;
.source "VideoLogItem.java"


# static fields
.field protected static final LOG_PROP_1:Ljava/lang/String; = "vendor.mtk.omx.enable.venc.log"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 63
    invoke-direct {p0}, Lcom/mediatek/engineermode/videolog/VideoLogItem;-><init>()V

    return-void
.end method


# virtual methods
.method protected getStatusProp()Ljava/lang/String;
    .locals 1

    .line 70
    const-string v0, "vendor.mtk.omx.enable.venc.log"

    return-object v0
.end method

.method protected switchLog(Z)Z
    .locals 4
    .param p1, "enable"    # Z

    .line 75
    if-eqz p1, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 77
    .local v0, "proTar":Ljava/lang/String;
    :goto_0
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setOmxVencLogEnable(Ljava/lang/String;)Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 81
    goto :goto_1

    .line 78
    :catch_0
    move-exception v1

    .line 79
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 80
    const-string v2, "VideoLog"

    const-string v3, "set property failed ..."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    .end local v1    # "e":Landroid/os/RemoteException;
    :goto_1
    const-string v1, "vendor.mtk.omx.enable.venc.log"

    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    return v1
.end method
