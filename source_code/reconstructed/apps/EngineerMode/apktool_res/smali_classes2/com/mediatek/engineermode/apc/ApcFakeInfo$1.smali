.class Lcom/mediatek/engineermode/apc/ApcFakeInfo$1;
.super Landroid/content/BroadcastReceiver;
.source "ApcFakeInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/apc/ApcFakeInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/apc/ApcFakeInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/apc/ApcFakeInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/apc/ApcFakeInfo;

    .line 79
    iput-object p1, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo$1;->this$0:Lcom/mediatek/engineermode/apc/ApcFakeInfo;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 82
    invoke-static {}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$000()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onReceive: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.mediatek.phone.ACTION_APC_INFO_NOTIFY"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 84
    invoke-static {}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$100()I

    move-result v0

    const/16 v1, 0xa

    const/4 v2, 0x0

    if-lt v0, v1, :cond_0

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo$1;->this$0:Lcom/mediatek/engineermode/apc/ApcFakeInfo;

    invoke-static {v0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$200(Lcom/mediatek/engineermode/apc/ApcFakeInfo;)V

    .line 86
    invoke-static {v2}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$102(I)I

    .line 88
    :cond_0
    const-string v0, "phoneId"

    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 89
    .local v0, "phoneId":I
    invoke-static {}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "phoneId: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    const-string v1, "info"

    invoke-virtual {p2, v1}, Landroid/content/Intent;->getParcelableExtra(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object v1

    .line 91
    .local v1, "ret":Landroid/os/Parcelable;
    move-object v2, v1

    check-cast v2, Lcom/mediatek/internal/telephony/PseudoCellInfo;

    .line 92
    .local v2, "info":Lcom/mediatek/internal/telephony/PseudoCellInfo;
    invoke-static {}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$000()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "info: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    iget-object v3, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo$1;->this$0:Lcom/mediatek/engineermode/apc/ApcFakeInfo;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->access$300(Lcom/mediatek/engineermode/apc/ApcFakeInfo;Lcom/mediatek/internal/telephony/PseudoCellInfo;)V

    .line 95
    .end local v0    # "phoneId":I
    .end local v1    # "ret":Landroid/os/Parcelable;
    .end local v2    # "info":Lcom/mediatek/internal/telephony/PseudoCellInfo;
    :cond_1
    return-void
.end method
