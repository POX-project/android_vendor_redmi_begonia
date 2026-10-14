.class Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$3;
.super Ljava/lang/Object;
.source "ComponentSelectActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showSimSelectedDialog([Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 544
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 3
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 548
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showDialog(I)V

    .line 549
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->start()V

    .line 550
    return-void
.end method
