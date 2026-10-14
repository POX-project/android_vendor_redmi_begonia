.class Lcom/mediatek/ygps/YgpsActivity$5;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/YgpsActivity;->initEpoUI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 411
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$5;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 0

    const-string p1, "gps.epo"

    if-eqz p2, :cond_1

    .line 415
    iget-object p2, p0, Lcom/mediatek/ygps/YgpsActivity$5;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p2}, Lcom/mediatek/ygps/YgpsActivity;->access$300(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/MnldConn;

    move-result-object p2

    .line 416
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$5;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/CheckBox;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "1"

    goto :goto_0

    :cond_0
    const-string p0, "3"

    .line 415
    :goto_0
    invoke-static {p2, p1, p0}, Lcom/mediatek/ygps/GpsMnlSetting;->setMnlProp(Lcom/mediatek/ygps/MnldConn;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 419
    :cond_1
    iget-object p2, p0, Lcom/mediatek/ygps/YgpsActivity$5;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p2}, Lcom/mediatek/ygps/YgpsActivity;->access$300(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/MnldConn;

    move-result-object p2

    .line 420
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$5;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/CheckBox;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    if-eqz p0, :cond_2

    const-string p0, "2"

    goto :goto_1

    :cond_2
    const-string p0, "0"

    .line 419
    :goto_1
    invoke-static {p2, p1, p0}, Lcom/mediatek/ygps/GpsMnlSetting;->setMnlProp(Lcom/mediatek/ygps/MnldConn;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method
