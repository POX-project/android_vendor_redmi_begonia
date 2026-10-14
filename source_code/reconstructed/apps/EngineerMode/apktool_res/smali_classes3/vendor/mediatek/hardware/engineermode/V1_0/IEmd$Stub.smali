.class public abstract Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;
.super Landroid/os/HwBinder;
.source "IEmd.java"

# interfaces
.implements Lvendor/mediatek/hardware/engineermode/V1_0/IEmd;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lvendor/mediatek/hardware/engineermode/V1_0/IEmd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1388
    invoke-direct {p0}, Landroid/os/HwBinder;-><init>()V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IHwBinder;
    .locals 0

    .line 1391
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

    .line 1404
    .local p2, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    return-void
.end method

.method public final getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;
    .locals 3

    .line 1441
    new-instance v0, Landroid/hidl/base/V1_0/DebugInfo;

    invoke-direct {v0}, Landroid/hidl/base/V1_0/DebugInfo;-><init>()V

    .line 1442
    .local v0, "info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-static {}, Landroid/os/HidlSupport;->getPidIfSharable()I

    move-result v1

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->pid:I

    .line 1443
    const-wide/16 v1, 0x0

    iput-wide v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->ptr:J

    .line 1444
    const/4 v1, 0x0

    iput v1, v0, Landroid/hidl/base/V1_0/DebugInfo;->arch:I

    .line 1445
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

    .line 1416
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

    .line 1396
    new-instance v0, Ljava/util/ArrayList;

    const-string v1, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

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

    .line 1410
    const-string v0, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    return-object v0
.end method

.method public final linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z
    .locals 1
    .param p1, "recipient"    # Landroid/os/IHwBinder$DeathRecipient;
    .param p2, "cookie"    # J

    .line 1429
    const/4 v0, 0x1

    return v0
.end method

.method public final notifySyspropsChanged()V
    .locals 0

    .line 1451
    invoke-static {}, Landroid/os/HwBinder;->enableInstrumentation()V

    .line 1453
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

    .line 1481
    move-object/from16 v8, p0

    move-object/from16 v9, p2

    move-object/from16 v10, p3

    const-string v0, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    const/4 v11, 0x0

    packed-switch p1, :pswitch_data_0

    const-string v0, "android.hidl.base@1.0::IBase"

    sparse-switch p1, :sswitch_data_0

    goto/16 :goto_1

    .line 2128
    :sswitch_0
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2130
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->notifySyspropsChanged()V

    .line 2131
    goto/16 :goto_1

    .line 2117
    :sswitch_1
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2119
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->getDebugInfo()Landroid/hidl/base/V1_0/DebugInfo;

    move-result-object v0

    .line 2120
    .local v0, "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2121
    invoke-virtual {v0, v10}, Landroid/hidl/base/V1_0/DebugInfo;->writeToParcel(Landroid/os/HwParcel;)V

    .line 2122
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2123
    goto/16 :goto_1

    .line 2107
    .end local v0    # "_hidl_out_info":Landroid/hidl/base/V1_0/DebugInfo;
    :sswitch_2
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2109
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->ping()V

    .line 2110
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2111
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2112
    goto/16 :goto_1

    .line 2094
    :sswitch_3
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2096
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setHALInstrumentation()V

    .line 2097
    goto/16 :goto_1

    .line 2060
    :sswitch_4
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2062
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->getHashChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 2063
    .local v0, "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2065
    new-instance v1, Landroid/os/HwBlob;

    const/16 v2, 0x10

    invoke-direct {v1, v2}, Landroid/os/HwBlob;-><init>(I)V

    .line 2067
    .local v1, "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    .line 2068
    .local v2, "_hidl_vec_size":I
    const-wide/16 v3, 0x8

    invoke-virtual {v1, v3, v4, v2}, Landroid/os/HwBlob;->putInt32(JI)V

    .line 2069
    const-wide/16 v3, 0xc

    invoke-virtual {v1, v3, v4, v11}, Landroid/os/HwBlob;->putBool(JZ)V

    .line 2070
    new-instance v3, Landroid/os/HwBlob;

    mul-int/lit8 v4, v2, 0x20

    invoke-direct {v3, v4}, Landroid/os/HwBlob;-><init>(I)V

    .line 2071
    .local v3, "childBlob":Landroid/os/HwBlob;
    const/4 v4, 0x0

    .local v4, "_hidl_index_0":I
    :goto_0
    if-ge v4, v2, :cond_1

    .line 2073
    mul-int/lit8 v5, v4, 0x20

    int-to-long v5, v5

    .line 2074
    .local v5, "_hidl_array_offset_1":J
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [B

    .line 2076
    .local v7, "_hidl_array_item_1":[B
    if-eqz v7, :cond_0

    array-length v11, v7

    const/16 v12, 0x20

    if-ne v11, v12, :cond_0

    .line 2080
    invoke-virtual {v3, v5, v6, v7}, Landroid/os/HwBlob;->putInt8Array(J[B)V

    .line 2081
    nop

    .line 2071
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 2077
    .restart local v5    # "_hidl_array_offset_1":J
    .restart local v7    # "_hidl_array_item_1":[B
    :cond_0
    new-instance v11, Ljava/lang/IllegalArgumentException;

    const-string v12, "Array element is not of the expected length"

    invoke-direct {v11, v12}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v11

    .line 2084
    .end local v4    # "_hidl_index_0":I
    .end local v5    # "_hidl_array_offset_1":J
    .end local v7    # "_hidl_array_item_1":[B
    :cond_1
    const-wide/16 v4, 0x0

    invoke-virtual {v1, v4, v5, v3}, Landroid/os/HwBlob;->putBlob(JLandroid/os/HwBlob;)V

    .line 2086
    .end local v2    # "_hidl_vec_size":I
    .end local v3    # "childBlob":Landroid/os/HwBlob;
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBuffer(Landroid/os/HwBlob;)V

    .line 2088
    .end local v1    # "_hidl_blob":Landroid/os/HwBlob;
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2089
    goto/16 :goto_1

    .line 2049
    .end local v0    # "_hidl_out_hashchain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[B>;"
    :sswitch_5
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2051
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->interfaceDescriptor()Ljava/lang/String;

    move-result-object v0

    .line 2052
    .local v0, "_hidl_out_descriptor":Ljava/lang/String;
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2053
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeString(Ljava/lang/String;)V

    .line 2054
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2055
    goto/16 :goto_1

    .line 2037
    .end local v0    # "_hidl_out_descriptor":Ljava/lang/String;
    :sswitch_6
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2039
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readNativeHandle()Landroid/os/NativeHandle;

    move-result-object v0

    .line 2040
    .local v0, "fd":Landroid/os/NativeHandle;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStringVector()Ljava/util/ArrayList;

    move-result-object v1

    .line 2041
    .local v1, "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->debug(Landroid/os/NativeHandle;Ljava/util/ArrayList;)V

    .line 2042
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2043
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2044
    goto/16 :goto_1

    .line 2026
    .end local v0    # "fd":Landroid/os/NativeHandle;
    .end local v1    # "options":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :sswitch_7
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2028
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->interfaceChain()Ljava/util/ArrayList;

    move-result-object v0

    .line 2029
    .local v0, "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2030
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeStringVector(Ljava/util/ArrayList;)V

    .line 2031
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2032
    goto/16 :goto_1

    .line 2013
    .end local v0    # "_hidl_out_descriptors":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :pswitch_0
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2015
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 2016
    .local v0, "data":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v1

    .line 2017
    .local v1, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->getFilePathListWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    move-result v2

    .line 2018
    .local v2, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2019
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2020
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2021
    goto/16 :goto_1

    .line 2002
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_1
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 2004
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->clearItemsforRsc()Z

    move-result v0

    .line 2005
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 2006
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 2007
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 2008
    goto/16 :goto_1

    .line 1990
    .end local v0    # "_hidl_out_success":Z
    :pswitch_2
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1992
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1993
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setMoms(Ljava/lang/String;)Z

    move-result v1

    .line 1994
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1995
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1996
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1997
    goto/16 :goto_1

    .line 1978
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_3
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1980
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1981
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setBypassService(Ljava/lang/String;)Z

    move-result v1

    .line 1982
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1983
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1984
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1985
    goto/16 :goto_1

    .line 1966
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_4
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1968
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1969
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setBypassDis(Ljava/lang/String;)Z

    move-result v1

    .line 1970
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1971
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1972
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1973
    goto/16 :goto_1

    .line 1954
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_5
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1956
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1957
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setBypassEn(Ljava/lang/String;)Z

    move-result v1

    .line 1958
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1959
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1960
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1961
    goto/16 :goto_1

    .line 1942
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_6
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1944
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1945
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setEmUsbType(Ljava/lang/String;)Z

    move-result v1

    .line 1946
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1947
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1948
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1949
    goto/16 :goto_1

    .line 1930
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_7
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1932
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1933
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setEmUsbValue(Ljava/lang/String;)Z

    move-result v1

    .line 1934
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1935
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1936
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1937
    goto/16 :goto_1

    .line 1918
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_8
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1920
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1921
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setUsbOtgSwitch(Ljava/lang/String;)Z

    move-result v1

    .line 1922
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1923
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1924
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1925
    goto/16 :goto_1

    .line 1906
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_9
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1908
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1909
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setUsbPort(Ljava/lang/String;)Z

    move-result v1

    .line 1910
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1911
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1912
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1913
    goto/16 :goto_1

    .line 1893
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_a
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1895
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1896
    .local v0, "keyword":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v1

    .line 1897
    .local v1, "filepath":Ljava/lang/String;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->genMdLogFilter(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    .line 1898
    .restart local v2    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1899
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1900
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1901
    goto/16 :goto_1

    .line 1881
    .end local v0    # "keyword":Ljava/lang/String;
    .end local v1    # "filepath":Ljava/lang/String;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_b
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1883
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1884
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setModemWarningEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1885
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1886
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1887
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1888
    goto/16 :goto_1

    .line 1869
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_c
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1871
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1872
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setVencDriverLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1873
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1874
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1875
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1876
    goto/16 :goto_1

    .line 1857
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_d
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1859
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1860
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setOmxCoreLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1861
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1862
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1863
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1864
    goto/16 :goto_1

    .line 1845
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_e
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1847
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1848
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setSvpLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1849
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1850
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1851
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1852
    goto/16 :goto_1

    .line 1833
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_f
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1835
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1836
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setVdecDriverLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1837
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1838
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1839
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1840
    goto/16 :goto_1

    .line 1821
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_10
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1823
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1824
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setOmxVdecLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1825
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1826
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1827
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1828
    goto/16 :goto_1

    .line 1809
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_11
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1811
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1812
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setOmxVencLogEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1813
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1814
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1815
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1816
    goto/16 :goto_1

    .line 1797
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_12
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1799
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1800
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setWcnCoreDump(Ljava/lang/String;)Z

    move-result v1

    .line 1801
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1802
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1803
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1804
    goto/16 :goto_1

    .line 1785
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_13
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1787
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1788
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setMdResetDelay(Ljava/lang/String;)Z

    move-result v1

    .line 1789
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1790
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1791
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1792
    goto/16 :goto_1

    .line 1774
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_14
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1776
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btPollingStop()I

    move-result v0

    .line 1777
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1778
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1779
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1780
    goto/16 :goto_1

    .line 1763
    .end local v0    # "_hidl_out_result":I
    :pswitch_15
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1765
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btPollingStart()I

    move-result v0

    .line 1766
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1767
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1768
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1769
    goto/16 :goto_1

    .line 1752
    .end local v0    # "_hidl_out_result":I
    :pswitch_16
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1754
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btIsComboSupport()I

    move-result v0

    .line 1755
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1756
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1757
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1758
    goto/16 :goto_1

    .line 1741
    .end local v0    # "_hidl_out_result":I
    :pswitch_17
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1743
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btEndNoSigRxTest()Ljava/util/ArrayList;

    move-result-object v0

    .line 1744
    .local v0, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1745
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32Vector(Ljava/util/ArrayList;)V

    .line 1746
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1747
    goto/16 :goto_1

    .line 1726
    .end local v0    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    :pswitch_18
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1728
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 1729
    .local v0, "pattern":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 1730
    .local v1, "pockettype":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v2

    .line 1731
    .local v2, "freq":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v3

    .line 1732
    .local v3, "address":I
    invoke-virtual {v8, v0, v1, v2, v3}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btStartNoSigRxTest(IIII)Z

    move-result v4

    .line 1733
    .local v4, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1734
    invoke-virtual {v10, v4}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1735
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1736
    goto/16 :goto_1

    .line 1714
    .end local v0    # "pattern":I
    .end local v1    # "pockettype":I
    .end local v2    # "freq":I
    .end local v3    # "address":I
    .end local v4    # "_hidl_out_success":Z
    :pswitch_19
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1716
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt8Vector()Ljava/util/ArrayList;

    move-result-object v0

    .line 1717
    .local v0, "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btHciCommandRun(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v1

    .line 1718
    .local v1, "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1719
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeInt8Vector(Ljava/util/ArrayList;)V

    .line 1720
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1721
    goto/16 :goto_1

    .line 1696
    .end local v0    # "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v1    # "_hidl_out_result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :pswitch_1a
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1698
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v12

    .line 1699
    .local v12, "kind":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v13

    .line 1700
    .local v13, "pattern":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v14

    .line 1701
    .local v14, "channel":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v15

    .line 1702
    .local v15, "pocketType":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v16

    .line 1703
    .local v16, "pocketTypeLen":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v17

    .line 1704
    .local v17, "freq":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v18

    .line 1705
    .local v18, "power":I
    move-object/from16 v0, p0

    move v1, v12

    move v2, v13

    move v3, v14

    move v4, v15

    move/from16 v5, v16

    move/from16 v6, v17

    move/from16 v7, v18

    invoke-virtual/range {v0 .. v7}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btDoTest(IIIIIII)I

    move-result v0

    .line 1706
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1707
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1708
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1709
    goto/16 :goto_1

    .line 1685
    .end local v0    # "_hidl_out_result":I
    .end local v12    # "kind":I
    .end local v13    # "pattern":I
    .end local v14    # "channel":I
    .end local v15    # "pocketType":I
    .end local v16    # "pocketTypeLen":I
    .end local v17    # "freq":I
    .end local v18    # "power":I
    :pswitch_1b
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1687
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btUninit()I

    move-result v0

    .line 1688
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1689
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1690
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1691
    goto/16 :goto_1

    .line 1674
    .end local v0    # "_hidl_out_result":I
    :pswitch_1c
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1676
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btInit()I

    move-result v0

    .line 1677
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1678
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1679
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1680
    goto/16 :goto_1

    .line 1663
    .end local v0    # "_hidl_out_result":I
    :pswitch_1d
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1665
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btIsBLEEnhancedSupport()Z

    move-result v0

    .line 1666
    .local v0, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1667
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1668
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1669
    goto/16 :goto_1

    .line 1652
    .end local v0    # "_hidl_out_success":Z
    :pswitch_1e
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1654
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btIsBLESupport()I

    move-result v0

    .line 1655
    .local v0, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1656
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1657
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1658
    goto/16 :goto_1

    .line 1641
    .end local v0    # "_hidl_out_result":I
    :pswitch_1f
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1643
    invoke-virtual/range {p0 .. p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btStopRelayer()I

    move-result v0

    .line 1644
    .restart local v0    # "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1645
    invoke-virtual {v10, v0}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1646
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1647
    goto/16 :goto_1

    .line 1628
    .end local v0    # "_hidl_out_result":I
    :pswitch_20
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1630
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v0

    .line 1631
    .local v0, "port":I
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readInt32()I

    move-result v1

    .line 1632
    .local v1, "speed":I
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->btStartRelayer(II)I

    move-result v2

    .line 1633
    .local v2, "_hidl_out_result":I
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1634
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeInt32(I)V

    .line 1635
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1636
    goto/16 :goto_1

    .line 1616
    .end local v0    # "port":I
    .end local v1    # "speed":I
    .end local v2    # "_hidl_out_result":I
    :pswitch_21
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1618
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1619
    .local v0, "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setVolteMalPctid(Ljava/lang/String;)Z

    move-result v1

    .line 1620
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1621
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1622
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1623
    goto/16 :goto_1

    .line 1604
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_22
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1606
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1607
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setDsbpSupport(Ljava/lang/String;)Z

    move-result v1

    .line 1608
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1609
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1610
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1611
    goto/16 :goto_1

    .line 1592
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_23
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1594
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1595
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setImsTestMode(Ljava/lang/String;)Z

    move-result v1

    .line 1596
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1597
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1598
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1599
    goto/16 :goto_1

    .line 1580
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_24
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1582
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1583
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setDisableC2kCap(Ljava/lang/String;)Z

    move-result v1

    .line 1584
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1585
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1586
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1587
    goto/16 :goto_1

    .line 1568
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_25
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1570
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1571
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setRadioCapabilitySwitchEnable(Ljava/lang/String;)Z

    move-result v1

    .line 1572
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1573
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1574
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1575
    goto/16 :goto_1

    .line 1556
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_26
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1558
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1559
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setPreferGprsMode(Ljava/lang/String;)Z

    move-result v1

    .line 1560
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1561
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1562
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1563
    goto/16 :goto_1

    .line 1544
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_27
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1546
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1547
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setTestSimCardType(Ljava/lang/String;)Z

    move-result v1

    .line 1548
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1549
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1550
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1551
    goto :goto_1

    .line 1532
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_28
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1534
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1535
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setCtIREngMode(Ljava/lang/String;)Z

    move-result v1

    .line 1536
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1537
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1538
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1539
    goto :goto_1

    .line 1520
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_29
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1522
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1523
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setSmsFormat(Ljava/lang/String;)Z

    move-result v1

    .line 1524
    .restart local v1    # "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1525
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1526
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1527
    goto :goto_1

    .line 1507
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2a
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1509
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1510
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v1

    invoke-static {v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v1

    .line 1511
    .local v1, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->sendToServerWithCallBack(Ljava/lang/String;Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)Z

    move-result v2

    .line 1512
    .local v2, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1513
    invoke-virtual {v10, v2}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1514
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1515
    goto :goto_1

    .line 1495
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .end local v2    # "_hidl_out_success":Z
    :pswitch_2b
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1497
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 1498
    .restart local v0    # "data":Ljava/lang/String;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->sendToServer(Ljava/lang/String;)Z

    move-result v1

    .line 1499
    .local v1, "_hidl_out_success":Z
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1500
    invoke-virtual {v10, v1}, Landroid/os/HwParcel;->writeBool(Z)V

    .line 1501
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1502
    goto :goto_1

    .line 1484
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "_hidl_out_success":Z
    :pswitch_2c
    invoke-virtual {v9, v0}, Landroid/os/HwParcel;->enforceInterface(Ljava/lang/String;)V

    .line 1486
    invoke-virtual/range {p2 .. p2}, Landroid/os/HwParcel;->readStrongBinder()Landroid/os/IHwBinder;

    move-result-object v0

    invoke-static {v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;->asInterface(Landroid/os/IHwBinder;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    move-result-object v0

    .line 1487
    .local v0, "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    invoke-virtual {v8, v0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->setCallback(Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;)V

    .line 1488
    invoke-virtual {v10, v11}, Landroid/os/HwParcel;->writeStatus(I)V

    .line 1489
    invoke-virtual/range {p3 .. p3}, Landroid/os/HwParcel;->send()V

    .line 1490
    nop

    .line 2140
    .end local v0    # "callback":Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
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

    .line 1435
    return-void
.end method

.method public queryLocalInterface(Ljava/lang/String;)Landroid/os/IHwInterface;
    .locals 1
    .param p1, "descriptor"    # Ljava/lang/String;

    .line 1463
    const-string v0, "vendor.mediatek.hardware.engineermode@1.0::IEmd"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1464
    return-object p0

    .line 1466
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

    .line 1470
    invoke-virtual {p0, p1}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->registerService(Ljava/lang/String;)V

    .line 1471
    return-void
.end method

.method public final setHALInstrumentation()V
    .locals 0

    .line 1425
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 1475
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmd$Stub;->interfaceDescriptor()Ljava/lang/String;

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

    .line 1457
    const/4 v0, 0x1

    return v0
.end method
