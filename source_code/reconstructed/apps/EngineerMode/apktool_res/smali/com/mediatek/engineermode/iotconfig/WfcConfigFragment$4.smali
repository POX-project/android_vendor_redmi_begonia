.class Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$4;
.super Landroid/text/method/NumberKeyListener;
.source "WfcConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->limitEditText(Landroid/widget/EditText;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 205
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$4;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-direct {p0}, Landroid/text/method/NumberKeyListener;-><init>()V

    return-void
.end method


# virtual methods
.method protected getAcceptedChars()[C
    .locals 1

    .line 208
    const/16 v0, 0xb

    new-array v0, v0, [C

    fill-array-data v0, :array_0

    return-object v0

    :array_0
    .array-data 2
        0x30s
        0x31s
        0x32s
        0x33s
        0x34s
        0x35s
        0x36s
        0x37s
        0x38s
        0x39s
        0x2cs
    .end array-data
.end method

.method public getInputType()I
    .locals 1

    .line 213
    const/4 v0, 0x2

    return v0
.end method
