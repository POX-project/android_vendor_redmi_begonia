.class Lcom/mediatek/mdml/MCPInfo;
.super Ljava/lang/Object;
.source "MCPInfo.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/MCPInfo"


# instance fields
.field private m_data:[B

.field private m_len:I

.field private m_type:Lcom/mediatek/mdml/MCP_TYPE;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    sget-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    iput-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    .line 17
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_len:I

    .line 18
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    .line 19
    return-void
.end method


# virtual methods
.method public GetData()[B
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    return-object v0
.end method

.method public GetLen()I
    .locals 1

    .line 48
    iget v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_len:I

    return v0
.end method

.method public GetType()Lcom/mediatek/mdml/MCP_TYPE;
    .locals 1

    .line 41
    iget-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    return-object v0
.end method

.method public Reset()V
    .locals 1

    .line 31
    sget-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    iput-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    .line 32
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_len:I

    .line 33
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    .line 34
    return-void
.end method

.method public SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V
    .locals 1
    .param p1, "type"    # Lcom/mediatek/mdml/MCP_TYPE;
    .param p2, "len"    # I
    .param p3, "data"    # [B

    .line 107
    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[BZ)V

    .line 108
    return-void
.end method

.method public SetData(Lcom/mediatek/mdml/MCP_TYPE;I[BZ)V
    .locals 3
    .param p1, "type"    # Lcom/mediatek/mdml/MCP_TYPE;
    .param p2, "len"    # I
    .param p3, "data"    # [B
    .param p4, "bCopyData"    # Z

    .line 68
    const/high16 v0, 0x20000

    if-le p2, v0, :cond_0

    .line 69
    const/high16 p2, 0x20000

    .line 71
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/mdml/MCPInfo;->Reset()V

    .line 72
    if-eqz p1, :cond_1

    .line 73
    iput-object p1, p0, Lcom/mediatek/mdml/MCPInfo;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    .line 75
    :cond_1
    if-lez p2, :cond_2

    .line 76
    iput p2, p0, Lcom/mediatek/mdml/MCPInfo;->m_len:I

    .line 79
    :cond_2
    if-nez p3, :cond_3

    .line 80
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    goto :goto_0

    .line 82
    :cond_3
    if-eqz p4, :cond_5

    .line 83
    if-nez p2, :cond_4

    .line 84
    iput-object p3, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    goto :goto_0

    .line 86
    :cond_4
    iget v0, p0, Lcom/mediatek/mdml/MCPInfo;->m_len:I

    new-array v1, v0, [B

    iput-object v1, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    .line 87
    const/4 v2, 0x0

    invoke-static {p3, v2, v1, v2, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_0

    .line 93
    :cond_5
    iput-object p3, p0, Lcom/mediatek/mdml/MCPInfo;->m_data:[B

    .line 96
    :goto_0
    return-void
.end method

.method public finalize()V
    .locals 0

    .line 24
    invoke-virtual {p0}, Lcom/mediatek/mdml/MCPInfo;->Reset()V

    return-void
.end method
