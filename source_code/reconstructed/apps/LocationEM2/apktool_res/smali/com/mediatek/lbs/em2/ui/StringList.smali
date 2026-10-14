.class public Lcom/mediatek/lbs/em2/ui/StringList;
.super Ljava/lang/Object;
.source "StringList.java"


# instance fields
.field private mNum:I

.field private mStrList:Ljava/util/Vector;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Vector<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(I)V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 7
    new-instance v0, Ljava/util/Vector;

    invoke-direct {v0}, Ljava/util/Vector;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    const/4 v0, 0x0

    .line 8
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mNum:I

    .line 15
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mNum:I

    return-void
.end method


# virtual methods
.method public add(Ljava/lang/String;)V
    .locals 2

    .line 19
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    invoke-virtual {v0}, Ljava/util/Vector;->size()I

    move-result v0

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mNum:I

    if-le v0, v1, :cond_0

    .line 20
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/Vector;->remove(I)Ljava/lang/Object;

    .line 21
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    invoke-virtual {p0, p1}, Ljava/util/Vector;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public clear()V
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    invoke-virtual {p0}, Ljava/util/Vector;->clear()V

    return-void
.end method

.method public get()Ljava/lang/String;
    .locals 3

    .line 25
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    .line 26
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    invoke-virtual {p0}, Ljava/util/Vector;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 27
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 36
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    .line 37
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/StringList;->mStrList:Ljava/util/Vector;

    invoke-virtual {p0}, Ljava/util/Vector;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 38
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    return-object v0
.end method
