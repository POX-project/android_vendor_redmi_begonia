.class Lcom/mediatek/lbs/em2/ui/LbsGps$31;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->openBlackSvSelectDialog(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

.field final synthetic val$dialog:Landroid/app/Dialog;

.field final synthetic val$svType:I


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;ILandroid/app/Dialog;)V
    .locals 0

    .line 1330
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    iput p2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->val$svType:I

    iput-object p3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->val$dialog:Landroid/app/Dialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 1332
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->val$svType:I

    invoke-static {p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$6200(Lcom/mediatek/lbs/em2/ui/LbsGps;I)V

    .line 1333
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->val$dialog:Landroid/app/Dialog;

    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1334
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$31;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$2200(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    return-void
.end method
