.class Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;
.super Ljava/lang/Object;
.source "NetworkSelectActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 154
    iput-object p1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
    .param p1, "parent"    # Landroid/widget/AdapterView;
    .param p2, "v"    # Landroid/view/View;
    .param p3, "pos"    # I
    .param p4, "id"    # J

    .line 156
    const/4 v0, 0x4

    const/4 v1, 0x1

    if-eqz p3, :cond_5

    const/4 v2, 0x5

    if-eq p3, v1, :cond_4

    const/4 v3, 0x2

    if-eq p3, v3, :cond_3

    const/4 v3, 0x3

    if-eq p3, v3, :cond_2

    if-eq p3, v0, :cond_1

    if-eq p3, v2, :cond_0

    goto :goto_0

    .line 173
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    const/16 v2, 0x9

    iput v2, v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 174
    goto :goto_0

    .line 170
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    const/16 v2, 0x8

    iput v2, v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 171
    goto :goto_0

    .line 167
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    const/16 v2, 0xa

    iput v2, v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 168
    goto :goto_0

    .line 164
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    const/4 v2, 0x6

    iput v2, v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 165
    goto :goto_0

    .line 161
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    iput v2, v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 162
    goto :goto_0

    .line 158
    :cond_5
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    iput v0, v2, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 159
    nop

    .line 178
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$500(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Z

    move-result v0

    if-ne v0, v1, :cond_6

    .line 179
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$502(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z

    goto :goto_1

    .line 181
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "selectNetworkMode "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    iget v1, v1, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkMode_cdma"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "selectNetworkMode to "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    iget v2, v2, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 184
    new-instance v0, Ljava/lang/Thread;

    new-instance v2, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;-><init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;)V

    invoke-direct {v0, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 194
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 195
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "preferred_network_mode"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 196
    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$600(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    iget v3, v3, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 195
    invoke-static {v0, v2, v3}, Landroid/provider/Settings$Global;->putInt(Landroid/content/ContentResolver;Ljava/lang/String;I)Z

    .line 197
    const-string v0, "write selectNetworkMode to settings "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    :goto_1
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .param p1, "parent"    # Landroid/widget/AdapterView;

    .line 203
    return-void
.end method
