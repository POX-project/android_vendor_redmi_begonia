.class Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;
.super Ljava/lang/Object;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ViewHolder"
.end annotation


# instance fields
.field public seps:[Landroid/view/View;

.field public texts:[Landroid/widget/TextView;

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;)V
    .locals 0

    .line 897
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->this$0:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;
    .param p2, "x1"    # Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$1;

    .line 897
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;)V

    return-void
.end method
