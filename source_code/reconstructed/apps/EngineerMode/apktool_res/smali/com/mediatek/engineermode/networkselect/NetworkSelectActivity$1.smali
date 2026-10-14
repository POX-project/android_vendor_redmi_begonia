.class Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;
.super Ljava/lang/Object;
.source "NetworkSelectActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 69
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p1, "parent"    # Landroid/widget/AdapterView;
    .param p2, "v"    # Landroid/view/View;
    .param p3, "pos"    # I
    .param p4, "id"    # J

    .line 72
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onItemSelected "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mCurrentSelected: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkMode"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)I

    move-result v0

    if-eq v0, p3, :cond_1

    const/16 v0, 0xa

    if-ne p3, v0, :cond_0

    goto :goto_0

    .line 76
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$002(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)I

    .line 78
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)Landroid/os/Handler;

    move-result-object v0

    const/16 v2, 0x66

    invoke-virtual {v0, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 79
    .local v0, "msg":Landroid/os/Message;
    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$200(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)[I

    move-result-object v2

    aget v2, v2, p3

    .line 81
    .local v2, "selectNetworkMode":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "selectNetworkMode "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "preferred_network_mode"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 83
    invoke-static {v4}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$300(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 82
    invoke-static {v1, v3, v2}, Landroid/provider/Settings$Global;->putInt(Landroid/content/ContentResolver;Ljava/lang/String;I)Z

    .line 85
    new-instance v1, Ljava/lang/Thread;

    new-instance v3, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1$1;

    invoke-direct {v3, p0, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1$1;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;I)V

    invoke-direct {v1, v3}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 95
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    .line 96
    return-void

    .line 74
    .end local v0    # "msg":Landroid/os/Message;
    .end local v2    # "selectNetworkMode":I
    :cond_1
    :goto_0
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .param p1, "parent"    # Landroid/widget/AdapterView;

    .line 100
    return-void
.end method
