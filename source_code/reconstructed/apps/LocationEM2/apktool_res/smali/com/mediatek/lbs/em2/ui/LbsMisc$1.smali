.class Lcom/mediatek/lbs/em2/ui/LbsMisc$1;
.super Ljava/lang/Object;
.source "LbsMisc.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 152
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$000(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/Spinner;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Spinner;->getSelectedItemId()J

    move-result-wide p1

    long-to-int p1, p1

    .line 153
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$100(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;

    move-result-object p2

    iget-object p3, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    iget-object p3, p3, Lcom/mediatek/lbs/em2/ui/LbsMisc;->SERVER_IP:[Ljava/lang/String;

    aget-object p3, p3, p1

    invoke-virtual {p2, p3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 154
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$200(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;

    move-result-object p2

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->SERVER_PORT:[Ljava/lang/String;

    aget-object p0, p0, p1

    invoke-virtual {p2, p0}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    return-void
.end method
