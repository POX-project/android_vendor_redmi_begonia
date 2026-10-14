.class Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;
.super Ljava/lang/Object;
.source "OtaAirplaneModeActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "CheckBoxListener"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 392
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 395
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Enable listen the network status changed: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$1200(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;)V

    .line 396
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-virtual {v0, p2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->setupOtaRequest(Z)V

    .line 397
    return-void
.end method
