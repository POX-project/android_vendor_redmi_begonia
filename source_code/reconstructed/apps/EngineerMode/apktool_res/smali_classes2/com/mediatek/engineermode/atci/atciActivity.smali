.class public Lcom/mediatek/engineermode/atci/atciActivity;
.super Landroid/app/Activity;
.source "atciActivity.java"


# static fields
.field private static final ADB_ENABLE:Ljava/lang/String; = "persist.sys.usb.config"

.field private static final ATCI_AUTO_START:Ljava/lang/String; = "persist.vendor.service.atci.autostart"

.field private static final ATCI_USERMODE:Ljava/lang/String; = "persist.vendor.service.atci.usermode"

.field private static final DISABLE_ATCI:I = 0x2

.field private static final ENABLE_ALWAYS:I = 0x1

.field private static final ENABLE_ONCE:I = 0x0

.field private static final RADIO_PORT_INDEX:Ljava/lang/String; = "persist.vendor.radio.port_index"

.field private static final RO_BUILD_TYPE:Ljava/lang/String; = "ro.build.type"

.field private static final TAG:Ljava/lang/String; = "EM/ATCI"


# instance fields
.field private mAlwaysEnableButton:Landroid/widget/Button;

.field private mAlwaysEnableListener:Landroid/view/View$OnClickListener;

.field private mDisableButton:Landroid/widget/Button;

.field private mDisableListener:Landroid/view/View$OnClickListener;

.field private mEnableButton:Landroid/widget/Button;

.field private mEnableListener:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 15
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 90
    new-instance v0, Lcom/mediatek/engineermode/atci/atciActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/atci/atciActivity$1;-><init>(Lcom/mediatek/engineermode/atci/atciActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mEnableListener:Landroid/view/View$OnClickListener;

    .line 98
    new-instance v0, Lcom/mediatek/engineermode/atci/atciActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/atci/atciActivity$2;-><init>(Lcom/mediatek/engineermode/atci/atciActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mAlwaysEnableListener:Landroid/view/View$OnClickListener;

    .line 106
    new-instance v0, Lcom/mediatek/engineermode/atci/atciActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/atci/atciActivity$3;-><init>(Lcom/mediatek/engineermode/atci/atciActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mDisableListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/atci/atciActivity;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/atci/atciActivity;
    .param p1, "x1"    # I

    .line 15
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/atci/atciActivity;->enable_ATCI(I)V

    return-void
.end method

.method private enable_ATCI(I)V
    .locals 10
    .param p1, "action"    # I

    .line 35
    const/4 v0, 0x2

    const-string v1, "persist.vendor.radio.port_index"

    const-string v2, "persist.vendor.service.atci.usermode"

    const-string v3, "0"

    const-string v4, "1"

    const/4 v5, 0x1

    if-eq v5, p1, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 38
    :cond_0
    if-ne v0, p1, :cond_2

    .line 39
    invoke-static {v2, v3}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 40
    const-string v2, ""

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 36
    :cond_1
    :goto_0
    invoke-static {v2, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    invoke-static {v1, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    :cond_2
    :goto_1
    const-string v1, "ro.build.type"

    const-string v2, "unknown"

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 44
    .local v1, "type":Ljava/lang/String;
    const-string v2, "persist.vendor.service.atci.autostart"

    invoke-static {v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 46
    .local v6, "isAutoStart":Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "action: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", build type: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EM/ATCI"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    const-string v7, "eng"

    invoke-virtual {v1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_7

    .line 48
    const-string v7, "atci_service"

    const-string v9, "atcid-daemon-u"

    if-ne v0, p1, :cond_3

    .line 49
    invoke-static {v2, v3}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    const-string v0, "stop atcid-daemon-u"

    invoke-static {v8, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    const-string v0, "ctl.stop"

    invoke-static {v0, v9}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 52
    const-string v2, "stop atci_service"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 53
    invoke-static {v0, v7}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 54
    const-string v0, "Disable ATCI Success"

    invoke-static {p0, v0, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 55
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 56
    return-void

    .line 57
    :cond_3
    if-ne v5, p1, :cond_5

    .line 58
    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-ne v0, v5, :cond_4

    .line 59
    const-string v0, "atuo start enabled."

    invoke-static {v8, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    const-string v0, "You have enabled ATCI"

    invoke-static {p0, v0, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 61
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 62
    return-void

    .line 64
    :cond_4
    invoke-static {v2, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 65
    const-string v0, "Always enable ATCI Success"

    invoke-static {p0, v0, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 66
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_2

    .line 68
    :cond_5
    if-nez p1, :cond_6

    .line 69
    invoke-static {v2, v3}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 74
    :goto_2
    const-string v0, "start atcid-daemon-u"

    invoke-static {v8, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    const-string v0, "ctl.start"

    invoke-static {v0, v9}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    const-string v2, "start atci_service"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 77
    invoke-static {v0, v7}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 71
    :cond_6
    const-string v0, "unknown action."

    invoke-static {v8, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 72
    return-void

    .line 79
    :cond_7
    const-string v0, "Eng load, ATCI is enabled"

    invoke-static {p0, v0, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 80
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 83
    :goto_3
    new-instance v0, Landroid/content/Intent;

    const-string v2, "com.mediatek.atci.service.startup"

    invoke-direct {v0, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 84
    .local v0, "intent":Landroid/content/Intent;
    const-string v2, "com.mediatek.atci.service"

    const-string v3, "com.mediatek.atci.service.AtciIntentReceiver"

    invoke-virtual {v0, v2, v3}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 86
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/atci/atciActivity;->sendBroadcast(Landroid/content/Intent;)V

    .line 87
    const-string v2, "Enable ATCI Success"

    invoke-static {p0, v2, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 88
    return-void
.end method


# virtual methods
.method protected findViews()V
    .locals 1

    .line 115
    const v0, 0x7f060001

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/atci/atciActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mEnableButton:Landroid/widget/Button;

    .line 116
    const v0, 0x7f060002

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/atci/atciActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mAlwaysEnableButton:Landroid/widget/Button;

    .line 117
    const/high16 v0, 0x7f060000

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/atci/atciActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mDisableButton:Landroid/widget/Button;

    .line 118
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 128
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 129
    const v0, 0x7f08000d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/atci/atciActivity;->setContentView(I)V

    .line 130
    invoke-virtual {p0}, Lcom/mediatek/engineermode/atci/atciActivity;->findViews()V

    .line 131
    invoke-virtual {p0}, Lcom/mediatek/engineermode/atci/atciActivity;->setActionListener()V

    .line 132
    return-void
.end method

.method protected setActionListener()V
    .locals 2

    .line 121
    iget-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mEnableButton:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mEnableListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 122
    iget-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mAlwaysEnableButton:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mAlwaysEnableListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 123
    iget-object v0, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mDisableButton:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/atci/atciActivity;->mDisableListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 124
    return-void
.end method
