.class public abstract Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;
.super Landroid/os/HwBinder;
.source "ILbs.java"

# interfaces
.implements Lvendor/mediatek/hardware/lbs/V1_0/ILbs;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lvendor/mediatek/hardware/lbs/V1_0/ILbs;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 462
    invoke-direct {p0}, Landroid/os/HwBinder;-><init>()V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IHwBinder;
    .locals 0

    .line 465
    return-object p0
.end method

.method public debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V
    .locals 0
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

    .line 478
    .local p2, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    return-void
.end method

.method public final getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;
    .locals 3

    .line 515
    new-instance v0, Landroid/hidl/base/V1_0/DebugInfo;

    invoke-direct {v0}, Landroid/hidl/base/V1_0/DebugInfo;-><init>()V

    .line 516
    .local v0, "info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-static {}, Landroid/os/HidlSupport;->getPidIfSharable()I

    move-result v1

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->pid:I

    .line 517
    const-wide/16 v1, 0x0

    iput-wide v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->ptr:J

    .line 518
    const/4 v1, 0x0

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->arch:I

    .line 519
    return-object v0
.end method

.method public final getHashChain()Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "[B>;"
        }
    .end annotation

    .line 490
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x2

    new-array v1, v1, [[B

    const/16 v2, 0x20

    new-array v3, v2, [B

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v2, v2, [B

    fill-array-data v2, :array_1

    const/4 v3, 0x1

    aput-object v2, v1, v3

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0

    nop

    :array_0
    .array-data 1
        0x55t
        0x3et
        0x41t
        -0x41t
        0x43t
        0x5et
        0x40t
        0x6ct
        0x70t
        0xct
        0x48t
        -0x4ft
        -0x2t
        -0x62t
        0x39t
        -0x1at
        -0x52t
        -0x70t
        -0x4et
        -0x7et
        -0x66t
        -0x53t
        0x4bt
        0x5dt
        -0x16t
        0x64t
        0x24t
        0x32t
        0x74t
        -0x4bt
        -0x3t
        0x4ct
    .end array-data

    :array_1
    .array-data 1
        -0x14t
        0x7ft
        -0x29t
        -0x62t
        -0x30t
        0x2dt
        -0x6t
        -0x7bt
        -0x44t
        0x49t
        -0x6ct
        0x26t
        -0x53t
        -0x52t
        0x3et
        -0x42t
        0x23t
        -0x11t
        0x5t
        0x24t
        -0xdt
        -0x33t
        0x69t
        0x57t
        0x13t
        -0x6dt
        0x24t
        -0x48t
        0x3bt
        0x18t
        -0x36t
        0x4ct
    .end array-data
.end method

.method public final interfaceChain()Ljava/util/ArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 470
    new-instance v0, Ljava/util/ArrayList;

    const-string v1, "vendor.mediatek.hardware.lbs@1.0::ILbs"

    const-string v2, "android.hidl.base@1.0::IBase"

    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method

.method public final interfaceDescriptor()Ljava/lang/String;
    .locals 1

    .line 484
    const-string v0, "vendor.mediatek.hardware.lbs@1.0::ILbs"

    return-object v0
.end method

.method public final linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .param p2, "cookie"    # J

    .line 503
    const/4 v0, 0x1

    return v0
.end method

.method public final notifySyspropsChanged()V
    .locals 0

    .line 525
    invoke-static {}, Landroid/os/HwBinder;->enableInstrumentation()V

    .line 527
    return-void
.end method

.method public onTransact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V
    .locals 10
    .param p1, "_hidl_code"    # I
    .param p2, "_hidl_request"    # Landroid/os/HwParcel;
    .param p3, "_hidl_reply"    # Landroid/os/HwParcel;
    .param p4, "_hidl_flags"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 555
    const/4 v0, 0x1

    const-string v1, "vendor.mediatek.hardware.lbs@1.0::ILbs"

    const/4 v2, 0x0

    if-eq p1, v0, :cond_4

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/4 v0, 0x3

    if-eq p1, v0, :cond_2

    const-string v0, "android.hidl.base@1.0::IBase"

    sparse-switch p1, :sswitch_data_0

    goto/16 :goto_1

    .line 696
    :sswitch_0
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 698
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->notifySyspropsChanged()V

    .line 699
    goto/16 :goto_1

    .line 685
    :sswitch_1
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 687
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;

    move-result-object v0

    .line 688
    .local v0, "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 689
    invoke-virtual {v0, p3}, Landroid/hidl/base/V1_0/DebugInfo;->writeToParcel(Landroid/os/HwParcel;)V

    .line 690
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 691
    goto/16 :goto_1

    .line 675
    .end local v0    # "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    :sswitch_2
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 677
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->ping()V

    .line 678
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 679
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 680
    goto/16 :goto_1

    .line 662
    :sswitch_3
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 664
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->setHALInstrumentation()V

    .line 665
    goto/16 :goto_1

    .line 628
    :sswitch_4
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 630
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->getHashChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 631
    .local v0, "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 633
    new-instance v1, Landroid/os/HwBlob;

    const/16 v3, 0x10

    invoke-direct {v1, v3}, Landroid/os/HwBlob;-><init>(I)V

    .line 635
    .local v1, "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v3

    .line 636
    .local v3, "_hidl_vec_size":I
    const-wide/16 v4, 0x8

    invoke-virtual {v1, v4, v5, v3}, Landroid/os/HwBlob;->putInt32(JI)V

    .line 637
    const-wide/16 v4, 0xc

    invoke-virtual {v1, v4, v5, v2}, Landroid/os/HwBlob;->putBool(JZ)V

    .line 638
    new-instance v2, Landroid/os/HwBlob;

    mul-int/lit8 v4, v3, 0x20

    invoke-direct {v2, v4}, Landroid/os/HwBlob;-><init>(I)V

    .line 639
    .local v2, "childBlob":Landroid/os/HwBlob;
    const/4 v4, 0x0

    .local v4, "_hidl_index_0":I
    :goto_0
    if-ge v4, v3, :cond_1

    .line 641
    mul-int/lit8 v5, v4, 0x20

    int-to-long v5, v5

    .line 642
    .local v5, "_hidl_array_offset_1":J
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [B

    .line 644
    .local v7, "_hidl_array_item_1":[B
    if-eqz v7, :cond_0

    array-length v8, v7

    const/16 v9, 0x20

    if-ne v8, v9, :cond_0

    .line 648
    invoke-virtual {v2, v5, v6, v7}, Landroid/os/HwBlob;->putInt8Array(J[B)V

    .line 649
    nop

    .line 639
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 645
    .restart local v5    # "_hidl_array_offset_1":J
    .restart local v7    # "_hidl_array_item_1":[B
    :cond_0
    new-instance v8, Ljava/lang/IllegalArgumentException;

    const-string v9, "Array element is not of the expected length"

    invoke-direct {v8, v9}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v8

    .line 652
    .end local v4    # "_hidl_index_0":I
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    :cond_1
    const-wide/16 v4, 0x0

    invoke-virtual {v1, v4, v5, v2}, Landroid/os/HwBlob;->putBlob(JLandroid/os/HwBlob;)V

    .line 654
    .end local v2    # "childBlob":Landroid/os/HwBlob;
    .end local v3    # "_hidl_vec_size":I
    invoke-virtual {p3, v1}, Landroid/os/HwParcel;->writeBuffer(Landroid/os/HwBlob;)V

    .line 656
    .end local v1    # "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 657
    goto/16 :goto_1

    .line 617
    .end local v0    # "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    :sswitch_5
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 619
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v0

    .line 620
    .local v0, "_hidl_out_descriptor":Ljava/lang/String;
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 621
    invoke-virtual {p3, v0}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 622
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 623
    goto :goto_1

    .line 605
    .end local v0    # "_hidl_out_descriptor":Ljava/lang/String;
    :sswitch_6
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 607
    invoke-virtual {p2}, Landroid/os/HwParcel;->readNativeHandle()Landroid/os/NativeHandle;

    move-result-object v0

    .line 608
    .local v0, "fd":Landroid/os/NativeHandle;
    invoke-virtual {p2}, Landroid/os/HwParcel;->readStringVector()Ljava/util/ArrayList;

    move-result-object v1

    .line 609
    .local v1, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {p0, v0, v1}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V

    .line 610
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 611
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 612
    goto :goto_1

    .line 594
    .end local v0    # "fd":Landroid/os/NativeHandle;
    .end local v1    # "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :sswitch_7
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 596
    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->interfaceChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 597
    .local v0, "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 598
    invoke-virtual {p3, v0}, Landroid/os/HwParcel;->writeStringVector(Ljava/util/ArrayList;)V

    .line 599
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 600
    goto :goto_1

    .line 581
    .end local v0    # "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :cond_2
    invoke-virtual {p2, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 583
    invoke-virtual {p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-static {v0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;

    move-result-object v0

    .line 584
    .local v0, "callback":Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;
    invoke-virtual {p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v1

    .line 585
    .local v1, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {p0, v0, v1}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->sendToServerWithCallback(Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;Ljava/util/ArrayList;)Z

    move-result v3

    .line 586
    .local v3, "_hidl_out_success":Z
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 587
    invoke-virtual {p3, v3}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 588
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 589
    goto :goto_1

    .line 569
    .end local v0    # "callback":Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;
    .end local v1    # "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v3    # "_hidl_out_success":Z
    :cond_3
    invoke-virtual {p2, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 571
    invoke-virtual {p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 572
    .local v0, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {p0, v0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->sendToServer(Ljava/util/ArrayList;)Z

    move-result v1

    .line 573
    .local v1, "_hidl_out_success":Z
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 574
    invoke-virtual {p3, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 575
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 576
    goto :goto_1

    .line 558
    .end local v0    # "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v1    # "_hidl_out_success":Z
    :cond_4
    invoke-virtual {p2, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 560
    invoke-virtual {p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-static {v0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;

    move-result-object v0

    .line 561
    .local v0, "callback":Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;
    invoke-virtual {p0, v0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->setCallback(Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;)V

    .line 562
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 563
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 564
    nop

    .line 708
    .end local v0    # "callback":Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;
    :goto_1
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0xf43484e -> :sswitch_7
        0xf444247 -> :sswitch_6
        0xf445343 -> :sswitch_5
        0xf485348 -> :sswitch_4
        0xf494e54 -> :sswitch_3
        0xf504e47 -> :sswitch_2
        0xf524546 -> :sswitch_1
        0xf535953 -> :sswitch_0
    .end sparse-switch
.end method

.method public final ping()V
    .locals 0

    .line 509
    return-void
.end method

.method public queryLocalInterface(Ljava/lang/String;)Landroid/os/IHwInterface;
    .locals 1
    .param p1, "descriptor"    # Ljava/lang/String;

    .line 537
    const-string v0, "vendor.mediatek.hardware.lbs@1.0::ILbs"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 538
    return-object p0

    .line 540
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public registerAsService(Ljava/lang/String;)V
    .locals 0
    .param p1, "serviceName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 544
    invoke-virtual {p0, p1}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->registerService(Ljava/lang/String;)V

    .line 545
    return-void
.end method

.method public final setHALInstrumentation()V
    .locals 0

    .line 499
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 549
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs$Stub;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "@Stub"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final unlinkToDeath(Landroid/os/IHwBinder$DeathRecipient;)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;

    .line 531
    const/4 v0, 0x1

    return v0
.end method
