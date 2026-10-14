.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler$1;
.super Ljava/lang/Object;
.source "WiFiTxFormat.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->handleMessage(Landroid/os/Message;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    .line 670
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler$1;->this$1:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 672
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler$1;->this$1:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    iget-object v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Z)V

    .line 673
    return-void
.end method
