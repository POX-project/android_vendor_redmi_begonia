.class public Lcom/mediatek/lbs/em2/ui/LbsFlow;
.super Landroid/app/Activity;
.source "LbsFlow.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;
    }
.end annotation


# static fields
.field protected static context:Landroid/content/Context;


# instance fields
.field protected agpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

.field protected alert:Landroid/app/AlertDialog;

.field protected buttonClearScreen:Landroid/widget/Button;

.field protected buttonEmulatorMode:Landroid/widget/Button;

.field protected buttonResetAgpsd:Landroid/widget/Button;

.field protected buttonTestCase:Landroid/widget/Button;

.field protected debugInterface:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

.field protected debugListener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

.field protected delayShowHandler:Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;

.field protected layoutDebug:Landroid/widget/LinearLayout;

.field protected mAgpsdExisted:Z

.field protected mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

.field protected popupEmulatorMode:Landroid/widget/PopupMenu;

.field protected popupTestCase:Landroid/widget/PopupMenu;

.field protected stringList:Lcom/mediatek/lbs/em2/ui/StringList;

.field protected textViewMessage:Landroid/widget/TextView;

.field protected toast:Landroid/widget/Toast;

.field protected toastCount:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 47
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mAgpsdExisted:Z

    .line 224
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->debugListener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    return-void
.end method

.method protected static getTimeString()Ljava/lang/String;
    .locals 5

    .line 308
    new-instance v0, Ljava/util/GregorianCalendar;

    invoke-direct {v0}, Ljava/util/GregorianCalendar;-><init>()V

    .line 309
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/util/Calendar;->setTimeInMillis(J)V

    .line 317
    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/16 v3, 0xc

    .line 318
    invoke-virtual {v0, v3}, Ljava/util/Calendar;->get(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const/16 v3, 0xd

    invoke-virtual {v0, v3}, Ljava/util/Calendar;->get(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    const/16 v3, 0xe

    .line 319
    invoke-virtual {v0, v3}, Ljava/util/Calendar;->get(I)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const/4 v3, 0x2

    aput-object v0, v2, v3

    const-string v0, "%02d:%02d.%03d"

    .line 317
    invoke-static {v1, v0, v2}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 324
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected static loge(Ljava/lang/Object;)V
    .locals 3

    .line 332
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LocationEM [agps] ERR: "

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 333
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->context:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ERR: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x1

    .line 334
    invoke-static {v0, p0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    const/16 v0, 0x11

    const/4 v1, 0x0

    .line 335
    invoke-virtual {p0, v0, v1, v1}, Landroid/widget/Toast;->setGravity(III)V

    .line 336
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void
.end method


# virtual methods
.method protected addOnClickListener()V
    .locals 2

    .line 187
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonResetAgpsd:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$5;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 193
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonEmulatorMode:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$6;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 199
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonTestCase:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$7;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 205
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonClearScreen:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$8;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method protected init()V
    .locals 3

    .line 124
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->context:Landroid/content/Context;

    .line 125
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    const/16 v1, 0x50

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 127
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->context:Landroid/content/Context;

    const-string v1, ""

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toast:Landroid/widget/Toast;

    const/4 v0, 0x0

    .line 129
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toastCount:I

    .line 131
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "my title"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const-string v2, "my content"

    .line 132
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$2;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    .line 133
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$1;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    const-string v2, "OK"

    .line 137
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 140
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->alert:Landroid/app/AlertDialog;

    return-void
.end method

.method protected initAgpsInterface()V
    .locals 1

    .line 217
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->agpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string v0, "agps interface connection failure"

    .line 219
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->loge(Ljava/lang/Object;)V

    .line 220
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected initDebugInterface()V
    .locals 2

    .line 273
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->debugListener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;-><init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->debugInterface:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string v0, "agps debug interface connection failure"

    .line 275
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->loge(Ljava/lang/Object;)V

    .line 276
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected initPopupMenu()V
    .locals 4

    .line 153
    new-instance v0, Landroid/widget/PopupMenu;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonEmulatorMode:Landroid/widget/Button;

    invoke-direct {v0, p0, v1}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupEmulatorMode:Landroid/widget/PopupMenu;

    .line 154
    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "Off"

    invoke-interface {v0, v1, v1, v1, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 155
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupEmulatorMode:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x1

    const-string v3, "On"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 156
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupEmulatorMode:Landroid/widget/PopupMenu;

    new-instance v3, Lcom/mediatek/lbs/em2/ui/LbsFlow$3;

    invoke-direct {v3, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    .line 157
    invoke-virtual {v0, v3}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 165
    new-instance v0, Landroid/widget/PopupMenu;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonEmulatorMode:Landroid/widget/Button;

    invoke-direct {v0, p0, v3}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    .line 166
    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v3, "All TC Loop 1"

    invoke-interface {v0, v1, v1, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 167
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v3, "All TC Loop 2"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 168
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x2

    const-string v3, "All TC Loop 1000"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 169
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x3

    const-string v3, "All Common TC"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 170
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x4

    const-string v3, "All UP TC"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 171
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x5

    const-string v3, "All CP TC"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 172
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x6

    const-string v3, "All EVDO TC"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 173
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x7

    const-string v3, "Partial TC 1"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 174
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v2, 0x8

    const-string v3, "Partial TC 2"

    invoke-interface {v0, v1, v2, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 175
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsFlow$4;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V

    .line 176
    invoke-virtual {v0, v1}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    return-void
.end method

.method protected initUI()V
    .locals 1

    const v0, 0x7f0500a6

    .line 144
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->layoutDebug:Landroid/widget/LinearLayout;

    const v0, 0x7f050016

    .line 145
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonResetAgpsd:Landroid/widget/Button;

    const v0, 0x7f05000a

    .line 146
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonEmulatorMode:Landroid/widget/Button;

    const v0, 0x7f050024

    .line 147
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonTestCase:Landroid/widget/Button;

    const v0, 0x7f050006

    .line 148
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->buttonClearScreen:Landroid/widget/Button;

    const v0, 0x7f050108

    .line 149
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->textViewMessage:Landroid/widget/TextView;

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 52
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 53
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    .line 56
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->initAgpsInterface()V

    const/4 p1, 0x1

    .line 57
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mAgpsdExisted:Z
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    const p1, 0x7f070006

    .line 63
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    .line 64
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->init()V

    .line 65
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->initUI()V

    .line 66
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->initPopupMenu()V

    .line 67
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->addOnClickListener()V

    .line 68
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->setLayoutDependency()V

    .line 69
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->initDebugInterface()V

    .line 70
    new-instance p1, Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->textViewMessage:Landroid/widget/TextView;

    invoke-direct {p1, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;-><init>(Lcom/mediatek/lbs/em2/ui/StringList;Landroid/widget/TextView;)V

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->delayShowHandler:Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;

    return-void

    .line 59
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Failed to check agps version mAgpsdExisted="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mAgpsdExisted:Z

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->log(Ljava/lang/Object;)V

    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 75
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 76
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->debugInterface:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    if-eqz p0, :cond_0

    .line 77
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->removeListener()V

    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 0

    .line 83
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method public onResume()V
    .locals 1

    .line 88
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 89
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mAgpsdExisted:Z

    if-eqz v0, :cond_0

    .line 90
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->setLayoutDependency()V

    :cond_0
    return-void
.end method

.method protected setLayoutDependency()V
    .locals 2

    .line 281
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->isDebugModeEnabled(Landroid/content/Context;)Z

    move-result v0

    .line 282
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->layoutDebug:Landroid/widget/LinearLayout;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->setVisibility(Landroid/view/View;Z)V

    return-void
.end method

.method protected setVisibility(Landroid/view/View;Z)V
    .locals 0

    if-eqz p2, :cond_0

    const/4 p0, 0x0

    .line 287
    invoke-virtual {p1, p0}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_0
    const/16 p0, 0x8

    .line 289
    invoke-virtual {p1, p0}, Landroid/view/View;->setVisibility(I)V

    :goto_0
    return-void
.end method
