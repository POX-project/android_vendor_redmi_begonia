.class public Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;
.super Landroid/os/AsyncTask;
.source "RtnInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/RtnInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4
    name = "Rtn_async_task"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field protected progressDialog:Landroid/app/ProgressDialog;

.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;


# direct methods
.method protected constructor <init>(Lcom/mediatek/engineermode/rttn/RtnInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/RtnInfo;

    .line 185
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 185
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->doInBackground([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p1, "params"    # [Ljava/lang/String;

    .line 191
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_RECONDITIONED_STATUS:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_reconditioned_status:Ljava/lang/String;

    .line 192
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_ACTIVATION_DATE:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_activation_date:Ljava/lang/String;

    .line 193
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_CDMA_PRL_VERSION:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_prl_version:Ljava/lang/String;

    .line 194
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_TIMER:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_timer:Ljava/lang/String;

    .line 195
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_DATA_RX:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_rx:Ljava/lang/String;

    .line 196
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_CALLS:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_calls:Ljava/lang/String;

    .line 198
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_rx:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_rx:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 199
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v2, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_rx:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->mobileBytes_rx:J

    .line 201
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v2, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v3, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_DATA_TX:I

    invoke-virtual {v2, v3}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_tx:Ljava/lang/String;

    .line 203
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_tx:Ljava/lang/String;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_tx:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 204
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_tx:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->mobileBytes_tx:J

    .line 206
    :cond_1
    new-instance v0, Ljava/lang/String;

    const-string v1, "unknown"

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 185
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->onPostExecute(Ljava/lang/String;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/String;)V
    .locals 1
    .param p1, "result"    # Ljava/lang/String;

    .line 213
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->progressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    .line 214
    return-void
.end method

.method protected onPreExecute()V
    .locals 3

    .line 218
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->progressDialog:Landroid/app/ProgressDialog;

    .line 219
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 220
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->progressDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 221
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->progressDialog:Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    const v2, 0x7f0a0576

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 222
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->progressDialog:Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    const v2, 0x7f0a00cc

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 223
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->progressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->show()V

    .line 224
    return-void
.end method
