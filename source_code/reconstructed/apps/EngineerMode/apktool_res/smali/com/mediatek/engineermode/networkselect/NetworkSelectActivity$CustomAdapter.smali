.class public Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;
.super Landroid/widget/ArrayAdapter;
.source "NetworkSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "CustomAdapter"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/ArrayAdapter<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;Landroid/content/Context;I[Ljava/lang/String;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
    .param p2, "context"    # Landroid/content/Context;
    .param p3, "textViewResourceId"    # I
    .param p4, "objects"    # [Ljava/lang/String;

    .line 189
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 190
    invoke-direct {p0, p2, p3, p4}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    .line 191
    return-void
.end method


# virtual methods
.method public getDropDownView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 3
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 195
    const/4 v0, 0x0

    .line 196
    .local v0, "v":Landroid/view/View;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isAvailable: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v2, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NetworkMode"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v1, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)Z

    move-result v1

    if-eqz v1, :cond_1

    const/16 v1, 0xa

    if-ne p1, v1, :cond_0

    goto :goto_0

    .line 203
    :cond_0
    const/4 v1, 0x0

    invoke-super {p0, p1, v1, p3}, Landroid/widget/ArrayAdapter;->getDropDownView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    goto :goto_1

    .line 198
    :cond_1
    :goto_0
    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 199
    .local v1, "tv":Landroid/widget/TextView;
    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 200
    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setHeight(I)V

    .line 201
    move-object v0, v1

    .line 202
    .end local v1    # "tv":Landroid/widget/TextView;
    nop

    .line 205
    :goto_1
    return-object v0
.end method
