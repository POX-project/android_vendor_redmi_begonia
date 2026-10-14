.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;
.super Ljava/util/HashMap;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 183
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 185
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SUCCESS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 186
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCF_NOT_SUPPORT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 187
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "VERSION_NOT_MATCH"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRONG_BUFFER_SIZE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 189
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_PARAMETER"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 190
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "READ_NVRAM_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 191
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRITE_NVRAM_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 192
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "READ_OTA_FILE_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 193
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_SBP_TAG"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 194
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_FILE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 195
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_ATTR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 196
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "TAKE_READ_LOCK_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 197
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ALLOCATE_BUFFER_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 198
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ENCRYPTION_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 199
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "DECRYPTION_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 200
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CHECKSUM_ERROR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 201
    const/16 v0, 0x10

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRITE_DISK_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 202
    return-void
.end method
