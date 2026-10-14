.class public Lcom/mediatek/engineermode/bluetooth/BtList;
.super Landroid/app/ListActivity;
.source "BtList.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;,
        Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;
    }
.end annotation


# static fields
.field private static final DLG_CHECK_BT_CONFIG:I = 0x2

.field static final DUAL_ANT:I = 0x2

.field static final KEY_ANT_NUM:Ljava/lang/String; = "ant_num"

.field static final SINGLE_ANT:I = 0x1

.field private static final TAG:Ljava/lang/String; = "BTList"


# instance fields
.field private mAntNum:I

.field private mBleSupport:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

.field private mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

.field private mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

.field private mComboSupport:Z

.field private mModuleList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 62
    invoke-direct {p0}, Landroid/app/ListActivity;-><init>()V

    .line 74
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NONE:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBleSupport:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    .line 75
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mComboSupport:Z

    .line 76
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mAntNum:I

    .line 78
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    .line 79
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mModuleList:Ljava/util/ArrayList;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBleSupport:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    return-object v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/bluetooth/BtList;Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;
    .param p1, "x1"    # Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    .line 62
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBleSupport:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    return-object p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/BtList;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;

    .line 62
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mComboSupport:Z

    return v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/bluetooth/BtList;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;
    .param p1, "x1"    # Z

    .line 62
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mComboSupport:Z

    return p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/BtList;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;

    .line 62
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mAntNum:I

    return v0
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/bluetooth/BtList;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;
    .param p1, "x1"    # I

    .line 62
    iput p1, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mAntNum:I

    return p1
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mModuleList:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/bluetooth/BtList;Ljava/util/ArrayList;)Ljava/util/ArrayList;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;
    .param p1, "x1"    # Ljava/util/ArrayList;

    .line 62
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mModuleList:Ljava/util/ArrayList;

    return-object p1
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 92
    invoke-super {p0, p1}, Landroid/app/ListActivity;->onCreate(Landroid/os/Bundle;)V

    .line 93
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEmBTSupport()Z

    move-result v0

    if-nez v0, :cond_0

    .line 94
    const v0, 0x7f0a01af

    const/4 v1, 0x1

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 95
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 96
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtList;->finish()V

    .line 97
    return-void

    .line 99
    :cond_0
    const v0, 0x7f080023

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->setContentView(I)V

    .line 101
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    .line 102
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-direct {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    .line 103
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0, v1, p0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->checkInitState(Landroid/bluetooth/BluetoothAdapter;Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 104
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtList;->finish()V

    goto :goto_0

    .line 106
    :cond_1
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->showDialog(I)V

    .line 107
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;-><init>(Lcom/mediatek/engineermode/bluetooth/BtList;Lcom/mediatek/engineermode/bluetooth/BtList$1;)V

    .line 108
    .local v0, "functionTask":Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;
    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 110
    .end local v0    # "functionTask":Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;
    :goto_0
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 115
    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 116
    new-instance v0, Landroid/app/ProgressDialog;

    invoke-direct {v0, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 118
    .local v0, "dialog":Landroid/app/ProgressDialog;
    const v1, 0x7f0a0198

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 119
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 120
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 121
    return-object v0

    .line 123
    .end local v0    # "dialog":Landroid/app/ProgressDialog;
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method protected onListItemClick(Landroid/widget/ListView;Landroid/view/View;IJ)V
    .locals 4
    .param p1, "l"    # Landroid/widget/ListView;
    .param p2, "v"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J

    .line 129
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mModuleList:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 130
    .local v0, "moduleTitle":Ljava/lang/String;
    if-nez v0, :cond_0

    .line 131
    return-void

    .line 133
    :cond_0
    const/4 v1, 0x0

    .line 134
    .local v1, "it":Landroid/content/Intent;
    const v2, 0x7f0a01d5

    .line 135
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 134
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 136
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v1, v2

    goto/16 :goto_0

    .line 137
    :cond_1
    const v2, 0x7f0a01b7

    .line 138
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 137
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 139
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v1, v2

    goto :goto_0

    .line 140
    :cond_2
    const v2, 0x7f0a01c8

    .line 141
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 140
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 142
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v1, v2

    goto :goto_0

    .line 143
    :cond_3
    const v2, 0x7f0a01b4

    .line 144
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 143
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 145
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v1, v2

    goto :goto_0

    .line 147
    :cond_4
    const v2, 0x7f0a01a8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 148
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v1, v2

    goto :goto_0

    .line 149
    :cond_5
    const v2, 0x7f0a019a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 150
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v1, v2

    .line 152
    :cond_6
    :goto_0
    if-eqz v1, :cond_7

    .line 153
    iget v2, p0, Lcom/mediatek/engineermode/bluetooth/BtList;->mAntNum:I

    const-string v3, "ant_num"

    invoke-virtual {v1, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 154
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->startActivity(Landroid/content/Intent;)V

    .line 156
    :cond_7
    return-void
.end method
