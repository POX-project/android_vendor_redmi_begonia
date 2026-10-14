.class Lcom/mediatek/lbs/em2/ui/LbsNlp$6;
.super Ljava/lang/Object;
.source "LbsNlp.java"

# interfaces
.implements Landroid/location/LocationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsNlp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V
    .locals 0

    .line 265
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLocationChanged(Landroid/location/Location;)V
    .locals 4

    if-nez p1, :cond_0

    const-string p0, "ERR: onLocationChanged get null"

    .line 270
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    const-string v0, "onLocationChanged - FLP"

    .line 272
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    .line 273
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$902(Lcom/mediatek/lbs/em2/ui/LbsNlp;Landroid/location/Location;)Landroid/location/Location;

    .line 274
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-virtual {p1}, Landroid/location/Location;->getTime()J

    move-result-wide v2

    invoke-static {v1, v2, v3}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsNlp;J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 275
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$500(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 276
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$700(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$500(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_0
    return-void
.end method

.method public onProviderDisabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onProviderEnabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 0

    return-void
.end method
