.class Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;
.super Ljava/lang/Object;
.source "WiFiTx6632.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTx6632;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 1007
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 1012
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060823

    if-ne v0, v1, :cond_0

    .line 1014
    if-eqz p2, :cond_4

    .line 1015
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1016
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 1018
    :cond_0
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060872

    const/4 v2, 0x0

    if-ne v0, v1, :cond_2

    .line 1019
    if-nez p2, :cond_1

    .line 1020
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1022
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    goto :goto_0

    .line 1023
    :cond_2
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060873

    if-ne v0, v1, :cond_4

    .line 1024
    if-nez p2, :cond_3

    .line 1025
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1027
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 1029
    :cond_4
    :goto_0
    return-void
.end method
