.class Lcom/mediatek/ygps/YgpsActivity$9;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/location/OnNmeaMessageListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 1043
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$9;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onNmeaMessage(Ljava/lang/String;J)V
    .locals 0

    .line 1046
    iget-object p2, p0, Lcom/mediatek/ygps/YgpsActivity$9;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p2}, Lcom/mediatek/ygps/YgpsActivity;->access$2400(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 1047
    iget-object p2, p0, Lcom/mediatek/ygps/YgpsActivity$9;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p2}, Lcom/mediatek/ygps/YgpsActivity;->access$2500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1049
    :cond_0
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$9;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$2600(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/NmeaParser;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->parse(Ljava/lang/String;)V

    return-void
.end method
