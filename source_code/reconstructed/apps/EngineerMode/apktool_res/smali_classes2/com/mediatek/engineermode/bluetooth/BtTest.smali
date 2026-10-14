.class public Lcom/mediatek/engineermode/bluetooth/BtTest;
.super Ljava/lang/Object;
.source "BtTest.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    }
.end annotation


# static fields
.field static final ANT0_INDEX:I = 0x0

.field static final ANT1_INDEX:I = 0x1

.field private static final ANT_SWAP_RES_LENGTH:I = 0x9

.field private static final TAG:Ljava/lang/String; = "BtTest"

.field private static final TYPE_ANT_SWITCH:I = 0x2

.field private static final TYPE_DO_TX_ONLY:I = 0x0

.field private static final TYPE_ENABLE_TEST_MODE:I = 0x1

.field private static final VALUE_NOT_USE:I = -0x1


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method checkInitState(Landroid/bluetooth/BluetoothAdapter;Landroid/content/Context;)Z
    .locals 8
    .param p1, "adapter"    # Landroid/bluetooth/BluetoothAdapter;
    .param p2, "context"    # Landroid/content/Context;

    .line 337
    const/4 v0, 0x0

    const/4 v1, 0x1

    if-nez p1, :cond_0

    .line 338
    const v2, 0x7f0a01ae

    invoke-static {p2, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 339
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 340
    return v0

    .line 342
    :cond_0
    invoke-virtual {p1}, Landroid/bluetooth/BluetoothAdapter;->getState()I

    move-result v2

    .line 343
    .local v2, "btState":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "btState:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "BtTest"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    const/16 v3, 0xa

    if-eq v2, v3, :cond_1

    .line 345
    const v3, 0x7f0a01d2

    invoke-static {p2, v3, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 346
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 347
    return v0

    .line 350
    :cond_1
    invoke-virtual {p1}, Landroid/bluetooth/BluetoothAdapter;->getLeState()I

    move-result v5

    .line 351
    .local v5, "bleState":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "bleState:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 352
    if-eq v5, v3, :cond_2

    .line 353
    const v3, 0x7f0a01d1

    invoke-static {p2, v3, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 354
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 355
    return v0

    .line 357
    :cond_2
    return v1
.end method

.method public doTxOnlyTest(IIIII)Z
    .locals 9
    .param p1, "pattern"    # I
    .param p2, "channel"    # I
    .param p3, "pocketType"    # I
    .param p4, "pocketTypeLen"    # I
    .param p5, "freq"    # I

    .line 162
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v8, -0x1

    move v3, p1

    move v4, p2

    move v5, p3

    move v6, p4

    move v7, p5

    invoke-interface/range {v1 .. v8}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btDoTest(IIIIIII)I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    .line 164
    :catch_0
    move-exception v1

    .line 165
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 166
    return v0
.end method

.method enableTestMode(I)Z
    .locals 9
    .param p1, "power"    # I

    .line 141
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const/4 v2, 0x1

    const/4 v4, -0x1

    const/4 v5, -0x1

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    move v3, p1

    invoke-interface/range {v1 .. v8}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btDoTest(IIIIIII)I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    .line 143
    :catch_0
    move-exception v1

    .line 144
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 145
    return v0
.end method

.method getAntNum()I
    .locals 5

    .line 292
    const/4 v0, 0x1

    .line 293
    .local v0, "antNum":I
    const/4 v1, 0x5

    new-array v1, v1, [C

    fill-array-data v1, :array_0

    .line 294
    .local v1, "cmd":[C
    array-length v2, v1

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    move-result-object v2

    .line 295
    .local v2, "res":[C
    if-eqz v2, :cond_0

    array-length v3, v2

    const/16 v4, 0x9

    if-lt v3, v4, :cond_0

    .line 296
    const/16 v3, 0x8

    aget-char v0, v2, v3

    .line 298
    :cond_0
    return v0

    :array_0
    .array-data 2
        0x1s
        0x94s
        0xfds
        0x1s
        0x0s
    .end array-data
.end method

.method hciCommandRun([CI)[C
    .locals 8
    .param p1, "hciCmd"    # [C
    .param p2, "cmdLength"    # I

    .line 214
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 215
    .local v0, "input":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-char v3, p1, v2

    .line 216
    .local v3, "cmdByte":C
    int-to-byte v4, v3

    invoke-static {v4}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 215
    .end local v3    # "cmdByte":C
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 218
    :cond_0
    const/4 v1, 0x0

    .line 220
    .local v1, "result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v2

    invoke-interface {v2, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btHciCommandRun(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v2
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v2

    .line 224
    nop

    .line 226
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v2

    .line 227
    .local v2, "size":I
    new-array v3, v2, [C

    .line 228
    .local v3, "data":[C
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_1
    if-ge v4, v2, :cond_1

    .line 229
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "result.get(i):"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "BtTest"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "result.after:"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Byte;

    invoke-virtual {v7}, Ljava/lang/Byte;->byteValue()B

    move-result v7

    and-int/lit16 v7, v7, 0xff

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 231
    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Byte;

    invoke-virtual {v5}, Ljava/lang/Byte;->byteValue()B

    move-result v5

    and-int/lit16 v5, v5, 0xff

    int-to-char v5, v5

    aput-char v5, v3, v4

    .line 228
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 233
    .end local v4    # "i":I
    :cond_1
    return-object v3

    .line 221
    .end local v2    # "size":I
    .end local v3    # "data":[C
    :catch_0
    move-exception v2

    .line 222
    .local v2, "e":Landroid/os/RemoteException;
    invoke-virtual {v2}, Landroid/os/RemoteException;->printStackTrace()V

    .line 223
    const/4 v3, 0x0

    return-object v3
.end method

.method public init()Z
    .locals 2

    .line 100
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btInit()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    .line 101
    :catch_0
    move-exception v1

    .line 102
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 103
    return v0
.end method

.method isBLEEnhancedSupport()Z
    .locals 2

    .line 131
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btIsBLEEnhancedSupport()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 132
    :catch_0
    move-exception v0

    .line 133
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 134
    const/4 v1, 0x0

    return v1
.end method

.method isBLESupport()Z
    .locals 3

    .line 116
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btIsBLESupport()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    move v0, v2

    :cond_0
    return v0

    .line 117
    :catch_0
    move-exception v1

    .line 118
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 119
    return v0
.end method

.method isComboSupport()Z
    .locals 3

    .line 255
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btIsComboSupport()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    move v0, v2

    :cond_0
    return v0

    .line 256
    :catch_0
    move-exception v1

    .line 257
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 258
    return v0
.end method

.method noSigRxTestResult()[I
    .locals 5

    .line 183
    const/4 v0, 0x0

    .line 185
    .local v0, "result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btEndNoSigRxTest()Ljava/util/ArrayList;

    move-result-object v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    .line 189
    nop

    .line 191
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 192
    .local v1, "size":I
    new-array v2, v1, [I

    .line 193
    .local v2, "data":[I
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_0

    .line 194
    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    aput v4, v2, v3

    .line 193
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 196
    .end local v3    # "i":I
    :cond_0
    return-object v2

    .line 186
    .end local v1    # "size":I
    .end local v2    # "data":[I
    :catch_0
    move-exception v1

    .line 187
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 188
    const/4 v2, 0x0

    return-object v2
.end method

.method noSigRxTestStart(IIII)Z
    .locals 2
    .param p1, "nPatternIdx"    # I
    .param p2, "nPocketTypeIdx"    # I
    .param p3, "nFreq"    # I
    .param p4, "nAddress"    # I

    .line 173
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3, p4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btStartNoSigRxTest(IIII)Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 175
    :catch_0
    move-exception v0

    .line 176
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 177
    const/4 v1, 0x0

    return v1
.end method

.method public pollingStart()I
    .locals 2

    .line 269
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btPollingStart()I

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 270
    :catch_0
    move-exception v0

    .line 271
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 272
    const/4 v1, -0x1

    return v1
.end method

.method public pollingStop()I
    .locals 2

    .line 283
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btPollingStop()I

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 284
    :catch_0
    move-exception v0

    .line 285
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 286
    const/4 v1, -0x1

    return v1
.end method

.method public runHCIResetCmd()V
    .locals 7

    .line 242
    const/4 v0, 0x4

    .line 243
    .local v0, "cmdLen":I
    new-array v1, v0, [C

    .line 245
    .local v1, "cmd":[C
    const/4 v2, 0x0

    .line 246
    .local v2, "i":I
    const/4 v3, 0x0

    const/4 v4, 0x1

    aput-char v4, v1, v3

    .line 247
    const/4 v5, 0x3

    aput-char v5, v1, v4

    .line 248
    const/4 v4, 0x2

    const/16 v6, 0xc

    aput-char v6, v1, v4

    .line 249
    aput-char v3, v1, v5

    .line 250
    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    .line 251
    return-void
.end method

.method startRelayerMode(II)Z
    .locals 2
    .param p1, "port"    # I
    .param p2, "baudrate"    # I

    .line 315
    const/4 v0, 0x1

    .line 317
    .local v0, "result":Z
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btStartRelayer(II)I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    move v0, v1

    .line 321
    goto :goto_1

    .line 318
    :catch_0
    move-exception v1

    .line 319
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 320
    const/4 v0, 0x0

    .line 322
    .end local v1    # "e":Landroid/os/RemoteException;
    :goto_1
    return v0
.end method

.method stopRelayerMode()Z
    .locals 2

    .line 326
    const/4 v0, 0x1

    .line 328
    .local v0, "result":Z
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btStopRelayer()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    move v0, v1

    .line 332
    goto :goto_1

    .line 329
    :catch_0
    move-exception v1

    .line 330
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 331
    const/4 v0, 0x0

    .line 333
    .end local v1    # "e":Landroid/os/RemoteException;
    :goto_1
    return v0
.end method

.method switchAnt(IZ)Z
    .locals 10
    .param p1, "index"    # I
    .param p2, "inTestProcess"    # Z

    .line 302
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "index:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " inTestProcess:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 304
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const/4 v2, 0x2

    .line 305
    const/4 v9, 0x1

    if-eqz p2, :cond_0

    move v4, v0

    goto :goto_0

    :cond_0
    move v4, v9

    :goto_0
    const/4 v5, -0x1

    const/4 v6, -0x1

    const/4 v7, -0x1

    const/4 v8, -0x1

    .line 304
    move v3, p1

    invoke-interface/range {v1 .. v8}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btDoTest(IIIIIII)I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_1

    move v0, v9

    :cond_1
    return v0

    .line 307
    :catch_0
    move-exception v1

    .line 308
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 309
    return v0
.end method

.method public unInit()Z
    .locals 2

    .line 205
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btUninit()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    .line 206
    :catch_0
    move-exception v1

    .line 207
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 208
    return v0
.end method
