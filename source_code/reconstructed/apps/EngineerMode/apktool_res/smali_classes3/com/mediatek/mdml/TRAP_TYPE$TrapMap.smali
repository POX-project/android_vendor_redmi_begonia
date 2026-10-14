.class Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;
.super Ljava/lang/Object;
.source "TRAP_TYPE.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/mdml/TRAP_TYPE;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "TrapMap"
.end annotation


# instance fields
.field m_szType:Ljava/lang/String;

.field m_type:Lcom/mediatek/mdml/TRAP_TYPE;


# direct methods
.method constructor <init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V
    .locals 0
    .param p1, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p2, "szType"    # Ljava/lang/String;

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    iput-object p1, p0, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;->m_type:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 29
    iput-object p2, p0, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;->m_szType:Ljava/lang/String;

    .line 30
    return-void
.end method
