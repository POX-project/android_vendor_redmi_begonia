.class Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;

    .line 4020
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 4022
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Type 0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4023
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Type 1 DCI0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4024
    const-string v1, "Type 1 DCI1A2B2C"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4025
    const-string v1, "Type 1 DCI4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4026
    return-void
.end method
