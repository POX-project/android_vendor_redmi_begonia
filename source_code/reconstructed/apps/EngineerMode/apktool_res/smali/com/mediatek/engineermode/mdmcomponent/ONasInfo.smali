.class Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field eventAddr:[[I

.field mCauseAddr:[[I

.field mCauseMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mPduStateAddr:[[I

.field mPduStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mStateTypeAddr:[[I

.field mSubstateTypeAddr:[[I

.field restrictDCNRAddr:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 5111
    const-string v0, "type_icd_event"

    const-string v1, "9685"

    const-string v2, "9689"

    const-string v3, "9680"

    const-string v4, "9684"

    const-string v5, "7690"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 6
    .param p1, "context"    # Landroid/app/Activity;

    .line 5159
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5120
    const/4 v0, 0x1

    new-array v1, v0, [[I

    const/4 v2, 0x3

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mStateTypeAddr:[[I

    .line 5124
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_1

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mSubstateTypeAddr:[[I

    .line 5128
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_2

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mCauseAddr:[[I

    .line 5132
    new-array v1, v2, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_3

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_4

    aput-object v3, v1, v0

    new-array v3, v2, [I

    fill-array-data v3, :array_5

    const/4 v5, 0x2

    aput-object v3, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mPduStateAddr:[[I

    .line 5138
    new-array v1, v5, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_7

    aput-object v3, v1, v0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->eventAddr:[[I

    .line 5143
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_8

    aput-object v1, v0, v4

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->restrictDCNRAddr:[[I

    .line 5147
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mPduStateMapping:Ljava/util/HashMap;

    .line 5180
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mCauseMapping:Ljava/util/HashMap;

    .line 5160
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x8
        0x8
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x8
        0x10
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x10
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x10
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x8
        0x8
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x28
        0x10
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x28
        0x10
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x10
        0x8
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5174
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5169
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 5178
    const-string v0, "5GMM State"

    const-string v1, "5GMM Cause"

    const-string v2, "5GSM State"

    const-string v3, "5GSM Cause"

    const-string v4, "RestrictDCNR"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5164
    const-string v0, "Other NAS Information"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5228
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5232
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 5233
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9685"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ", values = "

    const-string v3, ", version = "

    const-string v4, " update,name id = "

    const-string v5, "EmInfo/MDMComponent"

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-eqz v1, :cond_0

    .line 5234
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mStateTypeAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5235
    .local v1, "version":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mStateTypeAddr:[[I

    invoke-virtual {p0, v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 5236
    .local v6, "stateType":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mSubstateTypeAddr:[[I

    invoke-virtual {p0, v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 5237
    .local v8, "substateType":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v9, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5240
    packed-switch v6, :pswitch_data_0

    goto/16 :goto_2

    .line 5303
    :pswitch_0
    const-string v2, "VGmmServiceRequestInitiated"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    goto/16 :goto_2

    .line 5299
    :pswitch_1
    const-string v2, "VGmmDeregisteredInitiated"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5300
    goto/16 :goto_2

    .line 5273
    :pswitch_2
    packed-switch v8, :pswitch_data_1

    goto :goto_0

    .line 5293
    :pswitch_3
    const-string v2, "VGmmRegisteredUpdateNeeded"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    goto :goto_0

    .line 5290
    :pswitch_4
    const-string v2, "VGmmRegisteredNoCellAvailable"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5291
    goto :goto_0

    .line 5287
    :pswitch_5
    const-string v2, "VGmmRegisteredPlmnSearch"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5288
    goto :goto_0

    .line 5284
    :pswitch_6
    const-string v2, "VGmmRegisteredLimitedService"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5285
    goto :goto_0

    .line 5281
    :pswitch_7
    const-string v2, "VGmmRegisteredAttemptingToUpdate"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5282
    goto :goto_0

    .line 5278
    :pswitch_8
    const-string v2, "VGmmRegisteredNonAllowedService"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5279
    goto :goto_0

    .line 5275
    :pswitch_9
    const-string v2, "VGmmRegisteredNormalService"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5276
    nop

    .line 5296
    :goto_0
    goto :goto_2

    .line 5270
    :pswitch_a
    const-string v2, "VGmmRegisteredInitiated"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5271
    goto :goto_2

    .line 5245
    :pswitch_b
    packed-switch v8, :pswitch_data_2

    goto :goto_1

    .line 5265
    :pswitch_c
    const-string v2, "VGmmDeregisteredInitRegNeeded"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    goto :goto_1

    .line 5262
    :pswitch_d
    const-string v2, "VGmmDeregisteredNormalService"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5263
    goto :goto_1

    .line 5259
    :pswitch_e
    const-string v2, "VGmmDeregisteredLimitedService"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5260
    goto :goto_1

    .line 5256
    :pswitch_f
    const-string v2, "VGmmDeregisteredAttemptingRegistrationUpdate"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5257
    goto :goto_1

    .line 5253
    :pswitch_10
    const-string v2, "VGmmDeregisteredNoCellAvailable"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5254
    goto :goto_1

    .line 5250
    :pswitch_11
    const-string v2, "VGmmDeregisteredPlmnSearch"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5251
    goto :goto_1

    .line 5247
    :pswitch_12
    const-string v2, "VGmmDeregisteredNoSupi"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5248
    nop

    .line 5268
    :goto_1
    goto :goto_2

    .line 5242
    :pswitch_13
    const-string v2, "VGmmNull"

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5243
    nop

    .line 5306
    .end local v1    # "version":I
    .end local v6    # "stateType":I
    .end local v8    # "substateType":I
    :goto_2
    goto/16 :goto_4

    :cond_0
    const-string v1, "9689"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 5307
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mStateTypeAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5308
    .restart local v1    # "version":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mCauseAddr:[[I

    invoke-virtual {p0, v0, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v7

    .line 5309
    .local v7, "cause":I
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5312
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mCauseMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5313
    .end local v1    # "version":I
    .end local v7    # "cause":I
    goto/16 :goto_4

    :cond_1
    const-string v1, "9680"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 5314
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mStateTypeAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5315
    .restart local v1    # "version":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mPduStateAddr:[[I

    invoke-virtual {p0, v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 5316
    .local v6, "pduState":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5319
    const/4 v2, 0x2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->mPduStateMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .line 5320
    .end local v1    # "version":I
    .end local v6    # "pduState":I
    goto/16 :goto_4

    :cond_2
    const-string v1, "9684"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 5321
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->eventAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5322
    .restart local v1    # "version":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->eventAddr:[[I

    invoke-virtual {p0, v0, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v6

    .line 5323
    .local v6, "event":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5326
    const/4 v2, 0x3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    .end local v1    # "version":I
    .end local v6    # "event":I
    goto :goto_3

    .line 5327
    :cond_3
    const-string v1, "7690"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 5328
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->restrictDCNRAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5329
    .restart local v1    # "version":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->restrictDCNRAddr:[[I

    invoke-virtual {p0, v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 5330
    .local v6, "restrictDCNR":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5333
    const/4 v2, 0x4

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;->setData(ILjava/lang/Object;)V

    goto :goto_4

    .line 5327
    .end local v1    # "version":I
    .end local v6    # "restrictDCNR":I
    :cond_4
    :goto_3
    nop

    .line 5335
    :goto_4
    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_13
        :pswitch_b
        :pswitch_a
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0x1
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
    .end packed-switch
.end method
