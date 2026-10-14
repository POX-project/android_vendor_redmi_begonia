.class Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;

    .line 3714
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 3716
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Handover"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3717
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Cell Reselection"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3718
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3719
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CCO"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3720
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Redirection"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3721
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3722
    return-void
.end method
