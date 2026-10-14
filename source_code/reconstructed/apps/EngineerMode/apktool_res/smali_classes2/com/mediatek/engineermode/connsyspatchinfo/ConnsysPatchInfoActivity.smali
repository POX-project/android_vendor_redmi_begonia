.class public Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;
.super Landroid/app/Activity;
.source "ConnsysPatchInfoActivity.java"


# static fields
.field private static final BRANCH_PATTERN:Ljava/lang/String; = "t-neptune.*SOC[a-zA-Z0-9]*_[a-zA-Z0-9]*_"

.field private static final PROPERTY:Ljava/lang/String; = "persist.vendor.connsys.patch.version"

.field private static final PROPERTY_FORMAT:Ljava/lang/String; = "persist.vendor.connsys.bt_fw_ver"

.field private static final PROP_INVALID:Ljava/lang/String; = "-1"

.field private static final TAG:Ljava/lang/String; = "ConnsysPatchInfo"

.field private static final VER_SPLIT:Ljava/lang/String; = "-"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private getBranch(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "strInfo"    # Ljava/lang/String;

    .line 69
    const-string v0, "t-neptune.*SOC[a-zA-Z0-9]*_[a-zA-Z0-9]*_"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 70
    .local v0, "pattern":Ljava/util/regex/Pattern;
    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v1

    .line 71
    .local v1, "matcher":Ljava/util/regex/Matcher;
    invoke-virtual {v1}, Ljava/util/regex/Matcher;->find()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 72
    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 74
    :cond_0
    const/4 v2, 0x0

    return-object v2
.end method

.method private getVer(Ljava/lang/String;)Ljava/lang/String;
    .locals 12
    .param p1, "strInfo"    # Ljava/lang/String;

    .line 78
    move-object v0, p1

    .line 79
    .local v0, "strVersion":Ljava/lang/String;
    const-string v1, "-"

    invoke-virtual {p1, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 80
    .local v1, "index":I
    if-lez v1, :cond_0

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    add-int/lit8 v3, v1, 0x1

    if-le v2, v3, :cond_0

    .line 81
    add-int/lit8 v2, v1, 0x1

    invoke-virtual {p1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    .line 83
    :cond_0
    const/16 v2, 0x8

    .line 84
    .local v2, "length":I
    const/4 v3, 0x4

    .line 85
    .local v3, "year":I
    const/4 v4, 0x6

    .line 86
    .local v4, "month":I
    const/16 v5, 0x8

    .line 87
    .local v5, "day":I
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v6

    if-ge v6, v2, :cond_1

    .line 88
    const/4 v6, 0x0

    return-object v6

    .line 90
    :cond_1
    const/4 v6, 0x0

    invoke-virtual {v0, v6, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    .line 91
    .local v6, "strYear":Ljava/lang/String;
    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v7

    .line 92
    .local v7, "strMonth":Ljava/lang/String;
    invoke-virtual {v0, v4, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v8

    .line 93
    .local v8, "strDay":Ljava/lang/String;
    const-string v9, "-"

    .line 94
    .local v9, "strSplit":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 95
    .local v10, "sbVer":Ljava/lang/StringBuilder;
    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 96
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v11

    if-le v11, v2, :cond_2

    .line 97
    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 99
    :cond_2
    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    return-object v11
.end method

.method private showVersion()V
    .locals 9

    .line 35
    const-string v0, "persist.vendor.connsys.bt_fw_ver"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 36
    .local v0, "strInfo":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "strInfo:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ConnsysPatchInfo"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "-1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 38
    const v1, 0x7f0602be

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    .line 39
    .local v1, "vPatchLayout":Landroid/view/View;
    const/16 v3, 0x8

    invoke-virtual {v1, v3}, Landroid/view/View;->setVisibility(I)V

    .line 40
    const v3, 0x7f0602bc

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v3

    .line 41
    .local v3, "vBranchLayout":Landroid/view/View;
    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/view/View;->setVisibility(I)V

    .line 42
    const v5, 0x7f0602bf

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v5

    .line 43
    .local v5, "vVerLayout":Landroid/view/View;
    invoke-virtual {v5, v4}, Landroid/view/View;->setVisibility(I)V

    .line 45
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->getBranch(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 47
    .local v6, "strBranch":Ljava/lang/String;
    if-eqz v6, :cond_0

    .line 48
    const v7, 0x7f0602bd

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 49
    .local v7, "tvBranch":Landroid/widget/TextView;
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v8

    add-int/lit8 v8, v8, -0x1

    invoke-virtual {v6, v4, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    .line 50
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "strBranch:"

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    invoke-virtual {v7, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 53
    .end local v7    # "tvBranch":Landroid/widget/TextView;
    :cond_0
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->getVer(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 54
    .local v4, "strVer":Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "strVer:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    if-eqz v4, :cond_1

    .line 56
    const v2, 0x7f0602c0

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 57
    .local v2, "tvVer":Landroid/widget/TextView;
    invoke-virtual {v2, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 59
    .end local v1    # "vPatchLayout":Landroid/view/View;
    .end local v2    # "tvVer":Landroid/widget/TextView;
    .end local v3    # "vBranchLayout":Landroid/view/View;
    .end local v4    # "strVer":Ljava/lang/String;
    .end local v5    # "vVerLayout":Landroid/view/View;
    .end local v6    # "strBranch":Ljava/lang/String;
    :cond_1
    goto :goto_0

    .line 60
    :cond_2
    const-string v1, "persist.vendor.connsys.patch.version"

    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 61
    .local v1, "strVer":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "version:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 62
    const v2, 0x7f060682

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 63
    .local v2, "text":Landroid/widget/TextView;
    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_3

    .line 64
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 67
    .end local v1    # "strVer":Ljava/lang/String;
    .end local v2    # "text":Landroid/widget/TextView;
    :cond_3
    :goto_0
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 30
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 31
    const v0, 0x7f080035

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->setContentView(I)V

    .line 32
    invoke-direct {p0}, Lcom/mediatek/engineermode/connsyspatchinfo/ConnsysPatchInfoActivity;->showVersion()V

    .line 33
    return-void
.end method
