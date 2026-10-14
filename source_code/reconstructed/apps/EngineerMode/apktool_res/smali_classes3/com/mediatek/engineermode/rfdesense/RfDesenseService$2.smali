.class Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;
.super Landroid/telephony/PhoneStateListener;
.source "RfDesenseService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 205
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onRadioPowerStateChanged(I)V
    .locals 3
    .param p1, "state"    # I

    .line 209
    const/4 v0, 0x1

    const-string v1, "RfDesense/TxTestService"

    if-ne p1, v0, :cond_0

    .line 210
    const-string v0, "RADIO_POWER_ON"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 211
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 212
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1302(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;I)I

    goto :goto_0

    .line 213
    :cond_0
    if-nez p1, :cond_2

    .line 214
    const-string v2, "RADIO_POWER_OFF"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1300(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    move-result v1

    if-ne v1, v0, :cond_1

    .line 216
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0x9

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 217
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1302(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;I)I

    goto :goto_0

    .line 218
    :cond_2
    const/4 v0, 0x2

    if-ne p1, v0, :cond_3

    .line 220
    const-string v0, "RADIO_POWER_UNAVAILABLE"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    :cond_3
    :goto_0
    return-void
.end method
