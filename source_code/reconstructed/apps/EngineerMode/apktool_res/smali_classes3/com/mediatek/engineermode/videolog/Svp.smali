.class Lcom/mediatek/engineermode/videolog/Svp;
.super Lcom/mediatek/engineermode/videolog/VideoLogItem;
.source "VideoLogItem.java"


# static fields
.field private static final LOG_PROP_1:Ljava/lang/String; = "vendor.mtk.vdectlc.log"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 150
    invoke-direct {p0}, Lcom/mediatek/engineermode/videolog/VideoLogItem;-><init>()V

    return-void
.end method


# virtual methods
.method protected getStatusProp()Ljava/lang/String;
    .locals 1

    .line 157
    const-string v0, "vendor.mtk.vdectlc.log"

    return-object v0
.end method

.method protected switchLog(Z)Z
    .locals 4
    .param p1, "enable"    # Z

    .line 162
    if-eqz p1, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 164
    .local v0, "proTar":Ljava/lang/String;
    :goto_0
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setSvpLogEnable(Ljava/lang/String;)Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 168
    goto :goto_1

    .line 165
    :catch_0
    move-exception v1

    .line 166
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 167
    const-string v2, "VideoLog"

    const-string v3, "set property failed ..."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    .end local v1    # "e":Landroid/os/RemoteException;
    :goto_1
    const-string v1, "vendor.mtk.vdectlc.log"

    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    return v1
.end method
