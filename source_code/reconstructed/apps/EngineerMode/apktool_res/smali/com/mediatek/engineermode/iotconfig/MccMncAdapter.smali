.class Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;
.super Landroid/widget/ArrayAdapter;
.source "WfcConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/ArrayAdapter<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field private final context:Landroid/app/Activity;

.field listPosititon:I

.field private mccMncList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/util/ArrayList;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 375
    .local p2, "mccMncList2":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v0, 0x7f080083

    invoke-direct {p0, p1, v0}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 376
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->context:Landroid/app/Activity;

    .line 377
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->mccMncList:Ljava/util/ArrayList;

    .line 378
    return-void
.end method


# virtual methods
.method public getList()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 386
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->mccMncList:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 4
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 395
    iput p1, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->listPosititon:I

    .line 396
    const/4 v0, 0x0

    .line 397
    .local v0, "viewHolder":Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;
    if-nez p2, :cond_0

    .line 398
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->context:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v1

    .line 399
    .local v1, "inflator":Landroid/view/LayoutInflater;
    const v2, 0x7f080083

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 400
    new-instance v2, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;

    invoke-direct {v2}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;-><init>()V

    move-object v0, v2

    .line 401
    nop

    .line 402
    const v2, 0x7f06032a

    invoke-virtual {p2, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;->text:Landroid/widget/TextView;

    .line 404
    invoke-virtual {p2, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 405
    iget-object v3, v0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;->text:Landroid/widget/TextView;

    invoke-virtual {p2, v2, v3}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 406
    .end local v1    # "inflator":Landroid/view/LayoutInflater;
    goto :goto_0

    .line 407
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;

    .line 410
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->mccMncList:Ljava/util/ArrayList;

    if-eqz v1, :cond_1

    .line 411
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;->text:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->mccMncList:Ljava/util/ArrayList;

    invoke-virtual {v2, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 413
    :cond_1
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter$ViewHolder;->text:Landroid/widget/TextView;

    const-string v2, ""

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 415
    :goto_1
    return-object p2
.end method

.method public refresh(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 381
    .local p1, "mccMncList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->mccMncList:Ljava/util/ArrayList;

    .line 382
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->notifyDataSetChanged()V

    .line 383
    return-void
.end method
