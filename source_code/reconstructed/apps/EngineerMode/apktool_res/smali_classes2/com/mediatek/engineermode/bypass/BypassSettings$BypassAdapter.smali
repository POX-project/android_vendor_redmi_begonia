.class Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;
.super Landroid/widget/BaseAdapter;
.source "BypassSettings.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bypass/BypassSettings;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "BypassAdapter"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Landroid/widget/BaseAdapter;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/bypass/BypassSettings;Landroid/content/Context;)V
    .locals 0
    .param p2, "context"    # Landroid/content/Context;

    .line 770
    .local p0, "this":Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;, "Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter<TT;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 771
    invoke-direct {p0}, Landroid/widget/BaseAdapter;-><init>()V

    .line 772
    return-void
.end method


# virtual methods
.method public getCount()I
    .locals 1

    .line 787
    .local p0, "this":Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;, "Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter<TT;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2300(Lcom/mediatek/engineermode/bypass/BypassSettings;)[Ljava/lang/String;

    move-result-object v0

    array-length v0, v0

    return v0
.end method

.method public getItem(I)Ljava/lang/Object;
    .locals 1
    .param p1, "arg0"    # I

    .line 792
    .local p0, "this":Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;, "Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter<TT;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2300(Lcom/mediatek/engineermode/bypass/BypassSettings;)[Ljava/lang/String;

    move-result-object v0

    aget-object v0, v0, p1

    return-object v0
.end method

.method public getItemId(I)J
    .locals 2
    .param p1, "arg0"    # I

    .line 797
    .local p0, "this":Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;, "Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter<TT;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1900(Lcom/mediatek/engineermode/bypass/BypassSettings;)[I

    move-result-object v0

    aget v0, v0, p1

    int-to-long v0, v0

    return-wide v0
.end method

.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 4
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 777
    .local p0, "this":Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;, "Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter<TT;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    const-string v1, "layout_inflater"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/LayoutInflater;

    .line 778
    .local v0, "inflater":Landroid/view/LayoutInflater;
    const v1, 0x1090010

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p3, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckedTextView;

    .line 780
    .local v1, "ctview":Landroid/widget/CheckedTextView;
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2300(Lcom/mediatek/engineermode/bypass/BypassSettings;)[Ljava/lang/String;

    move-result-object v3

    aget-object v3, v3, p1

    invoke-virtual {v1, v3}, Landroid/widget/CheckedTextView;->setText(Ljava/lang/CharSequence;)V

    .line 781
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2400(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2500(Lcom/mediatek/engineermode/bypass/BypassSettings;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    if-nez v3, :cond_0

    const/4 v2, 0x1

    :cond_0
    invoke-virtual {v1, v2}, Landroid/widget/CheckedTextView;->setEnabled(Z)V

    .line 782
    return-object v1
.end method
