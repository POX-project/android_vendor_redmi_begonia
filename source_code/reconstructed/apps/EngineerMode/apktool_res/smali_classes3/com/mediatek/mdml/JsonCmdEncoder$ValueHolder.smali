.class public Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;
.super Ljava/lang/Object;
.source "JsonCmdEncoder.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/mdml/JsonCmdEncoder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "ValueHolder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/mdml/JsonCmdEncoder;

.field public value:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/mediatek/mdml/JsonCmdEncoder;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/mdml/JsonCmdEncoder;

    .line 58
    .local p0, "this":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<TT;>;"
    iput-object p1, p0, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->this$0:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
