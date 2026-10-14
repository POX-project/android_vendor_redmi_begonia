.class Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$5;
.super Landroid/text/method/NumberKeyListener;
.source "ApnConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->limitEditText(Landroid/widget/EditText;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    .line 254
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$5;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-direct {p0}, Landroid/text/method/NumberKeyListener;-><init>()V

    return-void
.end method


# virtual methods
.method protected getAcceptedChars()[C
    .locals 1

    .line 258
    const/16 v0, 0xa

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
    .end array-data
.end method

.method public getInputType()I
    .locals 1

    .line 263
    const/4 v0, 0x2

    return v0
.end method
