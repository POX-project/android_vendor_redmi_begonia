.class Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;
.super Ljava/lang/Object;
.source "MyAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/MyAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ViewHolder"
.end annotation


# instance fields
.field icon:Landroid/widget/ImageView;

.field text:Landroid/widget/TextView;

.field text2:Landroid/widget/TextView;


# direct methods
.method private constructor <init>(Lcom/mediatek/lbs/em2/ui/MyAdapter;)V
    .locals 0

    .line 96
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/lbs/em2/ui/MyAdapter;Lcom/mediatek/lbs/em2/ui/MyAdapter$1;)V
    .locals 0

    .line 96
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;-><init>(Lcom/mediatek/lbs/em2/ui/MyAdapter;)V

    return-void
.end method
