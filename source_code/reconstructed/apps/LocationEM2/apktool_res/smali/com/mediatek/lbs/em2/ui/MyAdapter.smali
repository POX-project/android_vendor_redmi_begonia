.class public Lcom/mediatek/lbs/em2/ui/MyAdapter;
.super Landroid/widget/BaseAdapter;
.source "MyAdapter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;
    }
.end annotation


# instance fields
.field private items:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mIcon1:Landroid/graphics/Bitmap;

.field private mIcon2:Landroid/graphics/Bitmap;

.field private mIcon3:Landroid/graphics/Bitmap;

.field private mIcon4:Landroid/graphics/Bitmap;

.field private mInflater:Landroid/view/LayoutInflater;

.field private paths:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/util/List;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 27
    invoke-direct {p0}, Landroid/widget/BaseAdapter;-><init>()V

    .line 28
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mInflater:Landroid/view/LayoutInflater;

    .line 29
    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->items:Ljava/util/List;

    .line 30
    iput-object p3, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->paths:Ljava/util/List;

    .line 31
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    const p3, 0x7f040003

    invoke-static {p2, p3}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object p2

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon1:Landroid/graphics/Bitmap;

    .line 32
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    const/high16 p3, 0x7f040000

    invoke-static {p2, p3}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object p2

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon2:Landroid/graphics/Bitmap;

    .line 33
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    const p3, 0x7f040002

    invoke-static {p2, p3}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object p2

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon3:Landroid/graphics/Bitmap;

    .line 34
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    const p2, 0x7f040001

    invoke-static {p1, p2}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon4:Landroid/graphics/Bitmap;

    return-void
.end method


# virtual methods
.method public getCount()I
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->items:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0

    return p0
.end method

.method public getItem(I)Ljava/lang/Object;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->items:Ljava/util/List;

    invoke-interface {p0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method public getItemId(I)J
    .locals 0

    int-to-long p0, p1

    return-wide p0
.end method

.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 7

    if-nez p2, :cond_0

    .line 52
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mInflater:Landroid/view/LayoutInflater;

    const p3, 0x7f070005

    const/4 v0, 0x0

    invoke-virtual {p2, p3, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 53
    new-instance p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;

    invoke-direct {p3, p0, v0}, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;-><init>(Lcom/mediatek/lbs/em2/ui/MyAdapter;Lcom/mediatek/lbs/em2/ui/MyAdapter$1;)V

    const v0, 0x7f05011a

    .line 54
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text:Landroid/widget/TextView;

    const v0, 0x7f05011b

    .line 55
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    const v0, 0x7f0500a3

    .line 56
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->icon:Landroid/widget/ImageView;

    .line 58
    invoke-virtual {p2, p3}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    goto :goto_0

    .line 60
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;

    .line 63
    :goto_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->paths:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 64
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->items:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Back to /"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v3, ""

    if-eqz v1, :cond_1

    .line 65
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text:Landroid/widget/TextView;

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 66
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    invoke-virtual {p1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 67
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->icon:Landroid/widget/ImageView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon1:Landroid/graphics/Bitmap;

    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto/16 :goto_4

    .line 68
    :cond_1
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->items:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "Back to ../"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 69
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 70
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    invoke-virtual {p1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 71
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->icon:Landroid/widget/ImageView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon2:Landroid/graphics/Bitmap;

    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto/16 :goto_4

    .line 73
    :cond_2
    new-instance p1, Ljava/util/GregorianCalendar;

    invoke-direct {p1}, Ljava/util/GregorianCalendar;-><init>()V

    .line 74
    invoke-virtual {v0}, Ljava/io/File;->lastModified()J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Ljava/util/Calendar;->setTimeInMillis(J)V

    .line 76
    iget-object v1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text:Landroid/widget/TextView;

    invoke-virtual {v0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 77
    iget-object v1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "["

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v4

    if-eqz v4, :cond_3

    const-string v4, "R"

    goto :goto_1

    :cond_3
    move-object v4, v3

    :goto_1
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->canWrite()Z

    move-result v4

    if-eqz v4, :cond_4

    const-string v3, "W"

    :cond_4
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v3

    const-string v4, " "

    if-eqz v3, :cond_5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v5, "bytes "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_2

    :cond_5
    move-object v3, v4

    :goto_2
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    .line 78
    invoke-virtual {p1, v3}, Ljava/util/Calendar;->get(I)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x2

    invoke-virtual {p1, v5}, Ljava/util/Calendar;->get(I)I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x5

    invoke-virtual {p1, v3}, Ljava/util/Calendar;->get(I)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v3, 0xb

    .line 79
    invoke-virtual {p1, v3}, Ljava/util/Calendar;->get(I)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v4, 0xc

    invoke-virtual {p1, v4}, Ljava/util/Calendar;->get(I)I

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v3, 0xd

    invoke-virtual {p1, v3}, Ljava/util/Calendar;->get(I)I

    move-result p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 77
    invoke-virtual {v1, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 80
    invoke-virtual {v0}, Ljava/io/File;->canWrite()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 81
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    const v1, -0xff0100

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_3

    .line 82
    :cond_6
    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result p1

    if-eqz p1, :cond_7

    .line 83
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    const/16 v1, -0x100

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_3

    .line 85
    :cond_7
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->text2:Landroid/widget/TextView;

    const/high16 v1, -0x10000

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 87
    :goto_3
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 88
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->icon:Landroid/widget/ImageView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon3:Landroid/graphics/Bitmap;

    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_4

    .line 90
    :cond_8
    iget-object p1, p3, Lcom/mediatek/lbs/em2/ui/MyAdapter$ViewHolder;->icon:Landroid/widget/ImageView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/MyAdapter;->mIcon4:Landroid/graphics/Bitmap;

    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :goto_4
    return-object p2
.end method
