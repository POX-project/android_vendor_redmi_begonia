.class Lcom/mediatek/lbs/em2/ui/LbsAgps$126;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->showLogConfirmDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V
    .locals 0

    .line 2690
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$126;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 2692
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$126;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    return-void
.end method
