.class public Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;
.super Landroid/app/Activity;
.source "LteHPUEConfigureActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field private static final CMD_QUERY:Ljava/lang/String; = "+ESBP:"

.field private static final CMD_QUERY_HPUE:Ljava/lang/String; = "AT+ESBP=7,\"SBP_HPUE\""

.field private static final CMD_SET_HPUE:Ljava/lang/String; = "AT+ESBP=5,\"SBP_HPUE\","

.field private static final MSG_QUERY_HPUE:I = 0x1

.field private static final MSG_SET:I = 0x3

.field private static final TAG:Ljava/lang/String; = "LteHPUEConfigureActivity"


# instance fields
.field private mHandler:Landroid/os/Handler;

.field private mLteHPUEChecked:Z

.field private mLteHPUEConfigureCb:Landroid/widget/CheckBox;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 53
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 64
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEChecked:Z

    .line 66
    new-instance v0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;-><init>(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    .line 53
    iget-boolean v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEChecked:Z

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;
    .param p1, "x1"    # Z

    .line 53
    iput-boolean p1, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEChecked:Z

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;Landroid/os/AsyncResult;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;
    .param p1, "x1"    # Landroid/os/AsyncResult;

    .line 53
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->parseData(Landroid/os/AsyncResult;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    .line 53
    iget-object v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEConfigureCb:Landroid/widget/CheckBox;

    return-object v0
.end method

.method private parseData(Landroid/os/AsyncResult;)Z
    .locals 6
    .param p1, "ar"    # Landroid/os/AsyncResult;

    .line 122
    iget-object v0, p1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v1, "LteHPUEConfigureActivity"

    const/4 v2, 0x0

    if-nez v0, :cond_2

    .line 123
    iget-object v0, p1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v0, :cond_3

    iget-object v0, p1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v0, v0, [Ljava/lang/String;

    if-eqz v0, :cond_3

    .line 124
    iget-object v0, p1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v0, [Ljava/lang/String;

    .line 125
    .local v0, "data":[Ljava/lang/String;
    array-length v3, v0

    if-lez v3, :cond_1

    aget-object v3, v0, v2

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    const-string v4, "+ESBP:"

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v5

    if-le v3, v5, :cond_1

    .line 126
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "data[0] is : "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v0, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 128
    :try_start_0
    aget-object v3, v0, v2

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 129
    .local v1, "flag":I
    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    move v2, v3

    :cond_0
    return v2

    .line 130
    .end local v1    # "flag":I
    :catch_0
    move-exception v3

    .line 131
    .local v3, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v3}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    .end local v0    # "data":[Ljava/lang/String;
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :cond_1
    goto :goto_0

    .line 136
    :cond_2
    iget-object v0, p1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    :cond_3
    :goto_0
    const-string v0, "Failed to query current settings"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 139
    return v2
.end method

.method private sendAtCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 117
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendAtCommand() "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LteHPUEConfigureActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 119
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 4
    .param p1, "view"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 108
    iget-object v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEConfigureCb:Landroid/widget/CheckBox;

    if-ne p1, v0, :cond_0

    .line 109
    iget-boolean v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEChecked:Z

    if-eq v0, p2, :cond_0

    .line 110
    iput-boolean p2, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEChecked:Z

    .line 111
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+ESBP=5,\"SBP_HPUE\","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x1

    const-string v2, ""

    aput-object v2, v0, v1

    const/4 v1, 0x3

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 114
    :cond_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 94
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 95
    const v0, 0x7f08008a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->setContentView(I)V

    .line 96
    const v0, 0x7f060549

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->mLteHPUEConfigureCb:Landroid/widget/CheckBox;

    .line 97
    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 98
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 102
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 103
    const-string v0, "AT+ESBP=7,\"SBP_HPUE\""

    const-string v1, "+ESBP:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 104
    return-void
.end method
