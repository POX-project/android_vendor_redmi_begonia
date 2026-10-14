.class Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1$1;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->handleMessage(Landroid/os/Message;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;

    .line 106
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1$1;->this$1:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 109
    invoke-interface {p1}, Landroid/content/DialogInterface;->cancel()V

    .line 110
    return-void
.end method
