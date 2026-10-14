.class public Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;
.super Landroid/app/Activity;
.source "MDMSimSelectActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field public static final MODEM_PROTOCOL_1:I = 0x1

.field public static final MODEM_PROTOCOL_2:I = 0x2

.field public static final MODEM_PROTOCOL_3:I = 0x3

.field private static final TAG:Ljava/lang/String; = "EmInfo/MDMSimSelectActivity"

.field public static mSimMccMnc:[Ljava/lang/String;


# instance fields
.field adapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public defaultDataPhoneID:I

.field items:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field modemTypeArray:[I

.field simTypeListView:Landroid/widget/ListView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 64
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 59
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 65
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->defaultDataPhoneID:I

    .line 66
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    .line 67
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    .line 68
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    .line 69
    const/4 v0, 0x3

    new-array v0, v0, [I

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 73
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 74
    const v0, 0x7f08004b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->setContentView(I)V

    .line 75
    const v0, 0x7f060076

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    .line 76
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    .line 77
    new-instance v0, Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    const v2, 0x1090003

    invoke-direct {v0, p0, v2, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    .line 79
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 81
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 166
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 167
    .local v0, "intent":Landroid/content/Intent;
    const/4 v1, 0x0

    .line 168
    .local v1, "simType":I
    const/4 v2, 0x1

    .line 169
    .local v2, "modemType":I
    const-string v3, "com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity"

    invoke-virtual {v0, p0, v3}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 171
    if-eqz p3, :cond_3

    const/4 v3, 0x1

    if-eq p3, v3, :cond_2

    const/4 v3, 0x2

    if-eq p3, v3, :cond_0

    goto :goto_0

    .line 181
    :cond_0
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v4

    invoke-virtual {v4}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v4

    if-le v4, v3, :cond_1

    .line 182
    const/4 v1, 0x2

    .line 183
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    aget v2, v4, v3

    goto :goto_0

    .line 185
    :cond_1
    return-void

    .line 177
    :cond_2
    const/4 v1, 0x1

    .line 178
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    aget v2, v4, v3

    .line 179
    goto :goto_0

    .line 173
    :cond_3
    const/4 v1, 0x0

    .line 174
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    const/4 v4, 0x0

    aget v2, v3, v4

    .line 175
    nop

    .line 191
    :goto_0
    const-string v3, "mSimType"

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 192
    const-string v3, "mModemType"

    invoke-virtual {v0, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 193
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->startActivity(Landroid/content/Intent;)V

    .line 194
    return-void
.end method

.method protected onResume()V
    .locals 14

    .line 85
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 87
    nop

    .line 88
    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultDataSubscriptionId()I

    move-result v0

    .line 87
    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getPhoneId(I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->defaultDataPhoneID:I

    .line 90
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 91
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    .line 93
    .local v1, "phoneIdMain":I
    const-string v2, "): Protocol 3"

    const-string v3, "sim3("

    const/4 v4, 0x3

    const-string v5, "sim2("

    const-string v6, "): Protocol 2"

    const-string v7, "): Protocol 1(Primary Card)"

    const-string v8, "sim1("

    const/4 v9, 0x0

    const/4 v10, 0x2

    const/4 v11, 0x1

    if-nez v1, :cond_2

    .line 94
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v9}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v9

    .line 96
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v9

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v12, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 97
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v7

    invoke-virtual {v7}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v7

    if-le v7, v11, :cond_0

    .line 98
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v11}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v11

    .line 100
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v5, v5, v11

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 102
    :cond_0
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v5

    invoke-virtual {v5}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v5

    if-le v5, v10, :cond_1

    .line 103
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v10}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v10

    .line 105
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v3, v3, v10

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 107
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    aput v11, v2, v9

    .line 108
    aput v10, v2, v11

    .line 109
    aput v4, v2, v10

    goto/16 :goto_0

    .line 110
    :cond_2
    if-ne v1, v11, :cond_4

    .line 111
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v11}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v9

    .line 113
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v9}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v11

    .line 115
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v11

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 116
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v5, v5, v9

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 117
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v5

    invoke-virtual {v5}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v5

    if-le v5, v10, :cond_3

    .line 118
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v10}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v10

    .line 120
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v3, v3, v10

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 122
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    aput v10, v2, v9

    .line 123
    aput v11, v2, v11

    .line 124
    aput v4, v2, v10

    goto/16 :goto_0

    .line 125
    :cond_4
    if-ne v1, v10, :cond_6

    .line 126
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v12

    if-eqz v12, :cond_5

    .line 127
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v10}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v9

    .line 129
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v9}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v11

    .line 131
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v11}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v10

    .line 133
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v11

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v12, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 134
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v5, v5, v10

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v6, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 135
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v3, v3, v9

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 136
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    aput v10, v2, v9

    .line 137
    aput v4, v2, v11

    .line 138
    aput v11, v2, v10

    goto :goto_0

    .line 140
    :cond_5
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v10}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v9

    .line 142
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v11}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v11

    .line 144
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v0, v9}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v10

    .line 146
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v10

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 147
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v5, v5, v11

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 148
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v3, v3, v9

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 149
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->modemTypeArray:[I

    aput v4, v2, v9

    .line 150
    aput v10, v2, v11

    .line 151
    aput v11, v2, v10

    .line 154
    :cond_6
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Default data is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 155
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->defaultDataPhoneID:I

    const-string v6, "null"

    const-string v7, "sim"

    const/4 v8, -0x1

    if-ne v5, v8, :cond_7

    move-object v5, v6

    goto :goto_1

    :cond_7
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v12, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->defaultDataPhoneID:I

    add-int/2addr v12, v11

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    :goto_1
    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 154
    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 156
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Read SIM MCC+MNC(PS1):"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v3, v3, v9

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "EmInfo/MDMSimSelectActivity"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 157
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Read SIM MCC+MNC(PS2):"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v5, v5, v11

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 158
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Read SIM MCC+MNC(PS3):"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v5, v5, v10

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 160
    iget v4, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->defaultDataPhoneID:I

    if-ne v4, v8, :cond_8

    goto :goto_2

    :cond_8
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->defaultDataPhoneID:I

    add-int/2addr v5, v11

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    :goto_2
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 159
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMSimSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->notifyDataSetInvalidated()V

    .line 162
    return-void
.end method
