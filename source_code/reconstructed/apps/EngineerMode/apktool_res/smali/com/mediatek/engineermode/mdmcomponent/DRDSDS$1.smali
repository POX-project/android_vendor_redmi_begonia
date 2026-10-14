.class Lcom/mediatek/engineermode/mdmcomponent/DRDSDS$1;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;

    .line 5582
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5584
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "not allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5585
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, " allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5586
    return-void
.end method
