.class public Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;
.super Landroid/os/Binder;
.source "CopyHalDumpService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/CopyHalDumpService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "LocalBinder"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/CopyHalDumpService;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/audio/CopyHalDumpService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    .line 125
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;->this$0:Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    return-void
.end method


# virtual methods
.method public getService(Landroid/os/Handler;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;
    .locals 1
    .param p1, "handler"    # Landroid/os/Handler;

    .line 127
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;->this$0:Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->access$002(Lcom/mediatek/engineermode/audio/CopyHalDumpService;Landroid/os/Handler;)Landroid/os/Handler;

    .line 128
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;->this$0:Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    return-object v0
.end method
