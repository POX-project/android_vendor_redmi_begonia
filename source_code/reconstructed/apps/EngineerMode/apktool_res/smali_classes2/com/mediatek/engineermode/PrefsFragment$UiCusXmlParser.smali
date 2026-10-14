.class Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;
.super Ljava/lang/Object;
.source "PrefsFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/PrefsFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "UiCusXmlParser"
.end annotation


# static fields
.field private static final ATTR_IF_SHOW:Ljava/lang/String; = "ifshow"

.field private static final ATTR_PREF_KEY:Ljava/lang/String; = "key"

.field private static final ATTR_VALUE_NOT_SHOW:Ljava/lang/String; = "false"

.field private static final TAG_FEATURE:Ljava/lang/String; = "feature"


# instance fields
.field private mItemsToRemove:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field final synthetic this$0:Lcom/mediatek/engineermode/PrefsFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/PrefsFragment;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/PrefsFragment;

    .line 611
    iput-object p1, p0, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->this$0:Lcom/mediatek/engineermode/PrefsFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 612
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->mItemsToRemove:Ljava/util/ArrayList;

    return-void
.end method


# virtual methods
.method getItemsToRemove()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 618
    iget-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->mItemsToRemove:Ljava/util/ArrayList;

    invoke-static {v0}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method parse(Landroid/content/Context;)V
    .locals 5
    .param p1, "context"    # Landroid/content/Context;

    .line 622
    iget-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->mItemsToRemove:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 623
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f0d000b

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getXml(I)Landroid/content/res/XmlResourceParser;

    move-result-object v0

    .line 625
    .local v0, "xmlParser":Landroid/content/res/XmlResourceParser;
    :try_start_0
    invoke-interface {v0}, Landroid/content/res/XmlResourceParser;->getEventType()I

    move-result v1

    .line 626
    .local v1, "eventType":I
    :goto_0
    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    .line 627
    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 628
    const-string v2, "feature"

    invoke-interface {v0}, Landroid/content/res/XmlResourceParser;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 629
    const-string v2, "ifshow"

    const/4 v3, 0x0

    invoke-interface {v0, v3, v2}, Landroid/content/res/XmlResourceParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v4, "false"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 631
    iget-object v2, p0, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->mItemsToRemove:Ljava/util/ArrayList;

    const-string v4, "key"

    .line 632
    invoke-interface {v0, v3, v4}, Landroid/content/res/XmlResourceParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 631
    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 636
    :cond_0
    invoke-interface {v0}, Landroid/content/res/XmlResourceParser;->next()I

    move-result v2
    :try_end_0
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    move v1, v2

    goto :goto_0

    .line 626
    .end local v1    # "eventType":I
    :cond_1
    goto :goto_1

    .line 640
    :catch_0
    move-exception v1

    .line 641
    .local v1, "e":Ljava/io/IOException;
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_2

    .line 638
    .end local v1    # "e":Ljava/io/IOException;
    :catch_1
    move-exception v1

    .line 639
    .local v1, "e":Lorg/xmlpull/v1/XmlPullParserException;
    invoke-virtual {v1}, Lorg/xmlpull/v1/XmlPullParserException;->printStackTrace()V

    .line 642
    .end local v1    # "e":Lorg/xmlpull/v1/XmlPullParserException;
    :goto_1
    nop

    .line 644
    :goto_2
    return-void
.end method
