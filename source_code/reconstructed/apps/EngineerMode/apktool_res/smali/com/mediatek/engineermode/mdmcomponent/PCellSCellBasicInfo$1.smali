.class Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;

    .line 11664
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 11666
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "1.4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11667
    const/16 v0, 0x1e

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "3"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11668
    const/16 v0, 0x32

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "5"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11669
    const/16 v0, 0x64

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "10"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11670
    const/16 v0, 0x96

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "15"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11671
    const/16 v0, 0xc8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11672
    const/16 v0, 0xff

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11673
    return-void
.end method
