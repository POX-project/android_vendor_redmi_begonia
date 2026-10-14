.class Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;
.super Landroid/os/AsyncTask;
.source "McfFileSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "FileLoadTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    .line 219
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 219
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->doInBackground([Ljava/lang/String;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/String;)Ljava/lang/Void;
    .locals 3
    .param p1, "params"    # [Ljava/lang/String;

    .line 231
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const/4 v1, 0x0

    aget-object v1, p1, v1

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->access$000(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->getFilePathListWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->access$100(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)Ljava/util/ArrayList;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask$1;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;)V

    invoke-static {v0, v1}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 242
    goto :goto_0

    .line 240
    :catch_0
    move-exception v0

    .line 241
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 243
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 219
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Void;

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->removeDialog(I)V

    .line 249
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V

    .line 250
    return-void
.end method

.method protected onPreExecute()V
    .locals 2

    .line 224
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    .line 225
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->showDialog(I)V

    .line 226
    return-void
.end method
