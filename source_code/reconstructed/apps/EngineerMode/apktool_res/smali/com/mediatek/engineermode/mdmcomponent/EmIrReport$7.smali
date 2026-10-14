.class Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$7;
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

    .line 3860
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 3862
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Ongoing"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$7;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3863
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Success"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$7;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3864
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Failure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport$7;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3865
    return-void
.end method
