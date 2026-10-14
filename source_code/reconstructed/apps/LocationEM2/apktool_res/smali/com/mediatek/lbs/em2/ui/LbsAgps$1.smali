.class Lcom/mediatek/lbs/em2/ui/LbsAgps$1;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->showConfirmDialog(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
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

    .line 154
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 157
    :try_start_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$100(Lcom/mediatek/lbs/em2/ui/LbsAgps;)Landroid/content/pm/PackageManager;

    move-result-object p1

    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    .line 158
    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$000(Lcom/mediatek/lbs/em2/ui/LbsAgps;)Ljava/lang/String;

    move-result-object p2

    .line 157
    invoke-virtual {p1, p2}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    .line 159
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p2, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 161
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "Failed to launch package: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$000(Lcom/mediatek/lbs/em2/ui/LbsAgps;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "LocationEM"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 162
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$000(Lcom/mediatek/lbs/em2/ui/LbsAgps;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$200(Lcom/mediatek/lbs/em2/ui/LbsAgps;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
