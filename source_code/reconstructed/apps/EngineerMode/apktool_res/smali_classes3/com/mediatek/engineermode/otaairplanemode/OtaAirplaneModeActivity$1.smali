.class Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;
.super Landroid/telephony/PhoneStateListener;
.source "OtaAirplaneModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 99
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallStateChanged(ILjava/lang/String;)V
    .locals 5
    .param p1, "state"    # I
    .param p2, "incomingNumber"    # Ljava/lang/String;

    .line 133
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$700()I

    move-result v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z

    move-result v1

    if-eq v0, v1, :cond_0

    .line 134
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$800(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const v2, -0xffff01

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 135
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const-string v1, "The call status changed:"

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 136
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\tcall status(LastStatus): "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 137
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$700()I

    move-result v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 136
    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 138
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\tcall status(CurrentState): "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 139
    invoke-static {v3, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 138
    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 140
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$700()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const/high16 v1, -0x10000

    const-string v2, "For Call hangup: Call OTA Request"

    invoke-static {v0, v2, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 142
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$500(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    .line 145
    :cond_0
    invoke-static {p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$702(I)I

    .line 146
    return-void
.end method

.method public onServiceStateChanged(Landroid/telephony/ServiceState;)V
    .locals 5
    .param p1, "serviceStatus"    # Landroid/telephony/ServiceState;

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$200()Landroid/telephony/ServiceState;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v1

    const v2, -0xffff01

    if-eq v0, v1, :cond_0

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const-string v1, "The 2G service status changed:"

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 105
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\tis2GCSHasService(mLastSS): "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 106
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$200()Landroid/telephony/ServiceState;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 105
    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 107
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\tis2GCSHasService(serviceState): "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 108
    invoke-static {v3, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 107
    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 110
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$200()Landroid/telephony/ServiceState;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v1

    if-eq v0, v1, :cond_1

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const-string v1, "The 3G/4G service status changed:"

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 112
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\tis3G4GPSHasService(mLastSS): "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 113
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$200()Landroid/telephony/ServiceState;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 112
    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 114
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\tis3G4GPSHasService(serviceState):"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 115
    invoke-static {v3, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 114
    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 119
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v0

    const/high16 v1, -0x10000

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$200()Landroid/telephony/ServiceState;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 120
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const-string v2, "For 2G CS NO SERVICE:Call OTA Request"

    invoke-static {v0, v2, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 121
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$500(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    goto :goto_0

    .line 122
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$200()Landroid/telephony/ServiceState;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 123
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const-string v2, "For 3G/4G CS NO SERVICE:Call OTA Request"

    invoke-static {v0, v2, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 124
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$500(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    .line 126
    :cond_3
    :goto_0
    invoke-static {p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$202(Landroid/telephony/ServiceState;)Landroid/telephony/ServiceState;

    .line 127
    return-void
.end method
