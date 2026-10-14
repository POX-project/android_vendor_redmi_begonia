.class Lcom/mediatek/ygps/YgpsActivity$AutoTestThread$1;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;)V
    .locals 0

    .line 878
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread$1;->this$1:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 0

    .line 880
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread$1;->this$1:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$2300(Lcom/mediatek/ygps/YgpsActivity;)V

    return-void
.end method
