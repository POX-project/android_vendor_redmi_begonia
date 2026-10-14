.class Lcom/mediatek/lbs/em2/ui/LbsGps$35;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->showClearLogConfirmDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 1414
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 1416
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->ClearNmeaLog()V

    return-void
.end method
