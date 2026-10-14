.class public final Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;
.super Ljava/lang/Object;
.source "IEmd.java"

# interfaces
.implements Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Proxy"
.end annotation


# instance fields
.field private mRemote:Landroid/os/IHwBinder;


# direct methods
.method public constructor <init>(Landroid/os/IHwBinder;)V
    .locals 1
    .param p1, "remote"    # Landroid/os/IHwBinder;

    .line 227
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 228
    invoke-static {p1}, Ljava/util/Objects;->requireNonNull(Ljava/lang/Object;)Ljava/lang/Object;

    move-object v0, p1

    check-cast v0, Landroid/os/IHwBinder;

    iput-object v0, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    .line 229
    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IHwBinder;
    .locals 1

    .line 233
    iget-object v0, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    return-object v0
.end method

.method public btDoTest(IIIIIII)I
    .locals 5
    .param p1, "kind"    # I
    .param p2, "pattern"    # I
    .param p3, "channel"    # I
    .param p4, "pocketType"    # I
    .param p5, "pocketTypeLen"    # I
    .param p6, "freq"    # I
    .param p7, "power"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 614
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 615
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 616
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 617
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 618
    invoke-virtual {v0, p3}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 619
    invoke-virtual {v0, p4}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 620
    invoke-virtual {v0, p5}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 621
    invoke-virtual {v0, p6}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 622
    invoke-virtual {v0, p7}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 624
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 626
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x13

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 627
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 628
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 630
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 631
    .local v2, "_hidl_out_result":I
    nop

    .line 633
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 631
    return v2

    .line 633
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 634
    throw v2
.end method

.method public btEndNoSigRxTest()Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 683
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 684
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 686
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 688
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x16

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 689
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 690
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 692
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32Vector()Ljava/util/ArrayList;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 693
    .local v2, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    nop

    .line 695
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 693
    return-object v2

    .line 695
    .end local v2    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 696
    throw v2
.end method

.method public btHciCommandRun(Ljava/util/ArrayList;)Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 640
    .local p1, "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 641
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 642
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 644
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 646
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x14

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 647
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 648
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 650
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 651
    .local v2, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    nop

    .line 653
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 651
    return-object v2

    .line 653
    .end local v2    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 654
    throw v2
.end method

.method public btInit()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 576
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 577
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 579
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 581
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x11

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 582
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 583
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 585
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 586
    .local v2, "_hidl_out_result":I
    nop

    .line 588
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 586
    return v2

    .line 588
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 589
    throw v2
.end method

.method public btIsBLEEnhancedSupport()Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 557
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 558
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 560
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 562
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x10

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 563
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 564
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 566
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 567
    .local v2, "_hidl_out_success":Z
    nop

    .line 569
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 567
    return v2

    .line 569
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 570
    throw v2
.end method

.method public btIsBLESupport()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 538
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 539
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 541
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 543
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0xf

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 544
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 545
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 547
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 548
    .local v2, "_hidl_out_result":I
    nop

    .line 550
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 548
    return v2

    .line 550
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 551
    throw v2
.end method

.method public btIsComboSupport()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 702
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 703
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 705
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 707
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x17

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 708
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 709
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 711
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 712
    .local v2, "_hidl_out_result":I
    nop

    .line 714
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 712
    return v2

    .line 714
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 715
    throw v2
.end method

.method public btIsEmSupport()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1183
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1184
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.2::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1186
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1188
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x2f

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1189
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1190
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1192
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1193
    .local v2, "_hidl_out_result":I
    nop

    .line 1195
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1193
    return v2

    .line 1195
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1196
    throw v2
.end method

.method public btPollingStart()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 721
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 722
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 724
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 726
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x18

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 727
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 728
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 730
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 731
    .local v2, "_hidl_out_result":I
    nop

    .line 733
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 731
    return v2

    .line 733
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 734
    throw v2
.end method

.method public btPollingStop()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 740
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 741
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 743
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 745
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x19

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 746
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 747
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 749
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 750
    .local v2, "_hidl_out_result":I
    nop

    .line 752
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 750
    return v2

    .line 752
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 753
    throw v2
.end method

.method public btStartNoSigRxTest(IIII)Z
    .locals 5
    .param p1, "pattern"    # I
    .param p2, "pockettype"    # I
    .param p3, "freq"    # I
    .param p4, "address"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 660
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 661
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 662
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 663
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 664
    invoke-virtual {v0, p3}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 665
    invoke-virtual {v0, p4}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 667
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 669
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x15

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 670
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 671
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 673
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 674
    .local v2, "_hidl_out_success":Z
    nop

    .line 676
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 674
    return v2

    .line 676
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 677
    throw v2
.end method

.method public btStartRelayer(II)I
    .locals 5
    .param p1, "port"    # I
    .param p2, "speed"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 498
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 499
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 500
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 501
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 503
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 505
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0xd

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 506
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 507
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 509
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 510
    .local v2, "_hidl_out_result":I
    nop

    .line 512
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 510
    return v2

    .line 512
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 513
    throw v2
.end method

.method public btStopRelayer()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 519
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 520
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 522
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 524
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0xe

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 525
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 526
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 528
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 529
    .local v2, "_hidl_out_result":I
    nop

    .line 531
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 529
    return v2

    .line 531
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 532
    throw v2
.end method

.method public btUninit()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 595
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 596
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 598
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 600
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x12

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 601
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 602
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 604
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 605
    .local v2, "_hidl_out_result":I
    nop

    .line 607
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 605
    return v2

    .line 607
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 608
    throw v2
.end method

.method public clearItemsforRsc()Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1120
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1121
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1123
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1125
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x2c

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1126
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1127
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1129
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1130
    .local v2, "_hidl_out_success":Z
    nop

    .line 1132
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1130
    return v2

    .line 1132
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1133
    throw v2
.end method

.method public connect()Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1299
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1300
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1302
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1304
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x35

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1305
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1306
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1308
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1309
    .local v2, "_hidl_out_success":Z
    nop

    .line 1311
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1309
    return v2

    .line 1311
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1312
    throw v2
.end method

.method public debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V
    .locals 5
    .param p1, "fd"    # Landroid/os/NativeHandle;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/NativeHandle;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1371
    .local p2, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1372
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1373
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeNativeHandle(Landroid/os/NativeHandle;)V

    .line 1374
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeStringVector(Ljava/util/ArrayList;)V

    .line 1376
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1378
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf444247

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1379
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1380
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1382
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1383
    nop

    .line 1384
    return-void

    .line 1382
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1383
    throw v2
.end method

.method public disconnect()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1318
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1319
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1321
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1323
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x36

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1324
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1325
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1327
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1328
    nop

    .line 1329
    return-void

    .line 1327
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1328
    throw v2
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 1
    .param p1, "other"    # Ljava/lang/Object;

    .line 248
    invoke-static {p0, p1}, Landroid/os/HidlSupport;->interfacesEqual(Landroid/os/IHwInterface;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public genMdLogFilter(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5
    .param p1, "keyword"    # Ljava/lang/String;
    .param p2, "filepath"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 939
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 940
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 941
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 942
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 944
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 946
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x23

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 947
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 948
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 950
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 951
    .local v2, "_hidl_out_success":Z
    nop

    .line 953
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 951
    return v2

    .line 953
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 954
    throw v2
.end method

.method public getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1483
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1484
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1486
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1488
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf524546

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1489
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1490
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1492
    new-instance v2, Landroid/hidl/base/V1_0/DebugInfo;

    invoke-direct {v2}, Landroid/hidl/base/V1_0/DebugInfo;-><init>()V

    .line 1493
    .local v2, "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-virtual {v2, v1}, Landroid/hidl/base/V1_0/DebugInfo;->readFromParcel(Landroid/os/HwParcel;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1494
    nop

    .line 1496
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1494
    return-object v2

    .line 1496
    .end local v2    # "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1497
    throw v2
.end method

.method public getFilePathListWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .param p2, "callback"    # Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1139
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1140
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1141
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1142
    if-nez p2, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {p2}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asBinder()Landroid/os/IHwBinder;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeStrongBinder(Landroid/os/IHwBinder;)V

    .line 1144
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1146
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x2d

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1147
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1148
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1150
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1151
    .local v2, "_hidl_out_success":Z
    nop

    .line 1153
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1151
    return v2

    .line 1153
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1154
    throw v2
.end method

.method public getHashChain()Ljava/util/ArrayList;
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "[B>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1408
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1409
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1411
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1413
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf485348

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1414
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1415
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1417
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    move-object v10, v2

    .line 1419
    .local v10, "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    const-wide/16 v2, 0x10

    invoke-virtual {v1, v2, v3}, Landroid/os/HwParcel;->readBuffer(J)Landroid/os/HwBlob;

    move-result-object v2

    move-object v11, v2

    .line 1421
    .local v11, "_hidl_blob":Landroid/os/HwBlob;
    const-wide/16 v2, 0x8

    invoke-virtual {v11, v2, v3}, Landroid/os/HwBlob;->getInt32(J)I

    move-result v2

    move v12, v2

    .line 1422
    .local v12, "_hidl_vec_size":I
    mul-int/lit8 v2, v12, 0x20

    int-to-long v3, v2

    .line 1423
    invoke-virtual {v11}, Landroid/os/HwBlob;->handle()J

    move-result-wide v5

    const-wide/16 v7, 0x0

    const/4 v9, 0x1

    .line 1422
    move-object v2, v1

    invoke-virtual/range {v2 .. v9}, Landroid/os/HwParcel;->readEmbeddedBuffer(JJJZ)Landroid/os/HwBlob;

    move-result-object v2

    .line 1426
    .local v2, "childBlob":Landroid/os/HwBlob;
    invoke-virtual {v10}, Ljava/util/ArrayList;->clear()V

    .line 1427
    const/4 v3, 0x0

    .local v3, "_hidl_index_0":I
    :goto_0
    if-ge v3, v12, :cond_0

    .line 1428
    const/16 v4, 0x20

    new-array v5, v4, [B

    .line 1430
    .local v5, "_hidl_vec_element":[B
    mul-int/lit8 v6, v3, 0x20

    int-to-long v6, v6

    .line 1431
    .local v6, "_hidl_array_offset_1":J
    invoke-virtual {v2, v6, v7, v5, v4}, Landroid/os/HwBlob;->copyToInt8Array(J[BI)V

    .line 1432
    nop

    .line 1434
    .end local v6    # "_hidl_array_offset_1":J
    invoke-virtual {v10, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1427
    nop

    .end local v5    # "_hidl_vec_element":[B
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1438
    .end local v2    # "childBlob":Landroid/os/HwBlob;
    .end local v3    # "_hidl_index_0":I
    .end local v11    # "_hidl_blob":Landroid/os/HwBlob;
    .end local v12    # "_hidl_vec_size":I
    :cond_0
    nop

    .line 1440
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1438
    return-object v10

    .line 1440
    .end local v10    # "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1441
    throw v2
.end method

.method public final hashCode()I
    .locals 1

    .line 253
    invoke-virtual {p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->asBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    return v0
.end method

.method public interfaceChain()Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1352
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1353
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1355
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1357
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf43484e

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1358
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1359
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1361
    invoke-virtual {v1}, Landroid/os/HwParcel;->readStringVector()Ljava/util/ArrayList;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1362
    .local v2, "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    nop

    .line 1364
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1362
    return-object v2

    .line 1364
    .end local v2    # "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1365
    throw v2
.end method

.method public interfaceDescriptor()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1389
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1390
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1392
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1394
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf445343

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1395
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1396
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1398
    invoke-virtual {v1}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1399
    .local v2, "_hidl_out_descriptor":Ljava/lang/String;
    nop

    .line 1401
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1399
    return-object v2

    .line 1401
    .end local v2    # "_hidl_out_descriptor":Ljava/lang/String;
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1402
    throw v2
.end method

.method public isGauge30Support()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1221
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1222
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.2::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1224
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1226
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x31

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1227
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1228
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1230
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1231
    .local v2, "_hidl_out_result":I
    nop

    .line 1233
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1231
    return v2

    .line 1233
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1234
    throw v2
.end method

.method public isNfcSupport()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1202
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1203
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.2::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1205
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1207
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x30

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1208
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1209
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1211
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt32()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1212
    .local v2, "_hidl_out_result":I
    nop

    .line 1214
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1212
    return v2

    .line 1214
    .end local v2    # "_hidl_out_result":I
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1215
    throw v2
.end method

.method public linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .param p2, "cookie"    # J
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1462
    iget-object v0, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    invoke-interface {v0, p1, p2, p3}, Landroid/os/IHwBinder;->linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z

    move-result v0

    return v0
.end method

.method public notifySyspropsChanged()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1503
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1504
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1506
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1508
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf535953

    const/4 v4, 0x1

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1509
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1511
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1512
    nop

    .line 1513
    return-void

    .line 1511
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1512
    throw v2
.end method

.method public ping()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1467
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1468
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1470
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1472
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf504e47

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1473
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1474
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1476
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1477
    nop

    .line 1478
    return-void

    .line 1476
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1477
    throw v2
.end method

.method public readMnlConfigFile(Ljava/util/ArrayList;)Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1241
    .local p1, "tag":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1242
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1243
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt32Vector(Ljava/util/ArrayList;)V

    .line 1245
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1247
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x32

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1248
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1249
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1251
    invoke-virtual {v1}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1252
    .local v2, "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    nop

    .line 1254
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1252
    return-object v2

    .line 1254
    .end local v2    # "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1255
    throw v2
.end method

.method public sendNfcRequest(ILjava/util/ArrayList;)V
    .locals 5
    .param p1, "ins"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1334
    .local p2, "detail":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1335
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1336
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1337
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 1339
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1341
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x37

    const/4 v4, 0x1

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1342
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1344
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1345
    nop

    .line 1346
    return-void

    .line 1344
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1345
    throw v2
.end method

.method public sendToServer(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 277
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 278
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 279
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 281
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 283
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 284
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 285
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 287
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 288
    .local v2, "_hidl_out_success":Z
    nop

    .line 290
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 288
    return v2

    .line 290
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 291
    throw v2
.end method

.method public sendToServerWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .param p2, "callback"    # Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 297
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 298
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 299
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 300
    if-nez p2, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {p2}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asBinder()Landroid/os/IHwBinder;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeStrongBinder(Landroid/os/IHwBinder;)V

    .line 302
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 304
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x3

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 305
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 306
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 308
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 309
    .local v2, "_hidl_out_success":Z
    nop

    .line 311
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 309
    return v2

    .line 311
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 312
    throw v2
.end method

.method public setBypassDis(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1060
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1061
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1062
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1064
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1066
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x29

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1067
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1068
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1070
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1071
    .local v2, "_hidl_out_success":Z
    nop

    .line 1073
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1071
    return v2

    .line 1073
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1074
    throw v2
.end method

.method public setBypassEn(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1040
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1041
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1042
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1044
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1046
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x28

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1047
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1048
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1050
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1051
    .local v2, "_hidl_out_success":Z
    nop

    .line 1053
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1051
    return v2

    .line 1053
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1054
    throw v2
.end method

.method public setBypassService(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1080
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1081
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1082
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1084
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1086
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x2a

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1087
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1088
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1090
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1091
    .local v2, "_hidl_out_success":Z
    nop

    .line 1093
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1091
    return v2

    .line 1093
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1094
    throw v2
.end method

.method public setCallback(Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)V
    .locals 5
    .param p1, "callback"    # Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 260
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 261
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 262
    if-nez p1, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {p1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asBinder()Landroid/os/IHwBinder;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeStrongBinder(Landroid/os/IHwBinder;)V

    .line 264
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 266
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 267
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 268
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 270
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 271
    nop

    .line 272
    return-void

    .line 270
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 271
    throw v2
.end method

.method public setCtIREngMode(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 338
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 339
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 340
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 342
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 344
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x5

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 345
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 346
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 348
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 349
    .local v2, "_hidl_out_success":Z
    nop

    .line 351
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 349
    return v2

    .line 351
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 352
    throw v2
.end method

.method public setDisableC2kCap(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 418
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 419
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 420
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 422
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 424
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x9

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 425
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 426
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 428
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 429
    .local v2, "_hidl_out_success":Z
    nop

    .line 431
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 429
    return v2

    .line 431
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 432
    throw v2
.end method

.method public setDsbpSupport(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 458
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 459
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 460
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 462
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 464
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0xb

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 465
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 466
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 468
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 469
    .local v2, "_hidl_out_success":Z
    nop

    .line 471
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 469
    return v2

    .line 471
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 472
    throw v2
.end method

.method public setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1161
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1162
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1163
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1164
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1166
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1168
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x2e

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1169
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1170
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1172
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1173
    .local v2, "_hidl_out_success":Z
    nop

    .line 1175
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1173
    return v2

    .line 1175
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1176
    throw v2
.end method

.method public setEmUsbType(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1020
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1021
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1022
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1024
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1026
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x27

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1027
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1028
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1030
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1031
    .local v2, "_hidl_out_success":Z
    nop

    .line 1033
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1031
    return v2

    .line 1033
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1034
    throw v2
.end method

.method public setEmUsbValue(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1000
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1001
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1002
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1004
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1006
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x26

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1007
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1008
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1010
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1011
    .local v2, "_hidl_out_success":Z
    nop

    .line 1013
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1011
    return v2

    .line 1013
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1014
    throw v2
.end method

.method public setHALInstrumentation()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1447
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1448
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "android.hidl.base@1.0::IBase"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1450
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1452
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const v3, 0xf494e54

    const/4 v4, 0x1

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1453
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1455
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1456
    nop

    .line 1457
    return-void

    .line 1455
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1456
    throw v2
.end method

.method public setImsTestMode(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 438
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 439
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 440
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 442
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 444
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0xa

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 445
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 446
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 448
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 449
    .local v2, "_hidl_out_success":Z
    nop

    .line 451
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 449
    return v2

    .line 451
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 452
    throw v2
.end method

.method public setMdResetDelay(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 759
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 760
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 761
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 763
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 765
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x1a

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 766
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 767
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 769
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 770
    .local v2, "_hidl_out_success":Z
    nop

    .line 772
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 770
    return v2

    .line 772
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 773
    throw v2
.end method

.method public setModemWarningEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 919
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 920
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 921
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 923
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 925
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x22

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 926
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 927
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 929
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 930
    .local v2, "_hidl_out_success":Z
    nop

    .line 932
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 930
    return v2

    .line 932
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 933
    throw v2
.end method

.method public setMoms(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1100
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1101
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1102
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 1104
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1106
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x2b

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1107
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1108
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1110
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1111
    .local v2, "_hidl_out_success":Z
    nop

    .line 1113
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1111
    return v2

    .line 1113
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1114
    throw v2
.end method

.method public setNfcResponseFunction(Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;)V
    .locals 5
    .param p1, "response"    # Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1282
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1283
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1284
    if-nez p1, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {p1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;->asBinder()Landroid/os/IHwBinder;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeStrongBinder(Landroid/os/IHwBinder;)V

    .line 1286
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1288
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x34

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1289
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1290
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1292
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1293
    nop

    .line 1294
    return-void

    .line 1292
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1293
    throw v2
.end method

.method public setOmxCoreLogEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 879
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 880
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 881
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 883
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 885
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x20

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 886
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 887
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 889
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 890
    .local v2, "_hidl_out_success":Z
    nop

    .line 892
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 890
    return v2

    .line 892
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 893
    throw v2
.end method

.method public setOmxVdecLogEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 819
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 820
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 821
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 823
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 825
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x1d

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 826
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 827
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 829
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 830
    .local v2, "_hidl_out_success":Z
    nop

    .line 832
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 830
    return v2

    .line 832
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 833
    throw v2
.end method

.method public setOmxVencLogEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 799
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 800
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 801
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 803
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 805
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x1c

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 806
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 807
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 809
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 810
    .local v2, "_hidl_out_success":Z
    nop

    .line 812
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 810
    return v2

    .line 812
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 813
    throw v2
.end method

.method public setPreferGprsMode(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 378
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 379
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 380
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 382
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 384
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x7

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 385
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 386
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 388
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 389
    .local v2, "_hidl_out_success":Z
    nop

    .line 391
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 389
    return v2

    .line 391
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 392
    throw v2
.end method

.method public setRadioCapabilitySwitchEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 398
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 399
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 400
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 402
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 404
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x8

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 405
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 406
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 408
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 409
    .local v2, "_hidl_out_success":Z
    nop

    .line 411
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 409
    return v2

    .line 411
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 412
    throw v2
.end method

.method public setSmsFormat(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 318
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 319
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 320
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 322
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 324
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x4

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 325
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 326
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 328
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 329
    .local v2, "_hidl_out_success":Z
    nop

    .line 331
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 329
    return v2

    .line 331
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 332
    throw v2
.end method

.method public setSvpLogEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 859
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 860
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 861
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 863
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 865
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x1f

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 866
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 867
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 869
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 870
    .local v2, "_hidl_out_success":Z
    nop

    .line 872
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 870
    return v2

    .line 872
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 873
    throw v2
.end method

.method public setTestSimCardType(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 358
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 359
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 360
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 362
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 364
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/4 v3, 0x6

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 365
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 366
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 368
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 369
    .local v2, "_hidl_out_success":Z
    nop

    .line 371
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 369
    return v2

    .line 371
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 372
    throw v2
.end method

.method public setUsbOtgSwitch(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 980
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 981
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 982
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 984
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 986
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x25

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 987
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 988
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 990
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 991
    .local v2, "_hidl_out_success":Z
    nop

    .line 993
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 991
    return v2

    .line 993
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 994
    throw v2
.end method

.method public setUsbPort(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 960
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 961
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 962
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 964
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 966
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x24

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 967
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 968
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 970
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 971
    .local v2, "_hidl_out_success":Z
    nop

    .line 973
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 971
    return v2

    .line 973
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 974
    throw v2
.end method

.method public setVdecDriverLogEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 839
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 840
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 841
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 843
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 845
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x1e

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 846
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 847
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 849
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 850
    .local v2, "_hidl_out_success":Z
    nop

    .line 852
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 850
    return v2

    .line 852
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 853
    throw v2
.end method

.method public setVencDriverLogEnable(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 899
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 900
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 901
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 903
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 905
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x21

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 906
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 907
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 909
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 910
    .local v2, "_hidl_out_success":Z
    nop

    .line 912
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 910
    return v2

    .line 912
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 913
    throw v2
.end method

.method public setVolteMalPctid(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 478
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 479
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 480
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 482
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 484
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0xc

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 485
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 486
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 488
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 489
    .local v2, "_hidl_out_success":Z
    nop

    .line 491
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 489
    return v2

    .line 491
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 492
    throw v2
.end method

.method public setWcnCoreDump(Ljava/lang/String;)Z
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 779
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 780
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 781
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 783
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 785
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x1b

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 786
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 787
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 789
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 790
    .local v2, "_hidl_out_success":Z
    nop

    .line 792
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 790
    return v2

    .line 792
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 793
    throw v2
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 239
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "@Proxy"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 240
    :catch_0
    move-exception v0

    .line 243
    const-string v0, "[class or subclass of vendor.mediatek.hardware.engineermode@1.3::IEmd]@Proxy"

    return-object v0
.end method

.method public unlinkToDeath(Landroid/os/IHwBinder$DeathRecipient;)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1518
    iget-object v0, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    invoke-interface {v0, p1}, Landroid/os/IHwBinder;->unlinkToDeath(Landroid/os/IHwBinder$DeathRecipient;)Z

    move-result v0

    return v0
.end method

.method public writeMnlConfigFile(Ljava/util/ArrayList;Ljava/util/ArrayList;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)Z"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1261
    .local p1, "content":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .local p2, "tag":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    new-instance v0, Landroid/os/HwParcel;

    invoke-direct {v0}, Landroid/os/HwParcel;-><init>()V

    .line 1262
    .local v0, "_hidl_request":Landroid/os/HwParcel;
    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, v1}, Landroid/os/HwParcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1263
    invoke-virtual {v0, p1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 1264
    invoke-virtual {v0, p2}, Landroid/os/HwParcel;->writeInt32Vector(Ljava/util/ArrayList;)V

    .line 1266
    new-instance v1, Landroid/os/HwParcel;

    invoke-direct {v1}, Landroid/os/HwParcel;-><init>()V

    .line 1268
    .local v1, "_hidl_reply":Landroid/os/HwParcel;
    :try_start_0
    iget-object v2, p0, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Proxy;->mRemote:Landroid/os/IHwBinder;

    const/16 v3, 0x33

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IHwBinder;->transact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V

    .line 1269
    invoke-virtual {v1}, Landroid/os/HwParcel;->verifySuccess()V

    .line 1270
    invoke-virtual {v0}, Landroid/os/HwParcel;->releaseTemporaryStorage()V

    .line 1272
    invoke-virtual {v1}, Landroid/os/HwParcel;->readBool()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1273
    .local v2, "_hidl_out_success":Z
    nop

    .line 1275
    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1273
    return v2

    .line 1275
    .end local v2    # "_hidl_out_success":Z
    :catchall_0
    move-exception v2

    invoke-virtual {v1}, Landroid/os/HwParcel;->release()V

    .line 1276
    throw v2
.end method
