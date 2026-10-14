.class Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$2;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;

    .line 8842
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 8844
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "PGSM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 8845
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "EGSM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 8846
    return-void
.end method
