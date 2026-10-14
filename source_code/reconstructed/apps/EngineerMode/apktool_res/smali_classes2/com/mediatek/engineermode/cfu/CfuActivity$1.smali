.class Lcom/mediatek/engineermode/cfu/CfuActivity$1;
.super Ljava/lang/Object;
.source "CfuActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/cfu/CfuActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/cfu/CfuActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 115
    iput-object p1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$1;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 117
    const-string v0, "CFU"

    const-string v1, "onClick: Refresh"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$1;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$000(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    .line 119
    return-void
.end method
