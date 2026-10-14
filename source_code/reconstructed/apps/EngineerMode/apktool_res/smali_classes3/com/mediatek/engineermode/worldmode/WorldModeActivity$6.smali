.class Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;
.super Ljava/lang/Object;
.source "WorldModeActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->onCreateDialog(I)Landroid/app/Dialog;
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

    .line 445
    iput-object p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 5
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 448
    const/4 v0, -0x1

    if-ne p2, v0, :cond_3

    .line 449
    const/16 v0, 0x65

    .line 450
    .local v0, "ret":I
    iget-object v1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$600(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/telephony/TelephonyManager;

    move-result-object v1

    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getRadioPowerState()I

    move-result v1

    .line 451
    .local v1, "radioState":I
    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    goto :goto_0

    .line 454
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$700()I

    move-result v3

    invoke-static {}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$000()I

    move-result v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/WorldModeUtil;->setWorldModeWithBand(II)I

    move-result v0

    .line 456
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "set world mode radioState:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", ret:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "WorldModeActivity"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 458
    const/16 v3, 0x64

    if-ne v0, v3, :cond_1

    .line 459
    const/4 v2, 0x1

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$302(I)I

    .line 460
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->startTimer()V

    .line 461
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-virtual {v3, v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->showDialog(I)V

    goto :goto_1

    .line 462
    :cond_1
    const/16 v3, 0x66

    if-ne v0, v3, :cond_2

    .line 463
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-virtual {v3, v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->showDialog(I)V

    goto :goto_1

    .line 464
    :cond_2
    const/16 v2, 0x65

    if-ne v0, v2, :cond_3

    .line 465
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    const/4 v3, 0x3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->showDialog(I)V

    .line 468
    .end local v0    # "ret":I
    .end local v1    # "radioState":I
    :cond_3
    :goto_1
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 469
    return-void
.end method
