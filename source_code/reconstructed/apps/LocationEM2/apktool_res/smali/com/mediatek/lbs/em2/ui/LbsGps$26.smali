.class Lcom/mediatek/lbs/em2/ui/LbsGps$26;
.super Landroid/os/Handler;
.source "LbsGps.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;
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

    .line 871
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 9

    .line 873
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "\n"

    packed-switch v0, :pswitch_data_0

    .line 939
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-string p1, "WARNING: unknown handle event recv!!"

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 912
    :pswitch_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Landroid/location/GnssStatus;

    .line 913
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    .line 914
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5608(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    .line 917
    :goto_0
    invoke-virtual {p1}, Landroid/location/GnssStatus;->getSatelliteCount()I

    move-result v5

    const/4 v6, 0x1

    if-ge v3, v5, :cond_2

    .line 918
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "Id="

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->getConstellationType(I)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->map2SvTypes(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 919
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->getCarrierFrequencyHz(I)F

    move-result v7

    invoke-static {v7}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getFrequencyBand(F)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 920
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->getSvid(I)I

    move-result v0

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " SNR="

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v0, v6, [Ljava/lang/Object;

    .line 921
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->getCn0DbHz(I)F

    move-result v7

    invoke-static {v7}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v7

    aput-object v7, v0, v2

    const-string v7, "%.01f"

    invoke-static {v7, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " AZI="

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v0, v6, [Ljava/lang/Object;

    .line 922
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->getAzimuthDegrees(I)F

    move-result v8

    invoke-static {v8}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v8

    aput-object v8, v0, v2

    invoke-static {v7, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " ELE="

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v0, v6, [Ljava/lang/Object;

    .line 923
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->getElevationDegrees(I)F

    move-result v6

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v0, v2

    invoke-static {v7, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " UInFix="

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 924
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->usedInFix(I)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "1"

    goto :goto_1

    :cond_0
    const-string v0, "0"

    :goto_1
    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 925
    invoke-virtual {p1, v3}, Landroid/location/GnssStatus;->usedInFix(I)Z

    move-result v5

    if-eqz v5, :cond_1

    add-int/lit8 v4, v4, 0x1

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    .line 929
    :cond_2
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object v2

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Satellite Status Update Count="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v7}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "\nSatellite Num="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 931
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3900(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result v0

    const/4 v1, -0x1

    if-le v0, v1, :cond_3

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z

    move-result v0

    if-nez v0, :cond_3

    if-lez v4, :cond_3

    .line 932
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onSatelliteStatusChanged for first svUsedInFix count = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    .line 933
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5900(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/location/GnssStatus;)V

    .line 934
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0, v6}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5802(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z

    goto/16 :goto_2

    .line 898
    :pswitch_1
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    move-object v6, p1

    check-cast v6, Ljava/lang/String;

    .line 899
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object p1

    invoke-virtual {p1, v6}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 900
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5108(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    .line 901
    invoke-static {}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getNMEAParser()Lcom/mediatek/lbs/em2/ui/NmeaParser;

    move-result-object p1

    .line 902
    invoke-virtual {p1, v6}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parse(Ljava/lang/String;)V

    .line 903
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "NMEA Count="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5100(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 904
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5300(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5400(Lcom/mediatek/lbs/em2/ui/LbsGps;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 905
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Ljava/lang/String;

    move-result-object v4

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "NMEA_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5400(Lcom/mediatek/lbs/em2/ui/LbsGps;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".txt"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v7, 0x1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    .line 906
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1400(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z

    move-result v8

    const-string v3, "nmea"

    .line 905
    invoke-virtual/range {v2 .. v8}, Lcom/mediatek/lbs/em2/ui/LbsGps;->write2File(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Z

    goto :goto_2

    .line 894
    :pswitch_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4900(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_2

    .line 890
    :pswitch_3
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$800(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    .line 891
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_2

    .line 887
    :pswitch_4
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$400(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_2

    .line 884
    :pswitch_5
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$300(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_2

    .line 881
    :pswitch_6
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Current loop="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 878
    :pswitch_7
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4700(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_2

    .line 875
    :pswitch_8
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4600(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Timer="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_3
    :goto_2
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
