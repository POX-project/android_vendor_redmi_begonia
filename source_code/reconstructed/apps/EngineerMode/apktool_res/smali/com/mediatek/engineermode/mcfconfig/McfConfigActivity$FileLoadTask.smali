.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;
.super Landroid/os/AsyncTask;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 1526
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 1526
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->doInBackground([Ljava/lang/String;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/String;)Ljava/lang/Void;
    .locals 3
    .param p1, "params"    # [Ljava/lang/String;

    .line 1537
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const/4 v1, 0x0

    aget-object v1, p1, v1

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 1538
    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v2

    .line 1537
    invoke-interface {v0, v1, v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->getFilePathListWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 1541
    goto :goto_0

    .line 1539
    :catch_0
    move-exception v0

    .line 1540
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 1542
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 1526
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Void;

    .line 1547
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->removeDialog(I)V

    .line 1548
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v0

    const/4 v1, 0x2

    new-array v1, v1, [I

    fill-array-data v1, :array_0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCurrentCmd([I)V

    .line 1549
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)V

    .line 1550
    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x0
    .end array-data
.end method

.method protected onPreExecute()V
    .locals 2

    .line 1530
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    .line 1531
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(I)V

    .line 1532
    return-void
.end method
