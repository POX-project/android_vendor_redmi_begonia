.class Lcom/mediatek/mdml/MCPHandler$TypeMagic;
.super Ljava/lang/Object;
.source "MCPHandler.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/mdml/MCPHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "TypeMagic"
.end annotation


# instance fields
.field public m_magic:[B

.field public m_type:Lcom/mediatek/mdml/MCP_TYPE;


# direct methods
.method public constructor <init>(Lcom/mediatek/mdml/MCP_TYPE;[B)V
    .locals 0
    .param p1, "type"    # Lcom/mediatek/mdml/MCP_TYPE;
    .param p2, "magic"    # [B

    .line 413
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 414
    iput-object p1, p0, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    .line 415
    iput-object p2, p0, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_magic:[B

    .line 416
    return-void
.end method
