.class public Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;
.super Ljava/lang/Thread;
.source "WfcConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "SetMccMncThread"
.end annotation


# instance fields
.field private action:I

.field private mccMncContent:Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;ILjava/lang/String;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;
    .param p2, "action"    # I
    .param p3, "mccMncContent"    # Ljava/lang/String;

    .line 257
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    .line 258
    iput p2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->action:I

    .line 259
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->mccMncContent:Ljava/lang/String;

    .line 260
    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    .line 263
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 264
    .local v0, "msg":Landroid/os/Message;
    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->action:I

    const/4 v2, 0x3

    const/4 v3, 0x4

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-eqz v1, :cond_2

    if-eq v1, v5, :cond_0

    .line 302
    iput v4, v0, Landroid/os/Message;->what:I

    goto :goto_4

    .line 289
    :cond_0
    const/4 v1, 0x0

    .line 291
    .local v1, "setMccMncOk":Z
    :try_start_0
    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-static {v4}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->access$200(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)Lcom/mediatek/wfo/IWifiOffloadService;

    move-result-object v4

    const/4 v5, 0x0

    invoke-interface {v4, v5}, Lcom/mediatek/wfo/IWifiOffloadService;->setMccMncAllowList([Ljava/lang/String;)Z

    move-result v4
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    move v1, v4

    .line 294
    goto :goto_0

    .line 292
    :catch_0
    move-exception v4

    .line 293
    .local v4, "e":Landroid/os/RemoteException;
    invoke-virtual {v4}, Landroid/os/RemoteException;->printStackTrace()V

    .line 295
    .end local v4    # "e":Landroid/os/RemoteException;
    :goto_0
    if-eqz v1, :cond_1

    .line 296
    iput v2, v0, Landroid/os/Message;->what:I

    goto :goto_4

    .line 298
    :cond_1
    iput v3, v0, Landroid/os/Message;->what:I

    .line 300
    goto :goto_4

    .line 266
    .end local v1    # "setMccMncOk":Z
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->mccMncContent:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v6, 0x5c

    if-le v1, v6, :cond_3

    .line 267
    iput v5, v0, Landroid/os/Message;->what:I

    goto :goto_4

    .line 269
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->mccMncContent:Ljava/lang/String;

    const-string v5, ","

    invoke-virtual {v1, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 270
    .local v1, "mccMncArray":[Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-virtual {v5, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->checkInputMccMnc([Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_5

    .line 271
    const/4 v4, 0x0

    .line 273
    .local v4, "setMccMncOk":Z
    :try_start_1
    iget-object v5, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-static {v5}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->access$200(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)Lcom/mediatek/wfo/IWifiOffloadService;

    move-result-object v5

    .line 274
    invoke-interface {v5, v1}, Lcom/mediatek/wfo/IWifiOffloadService;->setMccMncAllowList([Ljava/lang/String;)Z

    move-result v5
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_1

    move v4, v5

    .line 277
    goto :goto_1

    .line 275
    :catch_1
    move-exception v5

    .line 276
    .local v5, "e":Landroid/os/RemoteException;
    invoke-virtual {v5}, Landroid/os/RemoteException;->printStackTrace()V

    .line 278
    .end local v5    # "e":Landroid/os/RemoteException;
    :goto_1
    if-eqz v4, :cond_4

    .line 279
    iput v2, v0, Landroid/os/Message;->what:I

    goto :goto_2

    .line 281
    :cond_4
    iput v3, v0, Landroid/os/Message;->what:I

    .line 283
    .end local v4    # "setMccMncOk":Z
    :goto_2
    goto :goto_3

    .line 284
    :cond_5
    iput v4, v0, Landroid/os/Message;->what:I

    .line 287
    .end local v1    # "mccMncArray":[Ljava/lang/String;
    :goto_3
    nop

    .line 305
    :goto_4
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->access$300(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 306
    return-void
.end method
