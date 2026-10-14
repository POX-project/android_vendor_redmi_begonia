.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;
.super Ljava/lang/Object;
.source "WiFiTxFormat.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateTxCountView(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

.field final synthetic val$text:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Ljava/lang/String;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 699
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    iput-object p2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;->val$text:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 704
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$3100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;->val$text:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 705
    return-void
.end method
