.class Lcom/mediatek/ygps/YgpsActivity$2;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/YgpsActivity;->setSatelliteStatus()V
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

    .line 333
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$2;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 338
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$2;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$200(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/SatelliteCnrController;

    move-result-object v0

    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$2;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$100(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/SatelliteInfoManager;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/mediatek/ygps/SatelliteCnrController;->updateView(Lcom/mediatek/ygps/SatelliteInfoManager;)V

    return-void
.end method
