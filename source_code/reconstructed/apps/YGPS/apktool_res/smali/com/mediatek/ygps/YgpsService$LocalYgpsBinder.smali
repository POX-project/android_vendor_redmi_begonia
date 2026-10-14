.class Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;
.super Landroid/os/Binder;
.source "YgpsService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "LocalYgpsBinder"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsService;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsService;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;->this$0:Lcom/mediatek/ygps/YgpsService;

    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    return-void
.end method


# virtual methods
.method public getServiceInstance()Lcom/mediatek/ygps/YgpsService;
    .locals 0

    .line 128
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;->this$0:Lcom/mediatek/ygps/YgpsService;

    return-object p0
.end method
