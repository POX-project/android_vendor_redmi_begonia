.class public Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;
.super Ljava/lang/Thread;
.source "ComponentSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "MdmCoreThread"
.end annotation


# instance fields
.field private action:I

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
    .param p2, "action"    # I

    .line 968
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    .line 969
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->action:I

    .line 970
    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 973
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->action:I

    const/4 v1, 0x1

    if-eqz v0, :cond_2

    const/4 v2, 0x2

    if-eq v0, v1, :cond_1

    if-eq v0, v2, :cond_0

    goto :goto_0

    .line 986
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2800(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Z

    .line 987
    goto :goto_0

    .line 981
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2700(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 982
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2500(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 975
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2400(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 976
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2500(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 977
    invoke-static {v1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2602(Z)Z

    .line 991
    :cond_3
    :goto_0
    return-void
.end method
