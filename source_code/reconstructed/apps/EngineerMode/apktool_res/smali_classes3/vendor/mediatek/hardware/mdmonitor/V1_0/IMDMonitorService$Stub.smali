.class public abstract Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;
.super Landroid/os/HwBinder;
.source "IMDMonitorService.java"

# interfaces
.implements Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 464
    invoke-direct {p0}, Landroid/os/HwBinder;-><init>()V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IHwBinder;
    .locals 0

    .line 467
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

    .line 480
    .local p2, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    return-void
.end method

.method public final getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;
    .locals 3

    .line 517
    new-instance v0, Landroid/hidl/base/V1_0/DebugInfo;

    invoke-direct {v0}, Landroid/hidl/base/V1_0/DebugInfo;-><init>()V

    .line 518
    .local v0, "info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-static {}, Landroid/os/HidlSupport;->getPidIfSharable()I

    move-result v1

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->pid:I

    .line 519
    const-wide/16 v1, 0x0

    iput-wide v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->ptr:J

    .line 520
    const/4 v1, 0x0

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->arch:I

    .line 521
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

    .line 492
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
        -0x16t
        0x2ct
        0x17t
        0x47t
        -0x3t
        -0x2ct
        -0x27t
        0x6t
        0x6et
        0x6ft
        0x77t
        -0x75t
        -0x59t
        -0x62t
        -0x6t
        -0x5ft
        0x5at
        -0x78t
        -0x16t
        -0x59t
        0x0t
        0x27t
        -0x55t
        0x7et
        0x35t
        -0x63t
        -0x61t
        -0xet
        -0x45t
        -0x5t
        -0x2ft
        0x4dt
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

    .line 472
    new-instance v0, Ljava/util/ArrayList;

    const-string v1, "vendor.mediatek.hardware.mdmonitor@1.0::IMDMonitorService"

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

    .line 486
    const-string v0, "vendor.mediatek.hardware.mdmonitor@1.0::IMDMonitorService"

    return-object v0
.end method

.method public final linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .param p2, "cookie"    # J

    .line 505
    const/4 v0, 0x1

    return v0
.end method

.method public final notifySyspropsChanged()V
    .locals 0

    .line 527
    invoke-static {}, Landroid/os/HwBinder;->enableInstrumentation()V

    .line 529
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

    .line 557
    const/4 v0, 0x1

    const-string v1, "vendor.mediatek.hardware.mdmonitor@1.0::IMDMonitorService"

    const/4 v2, 0x0

    if-eq p1, v0, :cond_4

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/4 v0, 0x3

    if-eq p1, v0, :cond_2

    const-string v0, "android.hidl.base@1.0::IBase"

    sparse-switch p1, :sswitch_data_0

    goto/16 :goto_1

    .line 700
    :sswitch_0
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 702
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->notifySyspropsChanged()V

    .line 703
    goto/16 :goto_1

    .line 689
    :sswitch_1
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 691
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;

    move-result-object v0

    .line 692
    .local v0, "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 693
    invoke-virtual {v0, p3}, Landroid/hidl/base/V1_0/DebugInfo;->writeToParcel(Landroid/os/HwParcel;)V

    .line 694
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 695
    goto/16 :goto_1

    .line 679
    .end local v0    # "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    :sswitch_2
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 681
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->ping()V

    .line 682
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 683
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 684
    goto/16 :goto_1

    .line 666
    :sswitch_3
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 668
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->setHALInstrumentation()V

    .line 669
    goto/16 :goto_1

    .line 632
    :sswitch_4
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 634
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->getHashChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 635
    .local v0, "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 637
    new-instance v1, Landroid/os/HwBlob;

    const/16 v3, 0x10

    invoke-direct {v1, v3}, Landroid/os/HwBlob;-><init>(I)V

    .line 639
    .local v1, "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v3

    .line 640
    .local v3, "_hidl_vec_size":I
    const-wide/16 v4, 0x8

    invoke-virtual {v1, v4, v5, v3}, Landroid/os/HwBlob;->putInt32(JI)V

    .line 641
    const-wide/16 v4, 0xc

    invoke-virtual {v1, v4, v5, v2}, Landroid/os/HwBlob;->putBool(JZ)V

    .line 642
    new-instance v2, Landroid/os/HwBlob;

    mul-int/lit8 v4, v3, 0x20

    invoke-direct {v2, v4}, Landroid/os/HwBlob;-><init>(I)V

    .line 643
    .local v2, "childBlob":Landroid/os/HwBlob;
    const/4 v4, 0x0

    .local v4, "_hidl_index_0":I
    :goto_0
    if-ge v4, v3, :cond_1

    .line 645
    mul-int/lit8 v5, v4, 0x20

    int-to-long v5, v5

    .line 646
    .local v5, "_hidl_array_offset_1":J
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [B

    .line 648
    .local v7, "_hidl_array_item_1":[B
    if-eqz v7, :cond_0

    array-length v8, v7

    const/16 v9, 0x20

    if-ne v8, v9, :cond_0

    .line 652
    invoke-virtual {v2, v5, v6, v7}, Landroid/os/HwBlob;->putInt8Array(J[B)V

    .line 653
    nop

    .line 643
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 649
    .restart local v5    # "_hidl_array_offset_1":J
    .restart local v7    # "_hidl_array_item_1":[B
    :cond_0
    new-instance v8, Ljava/lang/IllegalArgumentException;

    const-string v9, "Array element is not of the expected length"

    invoke-direct {v8, v9}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v8

    .line 656
    .end local v4    # "_hidl_index_0":I
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    :cond_1
    const-wide/16 v4, 0x0

    invoke-virtual {v1, v4, v5, v2}, Landroid/os/HwBlob;->putBlob(JLandroid/os/HwBlob;)V

    .line 658
    .end local v2    # "childBlob":Landroid/os/HwBlob;
    .end local v3    # "_hidl_vec_size":I
    invoke-virtual {p3, v1}, Landroid/os/HwParcel;->writeBuffer(Landroid/os/HwBlob;)V

    .line 660
    .end local v1    # "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 661
    goto/16 :goto_1

    .line 621
    .end local v0    # "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    :sswitch_5
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 623
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v0

    .line 624
    .local v0, "_hidl_out_descriptor":Ljava/lang/String;
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 625
    invoke-virtual {p3, v0}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 626
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 627
    goto :goto_1

    .line 609
    .end local v0    # "_hidl_out_descriptor":Ljava/lang/String;
    :sswitch_6
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 611
    invoke-virtual {p2}, Landroid/os/HwParcel;->readNativeHandle()Landroid/os/NativeHandle;

    move-result-object v0

    .line 612
    .local v0, "fd":Landroid/os/NativeHandle;
    invoke-virtual {p2}, Landroid/os/HwParcel;->readStringVector()Ljava/util/ArrayList;

    move-result-object v1

    .line 613
    .local v1, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {p0, v0, v1}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V

    .line 614
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 615
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 616
    goto :goto_1

    .line 598
    .end local v0    # "fd":Landroid/os/NativeHandle;
    .end local v1    # "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :sswitch_7
    invoke-virtual {p2, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 600
    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->interfaceChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 601
    .local v0, "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 602
    invoke-virtual {p3, v0}, Landroid/os/HwParcel;->writeStringVector(Ljava/util/ArrayList;)V

    .line 603
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 604
    goto :goto_1

    .line 584
    .end local v0    # "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :cond_2
    invoke-virtual {p2, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 586
    invoke-virtual {p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 587
    .local v0, "type":I
    invoke-virtual {p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 588
    .local v1, "offset":I
    invoke-virtual {p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v3

    .line 589
    .local v3, "size":I
    invoke-virtual {p0, v0, v1, v3}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->getModemBinData(III)Ljava/util/ArrayList;

    move-result-object v4

    .line 590
    .local v4, "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 591
    invoke-virtual {p3, v4}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 592
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 593
    goto :goto_1

    .line 572
    .end local v0    # "type":I
    .end local v1    # "offset":I
    .end local v3    # "size":I
    .end local v4    # "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :cond_3
    invoke-virtual {p2, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 574
    invoke-virtual {p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 575
    .local v0, "servername":Ljava/lang/String;
    invoke-virtual {p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback;

    move-result-object v1

    .line 576
    .local v1, "callback":Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback;
    invoke-virtual {p0, v0, v1}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->registerTrapCallback(Ljava/lang/String;Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback;)V

    .line 577
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 578
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 579
    goto :goto_1

    .line 560
    .end local v0    # "servername":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback;
    :cond_4
    invoke-virtual {p2, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 562
    invoke-virtual {p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 563
    .local v0, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {p0, v0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->sendMCPData(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v1

    .line 564
    .local v1, "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {p3, v2}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 565
    invoke-virtual {p3, v1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 566
    invoke-virtual {p3}, Landroid/os/HwParcel;->send()V

    .line 567
    nop

    .line 712
    .end local v0    # "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v1    # "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
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

    .line 511
    return-void
.end method

.method public queryLocalInterface(Ljava/lang/String;)Landroid/os/IHwInterface;
    .locals 1
    .param p1, "descriptor"    # Ljava/lang/String;

    .line 539
    const-string v0, "vendor.mediatek.hardware.mdmonitor@1.0::IMDMonitorService"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 540
    return-object p0

    .line 542
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

    .line 546
    invoke-virtual {p0, p1}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->registerService(Ljava/lang/String;)V

    .line 547
    return-void
.end method

.method public final setHALInstrumentation()V
    .locals 0

    .line 501
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 551
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService$Stub;->interfaceDescriptor()Ljava/lang/String;

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

    .line 533
    const/4 v0, 0x1

    return v0
.end method
