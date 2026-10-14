.class public Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
.super Landroid/support/v4/app/Fragment;
.source "VilteConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "Iot/VilteConfigFragment"

.field public static final UNKNOW:I = 0x4

.field private static final VILTE_ACTION_GET_DEFAULT_PROFILE:I = 0x0

.field private static final VILTE_ACTION_WRITE_PROFILE:I = 0x1

.field private static final VILTE_DEFAULT_FILE_NAME:Ljava/lang/String; = "viLTE_media_profiles.xml"

.field private static final VILTE_DEFAULT_TEMPLATE_FILE_NAME:Ljava/lang/String; = "viLTE_media_profiles_opxx.xml"

.field public static final VILTE_READ_DEFAULT_PROFILE_FAILED:I = 0x0

.field public static final VILTE_READ_DEFAULT_PROFILE_OK:I = 0x1

.field public static final VILTE_WRITE_PROFILE_FAILED:I = 0x2

.field public static final VILTE_WRITE_PROFILE_OK:I = 0x3

.field public static selectProfileList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;"
        }
    .end annotation
.end field

.field public static selectqualityList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private VideoQualityMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private btnOnClickListener:Landroid/view/View$OnClickListener;

.field private btnProfileCancel:Landroid/widget/Button;

.field private btnProfileReset:Landroid/widget/Button;

.field private btnProfileSave:Landroid/widget/Button;

.field private btnShowHelp:Landroid/widget/Button;

.field private curFileName:Ljava/lang/String;

.field private mHandler:Landroid/os/Handler;

.field private operatorId:Landroid/widget/EditText;

.field private profileAdapter:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

.field private profileContentScrollView:Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;

.field profileModelList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;"
        }
    .end annotation
.end field

.field private profileTitleScrollView:Landroid/widget/HorizontalScrollView;

.field private videoProfileContent:Landroid/widget/LinearLayout;

.field private videoProfileListView:Landroid/widget/ListView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 48
    invoke-direct {p0}, Landroid/support/v4/app/Fragment;-><init>()V

    .line 73
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 74
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->curFileName:Ljava/lang/String;

    .line 76
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->mHandler:Landroid/os/Handler;

    .line 144
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnOnClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 48
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->operatorId:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 48
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileAdapter:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/util/ArrayList;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
    .param p1, "x1"    # Ljava/util/ArrayList;

    .line 48
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->refreshSelectProfileList(Ljava/util/ArrayList;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
    .param p1, "x1"    # Z

    .line 48
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->refreshVideoProfileView(Z)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 48
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->curFileName:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
    .param p1, "x1"    # Ljava/lang/String;

    .line 48
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->curFileName:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Lorg/xmlpull/v1/XmlPullParser;Z)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
    .param p1, "x1"    # Lorg/xmlpull/v1/XmlPullParser;
    .param p2, "x2"    # Z

    .line 48
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getXMLContent(Lorg/xmlpull/v1/XmlPullParser;Z)Z

    move-result v0

    return v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 48
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private combination(Landroid/widget/ListView;Landroid/widget/HorizontalScrollView;Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;)V
    .locals 1
    .param p1, "lvDetail"    # Landroid/widget/ListView;
    .param p2, "title"    # Landroid/widget/HorizontalScrollView;
    .param p3, "content"    # Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;

    .line 472
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$4;

    invoke-direct {v0, p0, p2}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$4;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Landroid/widget/HorizontalScrollView;)V

    invoke-virtual {p3, v0}, Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;->setMyScrollChangeListener(Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;)V

    .line 481
    return-void
.end method

.method private getXMLContent(Lorg/xmlpull/v1/XmlPullParser;Z)Z
    .locals 20
    .param p1, "parser"    # Lorg/xmlpull/v1/XmlPullParser;
    .param p2, "supported"    # Z

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    .line 486
    const/4 v3, 0x0

    :try_start_0
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileModelList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 487
    invoke-interface/range {p1 .. p1}, Lorg/xmlpull/v1/XmlPullParser;->getEventType()I

    move-result v0

    .line 488
    .local v0, "eventType":I
    :goto_0
    const/4 v4, 0x1

    if-eq v0, v4, :cond_4

    .line 489
    const/4 v4, 0x2

    if-eq v0, v4, :cond_0

    goto/16 :goto_2

    .line 491
    :cond_0
    const-string v4, "VideoProfile"

    invoke-interface/range {p1 .. p1}, Lorg/xmlpull/v1/XmlPullParser;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v5, "level"

    const-string v6, "profile"

    const-string v7, "name"

    const/4 v8, 0x0

    if-eqz v4, :cond_1

    .line 492
    :try_start_1
    new-instance v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 493
    invoke-interface {v2, v8, v7}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 494
    invoke-interface {v2, v8, v6}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 495
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    const-string v5, "width"

    .line 496
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    const-string v5, "height"

    .line 497
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    const-string v5, "framerate"

    .line 498
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    const-string v5, "Iinterval"

    .line 499
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v16

    const-string v5, "minBitRate"

    .line 500
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    const-string v5, "maxBitRate"

    .line 501
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v18

    move-object v9, v4

    move/from16 v19, p2

    invoke-direct/range {v9 .. v19}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 503
    .local v4, "profileModel":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    iget-object v5, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileModelList:Ljava/util/ArrayList;

    invoke-virtual {v5, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 504
    nop

    .end local v4    # "profileModel":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    goto :goto_2

    :cond_1
    const-string v4, "VideoQuality"

    invoke-interface/range {p1 .. p1}, Lorg/xmlpull/v1/XmlPullParser;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v4, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 505
    iget-object v4, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileModelList:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :goto_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v9

    if-eqz v9, :cond_3

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 506
    .local v9, "model":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    invoke-virtual {v9}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getName()Ljava/lang/String;

    move-result-object v10

    const-string v11, "format"

    .line 507
    invoke-interface {v2, v8, v11}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 506
    invoke-virtual {v10, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_2

    .line 508
    invoke-virtual {v9}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getProfile()Ljava/lang/String;

    move-result-object v10

    .line 509
    invoke-interface {v2, v8, v6}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 508
    invoke-virtual {v10, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_2

    .line 511
    invoke-virtual {v9}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getLevel()Ljava/lang/String;

    move-result-object v10

    .line 512
    invoke-interface {v2, v8, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 511
    invoke-virtual {v10, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_2

    .line 514
    invoke-interface {v2, v8, v7}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setQuality(Ljava/lang/String;)V

    .line 517
    .end local v9    # "model":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    :cond_2
    goto :goto_1

    .line 527
    :cond_3
    :goto_2
    invoke-interface/range {p1 .. p1}, Lorg/xmlpull/v1/XmlPullParser;->next()I

    move-result v4
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_1 .. :try_end_1} :catch_0

    move v0, v4

    goto/16 :goto_0

    .line 529
    :cond_4
    return v4

    .line 533
    .end local v0    # "eventType":I
    :catch_0
    move-exception v0

    .line 534
    .local v0, "e":Lorg/xmlpull/v1/XmlPullParserException;
    invoke-virtual {v0}, Lorg/xmlpull/v1/XmlPullParserException;->printStackTrace()V

    .line 535
    return v3

    .line 530
    .end local v0    # "e":Lorg/xmlpull/v1/XmlPullParserException;
    :catch_1
    move-exception v0

    .line 531
    .local v0, "e":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 532
    return v3
.end method

.method private initView(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .line 251
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->resetVideoQualityMapping(Landroid/view/View;)V

    .line 252
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectProfileList:Ljava/util/ArrayList;

    .line 253
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileModelList:Ljava/util/ArrayList;

    .line 254
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    .line 255
    nop

    .line 256
    const v0, 0x7f06076b

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->videoProfileContent:Landroid/widget/LinearLayout;

    .line 257
    const v0, 0x7f060250

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnShowHelp:Landroid/widget/Button;

    .line 258
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 259
    const v0, 0x7f0605dc

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->operatorId:Landroid/widget/EditText;

    .line 260
    const v0, 0x7f06024e

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnProfileSave:Landroid/widget/Button;

    .line 261
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 262
    const v0, 0x7f06024c

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnProfileCancel:Landroid/widget/Button;

    .line 263
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 264
    const v0, 0x7f06024d

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnProfileReset:Landroid/widget/Button;

    .line 265
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->btnOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 266
    nop

    .line 267
    const v0, 0x7f06076f

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->videoProfileListView:Landroid/widget/ListView;

    .line 268
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileAdapter:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 269
    nop

    .line 270
    const v0, 0x7f060774

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/HorizontalScrollView;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileTitleScrollView:Landroid/widget/HorizontalScrollView;

    .line 271
    nop

    .line 272
    const v0, 0x7f060775

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileContentScrollView:Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;

    .line 273
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->videoProfileListView:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileTitleScrollView:Landroid/widget/HorizontalScrollView;

    invoke-direct {p0, v1, v2, v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->combination(Landroid/widget/ListView;Landroid/widget/HorizontalScrollView;Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;)V

    .line 275
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->refreshVideoProfileView(Z)V

    .line 277
    return-void
.end method

.method public static isNumeric(Ljava/lang/String;)Z
    .locals 2
    .param p0, "str"    # Ljava/lang/String;

    .line 102
    const-string v0, "[0-9]*"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 103
    .local v0, "pattern":Ljava/util/regex/Pattern;
    invoke-virtual {v0, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/regex/Matcher;->matches()Z

    move-result v1

    return v1
.end method

.method private refreshSelectProfileList(Ljava/util/ArrayList;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;)V"
        }
    .end annotation

    .line 190
    .local p1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;>;"
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectProfileList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 191
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 192
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->resetVideoQualityMapping()V

    .line 193
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 194
    .local v1, "profileModel":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 195
    sget-object v2, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectProfileList:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 196
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 197
    sget-object v2, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;

    .line 198
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getName()Ljava/lang/String;

    move-result-object v5

    .line 199
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getProfile()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getLevel()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v3, v4, v5, v6, v7}, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 200
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[refreshSelectProfileList]getQuality() key: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 201
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " value: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 203
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 200
    const-string v3, "Iot/VilteConfigFragment"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 204
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 205
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 206
    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    add-int/lit8 v4, v4, 0x1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    .line 205
    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 209
    .end local v1    # "profileModel":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    :cond_0
    goto/16 :goto_0

    .line 210
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->checkSelectQualityList(Ljava/util/ArrayList;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 211
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectProfileList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 212
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 213
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->resetVideoQualityMapping()V

    .line 214
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    invoke-virtual {v1}, Landroid/support/v4/app/FragmentActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a068c

    .line 215
    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 214
    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->showInfoDialog(Landroid/content/Context;Ljava/lang/String;)V

    .line 217
    :cond_2
    return-void
.end method

.method private refreshVideoProfileView(Z)V
    .locals 2
    .param p1, "isShow"    # Z

    .line 230
    if-eqz p1, :cond_0

    .line 231
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->updateVideoProfileUI()V

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->videoProfileContent:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    goto :goto_0

    .line 234
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->videoProfileContent:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 236
    :goto_0
    return-void
.end method


# virtual methods
.method public checkSelectQualityList(Ljava/util/ArrayList;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;",
            ">;)Z"
        }
    .end annotation

    .line 177
    .local p1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;>;"
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x4

    if-eq v0, v2, :cond_0

    .line 178
    return v1

    .line 180
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 181
    .local v2, "key":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    invoke-virtual {v4, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 182
    invoke-virtual {v4, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    if-eq v4, v3, :cond_1

    goto :goto_1

    .line 185
    .end local v2    # "key":Ljava/lang/String;
    :cond_1
    goto :goto_0

    .line 183
    .restart local v2    # "key":Ljava/lang/String;
    :cond_2
    :goto_1
    return v1

    .line 186
    .end local v2    # "key":Ljava/lang/String;
    :cond_3
    return v3
.end method

.method public deleteFileFromInnerSDCard(Ljava/lang/String;)Z
    .locals 3
    .param p1, "fileName"    # Ljava/lang/String;

    .line 131
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getInnerSDCardPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 132
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 133
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 134
    const/4 v1, 0x1

    return v1

    .line 136
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public getInnerSDCardPath()Ljava/lang/String;
    .locals 1

    .line 141
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 2
    .param p1, "inflater"    # Landroid/view/LayoutInflater;
    .param p2, "container"    # Landroid/view/ViewGroup;
    .param p3, "savedInstanceState"    # Landroid/os/Bundle;

    .line 242
    const v0, 0x7f080081

    const/4 v1, 0x0

    invoke-virtual {p1, v0, p2, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    .line 245
    .local v0, "view":Landroid/view/View;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->initView(Landroid/view/View;)V

    .line 246
    return-object v0
.end method

.method public onDestroy()V
    .locals 0

    .line 549
    invoke-super {p0}, Landroid/support/v4/app/Fragment;->onDestroy()V

    .line 550
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 542
    invoke-super {p0}, Landroid/support/v4/app/Fragment;->onResume()V

    .line 543
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->start()V

    .line 544
    return-void
.end method

.method public resetVideoQualityMapping()V
    .locals 4

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 297
    .local v1, "key":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 298
    .end local v1    # "key":Ljava/lang/String;
    goto :goto_0

    .line 299
    :cond_0
    return-void
.end method

.method public resetVideoQualityMapping(Landroid/view/View;)V
    .locals 5
    .param p1, "view"    # Landroid/view/View;

    .line 280
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 282
    invoke-virtual {p1}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f01009f

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x1

    aget-object v1, v1, v3

    .line 283
    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    .line 282
    invoke-virtual {v0, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 285
    invoke-virtual {p1}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x2

    aget-object v1, v1, v4

    .line 286
    nop

    .line 285
    invoke-virtual {v0, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 287
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 288
    invoke-virtual {p1}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x3

    aget-object v1, v1, v4

    .line 289
    nop

    .line 288
    invoke-virtual {v0, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 290
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->VideoQualityMapping:Ljava/util/HashMap;

    .line 291
    invoke-virtual {p1}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x4

    aget-object v1, v1, v2

    .line 292
    nop

    .line 291
    invoke-virtual {v0, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 293
    return-void
.end method

.method public showInfoDialog(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "content"    # Ljava/lang/String;

    .line 107
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 109
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    const-string v1, "Warning"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 111
    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$2;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)V

    .line 112
    const-string v3, "OK"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 119
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 120
    .local v1, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v1}, Landroid/app/AlertDialog;->show()V

    .line 121
    return-void
.end method

.method public showToast(Ljava/lang/String;)V
    .locals 2
    .param p1, "content"    # Ljava/lang/String;

    .line 173
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 174
    return-void
.end method

.method public updateVideoProfileUI()V
    .locals 3

    .line 220
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileAdapter:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    if-nez v0, :cond_0

    .line 221
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileModelList:Ljava/util/ArrayList;

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;-><init>(Landroid/app/Activity;Ljava/util/ArrayList;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileAdapter:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 223
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->videoProfileListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 225
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->profileAdapter:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->notifyDataSetChanged()V

    .line 226
    return-void
.end method
