.class Lcom/mediatek/ygps/YgpsActivity$11;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/YgpsActivity;->onCreate(Landroid/os/Bundle;)V
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

    .line 1211
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$11;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onViewupdateNotify()V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "NmeaParser onViewupdateNotify"

    .line 1214
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1215
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$11;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$2802(Lcom/mediatek/ygps/YgpsActivity;I)I

    .line 1216
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$11;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$2900(Lcom/mediatek/ygps/YgpsActivity;)V

    return-void
.end method
