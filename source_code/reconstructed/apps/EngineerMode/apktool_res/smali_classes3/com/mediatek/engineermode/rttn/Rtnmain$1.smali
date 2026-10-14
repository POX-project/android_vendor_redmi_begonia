.class Lcom/mediatek/engineermode/rttn/Rtnmain$1;
.super Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 209
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$1;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onSubscriptionsChanged()V
    .locals 4

    .line 212
    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultDataSubscriptionId()I

    move-result v0

    .line 213
    .local v0, "subId":I
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$1;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const-string v2, "phone"

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/telephony/TelephonyManager;

    iput-object v2, v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->tm:Landroid/telephony/TelephonyManager;

    .line 214
    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getSlotIndex(I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    .line 215
    sget v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    if-gez v1, :cond_0

    .line 216
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "sim_id <0 close main activity"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 217
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$1;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$1;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x7f0a00a9

    .line 218
    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    .line 217
    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 218
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 219
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$1;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->finish()V

    .line 221
    :cond_0
    return-void
.end method
