.class public abstract Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;
.super Landroid/os/HwBinder;
.source "IEmd.java"

# interfaces
.implements Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1522
    invoke-direct {p0}, Landroid/os/HwBinder;-><init>()V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IHwBinder;
    .locals 0

    .line 1525
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

    .line 1541
    .local p2, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    return-void
.end method

.method public final getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;
    .locals 3

    .line 1581
    new-instance v0, Landroid/hidl/base/V1_0/DebugInfo;

    invoke-direct {v0}, Landroid/hidl/base/V1_0/DebugInfo;-><init>()V

    .line 1582
    .local v0, "info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-static {}, Landroid/os/HidlSupport;->getPidIfSharable()I

    move-result v1

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->pid:I

    .line 1583
    const-wide/16 v1, 0x0

    iput-wide v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->ptr:J

    .line 1584
    const/4 v1, 0x0

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->arch:I

    .line 1585
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

    .line 1553
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x5

    new-array v1, v1, [[B

    const/16 v2, 0x20

    new-array v3, v2, [B

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v3, v2, [B

    fill-array-data v3, :array_1

    const/4 v4, 0x1

    aput-object v3, v1, v4

    new-array v3, v2, [B

    fill-array-data v3, :array_2

    const/4 v4, 0x2

    aput-object v3, v1, v4

    new-array v3, v2, [B

    fill-array-data v3, :array_3

    const/4 v4, 0x3

    aput-object v3, v1, v4

    new-array v2, v2, [B

    fill-array-data v2, :array_4

    const/4 v3, 0x4

    aput-object v2, v1, v3

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0

    nop

    :array_0
    .array-data 1
        -0x16t
        0xct
        0x58t
        0x34t
        -0x74t
        -0x65t
        -0x23t
        -0x4ct
        -0x40t
        0x52t
        -0x6bt
        0x7dt
        -0x3dt
        0x54t
        -0x20t
        0x77t
        -0x45t
        -0x24t
        -0x2t
        -0x38t
        0x6et
        0x6bt
        -0x72t
        -0x75t
        -0x7t
        -0x22t
        0x3ct
        -0x24t
        0x3ft
        -0x3ct
        0xet
        -0x6dt
    .end array-data

    :array_1
    .array-data 1
        -0x1bt
        0x15t
        -0x2bt
        -0x5at
        0x51t
        0x37t
        -0x7at
        0xft
        -0x26t
        0x29t
        0x52t
        0x59t
        0x13t
        0x16t
        -0xbt
        -0x26t
        0x74t
        -0x15t
        -0x48t
        0x6bt
        0x6ct
        -0x14t
        0x52t
        0x11t
        -0x28t
        -0x75t
        0x1dt
        0x71t
        -0x20t
        -0x26t
        0x37t
        -0x1at
    .end array-data

    :array_2
    .array-data 1
        0x63t
        -0x5dt
        0x23t
        -0x55t
        -0x5t
        -0x19t
        0x30t
        0xdt
        -0x70t
        -0x7ft
        0x66t
        -0x1at
        0x47t
        0x70t
        0x20t
        -0x2bt
        0x49t
        0x3at
        0x78t
        -0x11t
        -0x76t
        -0x54t
        0x7bt
        -0xet
        -0x1bt
        -0x2at
        -0x60t
        0x43t
        -0x41t
        -0x45t
        -0x5ct
        -0x71t
    .end array-data

    :array_3
    .array-data 1
        -0x42t
        -0x1bt
        0x12t
        -0x6bt
        0x79t
        -0x73t
        -0x5t
        -0x71t
        -0xbt
        0x1ct
        0x77t
        -0x69t
        0x79t
        -0x64t
        0x69t
        -0x1dt
        0x56t
        0x69t
        -0x4ft
        0x20t
        -0x9t
        0x19t
        0x36t
        -0x75t
        -0x5dt
        -0x61t
        -0x1dt
        -0x1et
        -0xat
        -0x30t
        0x4ft
        -0x64t
    .end array-data

    :array_4
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
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1530
    new-instance v0, Ljava/util/ArrayList;

    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    const-string v2, "vendor.mediatek.hardware.engineermode@1.2::IEmd"

    const-string v3, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    const-string v4, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    const-string v5, "android.hidl.base@1.0::IBase"

    filled-new-array {v1, v2, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method

.method public final interfaceDescriptor()Ljava/lang/String;
    .locals 1

    .line 1547
    const-string v0, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    return-object v0
.end method

.method public final linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .param p2, "cookie"    # J

    .line 1569
    const/4 v0, 0x1

    return v0
.end method

.method public final notifySyspropsChanged()V
    .locals 0

    .line 1591
    invoke-static {}, Landroid/os/HwBinder;->enableInstrumentation()V

    .line 1593
    return-void
.end method

.method public onTransact(ILandroid/os/HwParcel;Landroid/os/HwParcel;I)V
    .locals 19
    .param p1, "_hidl_code"    # I
    .param p2, "_hidl_request"    # Landroid/os/HwParcel;
    .param p3, "_hidl_reply"    # Landroid/os/HwParcel;
    .param p4, "_hidl_flags"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1621
    move-object/from16 v8, p0

    move-object/from16 v9, p2

    move-object/from16 v10, p3

    const-string v0, "vendor.mediatek.hardware.engineermode@1.2::IEmd"

    const-string v1, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    const-string v2, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    const/4 v11, 0x0

    packed-switch p1, :pswitch_data_0

    const-string v0, "android.hidl.base@1.0::IBase"

    sparse-switch p1, :sswitch_data_0

    goto/16 :goto_1

    .line 2381
    :sswitch_0
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2383
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->notifySyspropsChanged()V

    .line 2384
    goto/16 :goto_1

    .line 2370
    :sswitch_1
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2372
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;

    move-result-object v0

    .line 2373
    .local v0, "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2374
    invoke-virtual {v0, v10}, Landroid/hidl/base/V1_0/DebugInfo;->writeToParcel(Landroid/os/HwParcel;)V

    .line 2375
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2376
    goto/16 :goto_1

    .line 2360
    .end local v0    # "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    :sswitch_2
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2362
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->ping()V

    .line 2363
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2364
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2365
    goto/16 :goto_1

    .line 2347
    :sswitch_3
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2349
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setHALInstrumentation()V

    .line 2350
    goto/16 :goto_1

    .line 2313
    :sswitch_4
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2315
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->getHashChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 2316
    .local v0, "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2318
    new-instance v1, Landroid/os/HwBlob;

    const/16 v2, 0x10

    invoke-direct {v1, v2}, Landroid/os/HwBlob;-><init>(I)V

    .line 2320
    .local v1, "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    .line 2321
    .local v2, "_hidl_vec_size":I
    const-wide/16 v3, 0x8

    invoke-virtual {v1, v3, v4, v2}, Landroid/os/HwBlob;->putInt32(JI)V

    .line 2322
    const-wide/16 v3, 0xc

    invoke-virtual {v1, v3, v4, v11}, Landroid/os/HwBlob;->putBool(JZ)V

    .line 2323
    new-instance v3, Landroid/os/HwBlob;

    mul-int/lit8 v4, v2, 0x20

    invoke-direct {v3, v4}, Landroid/os/HwBlob;-><init>(I)V

    .line 2324
    .local v3, "childBlob":Landroid/os/HwBlob;
    const/4 v4, 0x0

    .local v4, "_hidl_index_0":I
    :goto_0
    if-ge v4, v2, :cond_1

    .line 2326
    mul-int/lit8 v5, v4, 0x20

    int-to-long v5, v5

    .line 2327
    .local v5, "_hidl_array_offset_1":J
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [B

    .line 2329
    .local v7, "_hidl_array_item_1":[B
    if-eqz v7, :cond_0

    array-length v11, v7

    const/16 v12, 0x20

    if-ne v11, v12, :cond_0

    .line 2333
    invoke-virtual {v3, v5, v6, v7}, Landroid/os/HwBlob;->putInt8Array(J[B)V

    .line 2334
    nop

    .line 2324
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 2330
    .restart local v5    # "_hidl_array_offset_1":J
    .restart local v7    # "_hidl_array_item_1":[B
    :cond_0
    new-instance v11, Ljava/lang/IllegalArgumentException;

    const-string v12, "Array element is not of the expected length"

    invoke-direct {v11, v12}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v11

    .line 2337
    .end local v4    # "_hidl_index_0":I
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    :cond_1
    const-wide/16 v4, 0x0

    invoke-virtual {v1, v4, v5, v3}, Landroid/os/HwBlob;->putBlob(JLandroid/os/HwBlob;)V

    .line 2339
    .end local v2    # "_hidl_vec_size":I
    .end local v3    # "childBlob":Landroid/os/HwBlob;
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBuffer(Landroid/os/HwBlob;)V

    .line 2341
    .end local v1    # "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2342
    goto/16 :goto_1

    .line 2302
    .end local v0    # "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    :sswitch_5
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2304
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v0

    .line 2305
    .local v0, "_hidl_out_descriptor":Ljava/lang/String;
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2306
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 2307
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2308
    goto/16 :goto_1

    .line 2290
    .end local v0    # "_hidl_out_descriptor":Ljava/lang/String;
    :sswitch_6
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2292
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readNativeHandle()Landroid/os/NativeHandle;

    move-result-object v0

    .line 2293
    .local v0, "fd":Landroid/os/NativeHandle;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStringVector()Ljava/util/ArrayList;

    move-result-object v1

    .line 2294
    .local v1, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V

    .line 2295
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2296
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2297
    goto/16 :goto_1

    .line 2279
    .end local v0    # "fd":Landroid/os/NativeHandle;
    .end local v1    # "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :sswitch_7
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2281
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->interfaceChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 2282
    .local v0, "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2283
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeStringVector(Ljava/util/ArrayList;)V

    .line 2284
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2285
    goto/16 :goto_1

    .line 2269
    .end local v0    # "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :pswitch_0
    invoke-virtual {v9, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2271
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 2272
    .local v0, "ins":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v1

    .line 2273
    .local v1, "detail":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->sendNfcRequest(ILjava/util/ArrayList;)V

    .line 2274
    goto/16 :goto_1

    .line 2259
    .end local v0    # "ins":I
    .end local v1    # "detail":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :pswitch_1
    invoke-virtual {v9, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2261
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->disconnect()V

    .line 2262
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2263
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2264
    goto/16 :goto_1

    .line 2248
    :pswitch_2
    invoke-virtual {v9, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2250
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->connect()Z

    move-result v0

    .line 2251
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2252
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2253
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2254
    goto/16 :goto_1

    .line 2237
    .end local v0    # "_hidl_out_success":Z
    :pswitch_3
    invoke-virtual {v9, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2239
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-static {v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;

    move-result-object v0

    .line 2240
    .local v0, "response":Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setNfcResponseFunction(Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;)V

    .line 2241
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2242
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2243
    goto/16 :goto_1

    .line 2224
    .end local v0    # "response":Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;
    :pswitch_4
    invoke-virtual {v9, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2226
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 2227
    .local v0, "content":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32Vector()Ljava/util/ArrayList;

    move-result-object v1

    .line 2228
    .local v1, "tag":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->writeMnlConfigFile(Ljava/util/ArrayList;Ljava/util/ArrayList;)Z

    move-result v2

    .line 2229
    .local v2, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2230
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2231
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2232
    goto/16 :goto_1

    .line 2212
    .end local v0    # "content":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v1    # "tag":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    .end local v2    # "_hidl_out_success":Z
    :pswitch_5
    invoke-virtual {v9, v1}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2214
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 2215
    .local v0, "tag":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->readMnlConfigFile(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v1

    .line 2216
    .local v1, "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2217
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 2218
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2219
    goto/16 :goto_1

    .line 2201
    .end local v0    # "tag":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    .end local v1    # "_hidl_out_data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :pswitch_6
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2203
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->isGauge30Support()I

    move-result v0

    .line 2204
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2205
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 2206
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2207
    goto/16 :goto_1

    .line 2190
    .end local v0    # "_hidl_out_result":I
    :pswitch_7
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2192
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->isNfcSupport()I

    move-result v0

    .line 2193
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2194
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 2195
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2196
    goto/16 :goto_1

    .line 2179
    .end local v0    # "_hidl_out_result":I
    :pswitch_8
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2181
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btIsEmSupport()I

    move-result v0

    .line 2182
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2183
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 2184
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2185
    goto/16 :goto_1

    .line 2166
    .end local v0    # "_hidl_out_result":I
    :pswitch_9
    const-string v0, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2168
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2169
    .local v0, "name":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v1

    .line 2170
    .local v1, "value":Ljava/lang/String;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    .line 2171
    .restart local v2    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2172
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2173
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2174
    goto/16 :goto_1

    .line 2153
    .end local v0    # "name":Ljava/lang/String;
    .end local v1    # "value":Ljava/lang/String;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_a
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2155
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2156
    .local v0, "data":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v1

    .line 2157
    .local v1, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->getFilePathListWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    move-result v2

    .line 2158
    .restart local v2    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2159
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2160
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2161
    goto/16 :goto_1

    .line 2142
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_b
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2144
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->clearItemsforRsc()Z

    move-result v0

    .line 2145
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2146
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2147
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2148
    goto/16 :goto_1

    .line 2130
    .end local v0    # "_hidl_out_success":Z
    :pswitch_c
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2132
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2133
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setMoms(Ljava/lang/String;)Z

    move-result v1

    .line 2134
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2135
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2136
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2137
    goto/16 :goto_1

    .line 2118
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_d
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2120
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2121
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setBypassService(Ljava/lang/String;)Z

    move-result v1

    .line 2122
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2123
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2124
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2125
    goto/16 :goto_1

    .line 2106
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_e
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2108
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2109
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setBypassDis(Ljava/lang/String;)Z

    move-result v1

    .line 2110
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2111
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2112
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2113
    goto/16 :goto_1

    .line 2094
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_f
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2096
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2097
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setBypassEn(Ljava/lang/String;)Z

    move-result v1

    .line 2098
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2099
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2100
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2101
    goto/16 :goto_1

    .line 2082
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_10
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2084
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2085
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setEmUsbType(Ljava/lang/String;)Z

    move-result v1

    .line 2086
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2087
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2088
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2089
    goto/16 :goto_1

    .line 2070
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_11
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2072
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2073
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setEmUsbValue(Ljava/lang/String;)Z

    move-result v1

    .line 2074
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2075
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2076
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2077
    goto/16 :goto_1

    .line 2058
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_12
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2060
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2061
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setUsbOtgSwitch(Ljava/lang/String;)Z

    move-result v1

    .line 2062
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2063
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2064
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2065
    goto/16 :goto_1

    .line 2046
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_13
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2048
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2049
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setUsbPort(Ljava/lang/String;)Z

    move-result v1

    .line 2050
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2051
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2052
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2053
    goto/16 :goto_1

    .line 2033
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_14
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2035
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2036
    .local v0, "keyword":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v1

    .line 2037
    .local v1, "filepath":Ljava/lang/String;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->genMdLogFilter(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    .line 2038
    .restart local v2    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2039
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2040
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2041
    goto/16 :goto_1

    .line 2021
    .end local v0    # "keyword":Ljava/lang/String;
    .end local v1    # "filepath":Ljava/lang/String;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_15
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2023
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2024
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setModemWarningEnable(Ljava/lang/String;)Z

    move-result v1

    .line 2025
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2026
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2027
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2028
    goto/16 :goto_1

    .line 2009
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_16
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2011
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2012
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setVencDriverLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 2013
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2014
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2015
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2016
    goto/16 :goto_1

    .line 1997
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_17
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1999
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2000
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setOmxCoreLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 2001
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2002
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2003
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2004
    goto/16 :goto_1

    .line 1985
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_18
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1987
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1988
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setSvpLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1989
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1990
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1991
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1992
    goto/16 :goto_1

    .line 1973
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_19
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1975
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1976
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setVdecDriverLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1977
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1978
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1979
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1980
    goto/16 :goto_1

    .line 1961
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_1a
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1963
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1964
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setOmxVdecLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1965
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1966
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1967
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1968
    goto/16 :goto_1

    .line 1949
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_1b
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1951
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1952
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setOmxVencLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1953
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1954
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1955
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1956
    goto/16 :goto_1

    .line 1937
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_1c
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1939
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1940
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setWcnCoreDump(Ljava/lang/String;)Z

    move-result v1

    .line 1941
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1942
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1943
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1944
    goto/16 :goto_1

    .line 1925
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_1d
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1927
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1928
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setMdResetDelay(Ljava/lang/String;)Z

    move-result v1

    .line 1929
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1930
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1931
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1932
    goto/16 :goto_1

    .line 1914
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_1e
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1916
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btPollingStop()I

    move-result v0

    .line 1917
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1918
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1919
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1920
    goto/16 :goto_1

    .line 1903
    .end local v0    # "_hidl_out_result":I
    :pswitch_1f
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1905
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btPollingStart()I

    move-result v0

    .line 1906
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1907
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1908
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1909
    goto/16 :goto_1

    .line 1892
    .end local v0    # "_hidl_out_result":I
    :pswitch_20
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1894
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btIsComboSupport()I

    move-result v0

    .line 1895
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1896
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1897
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1898
    goto/16 :goto_1

    .line 1881
    .end local v0    # "_hidl_out_result":I
    :pswitch_21
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1883
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btEndNoSigRxTest()Ljava/util/ArrayList;

    move-result-object v0

    .line 1884
    .local v0, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1885
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32Vector(Ljava/util/ArrayList;)V

    .line 1886
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1887
    goto/16 :goto_1

    .line 1866
    .end local v0    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    :pswitch_22
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1868
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 1869
    .local v0, "pattern":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 1870
    .local v1, "pockettype":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v2

    .line 1871
    .local v2, "freq":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v3

    .line 1872
    .local v3, "address":I
    invoke-virtual {v8, v0, v1, v2, v3}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btStartNoSigRxTest(IIII)Z

    move-result v4

    .line 1873
    .local v4, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1874
    invoke-virtual {v10, v4}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1875
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1876
    goto/16 :goto_1

    .line 1854
    .end local v0    # "pattern":I
    .end local v1    # "pockettype":I
    .end local v2    # "freq":I
    .end local v3    # "address":I
    .end local v4    # "_hidl_out_success":Z
    :pswitch_23
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1856
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 1857
    .local v0, "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btHciCommandRun(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v1

    .line 1858
    .local v1, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1859
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 1860
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1861
    goto/16 :goto_1

    .line 1836
    .end local v0    # "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v1    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :pswitch_24
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1838
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v12

    .line 1839
    .local v12, "kind":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v13

    .line 1840
    .local v13, "pattern":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v14

    .line 1841
    .local v14, "channel":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v15

    .line 1842
    .local v15, "pocketType":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v16

    .line 1843
    .local v16, "pocketTypeLen":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v17

    .line 1844
    .local v17, "freq":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v18

    .line 1845
    .local v18, "power":I
    move-object/from16 v0, p0

    move v1, v12

    move v2, v13

    move v3, v14

    move v4, v15

    move/from16 v5, v16

    move/from16 v6, v17

    move/from16 v7, v18

    invoke-virtual/range {v0 .. v7}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btDoTest(IIIIIII)I

    move-result v0

    .line 1846
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1847
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1848
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1849
    goto/16 :goto_1

    .line 1825
    .end local v0    # "_hidl_out_result":I
    .end local v12    # "kind":I
    .end local v13    # "pattern":I
    .end local v14    # "channel":I
    .end local v15    # "pocketType":I
    .end local v16    # "pocketTypeLen":I
    .end local v17    # "freq":I
    .end local v18    # "power":I
    :pswitch_25
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1827
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btUninit()I

    move-result v0

    .line 1828
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1829
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1830
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1831
    goto/16 :goto_1

    .line 1814
    .end local v0    # "_hidl_out_result":I
    :pswitch_26
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1816
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btInit()I

    move-result v0

    .line 1817
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1818
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1819
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1820
    goto/16 :goto_1

    .line 1803
    .end local v0    # "_hidl_out_result":I
    :pswitch_27
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1805
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btIsBLEEnhancedSupport()Z

    move-result v0

    .line 1806
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1807
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1808
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1809
    goto/16 :goto_1

    .line 1792
    .end local v0    # "_hidl_out_success":Z
    :pswitch_28
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1794
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btIsBLESupport()I

    move-result v0

    .line 1795
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1796
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1797
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1798
    goto/16 :goto_1

    .line 1781
    .end local v0    # "_hidl_out_result":I
    :pswitch_29
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1783
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btStopRelayer()I

    move-result v0

    .line 1784
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1785
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1786
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1787
    goto/16 :goto_1

    .line 1768
    .end local v0    # "_hidl_out_result":I
    :pswitch_2a
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1770
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 1771
    .local v0, "port":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 1772
    .local v1, "speed":I
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->btStartRelayer(II)I

    move-result v2

    .line 1773
    .local v2, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1774
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1775
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1776
    goto/16 :goto_1

    .line 1756
    .end local v0    # "port":I
    .end local v1    # "speed":I
    .end local v2    # "_hidl_out_result":I
    :pswitch_2b
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1758
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1759
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setVolteMalPctid(Ljava/lang/String;)Z

    move-result v1

    .line 1760
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1761
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1762
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1763
    goto/16 :goto_1

    .line 1744
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2c
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1746
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1747
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setDsbpSupport(Ljava/lang/String;)Z

    move-result v1

    .line 1748
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1749
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1750
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1751
    goto/16 :goto_1

    .line 1732
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2d
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1734
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1735
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setImsTestMode(Ljava/lang/String;)Z

    move-result v1

    .line 1736
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1737
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1738
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1739
    goto/16 :goto_1

    .line 1720
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2e
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1722
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1723
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setDisableC2kCap(Ljava/lang/String;)Z

    move-result v1

    .line 1724
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1725
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1726
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1727
    goto/16 :goto_1

    .line 1708
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2f
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1710
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1711
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setRadioCapabilitySwitchEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1712
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1713
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1714
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1715
    goto/16 :goto_1

    .line 1696
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_30
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1698
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1699
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setPreferGprsMode(Ljava/lang/String;)Z

    move-result v1

    .line 1700
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1701
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1702
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1703
    goto/16 :goto_1

    .line 1684
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_31
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1686
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1687
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setTestSimCardType(Ljava/lang/String;)Z

    move-result v1

    .line 1688
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1689
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1690
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1691
    goto :goto_1

    .line 1672
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_32
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1674
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1675
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setCtIREngMode(Ljava/lang/String;)Z

    move-result v1

    .line 1676
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1677
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1678
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1679
    goto :goto_1

    .line 1660
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_33
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1662
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1663
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setSmsFormat(Ljava/lang/String;)Z

    move-result v1

    .line 1664
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1665
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1666
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1667
    goto :goto_1

    .line 1647
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_34
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1649
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1650
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v1

    .line 1651
    .local v1, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->sendToServerWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    move-result v2

    .line 1652
    .local v2, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1653
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1654
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1655
    goto :goto_1

    .line 1635
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_35
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1637
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1638
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->sendToServer(Ljava/lang/String;)Z

    move-result v1

    .line 1639
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1640
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1641
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1642
    goto :goto_1

    .line 1624
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_36
    invoke-virtual {v9, v2}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1626
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-static {v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v0

    .line 1627
    .local v0, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->setCallback(Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)V

    .line 1628
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1629
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1630
    nop

    .line 2393
    .end local v0    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_36
        :pswitch_35
        :pswitch_34
        :pswitch_33
        :pswitch_32
        :pswitch_31
        :pswitch_30
        :pswitch_2f
        :pswitch_2e
        :pswitch_2d
        :pswitch_2c
        :pswitch_2b
        :pswitch_2a
        :pswitch_29
        :pswitch_28
        :pswitch_27
        :pswitch_26
        :pswitch_25
        :pswitch_24
        :pswitch_23
        :pswitch_22
        :pswitch_21
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
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

    .line 1575
    return-void
.end method

.method public queryLocalInterface(Ljava/lang/String;)Landroid/os/IHwInterface;
    .locals 1
    .param p1, "descriptor"    # Ljava/lang/String;

    .line 1603
    const-string v0, "vendor.mediatek.hardware.engineermode@1.3::IEmd"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1604
    return-object p0

    .line 1606
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

    .line 1610
    invoke-virtual {p0, p1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->registerService(Ljava/lang/String;)V

    .line 1611
    return-void
.end method

.method public final setHALInstrumentation()V
    .locals 0

    .line 1565
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 1615
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd$Stub;->interfaceDescriptor()Ljava/lang/String;

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

    .line 1597
    const/4 v0, 0x1

    return v0
.end method
