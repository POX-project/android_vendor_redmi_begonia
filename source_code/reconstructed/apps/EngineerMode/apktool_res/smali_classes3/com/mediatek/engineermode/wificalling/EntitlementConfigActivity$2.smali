.class Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$2;
.super Ljava/lang/Object;
.source "EntitlementConfigActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 62
    iput-object p1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$2;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$2;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$200(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Landroid/widget/EditText;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$102(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 67
    new-instance v0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$2;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;-><init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V

    const-string v1, "set"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 68
    return-void
.end method
