.class public Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;
.super Landroid/os/Binder;
.source "AEEControlService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/debugtool/AEEControlService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "LocalBinder"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/debugtool/AEEControlService;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/debugtool/AEEControlService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/debugtool/AEEControlService;

    .line 74
    iput-object p1, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;->this$0:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    return-void
.end method


# virtual methods
.method getService()Lcom/mediatek/engineermode/debugtool/AEEControlService;
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;->this$0:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    return-object v0
.end method
