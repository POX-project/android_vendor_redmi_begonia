.class Lcom/mediatek/engineermode/bypass/BypassSettings$3;
.super Ljava/lang/Object;
.source "BypassSettings.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bypass/BypassSettings;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 259
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 5
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 262
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    .line 263
    .local v0, "id":I
    const v1, 0x7f06026b

    if-ne v0, v1, :cond_2

    .line 264
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2100(Lcom/mediatek/engineermode/bypass/BypassSettings;)Landroid/widget/ListView;

    move-result-object v1

    xor-int/lit8 v2, p2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setEnabled(Z)V

    .line 265
    const/4 v1, 0x0

    if-eqz p2, :cond_1

    .line 266
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v2

    const/4 v3, 0x1

    if-lez v2, :cond_0

    .line 268
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1600(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    .line 269
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1800(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 270
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$700(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 271
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$802(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    goto :goto_0

    .line 273
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$900(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    goto :goto_0

    .line 276
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$900(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    .line 279
    :cond_2
    :goto_0
    return-void
.end method
