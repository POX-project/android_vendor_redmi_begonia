.class Lcom/mediatek/ygps/NmeaParser$1;
.super Ljava/util/HashMap;
.source "NmeaParser.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/NmeaParser;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/NmeaParser;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/NmeaParser;)V
    .locals 1

    .line 36
    iput-object p1, p0, Lcom/mediatek/ygps/NmeaParser$1;->this$0:Lcom/mediatek/ygps/NmeaParser;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    const-string p1, "$GB"

    const-string v0, "$BD"

    .line 38
    invoke-virtual {p0, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "$GQ"

    const-string v0, "$QZ"

    .line 39
    invoke-virtual {p0, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "$GI"

    const-string v0, "$IR"

    .line 40
    invoke-virtual {p0, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
