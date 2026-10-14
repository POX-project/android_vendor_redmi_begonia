.class Lcom/mediatek/mdml/DataQueue;
.super Ljava/lang/Object;
.source "DataQueue.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/DataQueue"


# instance fields
.field private m_data:[B

.field private m_size:I

.field private m_unusedSize:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 22
    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    .line 23
    const/high16 v0, 0x40000

    new-array v0, v0, [B

    iput-object v0, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    .line 24
    return-void
.end method


# virtual methods
.method public Clear()V
    .locals 1

    .line 31
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 32
    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    .line 33
    return-void
.end method

.method public FrontOffset()I
    .locals 1

    .line 51
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    return v0
.end method

.method public GetData()[B
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    return-object v0
.end method

.method public IncSize(I)V
    .locals 1
    .param p1, "size"    # I

    .line 152
    invoke-virtual {p0}, Lcom/mediatek/mdml/DataQueue;->SpaceSize()I

    move-result v0

    if-le p1, v0, :cond_0

    .line 153
    invoke-virtual {p0}, Lcom/mediatek/mdml/DataQueue;->SpaceSize()I

    move-result p1

    .line 155
    :cond_0
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 156
    return-void
.end method

.method public Pop()V
    .locals 1

    .line 58
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 59
    return-void
.end method

.method public Pop(I)V
    .locals 4
    .param p1, "size"    # I

    .line 74
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    const/4 v1, 0x0

    if-gt v0, p1, :cond_0

    .line 75
    iput v1, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 76
    iput v1, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    goto :goto_0

    .line 78
    :cond_0
    iget v2, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    add-int/2addr v2, p1

    iput v2, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    .line 79
    sub-int/2addr v0, p1

    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 80
    if-eqz p1, :cond_1

    add-int/2addr v2, v0

    iget-object v0, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    array-length v0, v0

    shr-int/lit8 v0, v0, 0x1

    if-le v2, v0, :cond_2

    .line 81
    :cond_1
    iget-object v0, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    iget v2, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    iget v3, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    invoke-static {v0, v2, v0, v1, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 82
    iput v1, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    .line 85
    :cond_2
    :goto_0
    return-void
.end method

.method public Push([BII)Z
    .locals 7
    .param p1, "data"    # [B
    .param p2, "offset"    # I
    .param p3, "nLen"    # I

    .line 99
    const/4 v0, 0x0

    if-eqz p1, :cond_4

    if-gez p2, :cond_0

    goto :goto_0

    .line 102
    :cond_0
    const/4 v1, 0x1

    if-nez p3, :cond_1

    .line 103
    return v1

    .line 105
    :cond_1
    iget v2, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int v3, p3, v2

    iget-object v4, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    array-length v5, v4

    if-le v3, v5, :cond_2

    .line 106
    return v0

    .line 108
    :cond_2
    iget v3, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    add-int v5, p3, v3

    add-int/2addr v5, v2

    array-length v6, v4

    if-le v5, v6, :cond_3

    .line 109
    invoke-static {v4, v3, v4, v0, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 110
    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    .line 112
    :cond_3
    iget-object v0, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    iget v2, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    iget v3, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v2, v3

    invoke-static {p1, p2, v0, v2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 113
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v0, p3

    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 114
    return v1

    .line 100
    :cond_4
    :goto_0
    return v0
.end method

.method public PushArrayList(Ljava/util/ArrayList;)Z
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)Z"
        }
    .end annotation

    .line 119
    .local p1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 120
    return v0

    .line 122
    :cond_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_1

    .line 123
    return v2

    .line 125
    :cond_1
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    iget v3, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v1, v3

    iget-object v3, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    array-length v3, v3

    if-le v1, v3, :cond_2

    .line 126
    return v0

    .line 128
    :cond_2
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    iget v3, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    add-int/2addr v1, v3

    iget v4, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v1, v4

    iget-object v5, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    array-length v6, v5

    if-le v1, v6, :cond_3

    .line 129
    invoke-static {v5, v3, v5, v0, v4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 130
    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    .line 133
    :cond_3
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_4

    .line 134
    iget-object v1, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    iget v3, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    iget v4, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v3, v4

    add-int/2addr v3, v0

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Byte;

    invoke-virtual {v4}, Ljava/lang/Byte;->byteValue()B

    move-result v4

    aput-byte v4, v1, v3

    .line 133
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 136
    .end local v0    # "i":I
    :cond_4
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    .line 137
    return v2
.end method

.method public Size()I
    .locals 1

    .line 39
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    return v0
.end method

.method public SpaceSize()I
    .locals 2

    .line 45
    iget-object v0, p0, Lcom/mediatek/mdml/DataQueue;->m_data:[B

    array-length v0, v0

    iget v1, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    sub-int/2addr v0, v1

    iget v1, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    sub-int/2addr v0, v1

    return v0
.end method

.method public SpaceStartOffset()I
    .locals 2

    .line 144
    iget v0, p0, Lcom/mediatek/mdml/DataQueue;->m_unusedSize:I

    iget v1, p0, Lcom/mediatek/mdml/DataQueue;->m_size:I

    add-int/2addr v0, v1

    return v0
.end method
