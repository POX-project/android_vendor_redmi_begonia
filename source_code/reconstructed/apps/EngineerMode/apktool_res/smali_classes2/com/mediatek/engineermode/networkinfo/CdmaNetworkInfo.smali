.class public Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;
.super Landroid/app/Activity;
.source "CdmaNetworkInfo.java"


# static fields
.field private static final CHECK_INFOMATION_ID:I = 0x1

.field public static final LOG_TAG:Ljava/lang/String; = "NetworkInfo/Cdma"

.field public static final TOTAL_ITEM_NUM:I = 0x138


# instance fields
.field private mCheckBox:[Landroid/widget/CheckBox;

.field private mChecked:[I

.field private mSimType:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 9
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 64
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 66
    const v0, 0x7f0800a7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->setContentView(I)V

    .line 67
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 68
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mSimType:I

    .line 70
    const/16 v1, 0x138

    new-array v3, v1, [Landroid/widget/CheckBox;

    iput-object v3, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    .line 71
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mChecked:[I

    .line 73
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_0

    .line 74
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v5, 0x0

    aput-object v5, v4, v3

    .line 75
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mChecked:[I

    aput v2, v4, v3

    .line 73
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 79
    .end local v3    # "i":I
    :cond_0
    const v1, 0x7f060115

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v1

    .line 80
    .local v1, "view2G":Landroid/view/View;
    const v2, 0x7f06011a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    .line 81
    .local v2, "viewCommon":Landroid/view/View;
    const v3, 0x7f060117

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v3

    .line 82
    .local v3, "view3GFDD":Landroid/view/View;
    const v4, 0x7f060118

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v4

    .line 83
    .local v4, "view3GTDD":Landroid/view/View;
    const v5, 0x7f060116

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v5

    .line 84
    .local v5, "view3GCommon":Landroid/view/View;
    const/16 v6, 0x8

    invoke-virtual {v1, v6}, Landroid/view/View;->setVisibility(I)V

    .line 85
    invoke-virtual {v2, v6}, Landroid/view/View;->setVisibility(I)V

    .line 86
    invoke-virtual {v5, v6}, Landroid/view/View;->setVisibility(I)V

    .line 87
    invoke-virtual {v4, v6}, Landroid/view/View;->setVisibility(I)V

    .line 88
    invoke-virtual {v3, v6}, Landroid/view/View;->setVisibility(I)V

    .line 89
    const v7, 0x7f06009d

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/CheckBox;

    invoke-virtual {v7, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 91
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x12c

    const v8, 0x7f06007c

    .line 92
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 93
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x12d

    const v8, 0x7f06007b

    .line 94
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 95
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x12e

    const v8, 0x7f06007d

    .line 96
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 97
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x12f

    const v8, 0x7f06007f

    .line 98
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 99
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x130

    const v8, 0x7f06007e

    .line 100
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 101
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x131

    const v8, 0x7f0600a0

    .line 102
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 103
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x132

    const v8, 0x7f06009a

    .line 104
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 105
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x133

    const v8, 0x7f06009b

    .line 106
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 107
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x134

    const v8, 0x7f06009e

    .line 108
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 109
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x135

    const v8, 0x7f06009c

    .line 110
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 111
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x136

    const v8, 0x7f06009f

    .line 112
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 113
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v7, 0x137

    const v8, 0x7f0600a1

    .line 114
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/CheckBox;

    aput-object v8, v6, v7

    .line 116
    return-void
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;)Z
    .locals 3
    .param p1, "menu"    # Landroid/view/Menu;

    .line 120
    const v0, 0x7f0a047d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->getString(I)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-interface {p1, v1, v2, v1, v0}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 121
    return v2
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 6
    .param p1, "aMenuItem"    # Landroid/view/MenuItem;

    .line 127
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_2

    .line 129
    :cond_0
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    .line 130
    .local v2, "isAnyChechked":Ljava/lang/Boolean;
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/16 v4, 0x138

    if-ge v3, v4, :cond_3

    .line 131
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    aget-object v5, v4, v3

    if-nez v5, :cond_1

    .line 132
    goto :goto_1

    .line 134
    :cond_1
    aget-object v4, v4, v3

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 135
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mChecked:[I

    aput v1, v4, v3

    .line 136
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    goto :goto_1

    .line 138
    :cond_2
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mChecked:[I

    aput v0, v4, v3

    .line 130
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 141
    .end local v3    # "i":I
    :cond_3
    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_4

    .line 142
    const v0, 0x7f0a047e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 143
    goto :goto_2

    .line 145
    :cond_4
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 146
    .local v0, "intent":Landroid/content/Intent;
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mChecked:[I

    const-string v3, "mChecked"

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[I)Landroid/content/Intent;

    .line 147
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->mSimType:I

    const-string v3, "mSimType"

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 148
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/CdmaNetworkInfo;->startActivity(Landroid/content/Intent;)V

    .line 149
    nop

    .line 153
    .end local v0    # "intent":Landroid/content/Intent;
    .end local v2    # "isAnyChechked":Ljava/lang/Boolean;
    :goto_2
    invoke-super {p0, p1}, Landroid/app/Activity;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result v0

    return v0
.end method
