.class Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;
.super Ljava/lang/Object;
.source "NetworkSelectActivity93.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 237
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
    .param p1, "parent"    # Landroid/widget/AdapterView;
    .param p2, "v"    # Landroid/view/View;
    .param p3, "pos"    # I
    .param p4, "id"    # J

    .line 240
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onItemSelected = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ",mCurrentSelected = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$300(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 241
    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$400(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[Ljava/lang/String;

    move-result-object v1

    aget-object v1, v1, p3

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",mNetworkTypeValues length "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 242
    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[I

    move-result-object v1

    array-length v1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 240
    const-string v1, "NetworkMode93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 244
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$300(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v0

    if-ne v0, p3, :cond_0

    .line 245
    const-string v0, "listener being invoked by setSelection, return "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    return-void

    .line 248
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[I

    move-result-object v0

    array-length v0, v0

    if-lt p3, v0, :cond_1

    .line 249
    const-string v0, "mNetworkTypeValues array out of bound return!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 250
    return-void

    .line 253
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$302(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I

    .line 254
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[I

    move-result-object v2

    aget v2, v2, p3

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$002(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I

    .line 255
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$600(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I

    move-result v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$002(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I

    .line 256
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "selectNetworkMode to: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "preferred_network_mode"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 258
    invoke-static {v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$700(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v2

    .line 257
    invoke-static {v0, v1, v2}, Landroid/provider/Settings$Global;->putInt(Landroid/content/ContentResolver;Ljava/lang/String;I)Z

    .line 260
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2$1;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 270
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 271
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .param p1, "parent"    # Landroid/widget/AdapterView;

    .line 275
    return-void
.end method
