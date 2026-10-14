.class Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread$1;
.super Ljava/lang/Thread;
.source "LbsMisc.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 298
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread$1;->this$1:Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 0

    .line 300
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread$1;->this$1:Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->access$1300(Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;)V

    return-void
.end method
