.class public abstract Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;
.super Landroid/os/HwBinder;
.source "IEmd.java"

# interfaces
.implements Lvendor/mediatek/hardware/engineermode/V1_1/IEmd;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lvendor/mediatek/hardware/engineermode/V1_1/IEmd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1322
    invoke-direct {p0}, Landroid/os/HwBinder;-><init>()V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IHwBinder;
    .locals 0

    .line 1325
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

    .line 1339
    .local p2, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    return-void
.end method

.method public final getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;
    .locals 3

    .line 1377
    new-instance v0, Landroid/hidl/base/V1_0/DebugInfo;

    invoke-direct {v0}, Landroid/hidl/base/V1_0/DebugInfo;-><init>()V

    .line 1378
    .local v0, "info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-static {}, Landroid/os/HidlSupport;->getPidIfSharable()I

    move-result v1

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->pid:I

    .line 1379
    const-wide/16 v1, 0x0

    iput-wide v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->ptr:J

    .line 1380
    const/4 v1, 0x0

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->arch:I

    .line 1381
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

    .line 1351
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x3

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

    new-array v2, v2, [B

    fill-array-data v2, :array_2

    const/4 v3, 0x2

    aput-object v2, v1, v3

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0

    nop

    :array_0
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

    :array_1
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

    :array_2
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
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1330
    new-instance v0, Ljava/util/ArrayList;

    const-string v1, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    const-string v2, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    const-string v3, "android.hidl.base@1.0::IBase"

    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method

.method public final interfaceDescriptor()Ljava/lang/String;
    .locals 1

    .line 1345
    const-string v0, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    return-object v0
.end method

.method public final linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .param p2, "cookie"    # J

    .line 1365
    const/4 v0, 0x1

    return v0
.end method

.method public final notifySyspropsChanged()V
    .locals 0

    .line 1387
    invoke-static {}, Landroid/os/HwBinder;->enableInstrumentation()V

    .line 1389
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

    .line 1417
    move-object/from16 v8, p0

    move-object/from16 v9, p2

    move-object/from16 v10, p3

    const-string v0, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    const/4 v11, 0x0

    packed-switch p1, :pswitch_data_0

    const-string v0, "android.hidl.base@1.0::IBase"

    sparse-switch p1, :sswitch_data_0

    goto/16 :goto_1

    .line 2077
    :sswitch_0
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2079
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->notifySyspropsChanged()V

    .line 2080
    goto/16 :goto_1

    .line 2066
    :sswitch_1
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2068
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;

    move-result-object v0

    .line 2069
    .local v0, "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2070
    invoke-virtual {v0, v10}, Landroid/hidl/base/V1_0/DebugInfo;->writeToParcel(Landroid/os/HwParcel;)V

    .line 2071
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2072
    goto/16 :goto_1

    .line 2056
    .end local v0    # "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    :sswitch_2
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2058
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->ping()V

    .line 2059
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2060
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2061
    goto/16 :goto_1

    .line 2043
    :sswitch_3
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2045
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setHALInstrumentation()V

    .line 2046
    goto/16 :goto_1

    .line 2009
    :sswitch_4
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2011
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->getHashChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 2012
    .local v0, "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2014
    new-instance v1, Landroid/os/HwBlob;

    const/16 v2, 0x10

    invoke-direct {v1, v2}, Landroid/os/HwBlob;-><init>(I)V

    .line 2016
    .local v1, "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    .line 2017
    .local v2, "_hidl_vec_size":I
    const-wide/16 v3, 0x8

    invoke-virtual {v1, v3, v4, v2}, Landroid/os/HwBlob;->putInt32(JI)V

    .line 2018
    const-wide/16 v3, 0xc

    invoke-virtual {v1, v3, v4, v11}, Landroid/os/HwBlob;->putBool(JZ)V

    .line 2019
    new-instance v3, Landroid/os/HwBlob;

    mul-int/lit8 v4, v2, 0x20

    invoke-direct {v3, v4}, Landroid/os/HwBlob;-><init>(I)V

    .line 2020
    .local v3, "childBlob":Landroid/os/HwBlob;
    const/4 v4, 0x0

    .local v4, "_hidl_index_0":I
    :goto_0
    if-ge v4, v2, :cond_1

    .line 2022
    mul-int/lit8 v5, v4, 0x20

    int-to-long v5, v5

    .line 2023
    .local v5, "_hidl_array_offset_1":J
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [B

    .line 2025
    .local v7, "_hidl_array_item_1":[B
    if-eqz v7, :cond_0

    array-length v11, v7

    const/16 v12, 0x20

    if-ne v11, v12, :cond_0

    .line 2029
    invoke-virtual {v3, v5, v6, v7}, Landroid/os/HwBlob;->putInt8Array(J[B)V

    .line 2030
    nop

    .line 2020
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 2026
    .restart local v5    # "_hidl_array_offset_1":J
    .restart local v7    # "_hidl_array_item_1":[B
    :cond_0
    new-instance v11, Ljava/lang/IllegalArgumentException;

    const-string v12, "Array element is not of the expected length"

    invoke-direct {v11, v12}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v11

    .line 2033
    .end local v4    # "_hidl_index_0":I
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    :cond_1
    const-wide/16 v4, 0x0

    invoke-virtual {v1, v4, v5, v3}, Landroid/os/HwBlob;->putBlob(JLandroid/os/HwBlob;)V

    .line 2035
    .end local v2    # "_hidl_vec_size":I
    .end local v3    # "childBlob":Landroid/os/HwBlob;
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBuffer(Landroid/os/HwBlob;)V

    .line 2037
    .end local v1    # "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2038
    goto/16 :goto_1

    .line 1998
    .end local v0    # "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    :sswitch_5
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2000
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v0

    .line 2001
    .local v0, "_hidl_out_descriptor":Ljava/lang/String;
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2002
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 2003
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2004
    goto/16 :goto_1

    .line 1986
    .end local v0    # "_hidl_out_descriptor":Ljava/lang/String;
    :sswitch_6
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1988
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readNativeHandle()Landroid/os/NativeHandle;

    move-result-object v0

    .line 1989
    .local v0, "fd":Landroid/os/NativeHandle;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStringVector()Ljava/util/ArrayList;

    move-result-object v1

    .line 1990
    .local v1, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V

    .line 1991
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1992
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1993
    goto/16 :goto_1

    .line 1975
    .end local v0    # "fd":Landroid/os/NativeHandle;
    .end local v1    # "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :sswitch_7
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1977
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->interfaceChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 1978
    .local v0, "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1979
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeStringVector(Ljava/util/ArrayList;)V

    .line 1980
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1981
    goto/16 :goto_1

    .line 1962
    .end local v0    # "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :pswitch_0
    const-string v0, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1964
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1965
    .local v0, "name":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v1

    .line 1966
    .local v1, "value":Ljava/lang/String;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    .line 1967
    .local v2, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1968
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1969
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1970
    goto/16 :goto_1

    .line 1949
    .end local v0    # "name":Ljava/lang/String;
    .end local v1    # "value":Ljava/lang/String;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_1
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1951
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1952
    .local v0, "data":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v1

    .line 1953
    .local v1, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->getFilePathListWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    move-result v2

    .line 1954
    .restart local v2    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1955
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1956
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1957
    goto/16 :goto_1

    .line 1938
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_2
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1940
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->clearItemsforRsc()Z

    move-result v0

    .line 1941
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1942
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1943
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1944
    goto/16 :goto_1

    .line 1926
    .end local v0    # "_hidl_out_success":Z
    :pswitch_3
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1928
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1929
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setMoms(Ljava/lang/String;)Z

    move-result v1

    .line 1930
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1931
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1932
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1933
    goto/16 :goto_1

    .line 1914
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_4
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1916
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1917
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setBypassService(Ljava/lang/String;)Z

    move-result v1

    .line 1918
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1919
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1920
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1921
    goto/16 :goto_1

    .line 1902
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_5
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1904
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1905
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setBypassDis(Ljava/lang/String;)Z

    move-result v1

    .line 1906
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1907
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1908
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1909
    goto/16 :goto_1

    .line 1890
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_6
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1892
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1893
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setBypassEn(Ljava/lang/String;)Z

    move-result v1

    .line 1894
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1895
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1896
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1897
    goto/16 :goto_1

    .line 1878
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_7
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1880
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1881
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setEmUsbType(Ljava/lang/String;)Z

    move-result v1

    .line 1882
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1883
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1884
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1885
    goto/16 :goto_1

    .line 1866
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_8
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1868
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1869
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setEmUsbValue(Ljava/lang/String;)Z

    move-result v1

    .line 1870
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1871
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1872
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1873
    goto/16 :goto_1

    .line 1854
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_9
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1856
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1857
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setUsbOtgSwitch(Ljava/lang/String;)Z

    move-result v1

    .line 1858
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1859
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1860
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1861
    goto/16 :goto_1

    .line 1842
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_a
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1844
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1845
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setUsbPort(Ljava/lang/String;)Z

    move-result v1

    .line 1846
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1847
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1848
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1849
    goto/16 :goto_1

    .line 1829
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_b
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1831
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1832
    .local v0, "keyword":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v1

    .line 1833
    .local v1, "filepath":Ljava/lang/String;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->genMdLogFilter(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    .line 1834
    .restart local v2    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1835
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1836
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1837
    goto/16 :goto_1

    .line 1817
    .end local v0    # "keyword":Ljava/lang/String;
    .end local v1    # "filepath":Ljava/lang/String;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_c
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1819
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1820
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setModemWarningEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1821
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1822
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1823
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1824
    goto/16 :goto_1

    .line 1805
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_d
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1807
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1808
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setVencDriverLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1809
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1810
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1811
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1812
    goto/16 :goto_1

    .line 1793
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_e
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1795
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1796
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setOmxCoreLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1797
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1798
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1799
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1800
    goto/16 :goto_1

    .line 1781
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_f
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1783
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1784
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setSvpLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1785
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1786
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1787
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1788
    goto/16 :goto_1

    .line 1769
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_10
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1771
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1772
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setVdecDriverLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1773
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1774
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1775
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1776
    goto/16 :goto_1

    .line 1757
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_11
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1759
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1760
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setOmxVdecLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1761
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1762
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1763
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1764
    goto/16 :goto_1

    .line 1745
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_12
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1747
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1748
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setOmxVencLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1749
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1750
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1751
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1752
    goto/16 :goto_1

    .line 1733
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_13
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1735
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1736
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setWcnCoreDump(Ljava/lang/String;)Z

    move-result v1

    .line 1737
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1738
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1739
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1740
    goto/16 :goto_1

    .line 1721
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_14
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1723
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1724
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setMdResetDelay(Ljava/lang/String;)Z

    move-result v1

    .line 1725
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1726
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1727
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1728
    goto/16 :goto_1

    .line 1710
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_15
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1712
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btPollingStop()I

    move-result v0

    .line 1713
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1714
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1715
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1716
    goto/16 :goto_1

    .line 1699
    .end local v0    # "_hidl_out_result":I
    :pswitch_16
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1701
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btPollingStart()I

    move-result v0

    .line 1702
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1703
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1704
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1705
    goto/16 :goto_1

    .line 1688
    .end local v0    # "_hidl_out_result":I
    :pswitch_17
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1690
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btIsComboSupport()I

    move-result v0

    .line 1691
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1692
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1693
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1694
    goto/16 :goto_1

    .line 1677
    .end local v0    # "_hidl_out_result":I
    :pswitch_18
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1679
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btEndNoSigRxTest()Ljava/util/ArrayList;

    move-result-object v0

    .line 1680
    .local v0, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1681
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32Vector(Ljava/util/ArrayList;)V

    .line 1682
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1683
    goto/16 :goto_1

    .line 1662
    .end local v0    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    :pswitch_19
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1664
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 1665
    .local v0, "pattern":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 1666
    .local v1, "pockettype":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v2

    .line 1667
    .local v2, "freq":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v3

    .line 1668
    .local v3, "address":I
    invoke-virtual {v8, v0, v1, v2, v3}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btStartNoSigRxTest(IIII)Z

    move-result v4

    .line 1669
    .local v4, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1670
    invoke-virtual {v10, v4}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1671
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1672
    goto/16 :goto_1

    .line 1650
    .end local v0    # "pattern":I
    .end local v1    # "pockettype":I
    .end local v2    # "freq":I
    .end local v3    # "address":I
    .end local v4    # "_hidl_out_success":Z
    :pswitch_1a
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1652
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 1653
    .local v0, "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btHciCommandRun(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v1

    .line 1654
    .local v1, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1655
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 1656
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1657
    goto/16 :goto_1

    .line 1632
    .end local v0    # "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v1    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :pswitch_1b
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1634
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v12

    .line 1635
    .local v12, "kind":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v13

    .line 1636
    .local v13, "pattern":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v14

    .line 1637
    .local v14, "channel":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v15

    .line 1638
    .local v15, "pocketType":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v16

    .line 1639
    .local v16, "pocketTypeLen":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v17

    .line 1640
    .local v17, "freq":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v18

    .line 1641
    .local v18, "power":I
    move-object/from16 v0, p0

    move v1, v12

    move v2, v13

    move v3, v14

    move v4, v15

    move/from16 v5, v16

    move/from16 v6, v17

    move/from16 v7, v18

    invoke-virtual/range {v0 .. v7}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btDoTest(IIIIIII)I

    move-result v0

    .line 1642
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1643
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1644
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1645
    goto/16 :goto_1

    .line 1621
    .end local v0    # "_hidl_out_result":I
    .end local v12    # "kind":I
    .end local v13    # "pattern":I
    .end local v14    # "channel":I
    .end local v15    # "pocketType":I
    .end local v16    # "pocketTypeLen":I
    .end local v17    # "freq":I
    .end local v18    # "power":I
    :pswitch_1c
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1623
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btUninit()I

    move-result v0

    .line 1624
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1625
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1626
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1627
    goto/16 :goto_1

    .line 1610
    .end local v0    # "_hidl_out_result":I
    :pswitch_1d
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1612
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btInit()I

    move-result v0

    .line 1613
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1614
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1615
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1616
    goto/16 :goto_1

    .line 1599
    .end local v0    # "_hidl_out_result":I
    :pswitch_1e
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1601
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btIsBLEEnhancedSupport()Z

    move-result v0

    .line 1602
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1603
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1604
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1605
    goto/16 :goto_1

    .line 1588
    .end local v0    # "_hidl_out_success":Z
    :pswitch_1f
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1590
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btIsBLESupport()I

    move-result v0

    .line 1591
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1592
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1593
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1594
    goto/16 :goto_1

    .line 1577
    .end local v0    # "_hidl_out_result":I
    :pswitch_20
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1579
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btStopRelayer()I

    move-result v0

    .line 1580
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1581
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1582
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1583
    goto/16 :goto_1

    .line 1564
    .end local v0    # "_hidl_out_result":I
    :pswitch_21
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1566
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 1567
    .local v0, "port":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 1568
    .local v1, "speed":I
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->btStartRelayer(II)I

    move-result v2

    .line 1569
    .local v2, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1570
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1571
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1572
    goto/16 :goto_1

    .line 1552
    .end local v0    # "port":I
    .end local v1    # "speed":I
    .end local v2    # "_hidl_out_result":I
    :pswitch_22
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1554
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1555
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setVolteMalPctid(Ljava/lang/String;)Z

    move-result v1

    .line 1556
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1557
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1558
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1559
    goto/16 :goto_1

    .line 1540
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_23
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1542
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1543
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setDsbpSupport(Ljava/lang/String;)Z

    move-result v1

    .line 1544
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1545
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1546
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1547
    goto/16 :goto_1

    .line 1528
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_24
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1530
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1531
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setImsTestMode(Ljava/lang/String;)Z

    move-result v1

    .line 1532
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1533
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1534
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1535
    goto/16 :goto_1

    .line 1516
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_25
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1518
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1519
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setDisableC2kCap(Ljava/lang/String;)Z

    move-result v1

    .line 1520
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1521
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1522
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1523
    goto/16 :goto_1

    .line 1504
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_26
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1506
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1507
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setRadioCapabilitySwitchEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1508
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1509
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1510
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1511
    goto/16 :goto_1

    .line 1492
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_27
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1494
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1495
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setPreferGprsMode(Ljava/lang/String;)Z

    move-result v1

    .line 1496
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1497
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1498
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1499
    goto/16 :goto_1

    .line 1480
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_28
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1482
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1483
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setTestSimCardType(Ljava/lang/String;)Z

    move-result v1

    .line 1484
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1485
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1486
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1487
    goto :goto_1

    .line 1468
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_29
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1470
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1471
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setCtIREngMode(Ljava/lang/String;)Z

    move-result v1

    .line 1472
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1473
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1474
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1475
    goto :goto_1

    .line 1456
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2a
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1458
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1459
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setSmsFormat(Ljava/lang/String;)Z

    move-result v1

    .line 1460
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1461
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1462
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1463
    goto :goto_1

    .line 1443
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2b
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1445
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1446
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v1

    .line 1447
    .local v1, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->sendToServerWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    move-result v2

    .line 1448
    .local v2, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1449
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1450
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1451
    goto :goto_1

    .line 1431
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_2c
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1433
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1434
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->sendToServer(Ljava/lang/String;)Z

    move-result v1

    .line 1435
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1436
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1437
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1438
    goto :goto_1

    .line 1420
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2d
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1422
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-static {v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v0

    .line 1423
    .local v0, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->setCallback(Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)V

    .line 1424
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1425
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1426
    nop

    .line 2089
    .end local v0    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
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

    .line 1371
    return-void
.end method

.method public queryLocalInterface(Ljava/lang/String;)Landroid/os/IHwInterface;
    .locals 1
    .param p1, "descriptor"    # Ljava/lang/String;

    .line 1399
    const-string v0, "vendor.mediatek.hardware.engineermode@1.1::IEmd"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1400
    return-object p0

    .line 1402
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

    .line 1406
    invoke-virtual {p0, p1}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->registerService(Ljava/lang/String;)V

    .line 1407
    return-void
.end method

.method public final setHALInstrumentation()V
    .locals 0

    .line 1361
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 1411
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lvendor/mediatek/hardware/engineermode/V1_1/IEmd$Stub;->interfaceDescriptor()Ljava/lang/String;

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

    .line 1393
    const/4 v0, 0x1

    return v0
.end method
