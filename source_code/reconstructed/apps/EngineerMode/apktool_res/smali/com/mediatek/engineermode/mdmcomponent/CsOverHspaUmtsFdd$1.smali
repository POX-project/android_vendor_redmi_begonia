.class Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/Boolean;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;

    .line 6781
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 6783
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    const-string v1, "OFF"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6784
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    const-string v1, "ON"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6785
    return-void
.end method
