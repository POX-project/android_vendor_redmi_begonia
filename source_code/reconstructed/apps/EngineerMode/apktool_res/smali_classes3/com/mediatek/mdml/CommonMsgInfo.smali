.class Lcom/mediatek/mdml/CommonMsgInfo;
.super Ljava/lang/Object;
.source "CommonMsgInfo.java"


# static fields
.field static final peerBufHeaderSizeName:Ljava/lang/String; = "MSG_PEER_HEADER_SIZE"


# instance fields
.field private currentMsgPeerBufferHeaderSize:I

.field private doesCurrentMsgHavePeerBufferHeader:Z

.field private idMsgMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Lcom/mediatek/mdml/BaseMsg;",
            ">;"
        }
    .end annotation
.end field

.field msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

.field private msgIdOffsetName:Ljava/lang/String;

.field private nameIdMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private parserLastID_internal:I

.field private parserLastNameID_internal:Ljava/lang/String;

.field private parserLastName_internal:Ljava/lang/String;

.field private final parserSplitList_1separator_internal:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final parserSplitList_2separator_internal:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private peerBufSizeName:Ljava/lang/String;

.field peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

.field simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

.field private simIdxOffsetName:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mediatek/mdml/InfoType;)V
    .locals 3
    .param p1, "t"    # Lcom/mediatek/mdml/InfoType;

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    new-instance v0, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v0}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 30
    new-instance v0, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v0}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 31
    new-instance v0, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v0}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 36
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->idMsgMap:Ljava/util/HashMap;

    .line 37
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->nameIdMap:Ljava/util/HashMap;

    .line 42
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_1separator_internal:Ljava/util/List;

    .line 43
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_2separator_internal:Ljava/util/List;

    .line 48
    sget-object v0, Lcom/mediatek/mdml/CommonMsgInfo$1;->$SwitchMap$com$mediatek$mdml$InfoType:[I

    invoke-virtual {p1}, Lcom/mediatek/mdml/InfoType;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 60
    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetName:Ljava/lang/String;

    .line 61
    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetName:Ljava/lang/String;

    .line 62
    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeName:Ljava/lang/String;

    goto :goto_0

    .line 55
    :cond_0
    const-string v0, "MSG_ID_OFFSET"

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetName:Ljava/lang/String;

    .line 56
    const-string v0, "SIM_IDX_OFFSET"

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetName:Ljava/lang/String;

    .line 57
    const-string v0, "MSG_PEERSIZE_OFFSET"

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeName:Ljava/lang/String;

    .line 58
    goto :goto_0

    .line 50
    :cond_1
    const-string v0, "OTA_TRACE_ID_OFFSET"

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetName:Ljava/lang/String;

    .line 51
    const-string v0, "OTA_SIM_IDX_OFFSET"

    iput-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetName:Ljava/lang/String;

    .line 52
    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeName:Ljava/lang/String;

    .line 53
    nop

    .line 65
    :goto_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->doesCurrentMsgHavePeerBufferHeader:Z

    .line 66
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastID_internal:I

    .line 67
    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastNameID_internal:Ljava/lang/String;

    .line 68
    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastName_internal:Ljava/lang/String;

    .line 69
    return-void
.end method

.method private fastSplit_1separator(Ljava/lang/String;C)Ljava/util/List;
    .locals 5
    .param p1, "text"    # Ljava/lang/String;
    .param p2, "separator"    # C
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "C)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 105
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_1separator_internal:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 107
    if-eqz p1, :cond_4

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_4

    .line 109
    const/4 v0, 0x0

    .line 110
    .local v0, "index1":I
    invoke-virtual {p1, p2}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    .line 111
    .local v1, "index2":I
    :goto_0
    const/16 v2, 0x20

    if-ltz v1, :cond_2

    .line 113
    move v3, v1

    .line 114
    .local v3, "indexEnd":I
    invoke-virtual {p1, v0}, Ljava/lang/String;->charAt(I)C

    move-result v4

    if-ne v4, v2, :cond_0

    .line 115
    add-int/lit8 v0, v0, 0x1

    .line 117
    :cond_0
    add-int/lit8 v4, v1, -0x1

    invoke-virtual {p1, v4}, Ljava/lang/String;->charAt(I)C

    move-result v4

    if-ne v4, v2, :cond_1

    .line 118
    add-int/lit8 v3, v3, -0x1

    .line 120
    :cond_1
    invoke-virtual {p1, v0, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    .line 121
    .local v2, "token":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_1separator_internal:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 122
    add-int/lit8 v0, v1, 0x1

    .line 123
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->indexOf(II)I

    move-result v1

    .line 124
    .end local v2    # "token":Ljava/lang/String;
    .end local v3    # "indexEnd":I
    goto :goto_0

    .line 126
    :cond_2
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v3

    add-int/lit8 v3, v3, -0x1

    if-gt v0, v3, :cond_4

    .line 128
    invoke-virtual {p1, v0}, Ljava/lang/String;->charAt(I)C

    move-result v3

    if-ne v3, v2, :cond_3

    .line 129
    add-int/lit8 v0, v0, 0x1

    .line 131
    :cond_3
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    if-gt v0, v2, :cond_4

    .line 132
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    .line 133
    .restart local v2    # "token":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_1separator_internal:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 138
    .end local v0    # "index1":I
    .end local v1    # "index2":I
    .end local v2    # "token":Ljava/lang/String;
    :cond_4
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_1separator_internal:Ljava/util/List;

    return-object v0
.end method

.method private fastSplit_2separator(Ljava/lang/String;CC)Ljava/util/List;
    .locals 5
    .param p1, "text"    # Ljava/lang/String;
    .param p2, "separator1"    # C
    .param p3, "separator2"    # C
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "CC)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 143
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_2separator_internal:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 145
    if-eqz p1, :cond_4

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_4

    .line 147
    const/4 v0, 0x0

    .line 148
    .local v0, "index1":I
    invoke-virtual {p1, p2}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    .line 149
    .local v1, "index2":I
    invoke-virtual {p1, p3}, Ljava/lang/String;->indexOf(I)I

    move-result v2

    .line 150
    .local v2, "index3":I
    if-le v1, v2, :cond_0

    move v1, v2

    .line 151
    :cond_0
    :goto_0
    if-ltz v1, :cond_3

    .line 153
    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    .line 154
    .local v3, "token":Ljava/lang/String;
    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    .line 155
    iget-object v4, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_2separator_internal:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 156
    add-int/lit8 v0, v1, 0x1

    .line 157
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->indexOf(II)I

    move-result v1

    .line 158
    invoke-virtual {p1, p3, v0}, Ljava/lang/String;->indexOf(II)I

    move-result v2

    .line 159
    const/4 v4, -0x1

    if-eq v1, v4, :cond_1

    if-le v1, v2, :cond_2

    if-eq v2, v4, :cond_2

    :cond_1
    move v1, v2

    .line 160
    .end local v3    # "token":Ljava/lang/String;
    :cond_2
    goto :goto_0

    .line 162
    :cond_3
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v3

    add-int/lit8 v3, v3, -0x1

    if-ge v0, v3, :cond_4

    .line 164
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 165
    .restart local v3    # "token":Ljava/lang/String;
    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    .line 166
    iget-object v4, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_2separator_internal:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 170
    .end local v0    # "index1":I
    .end local v1    # "index2":I
    .end local v2    # "index3":I
    .end local v3    # "token":Ljava/lang/String;
    :cond_4
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserSplitList_2separator_internal:Ljava/util/List;

    return-object v0
.end method


# virtual methods
.method clear()V
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-virtual {v0}, Lcom/mediatek/mdml/OffsetAndSize;->clear()V

    .line 97
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-virtual {v0}, Lcom/mediatek/mdml/OffsetAndSize;->clear()V

    .line 98
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-virtual {v0}, Lcom/mediatek/mdml/OffsetAndSize;->clear()V

    .line 99
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->idMsgMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 100
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->nameIdMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 101
    return-void
.end method

.method getBaseMsg(Ljava/lang/Integer;)Lcom/mediatek/mdml/BaseMsg;
    .locals 2
    .param p1, "id"    # Ljava/lang/Integer;

    .line 232
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->idMsgMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/BaseMsg;

    .line 233
    .local v0, "msg":Lcom/mediatek/mdml/BaseMsg;
    if-nez v0, :cond_0

    .line 234
    const/4 v1, 0x0

    return-object v1

    .line 237
    :cond_0
    return-object v0
.end method

.method getBaseMsg(Ljava/lang/String;)Lcom/mediatek/mdml/BaseMsg;
    .locals 2
    .param p1, "name"    # Ljava/lang/String;

    .line 241
    invoke-virtual {p0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    .line 242
    .local v0, "id":Ljava/lang/Integer;
    if-nez v0, :cond_0

    .line 243
    const/4 v1, 0x0

    return-object v1

    .line 246
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mediatek/mdml/CommonMsgInfo;->getBaseMsg(Ljava/lang/Integer;)Lcom/mediatek/mdml/BaseMsg;

    move-result-object v1

    return-object v1
.end method

.method public getMsgID(Ljava/lang/String;)Ljava/lang/Integer;
    .locals 1
    .param p1, "msgName"    # Ljava/lang/String;

    .line 79
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->nameIdMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    return-object v0
.end method

.method public getMsgList()[Ljava/lang/String;
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->nameIdMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    .line 73
    .local v0, "mapKeySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    .line 74
    .local v1, "keyArray":[Ljava/lang/String;
    invoke-static {v1}, Ljava/util/Arrays;->sort([Ljava/lang/Object;)V

    .line 75
    return-object v1
.end method

.method public getMsgName(Ljava/lang/Integer;)Ljava/lang/String;
    .locals 2
    .param p1, "id"    # Ljava/lang/Integer;

    .line 83
    iget-object v0, p0, Lcom/mediatek/mdml/CommonMsgInfo;->idMsgMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/BaseMsg;

    .line 84
    .local v0, "m":Lcom/mediatek/mdml/BaseMsg;
    if-eqz v0, :cond_0

    .line 85
    iget-object v1, v0, Lcom/mediatek/mdml/BaseMsg;->msgName:Ljava/lang/String;

    return-object v1

    .line 87
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method readLine(Ljava/lang/String;)Z
    .locals 9
    .param p1, "line"    # Ljava/lang/String;

    .line 174
    const/16 v0, 0x2c

    invoke-direct {p0, p1, v0}, Lcom/mediatek/mdml/CommonMsgInfo;->fastSplit_1separator(Ljava/lang/String;C)Ljava/util/List;

    move-result-object v0

    .line 175
    .local v0, "s":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    if-gtz v1, :cond_0

    .line 176
    return v2

    .line 179
    :cond_0
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetName:Ljava/lang/String;

    const/4 v3, 0x2

    const/4 v4, 0x3

    const/4 v5, 0x1

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_1

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetName:Ljava/lang/String;

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-ne v1, v4, :cond_1

    .line 180
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 181
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    goto/16 :goto_2

    .line 182
    :cond_1
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetName:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_2

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetName:Ljava/lang/String;

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-ne v1, v4, :cond_2

    .line 183
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 184
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    goto/16 :goto_2

    .line 185
    :cond_2
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeName:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_3

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeName:Ljava/lang/String;

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-ne v1, v4, :cond_3

    .line 186
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 187
    iget-object v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    goto/16 :goto_2

    .line 188
    :cond_3
    const-string v1, "MSG_PEER_HEADER_SIZE"

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v6

    if-lez v6, :cond_4

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-virtual {v6, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-ne v1, v3, :cond_4

    .line 189
    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->currentMsgPeerBufferHeaderSize:I

    goto/16 :goto_2

    .line 190
    :cond_4
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lt v1, v4, :cond_8

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const/4 v6, 0x4

    if-gt v1, v6, :cond_8

    .line 193
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastNameID_internal:Ljava/lang/String;

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 195
    iget v1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastID_internal:I

    .local v1, "id":I
    goto :goto_0

    .line 198
    .end local v1    # "id":I
    :cond_5
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/16 v6, 0x28

    const/16 v7, 0x29

    invoke-direct {p0, v1, v6, v7}, Lcom/mediatek/mdml/CommonMsgInfo;->fastSplit_2separator(Ljava/lang/String;CC)Ljava/util/List;

    move-result-object v1

    .line 199
    .local v1, "m":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    iput-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastNameID_internal:Ljava/lang/String;

    .line 200
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    iput v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastID_internal:I

    .line 201
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastName_internal:Ljava/lang/String;

    .line 202
    iget v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastID_internal:I

    move v1, v2

    .line 204
    .local v1, "id":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/mdml/CommonMsgInfo;->idMsgMap:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/mdml/BaseMsg;

    .line 205
    .local v2, "msg":Lcom/mediatek/mdml/BaseMsg;
    if-nez v2, :cond_6

    .line 206
    new-instance v6, Lcom/mediatek/mdml/BaseMsg;

    invoke-direct {v6}, Lcom/mediatek/mdml/BaseMsg;-><init>()V

    move-object v2, v6

    .line 207
    iget-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->parserLastName_internal:Ljava/lang/String;

    iput-object v6, v2, Lcom/mediatek/mdml/BaseMsg;->msgName:Ljava/lang/String;

    .line 208
    iget-object v6, p0, Lcom/mediatek/mdml/CommonMsgInfo;->nameIdMap:Ljava/util/HashMap;

    iget-object v7, v2, Lcom/mediatek/mdml/BaseMsg;->msgName:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v6, v7, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 211
    :cond_6
    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 212
    .local v6, "fieldName":Ljava/lang/String;
    new-instance v7, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v7}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    .line 213
    .local v7, "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, v7, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 214
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ne v3, v4, :cond_7

    .line 215
    const/4 v3, -0x1

    iput v3, v7, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    goto :goto_1

    .line 217
    :cond_7
    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, v7, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    .line 220
    :goto_1
    iget-object v3, v2, Lcom/mediatek/mdml/BaseMsg;->fieldMap:Ljava/util/HashMap;

    invoke-virtual {v3, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 221
    iget-boolean v3, p0, Lcom/mediatek/mdml/CommonMsgInfo;->doesCurrentMsgHavePeerBufferHeader:Z

    iput-boolean v3, v2, Lcom/mediatek/mdml/BaseMsg;->hasPeerBufferHeader:Z

    .line 222
    iget v3, p0, Lcom/mediatek/mdml/CommonMsgInfo;->currentMsgPeerBufferHeaderSize:I

    iput v3, v2, Lcom/mediatek/mdml/BaseMsg;->peerBufferHeaderSize:I

    .line 223
    iget-object v3, p0, Lcom/mediatek/mdml/CommonMsgInfo;->idMsgMap:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 224
    .end local v1    # "id":I
    .end local v2    # "msg":Lcom/mediatek/mdml/BaseMsg;
    .end local v6    # "fieldName":Ljava/lang/String;
    .end local v7    # "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    nop

    .line 228
    :goto_2
    return v5

    .line 225
    :cond_8
    return v2
.end method

.method public setMsgHasPeerBufferHeader(Z)V
    .locals 0
    .param p1, "hasHeader"    # Z

    .line 92
    iput-boolean p1, p0, Lcom/mediatek/mdml/CommonMsgInfo;->doesCurrentMsgHavePeerBufferHeader:Z

    .line 93
    return-void
.end method
