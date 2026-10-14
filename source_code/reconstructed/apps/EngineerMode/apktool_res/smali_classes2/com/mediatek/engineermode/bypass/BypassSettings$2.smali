.class Lcom/mediatek/engineermode/bypass/BypassSettings$2;
.super Ljava/lang/Object;
.source "BypassSettings.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


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

    .line 230
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p1, "parent"    # Landroid/widget/AdapterView;
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J

    .line 232
    move-object v0, p2

    check-cast v0, Landroid/widget/CheckedTextView;

    .line 233
    .local v0, "ctview":Landroid/widget/CheckedTextView;
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v1

    .line 234
    .local v1, "bypassSet":I
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1900(Lcom/mediatek/engineermode/bypass/BypassSettings;)[I

    move-result-object v3

    aget v3, v3, p3

    and-int/2addr v2, v3

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    .line 235
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1900(Lcom/mediatek/engineermode/bypass/BypassSettings;)[I

    move-result-object v2

    aget v2, v2, p3

    xor-int/2addr v1, v2

    .line 236
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v2

    if-eqz v2, :cond_0

    if-nez v1, :cond_0

    .line 237
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1600(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    .line 239
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1800(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    goto :goto_0

    .line 241
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1900(Lcom/mediatek/engineermode/bypass/BypassSettings;)[I

    move-result-object v2

    aget v2, v2, p3

    const/16 v4, 0x8

    if-ne v2, v4, :cond_2

    .line 243
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    or-int/lit8 v4, v1, 0x8

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1702(Lcom/mediatek/engineermode/bypass/BypassSettings;I)I

    .line 244
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1402(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 245
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2000(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    .line 246
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$700(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 247
    return-void

    .line 249
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1900(Lcom/mediatek/engineermode/bypass/BypassSettings;)[I

    move-result-object v2

    aget v2, v2, p3

    or-int/2addr v1, v2

    .line 250
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 251
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1600(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    .line 253
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1800(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 255
    :goto_0
    return-void
.end method
