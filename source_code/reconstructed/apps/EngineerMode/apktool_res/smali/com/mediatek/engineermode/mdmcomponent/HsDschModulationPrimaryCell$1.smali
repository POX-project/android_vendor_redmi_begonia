.class Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;

    .line 5169
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5171
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "QPSK (0)"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5172
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "16QAM (1)"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5173
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "64QAM (2)"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5174
    return-void
.end method
