.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;
.super Ljava/util/HashMap;
.source "McfConfigActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 148
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 149
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SUCCESS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 150
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCF_NOT_SUPPORT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 151
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "VERSION_NOT_MATCH"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 152
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRONG_BUFFER_SIZE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 153
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_PARAMETER"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 154
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "READ_NVRAM_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 155
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRITE_NVRAM_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 156
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "READ_OTA_FILE_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 157
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_SBP_TAG"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 158
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_FILE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 159
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_ATTR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 160
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "TAKE_READ_LOCK_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 161
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ALLOCATE_BUFFER_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 162
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ENCRYPTION_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 163
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "DECRYPTION_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 164
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CHECKSUM_ERROR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 165
    const/16 v0, 0x10

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRITE_DISK_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 166
    const/16 v0, 0x11

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "READ_INI_FILE_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 167
    const/16 v0, 0x12

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID_INI_ITEM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 168
    const/16 v0, 0x13

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "WRITE_INI_FILE_FAIL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 169
    const/16 v0, 0x14

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "FILE_NOT_CHANGE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 170
    const/16 v0, 0x15

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MAX"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 171
    return-void
.end method
