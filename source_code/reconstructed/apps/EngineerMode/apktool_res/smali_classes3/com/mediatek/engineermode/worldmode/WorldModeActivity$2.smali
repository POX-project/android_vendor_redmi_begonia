.class Lcom/mediatek/engineermode/worldmode/WorldModeActivity$2;
.super Landroid/telephony/PhoneStateListener;
.source "WorldModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 199
    iput-object p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$2;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onRadioPowerStateChanged(I)V
    .locals 2
    .param p1, "state"    # I

    .line 202
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "RadioPowerState:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WorldModeActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 204
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$2;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$100(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    .line 206
    :cond_0
    return-void
.end method
