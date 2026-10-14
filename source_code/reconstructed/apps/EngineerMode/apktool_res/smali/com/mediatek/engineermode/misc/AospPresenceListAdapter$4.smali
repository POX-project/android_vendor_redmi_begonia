.class Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;
.super Lcom/android/ims/internal/uce/presence/IPresenceListener$Stub;
.source "AospPresenceListAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->initUce()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    .line 184
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-direct {p0}, Lcom/android/ims/internal/uce/presence/IPresenceListener$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public capInfoReceived(Ljava/lang/String;[Lcom/android/ims/internal/uce/presence/PresTupleInfo;)V
    .locals 4
    .param p1, "contactUri"    # Ljava/lang/String;
    .param p2, "tupleInfo"    # [Lcom/android/ims/internal/uce/presence/PresTupleInfo;

    .line 232
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 233
    .local v0, "tupleInfoDetail":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p2

    if-ge v1, v2, :cond_0

    .line 234
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[i] Feature tag = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, p2, v1

    invoke-virtual {v3}, Lcom/android/ims/internal/uce/presence/PresTupleInfo;->getFeatureTag()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 235
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[i] Contact uri in tupleInfo = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, p2, v1

    .line 236
    invoke-virtual {v3}, Lcom/android/ims/internal/uce/presence/PresTupleInfo;->getContactUri()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 235
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 237
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[i] Timestamp = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, p2, v1

    invoke-virtual {v3}, Lcom/android/ims/internal/uce/presence/PresTupleInfo;->getTimestamp()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 233
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 239
    .end local v1    # "i":I
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SUCCESS!! [capInfoReceived] Contact uri = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 240
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 241
    .local v1, "info":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 242
    return-void
.end method

.method public cmdStatus(Lcom/android/ims/internal/uce/presence/PresCmdStatus;)V
    .locals 2
    .param p1, "cmdStatus"    # Lcom/android/ims/internal/uce/presence/PresCmdStatus;

    .line 212
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [CmdStatus] CmdId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresCmdStatus;->getCmdId()Lcom/android/ims/internal/uce/presence/PresCmdId;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/ims/internal/uce/presence/PresCmdId;->getCmdId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", StatusCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 213
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresCmdStatus;->getStatus()Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", UserData = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 214
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresCmdStatus;->getUserData()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", RequestId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 215
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresCmdStatus;->getRequestId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 216
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 217
    return-void
.end method

.method public getVersionCb(Ljava/lang/String;)V
    .locals 2
    .param p1, "version"    # Ljava/lang/String;

    .line 187
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [getVersionCb] Presence service version = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 188
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 189
    return-void
.end method

.method public listCapInfoReceived(Lcom/android/ims/internal/uce/presence/PresRlmiInfo;[Lcom/android/ims/internal/uce/presence/PresResInfo;)V
    .locals 8
    .param p1, "rlmiInfo"    # Lcom/android/ims/internal/uce/presence/PresRlmiInfo;
    .param p2, "resInfo"    # [Lcom/android/ims/internal/uce/presence/PresResInfo;

    .line 246
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 247
    .local v0, "resInfoDetail":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p2

    if-ge v1, v2, :cond_1

    .line 248
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] ResUri = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p2, v1

    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getResUri()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 249
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] DisPlayName = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p2, v1

    .line 250
    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getDisplayName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 249
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 251
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] ResInstanceState = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p2, v1

    .line 252
    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getInstanceInfo()Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;

    move-result-object v4

    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;->getResInstanceState()I

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 251
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 253
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] ResId = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p2, v1

    .line 254
    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getInstanceInfo()Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;

    move-result-object v4

    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;->getResId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 253
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 255
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] Reason = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p2, v1

    .line 256
    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getInstanceInfo()Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;

    move-result-object v4

    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;->getReason()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 255
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 257
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] Uri = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p2, v1

    .line 258
    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getInstanceInfo()Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;

    move-result-object v4

    invoke-virtual {v4}, Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;->getPresentityUri()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 257
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 259
    aget-object v2, p2, v1

    invoke-virtual {v2}, Lcom/android/ims/internal/uce/presence/PresResInfo;->getInstanceInfo()Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/android/ims/internal/uce/presence/PresResInstanceInfo;->getTupleInfo()[Lcom/android/ims/internal/uce/presence/PresTupleInfo;

    move-result-object v2

    .line 260
    .local v2, "tupleInfo":[Lcom/android/ims/internal/uce/presence/PresTupleInfo;
    const/4 v4, 0x0

    .local v4, "j":I
    :goto_1
    array-length v5, v2

    if-ge v4, v5, :cond_0

    .line 261
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "] Feature tag = "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v2, v4

    .line 262
    invoke-virtual {v7}, Lcom/android/ims/internal/uce/presence/PresTupleInfo;->getFeatureTag()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 261
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 263
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "] Contact uri in tupleInfo = "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v2, v4

    .line 264
    invoke-virtual {v7}, Lcom/android/ims/internal/uce/presence/PresTupleInfo;->getContactUri()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 263
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 265
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "] Timestamp = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v6, v2, v4

    .line 266
    invoke-virtual {v6}, Lcom/android/ims/internal/uce/presence/PresTupleInfo;->getTimestamp()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 265
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 260
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 247
    .end local v2    # "tupleInfo":[Lcom/android/ims/internal/uce/presence/PresTupleInfo;
    .end local v4    # "j":I
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 270
    .end local v1    # "i":I
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SUCCESS!! [listCapInfoReceived]  Rlmi uri = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getUri()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", Version = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 271
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getVersion()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", FullState = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 272
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->isFullState()Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", ListName = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 273
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getListName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", RequestId = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 274
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getRequestId()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", SubscrptionState = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getPresSubscriptionState()Lcom/android/ims/internal/uce/presence/PresSubscriptionState;

    move-result-object v2

    invoke-virtual {v2}, Lcom/android/ims/internal/uce/presence/PresSubscriptionState;->getPresSubscriptionStateValue()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", SubscriptionExpireTime = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 277
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getSubscriptionExpireTime()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", SubscriptionTerminatedReason = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 279
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresRlmiInfo;->getSubscriptionTerminatedReason()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 280
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 281
    .local v1, "info":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 282
    return-void
.end method

.method public publishTriggering(Lcom/android/ims/internal/uce/presence/PresPublishTriggerType;)V
    .locals 2
    .param p1, "type"    # Lcom/android/ims/internal/uce/presence/PresPublishTriggerType;

    .line 205
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [publishTriggering] Type = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 206
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresPublishTriggerType;->getPublishTrigeerType()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 207
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 208
    return-void
.end method

.method public serviceAvailable(Lcom/android/ims/internal/uce/common/StatusCode;)V
    .locals 2
    .param p1, "statusCode"    # Lcom/android/ims/internal/uce/common/StatusCode;

    .line 193
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [serviceAvailable] StatusCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 194
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 195
    return-void
.end method

.method public serviceUnAvailable(Lcom/android/ims/internal/uce/common/StatusCode;)V
    .locals 2
    .param p1, "statusCode"    # Lcom/android/ims/internal/uce/common/StatusCode;

    .line 199
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [serviceUnAvailable] StatusCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 200
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 201
    return-void
.end method

.method public sipResponseReceived(Lcom/android/ims/internal/uce/presence/PresSipResponse;)V
    .locals 2
    .param p1, "response"    # Lcom/android/ims/internal/uce/presence/PresSipResponse;

    .line 221
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [sipResponseReceived] CmdId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 222
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresSipResponse;->getCmdId()Lcom/android/ims/internal/uce/presence/PresCmdId;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/ims/internal/uce/presence/PresCmdId;->getCmdId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", RequestId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 223
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresSipResponse;->getRequestId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", SipResponseCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 224
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresSipResponse;->getSipResponseCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", RetryAfter time = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 225
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresSipResponse;->getRetryAfter()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", ReasonPharse = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 226
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/presence/PresSipResponse;->getReasonPhrase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 227
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 228
    return-void
.end method

.method public unpublishMessageSent()V
    .locals 2

    .line 286
    const-string v0, "SUCCESS!! [unpublishMessageSent] "

    .line 287
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 288
    return-void
.end method
