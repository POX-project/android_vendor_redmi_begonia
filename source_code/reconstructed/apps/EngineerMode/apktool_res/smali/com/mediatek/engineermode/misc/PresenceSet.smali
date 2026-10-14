.class public Lcom/mediatek/engineermode/misc/PresenceSet;
.super Landroid/app/Activity;
.source "PresenceSet.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field public static final ACTION_PRESENCE_489_STATE:Ljava/lang/String; = "android.intent.presence.RESET_489_STATE"

.field public static final ACTION_PRESENCE_RESET_ETAG:Ljava/lang/String; = "android.intent.presence.RESET_ETAG"

.field public static final BROADCAST_PERMISSION:Ljava/lang/String; = "com.mediatek.uce.permission.RECEIVE_UCE_EVENT"

.field public static final PRESENCE_SLOT0_SETTINGS_URI:Landroid/net/Uri;

.field public static final PRESENCE_SLOT1_SETTINGS_URI:Landroid/net/Uri;

.field private static TAG:Ljava/lang/String;

.field private static mPresenceSetDataMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final PRESENCE_PACKAGE_NAME:Ljava/lang/String;

.field private mAddress:Ljava/lang/String;

.field private mBt489TimerValue:Landroid/widget/Button;

.field private mBtCapabilityExpiryTime:Landroid/widget/Button;

.field private mBtCapabilityPollingPeriod:Landroid/widget/Button;

.field private mBtEabAvalCacheExpiry:Landroid/widget/Button;

.field private mBtEabCapCacheExpiry:Landroid/widget/Button;

.field private mBtEabCapDiscovery:Landroid/widget/Button;

.field private mBtEabCapPollExpiry:Landroid/widget/Button;

.field private mBtEabCapPollIntv:Landroid/widget/Button;

.field private mBtEabGzipEnabled:Landroid/widget/Button;

.field private mBtEabMaxNoEntries:Landroid/widget/Button;

.field private mBtEabPubErrRetryTimer:Landroid/widget/Button;

.field private mBtEabPublishTimer:Landroid/widget/Button;

.field private mBtEabPublishTimerExtended:Landroid/widget/Button;

.field private mBtEabSrcThrotPub:Landroid/widget/Button;

.field private mBtEnablePresence:Landroid/widget/Button;

.field private mBtMaxSubscriptionList:Landroid/widget/Button;

.field private mBtPublishExpiryTime:Landroid/widget/Button;

.field private mBtReset489State:Landroid/widget/Button;

.field private mBtResetETAG:Landroid/widget/Button;

.field private mBtSlotId:Landroid/widget/Button;

.field private mData:Ljava/lang/String;

.field private mEd489TimerValue:Landroid/widget/EditText;

.field private mEdCapabilityExpiryTime:Landroid/widget/EditText;

.field private mEdCapabilityPollingPeriod:Landroid/widget/EditText;

.field private mEdEabAvalCacheExpiry:Landroid/widget/EditText;

.field private mEdEabCapCacheExpiry:Landroid/widget/EditText;

.field private mEdEabCapDiscovery:Landroid/widget/EditText;

.field private mEdEabCapPollExpiry:Landroid/widget/EditText;

.field private mEdEabCapPollIntv:Landroid/widget/EditText;

.field private mEdEabGzipEnabled:Landroid/widget/EditText;

.field private mEdEabMaxNoEntries:Landroid/widget/EditText;

.field private mEdEabPubErrRetryTimer:Landroid/widget/EditText;

.field private mEdEabPublishTimer:Landroid/widget/EditText;

.field private mEdEabPublishTimerExtended:Landroid/widget/EditText;

.field private mEdEabSrcThrotPub:Landroid/widget/EditText;

.field private mEdMaxSubscriptionList:Landroid/widget/EditText;

.field private mEdPublishExpiryTime:Landroid/widget/EditText;

.field private mEdSlotId:Landroid/widget/EditText;

.field private mEnablePresence:Landroid/widget/EditText;

.field private mImsConfig:Lcom/android/ims/ImsConfig;

.field private mMipiMode:Ljava/lang/String;

.field private mPort:Ljava/lang/String;

.field private mRWType:Ljava/lang/String;

.field private mSlotId:I

.field private mToast:Landroid/widget/Toast;

.field private mUsid:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 71
    nop

    .line 72
    const-string v0, "content://com.mediatek.presence.settings/slot0settings"

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_SLOT0_SETTINGS_URI:Landroid/net/Uri;

    .line 73
    nop

    .line 74
    const-string v0, "content://com.mediatek.presence.settings/slot1settings"

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_SLOT1_SETTINGS_URI:Landroid/net/Uri;

    .line 75
    const-string v0, "[SLOT0] PresenceSet"

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    .line 76
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 65
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 70
    const-string v0, "com.mediatek.presence"

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_PACKAGE_NAME:Ljava/lang/String;

    .line 77
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    .line 121
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mPort:Ljava/lang/String;

    .line 122
    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mRWType:Ljava/lang/String;

    .line 123
    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mUsid:Ljava/lang/String;

    .line 124
    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mAddress:Ljava/lang/String;

    .line 125
    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mData:Ljava/lang/String;

    .line 126
    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mMipiMode:Ljava/lang/String;

    .line 127
    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mToast:Landroid/widget/Toast;

    return-void
.end method

.method private SendBroadcast(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 4
    .param p1, "mcontext"    # Landroid/content/Context;
    .param p2, "intentID"    # Ljava/lang/String;
    .param p3, "msg"    # I

    .line 487
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 488
    .local v0, "intent":Landroid/content/Intent;
    invoke-virtual {v0, p2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 489
    const-string v1, "com.mediatek.presence"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 490
    iget v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    const-string v2, "slotId"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 491
    const/4 v1, -0x1

    if-eq p3, v1, :cond_0

    .line 492
    const-string v1, "489ExpiredTime"

    invoke-virtual {v0, v1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 493
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendBroadcast result = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 495
    :cond_0
    if-eqz p1, :cond_1

    .line 496
    const-string v1, "com.mediatek.uce.permission.RECEIVE_UCE_EVENT"

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;Ljava/lang/String;)V

    .line 498
    :cond_1
    return-void
.end method

.method private checkValue(Ljava/lang/String;)I
    .locals 4
    .param p1, "value"    # Ljava/lang/String;

    .line 340
    const/4 v0, 0x0

    .line 342
    .local v0, "msg":I
    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 346
    goto :goto_0

    .line 343
    :catch_0
    move-exception v1

    .line 344
    .local v1, "e":Ljava/lang/Exception;
    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    const-string v3, "The value input is error!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 345
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 347
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    return v0
.end method

.method private queryEabConfiguration(I)I
    .locals 5
    .param p1, "key"    # I

    .line 467
    const/4 v0, -0x1

    .line 469
    .local v0, "result":I
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mImsConfig:Lcom/android/ims/ImsConfig;

    invoke-virtual {v1, p1}, Lcom/android/ims/ImsConfig;->getProvisionedValue(I)I

    move-result v1

    move v0, v1

    .line 470
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getProvisionedValue, result="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/android/ims/ImsException; {:try_start_0 .. :try_end_0} :catch_0

    .line 473
    goto :goto_0

    .line 471
    :catch_0
    move-exception v1

    .line 472
    .local v1, "ex":Lcom/android/ims/ImsException;
    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "setEabConfiguration exception = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 474
    .end local v1    # "ex":Lcom/android/ims/ImsException;
    :goto_0
    return v0
.end method

.method private queryPresenceDB()V
    .locals 9

    .line 285
    const/4 v0, 0x0

    .line 286
    .local v0, "cursor":Landroid/database/Cursor;
    iget v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    if-nez v1, :cond_0

    .line 287
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_SLOT0_SETTINGS_URI:Landroid/net/Uri;

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    goto :goto_0

    .line 289
    :cond_0
    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 290
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    sget-object v4, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_SLOT1_SETTINGS_URI:Landroid/net/Uri;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v3 .. v8}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    .line 293
    :cond_1
    :goto_0
    if-eqz v0, :cond_5

    .line 294
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    .line 296
    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result v1

    if-lez v1, :cond_4

    .line 298
    :cond_2
    const-string v1, "key"

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 299
    .local v1, "key":Ljava/lang/String;
    const-string v2, "value"

    invoke-interface {v0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v0, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 301
    .local v2, "value":Ljava/lang/String;
    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    invoke-virtual {v3, v1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 302
    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    invoke-virtual {v3, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 305
    .end local v1    # "key":Ljava/lang/String;
    .end local v2    # "value":Ljava/lang/String;
    :cond_3
    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-nez v1, :cond_2

    .line 308
    :cond_4
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    goto :goto_1

    .line 310
    :cond_5
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    const-string v2, "cursor is null!"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 312
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdCapabilityPollingPeriod:Landroid/widget/EditText;

    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "CapabilityPollingPeriod"

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 313
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdCapabilityExpiryTime:Landroid/widget/EditText;

    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "CapabilityExpiryTimeout"

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 314
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdPublishExpiryTime:Landroid/widget/EditText;

    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "PublishExpirePeriod"

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 315
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdMaxSubscriptionList:Landroid/widget/EditText;

    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "MaxSubscriptionPresenceList"

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 316
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEnablePresence:Landroid/widget/EditText;

    const-string v2, "persist.vendor.mtk_uce_support"

    invoke-static {v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 317
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEd489TimerValue:Landroid/widget/EditText;

    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "SipBadEventExpiredTime"

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 318
    return-void
.end method

.method private setEabConfiguration(II)V
    .locals 4
    .param p1, "key"    # I
    .param p2, "value"    # I

    .line 479
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mImsConfig:Lcom/android/ims/ImsConfig;

    invoke-virtual {v0, p1, p2}, Lcom/android/ims/ImsConfig;->setProvisionedValue(II)I

    .line 480
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "config:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", value = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/android/ims/ImsException; {:try_start_0 .. :try_end_0} :catch_0

    .line 483
    goto :goto_0

    .line 481
    :catch_0
    move-exception v0

    .line 482
    .local v0, "ex":Lcom/android/ims/ImsException;
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "setEabConfiguration exception = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 484
    .end local v0    # "ex":Lcom/android/ims/ImsException;
    :goto_0
    return-void
.end method

.method private setPresenceDB(ILjava/lang/String;Ljava/lang/String;)V
    .locals 8
    .param p1, "slotId"    # I
    .param p2, "settins"    # Ljava/lang/String;
    .param p3, "value"    # Ljava/lang/String;

    .line 321
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "key = \""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 322
    .local v0, "where":Ljava/lang/String;
    const-string v1, ""

    invoke-virtual {p3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 323
    new-instance v1, Landroid/content/ContentValues;

    invoke-direct {v1}, Landroid/content/ContentValues;-><init>()V

    .line 324
    .local v1, "values":Landroid/content/ContentValues;
    const-string v2, "value"

    invoke-virtual {v1, v2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "where = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 326
    const-string v2, " succeed"

    const-string v3, " to "

    const-string v4, "set "

    const/4 v5, 0x0

    if-nez p1, :cond_0

    .line 327
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v6

    sget-object v7, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_SLOT0_SETTINGS_URI:Landroid/net/Uri;

    invoke-virtual {v6, v7, v1, v0, v5}, Landroid/content/ContentResolver;->update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    .line 328
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 329
    return-void

    .line 330
    :cond_0
    const/4 v6, 0x1

    if-ne p1, v6, :cond_1

    .line 331
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v6

    sget-object v7, Lcom/mediatek/engineermode/misc/PresenceSet;->PRESENCE_SLOT1_SETTINGS_URI:Landroid/net/Uri;

    invoke-virtual {v6, v7, v1, v0, v5}, Landroid/content/ContentResolver;->update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    .line 332
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 333
    return-void

    .line 336
    .end local v1    # "values":Landroid/content/ContentValues;
    :cond_1
    const-string v1, "The value input is error!"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 337
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 2
    .param p1, "msg"    # Ljava/lang/String;

    .line 501
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[SLOT"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mToast:Landroid/widget/Toast;

    .line 502
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 503
    return-void
.end method

.method private updateSlotId()V
    .locals 3

    .line 351
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdSlotId:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->checkValue(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    .line 352
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[SLOT"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] PresenceSet"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    .line 353
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryPresenceDB()V

    .line 354
    iget v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    invoke-static {p0, v0}, Lcom/android/ims/ImsManager;->getInstance(Landroid/content/Context;I)Lcom/android/ims/ImsManager;

    move-result-object v0

    .line 355
    .local v0, "imsManager":Lcom/android/ims/ImsManager;
    if-eqz v0, :cond_0

    .line 357
    :try_start_0
    invoke-virtual {v0}, Lcom/android/ims/ImsManager;->getConfigInterface()Lcom/android/ims/ImsConfig;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mImsConfig:Lcom/android/ims/ImsConfig;
    :try_end_0
    .catch Lcom/android/ims/ImsException; {:try_start_0 .. :try_end_0} :catch_0

    .line 359
    goto :goto_0

    .line 358
    :catch_0
    move-exception v1

    .line 362
    :cond_0
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Slot Id is updated to : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 363
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "arg0"    # Landroid/view/View;

    .line 366
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const/4 v1, -0x1

    const-string v2, "android.intent.presence.RESET_489_STATE"

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_0

    .line 368
    :pswitch_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->updateSlotId()V

    .line 369
    goto/16 :goto_0

    .line 371
    :pswitch_2
    const-string v0, "android.intent.presence.RESET_ETAG"

    invoke-direct {p0, p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->SendBroadcast(Landroid/content/Context;Ljava/lang/String;I)V

    .line 372
    sget-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    const-string v1, "sendBroadcast = android.intent.presence.RESET_ETAG"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 373
    const-string v0, "sendBroadcast = android.intent.presence.RESET_ETAG succeed"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 374
    goto/16 :goto_0

    .line 376
    :pswitch_3
    invoke-direct {p0, p0, v2, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->SendBroadcast(Landroid/content/Context;Ljava/lang/String;I)V

    .line 377
    sget-object v0, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    const-string v1, "sendBroadcast = android.intent.presence.RESET_489_STATE"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 378
    const-string v0, "sendBroadcast = android.intent.presence.RESET_489_STATE succeed"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 379
    goto/16 :goto_0

    .line 399
    :pswitch_4
    iget v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdPublishExpiryTime:Landroid/widget/EditText;

    .line 400
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 399
    const-string v2, "PublishExpirePeriod"

    invoke-direct {p0, v0, v2, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setPresenceDB(ILjava/lang/String;Ljava/lang/String;)V

    .line 401
    goto/16 :goto_0

    .line 403
    :pswitch_5
    iget v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdMaxSubscriptionList:Landroid/widget/EditText;

    .line 404
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 403
    const-string v2, "MaxSubscriptionPresenceList"

    invoke-direct {p0, v0, v2, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setPresenceDB(ILjava/lang/String;Ljava/lang/String;)V

    .line 405
    goto/16 :goto_0

    .line 435
    :pswitch_6
    const/16 v0, 0x15

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabSrcThrotPub:Landroid/widget/EditText;

    .line 436
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 435
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 437
    goto/16 :goto_0

    .line 420
    :pswitch_7
    const/16 v0, 0x10

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPublishTimerExtended:Landroid/widget/EditText;

    .line 422
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 421
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 420
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 423
    goto/16 :goto_0

    .line 416
    :pswitch_8
    const/16 v0, 0xf

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPublishTimer:Landroid/widget/EditText;

    .line 417
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 416
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 418
    goto/16 :goto_0

    .line 459
    :pswitch_9
    const/16 v0, 0x3e9

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPubErrRetryTimer:Landroid/widget/EditText;

    .line 461
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 460
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 459
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    goto/16 :goto_0

    .line 443
    :pswitch_a
    const/16 v0, 0x16

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabMaxNoEntries:Landroid/widget/EditText;

    .line 444
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 443
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 445
    goto/16 :goto_0

    .line 455
    :pswitch_b
    const/16 v0, 0x18

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabGzipEnabled:Landroid/widget/EditText;

    .line 456
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 455
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 457
    goto/16 :goto_0

    .line 439
    :pswitch_c
    const/16 v0, 0x14

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapPollIntv:Landroid/widget/EditText;

    .line 440
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 439
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 441
    goto/16 :goto_0

    .line 451
    :pswitch_d
    const/16 v0, 0x11

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapDiscovery:Landroid/widget/EditText;

    .line 452
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 451
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 453
    goto/16 :goto_0

    .line 425
    :pswitch_e
    const/16 v0, 0x12

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapCacheExpiry:Landroid/widget/EditText;

    .line 427
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 426
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 425
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 428
    goto/16 :goto_0

    .line 447
    :pswitch_f
    const/16 v0, 0x17

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapPollExpiry:Landroid/widget/EditText;

    .line 448
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 447
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 449
    goto/16 :goto_0

    .line 430
    :pswitch_10
    const/16 v0, 0x13

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabAvalCacheExpiry:Landroid/widget/EditText;

    .line 432
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 431
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 430
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setEabConfiguration(II)V

    .line 433
    goto/16 :goto_0

    .line 391
    :pswitch_11
    iget v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdCapabilityPollingPeriod:Landroid/widget/EditText;

    .line 392
    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 391
    const-string v2, "CapabilityPollingPeriod"

    invoke-direct {p0, v0, v2, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setPresenceDB(ILjava/lang/String;Ljava/lang/String;)V

    .line 393
    goto/16 :goto_0

    .line 395
    :pswitch_12
    iget v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdCapabilityExpiryTime:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    .line 396
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 395
    const-string v2, "CapabilityExpiryTimeout"

    invoke-direct {p0, v0, v2, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->setPresenceDB(ILjava/lang/String;Ljava/lang/String;)V

    .line 397
    goto/16 :goto_0

    .line 381
    :pswitch_13
    const/4 v0, 0x0

    .line 382
    .local v0, "msg":I
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEd489TimerValue:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->checkValue(Ljava/lang/String;)I

    move-result v0

    .line 383
    invoke-direct {p0, p0, v2, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->SendBroadcast(Landroid/content/Context;Ljava/lang/String;I)V

    .line 384
    iget v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mSlotId:I

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "SipBadEventExpiredTime"

    invoke-direct {p0, v1, v3, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->setPresenceDB(ILjava/lang/String;Ljava/lang/String;)V

    .line 385
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendBroadcast = android.intent.presence.RESET_489_STATE,489ExpiredTime = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 387
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sendBroadcast = android.intent.presence.RESET_489_STATE , "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " succeed"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 389
    goto :goto_0

    .line 407
    .end local v0    # "msg":I
    :pswitch_14
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEnablePresence:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v2, "persist.vendor.mtk_uce_support"

    if-eqz v0, :cond_0

    .line 408
    invoke-static {v2, v1}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 409
    const-string v0, "persist.vendor.mtk_uce_support = 1"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 411
    :cond_0
    const-string v0, "0"

    invoke-static {v2, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 412
    const-string v0, "persist.vendor.mtk_uce_support = 0"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->showToast(Ljava/lang/String;)V

    .line 414
    nop

    .line 464
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x7f060622
        :pswitch_14
        :pswitch_0
        :pswitch_13
        :pswitch_0
        :pswitch_12
        :pswitch_0
        :pswitch_11
        :pswitch_10
        :pswitch_0
        :pswitch_f
        :pswitch_0
        :pswitch_e
        :pswitch_0
        :pswitch_d
        :pswitch_0
        :pswitch_c
        :pswitch_0
        :pswitch_b
        :pswitch_0
        :pswitch_a
        :pswitch_0
        :pswitch_9
        :pswitch_0
        :pswitch_8
        :pswitch_7
        :pswitch_0
        :pswitch_0
        :pswitch_6
        :pswitch_0
        :pswitch_0
        :pswitch_5
        :pswitch_0
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 133
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 134
    const v0, 0x7f0800c8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceSet;->setContentView(I)V

    .line 136
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/android/ims/ImsManager;->getInstance(Landroid/content/Context;I)Lcom/android/ims/ImsManager;

    move-result-object v0

    .line 137
    .local v0, "imsManager":Lcom/android/ims/ImsManager;
    if-eqz v0, :cond_0

    .line 139
    :try_start_0
    invoke-virtual {v0}, Lcom/android/ims/ImsManager;->getConfigInterface()Lcom/android/ims/ImsConfig;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mImsConfig:Lcom/android/ims/ImsConfig;
    :try_end_0
    .catch Lcom/android/ims/ImsException; {:try_start_0 .. :try_end_0} :catch_0

    .line 141
    goto :goto_0

    .line 140
    :catch_0
    move-exception v1

    .line 144
    :cond_0
    :goto_0
    const v1, 0x7f060645

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEd489TimerValue:Landroid/widget/EditText;

    .line 145
    const v2, 0x7f060623

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEd489TimerValue:Landroid/widget/EditText;

    .line 146
    const v2, 0x7f060627

    .line 147
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdCapabilityPollingPeriod:Landroid/widget/EditText;

    .line 148
    const v2, 0x7f060625

    .line 149
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdCapabilityExpiryTime:Landroid/widget/EditText;

    .line 150
    const v2, 0x7f060641

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdPublishExpiryTime:Landroid/widget/EditText;

    .line 151
    const v2, 0x7f06063f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdMaxSubscriptionList:Landroid/widget/EditText;

    .line 152
    const v2, 0x7f060621

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEnablePresence:Landroid/widget/EditText;

    .line 153
    const v2, 0x7f06063c

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPublishTimer:Landroid/widget/EditText;

    .line 154
    const v2, 0x7f06063b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPublishTimerExtended:Landroid/widget/EditText;

    .line 156
    const v2, 0x7f06062e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapCacheExpiry:Landroid/widget/EditText;

    .line 158
    const v2, 0x7f06062a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabAvalCacheExpiry:Landroid/widget/EditText;

    .line 160
    const v2, 0x7f06063e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabSrcThrotPub:Landroid/widget/EditText;

    .line 162
    const v2, 0x7f060632

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapPollIntv:Landroid/widget/EditText;

    .line 164
    const v2, 0x7f060636

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabMaxNoEntries:Landroid/widget/EditText;

    .line 166
    const v2, 0x7f06062c

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapPollExpiry:Landroid/widget/EditText;

    .line 168
    const v2, 0x7f060630

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapDiscovery:Landroid/widget/EditText;

    .line 170
    const v2, 0x7f060634

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabGzipEnabled:Landroid/widget/EditText;

    .line 172
    const v2, 0x7f060638

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPubErrRetryTimer:Landroid/widget/EditText;

    .line 174
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdSlotId:Landroid/widget/EditText;

    .line 177
    const v1, 0x7f060624

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBt489TimerValue:Landroid/widget/Button;

    .line 178
    const v1, 0x7f060628

    .line 179
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtCapabilityPollingPeriod:Landroid/widget/Button;

    .line 180
    const v1, 0x7f060626

    .line 181
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtCapabilityExpiryTime:Landroid/widget/Button;

    .line 182
    const v1, 0x7f060642

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtPublishExpiryTime:Landroid/widget/Button;

    .line 183
    const v1, 0x7f060640

    .line 184
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtMaxSubscriptionList:Landroid/widget/Button;

    .line 186
    const v1, 0x7f060622

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEnablePresence:Landroid/widget/Button;

    .line 187
    const v1, 0x7f060644

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtResetETAG:Landroid/widget/Button;

    .line 188
    const v1, 0x7f060643

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtReset489State:Landroid/widget/Button;

    .line 189
    const v1, 0x7f060646

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtSlotId:Landroid/widget/Button;

    .line 191
    const v1, 0x7f060639

    .line 192
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabPublishTimer:Landroid/widget/Button;

    .line 193
    const v1, 0x7f06063a

    .line 194
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabPublishTimerExtended:Landroid/widget/Button;

    .line 195
    const v1, 0x7f06062d

    .line 196
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapCacheExpiry:Landroid/widget/Button;

    .line 197
    const v1, 0x7f060629

    .line 198
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabAvalCacheExpiry:Landroid/widget/Button;

    .line 199
    const v1, 0x7f06063d

    .line 200
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabSrcThrotPub:Landroid/widget/Button;

    .line 201
    const v1, 0x7f060631

    .line 202
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapPollIntv:Landroid/widget/Button;

    .line 203
    const v1, 0x7f060635

    .line 204
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabMaxNoEntries:Landroid/widget/Button;

    .line 205
    const v1, 0x7f06062b

    .line 206
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapPollExpiry:Landroid/widget/Button;

    .line 207
    const v1, 0x7f06062f

    .line 208
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapDiscovery:Landroid/widget/Button;

    .line 209
    const v1, 0x7f060633

    .line 210
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabGzipEnabled:Landroid/widget/Button;

    .line 211
    const v1, 0x7f060637

    .line 212
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceSet;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabPubErrRetryTimer:Landroid/widget/Button;

    .line 214
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBt489TimerValue:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 215
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtCapabilityPollingPeriod:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 216
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtCapabilityExpiryTime:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 217
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtPublishExpiryTime:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 218
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtMaxSubscriptionList:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 219
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEnablePresence:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 220
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtResetETAG:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 221
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtReset489State:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 222
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabPublishTimer:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 223
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabPublishTimerExtended:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 224
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapCacheExpiry:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 225
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabAvalCacheExpiry:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 226
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabSrcThrotPub:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 227
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapPollIntv:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 228
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabMaxNoEntries:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 229
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapPollExpiry:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 230
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabCapDiscovery:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 231
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabGzipEnabled:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 232
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtEabPubErrRetryTimer:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 233
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mBtSlotId:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 235
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v2, "0"

    if-nez v1, :cond_1

    .line 236
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    .line 237
    const-string v3, "SipBadEventExpiredTime"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 238
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "CapabilityPollingPeriod"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 239
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "CapabilityExpiryTimeout"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 240
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "PublishExpirePeriod"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 241
    sget-object v1, Lcom/mediatek/engineermode/misc/PresenceSet;->mPresenceSetDataMap:Ljava/util/HashMap;

    const-string v3, "MaxSubscriptionPresenceList"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 243
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryPresenceDB()V

    .line 245
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPublishTimer:Landroid/widget/EditText;

    const/16 v3, 0xf

    .line 246
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 245
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 247
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPublishTimerExtended:Landroid/widget/EditText;

    const/16 v3, 0x10

    .line 248
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 247
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 250
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapCacheExpiry:Landroid/widget/EditText;

    const/16 v3, 0x12

    .line 251
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 250
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 253
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabAvalCacheExpiry:Landroid/widget/EditText;

    const/16 v3, 0x13

    .line 254
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 253
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 256
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabSrcThrotPub:Landroid/widget/EditText;

    const/16 v3, 0x15

    .line 257
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 256
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 259
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapPollIntv:Landroid/widget/EditText;

    const/16 v3, 0x14

    .line 260
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 259
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 262
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabMaxNoEntries:Landroid/widget/EditText;

    const/16 v3, 0x16

    .line 263
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 262
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 264
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapPollExpiry:Landroid/widget/EditText;

    const/16 v3, 0x17

    .line 265
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 264
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 267
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabCapDiscovery:Landroid/widget/EditText;

    const/16 v3, 0x11

    .line 268
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 267
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 270
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabGzipEnabled:Landroid/widget/EditText;

    const/16 v3, 0x18

    .line 271
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 270
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 272
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdEabPubErrRetryTimer:Landroid/widget/EditText;

    const/16 v3, 0x3e9

    .line 273
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/misc/PresenceSet;->queryEabConfiguration(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    .line 272
    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 276
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceSet;->mEdSlotId:Landroid/widget/EditText;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 277
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 281
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 282
    return-void
.end method
