.class Lcom/mediatek/ygps/YgpsActivity$6;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/YgpsActivity;->setInfoLayout()V
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

    .line 443
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$6;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 1

    .line 449
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "gpslog state changed to "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "YGPS/Mainview"

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 450
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$6;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$300(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/MnldConn;

    move-result-object p0

    if-eqz p2, :cond_0

    const-string p1, "1"

    goto :goto_0

    :cond_0
    const-string p1, "0"

    :goto_0
    const-string p2, "gpslog_enabled"

    invoke-static {p0, p2, p1}, Lcom/mediatek/ygps/GpsMnlSetting;->setMnlProp(Lcom/mediatek/ygps/MnldConn;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
