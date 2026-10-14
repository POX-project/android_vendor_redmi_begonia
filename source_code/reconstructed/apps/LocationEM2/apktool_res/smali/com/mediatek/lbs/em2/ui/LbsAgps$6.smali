.class Lcom/mediatek/lbs/em2/ui/LbsAgps$6;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/widget/PopupMenu$OnMenuItemClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->initPopupMenu()V
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

    .line 443
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onMenuItemClick(Landroid/view/MenuItem;)Z
    .locals 2

    .line 446
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v0

    .line 447
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getSuplProfiles()Ljava/util/ArrayList;

    move-result-object v0

    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;

    .line 448
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpAddr:Landroid/widget/TextView;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 449
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpPort:Landroid/widget/TextView;

    iget v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 450
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxTls:Landroid/widget/CheckBox;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 452
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->updateSuplProfile()V

    const/4 p0, 0x0

    return p0
.end method
