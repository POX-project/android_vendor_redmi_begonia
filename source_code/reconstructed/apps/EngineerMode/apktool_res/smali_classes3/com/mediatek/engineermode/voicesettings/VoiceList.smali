.class public Lcom/mediatek/engineermode/voicesettings/VoiceList;
.super Landroid/app/ListActivity;
.source "VoiceList.java"


# static fields
.field private static final DIALOG_NOT_SUPPORT:I = 0x0

.field private static final MTK_VOW_SUPPORT:Ljava/lang/String; = "MTK_VOW_SUPPORT"

.field private static final MTK_VOW_SUPPORT_ON:Ljava/lang/String; = "MTK_VOW_SUPPORT=true"

.field private static final MTK_VOW_TRIGGER_SUPPORT:Ljava/lang/String; = "MTK_VOW_2E2K_SUPPORT"

.field private static final MTK_VOW_TRIGGER_SUPPORT_ON:Ljava/lang/String; = "MTK_VOW_2E2K_SUPPORT=true"


# instance fields
.field private mModuleList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 62
    invoke-direct {p0}, Landroid/app/ListActivity;-><init>()V

    .line 69
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    return-void
.end method

.method public static isVoiceTriggerSupported(Landroid/content/Context;)Z
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 94
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    .line 95
    .local v0, "am":Landroid/media/AudioManager;
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 96
    return v1

    .line 98
    :cond_0
    const-string v2, "MTK_VOW_2E2K_SUPPORT"

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 99
    .local v2, "state":Ljava/lang/String;
    if-eqz v2, :cond_1

    .line 100
    const-string v1, "MTK_VOW_2E2K_SUPPORT=true"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    return v1

    .line 102
    :cond_1
    return v1
.end method

.method private static isVoiceWakeupSupported(Landroid/content/Context;)Z
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 77
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    .line 78
    .local v0, "am":Landroid/media/AudioManager;
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 79
    return v1

    .line 81
    :cond_0
    const-string v2, "MTK_VOW_SUPPORT"

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 82
    .local v2, "state":Ljava/lang/String;
    if-eqz v2, :cond_1

    .line 83
    const-string v1, "MTK_VOW_SUPPORT=true"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    return v1

    .line 85
    :cond_1
    return v1
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 107
    invoke-super {p0, p1}, Landroid/app/ListActivity;->onCreate(Landroid/os/Bundle;)V

    .line 108
    const v0, 0x7f0800f6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->setContentView(I)V

    .line 109
    invoke-static {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->isVoiceWakeupSupported(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 110
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->showDialog(I)V

    .line 111
    return-void

    .line 113
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    .line 114
    invoke-static {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->isVoiceWakeupSupported(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 115
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    const v1, 0x7f0a06bd

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 116
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    const v1, 0x7f0a06bf

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 119
    :cond_1
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090003

    iget-object v2, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    invoke-direct {v0, p0, v1, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 121
    .local v0, "moduleAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->setListAdapter(Landroid/widget/ListAdapter;)V

    .line 123
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I

    .line 144
    if-eqz p1, :cond_0

    .line 156
    const/4 v0, 0x0

    return-object v0

    .line 146
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v1, 0x7f0a06bc

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const/4 v1, 0x0

    .line 147
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a06b6

    .line 148
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a02e8

    new-instance v2, Lcom/mediatek/engineermode/voicesettings/VoiceList$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/voicesettings/VoiceList$1;-><init>(Lcom/mediatek/engineermode/voicesettings/VoiceList;)V

    .line 149
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 154
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 146
    return-object v0
.end method

.method protected onListItemClick(Landroid/widget/ListView;Landroid/view/View;IJ)V
    .locals 2
    .param p1, "l"    # Landroid/widget/ListView;
    .param p2, "v"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J

    .line 127
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 128
    const v1, 0x7f0a06bb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 127
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 129
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    .line 131
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const v1, 0x7f0a06bd

    .line 132
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 131
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 133
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    .line 134
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList;->mModuleList:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const v1, 0x7f0a06bf

    .line 135
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 134
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 136
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->startActivity(Landroid/content/Intent;)V

    .line 138
    :cond_2
    :goto_0
    return-void
.end method
