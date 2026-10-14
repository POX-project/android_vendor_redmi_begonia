.class Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;
.super Ljava/lang/Object;
.source "SimInfoUpdate.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ViewHolder"
.end annotation


# instance fields
.field public texts:[Landroid/widget/TextView;

.field final synthetic this$0:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->this$0:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;
    .param p2, "x1"    # Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$1;

    .line 59
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;-><init>(Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;)V

    return-void
.end method
