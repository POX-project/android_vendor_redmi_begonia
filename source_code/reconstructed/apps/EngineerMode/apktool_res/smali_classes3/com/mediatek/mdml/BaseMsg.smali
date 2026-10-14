.class Lcom/mediatek/mdml/BaseMsg;
.super Ljava/lang/Object;
.source "CommonMsgInfo.java"


# instance fields
.field fieldMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/mdml/OffsetAndSize;",
            ">;"
        }
    .end annotation
.end field

.field hasPeerBufferHeader:Z

.field msgName:Ljava/lang/String;

.field peerBufferHeaderSize:I


# direct methods
.method constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/BaseMsg;->fieldMap:Ljava/util/HashMap;

    return-void
.end method
