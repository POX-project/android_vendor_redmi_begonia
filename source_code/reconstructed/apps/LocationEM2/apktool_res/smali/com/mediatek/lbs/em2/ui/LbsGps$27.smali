.class Lcom/mediatek/lbs/em2/ui/LbsGps$27;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->openDialogLatlng(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

.field final synthetic val$dialog:Landroid/app/Dialog;

.field final synthetic val$editText_lat:Landroid/widget/EditText;

.field final synthetic val$editText_lng:Landroid/widget/EditText;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/app/Dialog;)V
    .locals 0

    .line 1024
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->val$editText_lat:Landroid/widget/EditText;

    iput-object p3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->val$editText_lng:Landroid/widget/EditText;

    iput-object p4, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->val$dialog:Landroid/app/Dialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6

    const/4 p1, 0x1

    .line 1027
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->val$editText_lat:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v0

    .line 1028
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->val$editText_lng:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v2

    const-wide v4, 0x4056800000000000L    # 90.0

    cmpl-double v4, v0, v4

    if-gtz v4, :cond_1

    const-wide v4, 0x4066800000000000L    # 180.0

    cmpl-double v4, v2, v4

    if-gtz v4, :cond_1

    const-wide v4, -0x3fa9800000000000L    # -90.0

    cmpg-double v4, v0, v4

    if-ltz v4, :cond_1

    const-wide v4, -0x3f99800000000000L    # -180.0

    cmpg-double v4, v2, v4

    if-gez v4, :cond_0

    goto :goto_0

    .line 1032
    :cond_0
    sput-wide v0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    .line 1033
    sput-wide v2, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    .line 1034
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$6000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object v0

    const-string v1, "Reference Lat=%.06f Lng=%.06f"

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    sget-wide v4, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    .line 1035
    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    aput-object v4, v2, v3

    sget-wide v3, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v3

    aput-object v3, v2, p1

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    .line 1034
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 1030
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 1038
    :catch_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)V

    .line 1040
    :goto_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$27;->val$dialog:Landroid/app/Dialog;

    invoke-virtual {p0}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method
