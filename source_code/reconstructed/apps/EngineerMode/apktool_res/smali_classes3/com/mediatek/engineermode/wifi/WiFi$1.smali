.class Lcom/mediatek/engineermode/wifi/WiFi$1;
.super Landroid/os/AsyncTask;
.source "WiFi.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFi;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Lcom/mediatek/engineermode/wifi/WifiEmState;",
        ">;"
    }
.end annotation


# static fields
.field private static final RESULT_ENABLE_TM_FAILED:I = 0x2

.field private static final RESULT_ENABLE_WIFI_FAILED:I = 0x1

.field private static final RESULT_INIT_DONE:I


# instance fields
.field private mStrManifestInfo:Ljava/lang/String;

.field private mStrVersion:Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFi;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFi;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 117
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    .line 122
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrManifestInfo:Ljava/lang/String;

    .line 123
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrVersion:Ljava/lang/String;

    return-void
.end method

.method private getBranch(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "strInfo"    # Ljava/lang/String;

    .line 126
    const-string v0, "t-neptune[\\w-]*SOC[a-zA-Z0-9]*_[a-zA-Z0-9]*_"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 127
    .local v0, "pattern":Ljava/util/regex/Pattern;
    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v1

    .line 128
    .local v1, "matcher":Ljava/util/regex/Matcher;
    invoke-virtual {v1}, Ljava/util/regex/Matcher;->find()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 129
    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 131
    :cond_0
    const/4 v2, 0x0

    return-object v2
.end method

.method private getVer(Ljava/lang/String;)Ljava/lang/String;
    .locals 12
    .param p1, "strInfo"    # Ljava/lang/String;

    .line 135
    move-object v0, p1

    .line 136
    .local v0, "strVersion":Ljava/lang/String;
    const-string v1, "-"

    invoke-virtual {p1, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 137
    .local v1, "index":I
    if-lez v1, :cond_0

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    add-int/lit8 v3, v1, 0x1

    if-le v2, v3, :cond_0

    .line 138
    add-int/lit8 v2, v1, 0x1

    invoke-virtual {p1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    .line 140
    :cond_0
    const/16 v2, 0x8

    .line 141
    .local v2, "length":I
    const/4 v3, 0x4

    .line 142
    .local v3, "year":I
    const/4 v4, 0x6

    .line 143
    .local v4, "month":I
    const/16 v5, 0x8

    .line 144
    .local v5, "day":I
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v6

    if-ge v6, v2, :cond_1

    .line 145
    const/4 v6, 0x0

    return-object v6

    .line 147
    :cond_1
    const/4 v6, 0x0

    invoke-virtual {v0, v6, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    .line 148
    .local v6, "strYear":Ljava/lang/String;
    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v7

    .line 149
    .local v7, "strMonth":Ljava/lang/String;
    invoke-virtual {v0, v4, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v8

    .line 150
    .local v8, "strDay":Ljava/lang/String;
    const-string v9, "-"

    .line 151
    .local v9, "strSplit":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 152
    .local v10, "sbVer":Ljava/lang/StringBuilder;
    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 153
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v11

    if-le v11, v2, :cond_2

    .line 154
    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 156
    :cond_2
    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    return-object v11
.end method

.method private getVersion()V
    .locals 9

    .line 160
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->getFwManifestVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrManifestInfo:Ljava/lang/String;

    .line 161
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 163
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 164
    .local v0, "stringBuild":Ljava/lang/StringBuilder;
    const-string v1, "VERSION: CHIP = MT"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 165
    const/4 v1, 0x2

    new-array v1, v1, [J

    .line 166
    .local v1, "version":[J
    const-wide/16 v2, 0x2f

    invoke-static {v2, v3, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v2

    .line 167
    .local v2, "result":I
    if-nez v2, :cond_1

    .line 168
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "version number is: 0x"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v4, 0x0

    aget-wide v5, v1, v4

    invoke-static {v5, v6}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v5, "WifiMainpage"

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    aget-wide v5, v1, v4

    const-wide/32 v7, -0x10000

    and-long/2addr v5, v7

    const/16 v3, 0x10

    shr-long/2addr v5, v3

    invoke-static {v5, v6}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 170
    const-string v3, "  FW VER = v"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 171
    aget-wide v5, v1, v4

    const-wide/32 v7, 0xff00

    and-long/2addr v5, v7

    const/16 v3, 0x8

    shr-long/2addr v5, v3

    invoke-static {v5, v6}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 172
    const-string v3, "."

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 173
    aget-wide v4, v1, v4

    const-wide/16 v6, 0xff

    and-long/2addr v4, v6

    invoke-static {v4, v5}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 174
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 175
    const/4 v3, 0x1

    aget-wide v3, v1, v3

    const-wide/16 v5, -0x1

    and-long/2addr v3, v5

    invoke-static {v3, v4}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 176
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrVersion:Ljava/lang/String;

    .line 179
    .end local v0    # "stringBuild":Ljava/lang/StringBuilder;
    .end local v1    # "version":[J
    .end local v2    # "result":I
    :cond_1
    return-void
.end method

.method private showVersion()V
    .locals 8

    .line 182
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v1, 0x7f060871

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 183
    .local v0, "tvVerOri":Landroid/widget/TextView;
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrManifestInfo:Ljava/lang/String;

    const-string v2, "WifiMainpage"

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 185
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "strManifestInfo:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrManifestInfo:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v3, 0x7f060820

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/wifi/WiFi;->findViewById(I)Landroid/view/View;

    move-result-object v1

    .line 187
    .local v1, "vBranch":Landroid/view/View;
    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/view/View;->setVisibility(I)V

    .line 188
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v5, 0x7f06086f

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/wifi/WiFi;->findViewById(I)Landroid/view/View;

    move-result-object v4

    .line 189
    .local v4, "vVer":Landroid/view/View;
    invoke-virtual {v4, v3}, Landroid/view/View;->setVisibility(I)V

    .line 190
    const/16 v5, 0x8

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 191
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrManifestInfo:Ljava/lang/String;

    invoke-direct {p0, v5}, Lcom/mediatek/engineermode/wifi/WiFi$1;->getBranch(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 193
    .local v5, "strBranch":Ljava/lang/String;
    if-eqz v5, :cond_0

    .line 194
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v7, 0x7f060821

    invoke-virtual {v6, v7}, Lcom/mediatek/engineermode/wifi/WiFi;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    .line 195
    .local v6, "tvBranch":Landroid/widget/TextView;
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v7

    add-int/lit8 v7, v7, -0x1

    invoke-virtual {v5, v3, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    .line 196
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "strBranch:"

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    invoke-virtual {v6, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 200
    .end local v6    # "tvBranch":Landroid/widget/TextView;
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrManifestInfo:Ljava/lang/String;

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFi$1;->getVer(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 201
    .local v3, "strVer":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "strVer:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    if-eqz v3, :cond_2

    .line 203
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v6, 0x7f060870

    invoke-virtual {v2, v6}, Lcom/mediatek/engineermode/wifi/WiFi;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 204
    .local v2, "tvVer":Landroid/widget/TextView;
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 206
    .end local v1    # "vBranch":Landroid/view/View;
    .end local v2    # "tvVer":Landroid/widget/TextView;
    .end local v3    # "strVer":Ljava/lang/String;
    .end local v4    # "vVer":Landroid/view/View;
    .end local v5    # "strBranch":Ljava/lang/String;
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrVersion:Ljava/lang/String;

    if-eqz v1, :cond_2

    .line 207
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mStrVersion:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrVersion:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 208
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->mStrVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 206
    :cond_2
    :goto_0
    nop

    .line 210
    :goto_1
    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Void;)Lcom/mediatek/engineermode/wifi/WifiEmState;
    .locals 4
    .param p1, "params"    # [Ljava/lang/Void;

    .line 262
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$400(Lcom/mediatek/engineermode/wifi/WiFi;)Landroid/net/wifi/WifiManager;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->startTestMode(Landroid/net/wifi/WifiManager;)Lcom/mediatek/engineermode/wifi/WifiEmState;

    move-result-object v0

    .line 263
    .local v0, "state":Lcom/mediatek/engineermode/wifi/WifiEmState;
    sget-object v1, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_READY:Lcom/mediatek/engineermode/wifi/WifiEmState;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/WifiEmState;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 265
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFi;->getWifiChip()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->access$502(Lcom/mediatek/engineermode/wifi/WiFi;Ljava/lang/String;)Ljava/lang/String;

    .line 266
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFi;->access$500(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getWifiType(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->access$102(Lcom/mediatek/engineermode/wifi/WiFi;Lcom/mediatek/engineermode/wifi/WiFi$WifiType;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 267
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "wifi chip:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFi;->access$500(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " wifi type:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFi;->access$100(Lcom/mediatek/engineermode/wifi/WiFi;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiMainpage"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFi;->access$500(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFi;->access$100(Lcom/mediatek/engineermode/wifi/WiFi;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/wifi/WifiCapability;->getWifiCapability(Ljava/lang/String;Lcom/mediatek/engineermode/wifi/WiFi$WifiType;)Lcom/mediatek/engineermode/wifi/WifiCapability;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->access$202(Lcom/mediatek/engineermode/wifi/WiFi;Lcom/mediatek/engineermode/wifi/WifiCapability;)Lcom/mediatek/engineermode/wifi/WifiCapability;

    .line 270
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFi$1;->getVersion()V

    .line 271
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->stopTestMode()V

    .line 274
    :cond_0
    return-object v0
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 117
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFi$1;->doInBackground([Ljava/lang/Void;)Lcom/mediatek/engineermode/wifi/WifiEmState;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Lcom/mediatek/engineermode/wifi/WifiEmState;)V
    .locals 5
    .param p1, "result"    # Lcom/mediatek/engineermode/wifi/WifiEmState;

    .line 221
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    .line 223
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$5;->$SwitchMap$com$mediatek$engineermode$wifi$WifiEmState:[I

    invoke-virtual {p1}, Lcom/mediatek/engineermode/wifi/WifiEmState;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    const/4 v2, 0x2

    const/4 v3, 0x0

    if-eq v0, v1, :cond_5

    const/4 v1, 0x3

    if-eq v0, v2, :cond_4

    if-eq v0, v1, :cond_0

    goto/16 :goto_0

    .line 233
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->access$002(Lcom/mediatek/engineermode/wifi/WiFi;Ljava/util/ArrayList;)Ljava/util/ArrayList;

    .line 234
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x7f0a0735

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x7f0a0734

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 236
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserLoad()Z

    move-result v0

    if-nez v0, :cond_2

    .line 237
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x7f0a0731

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 238
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$100(Lcom/mediatek/engineermode/wifi/WiFi;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    move-result-object v0

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6620:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 239
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x7f0a0733

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 241
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x7f0a0732

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 244
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$200(Lcom/mediatek/engineermode/wifi/WiFi;)Lcom/mediatek/engineermode/wifi/WifiCapability;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isDbdcSupport()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 245
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x7f0a0730

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 247
    :cond_3
    new-instance v0, Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const v2, 0x1090003

    .line 248
    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFi;->access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;

    move-result-object v4

    invoke-direct {v0, v1, v2, v4}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 249
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFi;->access$300(Lcom/mediatek/engineermode/wifi/WiFi;)Landroid/widget/ListView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 250
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFi$1;->showVersion()V

    .line 251
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/wifi/WiFi;->removeDialog(I)V

    .line 252
    goto :goto_0

    .line 229
    .end local v0    # "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/wifi/WiFi;->removeDialog(I)V

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->showDialog(I)V

    .line 231
    goto :goto_0

    .line 225
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/wifi/WiFi;->removeDialog(I)V

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/wifi/WiFi;->showDialog(I)V

    .line 227
    nop

    .line 256
    :goto_0
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 117
    check-cast p1, Lcom/mediatek/engineermode/wifi/WifiEmState;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFi$1;->onPostExecute(Lcom/mediatek/engineermode/wifi/WifiEmState;)V

    return-void
.end method

.method protected onPreExecute()V
    .locals 2

    .line 214
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    .line 215
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFi;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->showDialog(I)V

    .line 216
    return-void
.end method
