.class Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;
.super Landroid/os/Handler;
.source "LteSingleBandSetting.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 74
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_0

    goto :goto_3

    .line 76
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 77
    .local v0, "asyncResult":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v2, "LteRx/SingleBandSetting"

    if-nez v1, :cond_3

    .line 78
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 79
    .local v1, "result":[Ljava/lang/String;
    if-eqz v1, :cond_2

    array-length v3, v1

    if-gez v3, :cond_1

    goto :goto_0

    .line 83
    :cond_1
    const-string v3, "Query lte band mode succeed"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 84
    iget-object v2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;

    const/4 v3, 0x0

    aget-object v3, v1, v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->access$000(Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;Ljava/lang/String;)V

    goto :goto_1

    .line 80
    :cond_2
    :goto_0
    const-string v3, "Query lte band mode error1"

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 81
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 86
    .end local v1    # "result":[Ljava/lang/String;
    :goto_1
    goto :goto_3

    .line 87
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->access$100()I

    move-result v1

    if-nez v1, :cond_4

    .line 88
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;

    const-string v3, "0,1,2,3,4,5,6,7,8"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->access$000(Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;Ljava/lang/String;)V

    goto :goto_2

    .line 90
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;

    const-string v3, "0,8,7,6,5,4,3,2,1"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->access$000(Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;Ljava/lang/String;)V

    .line 91
    :goto_2
    const-string v1, "Query lte band mode error2"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 92
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 94
    nop

    .line 98
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :goto_3
    return-void
.end method
