.class Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter$ViewHolder;
.super Ljava/lang/Object;
.source "ApnConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ViewHolder"
.end annotation


# instance fields
.field public texts:[Landroid/widget/TextView;

.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;)V
    .locals 0

    .line 372
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter$ViewHolder;->this$0:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;
    .param p2, "x1"    # Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter$1;

    .line 372
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter$ViewHolder;-><init>(Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;)V

    return-void
.end method
