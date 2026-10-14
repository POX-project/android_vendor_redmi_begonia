.class Lcom/mediatek/engineermode/worldmode/WorldModeActivity$1;
.super Landroid/os/Handler;
.source "WorldModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 144
    iput-object p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$1;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 17
    .param p1, "msg"    # Landroid/os/Message;

    .line 147
    move-object/from16 v1, p1

    iget v0, v1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_0

    move-object/from16 v3, p0

    goto/16 :goto_3

    .line 149
    :cond_0
    iget-object v0, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    move-object v2, v0

    check-cast v2, Landroid/os/AsyncResult;

    .line 150
    .local v2, "asyncResult":Landroid/os/AsyncResult;
    iget-object v0, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v3, "WorldModeActivity"

    if-eqz v0, :cond_1

    .line 151
    const-string v0, "Failed to query band"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 152
    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v3, p0

    goto/16 :goto_3

    .line 154
    :cond_1
    iget-object v0, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    move-object v4, v0

    check-cast v4, [Ljava/lang/String;

    .line 155
    .local v4, "result":[Ljava/lang/String;
    const/4 v5, 0x0

    aget-object v0, v4, v5

    const/4 v6, 0x7

    invoke-virtual {v0, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    .line 156
    .local v6, "splitString":Ljava/lang/String;
    const-string v0, ","

    invoke-virtual {v6, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    .line 157
    .local v7, "getDigitalVal":[Ljava/lang/String;
    const/4 v0, 0x5

    new-array v8, v0, [J

    .line 158
    .local v8, "values":[J
    const/4 v9, 0x1

    const-wide/16 v10, 0x0

    if-eqz v7, :cond_4

    array-length v0, v7

    if-le v0, v9, :cond_4

    .line 159
    const/4 v0, 0x0

    move v12, v0

    .local v12, "i":I
    :goto_0
    array-length v0, v8

    if-ge v12, v0, :cond_4

    .line 160
    array-length v0, v7

    if-le v0, v12, :cond_3

    aget-object v0, v7, v12

    if-nez v0, :cond_2

    goto :goto_1

    .line 165
    :cond_2
    :try_start_0
    aget-object v0, v7, v12

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v13

    aput-wide v13, v8, v12
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 168
    goto :goto_2

    .line 166
    :catch_0
    move-exception v0

    .line 167
    .local v0, "e":Ljava/lang/NumberFormatException;
    aput-wide v10, v8, v12

    goto :goto_2

    .line 161
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :cond_3
    :goto_1
    aput-wide v10, v8, v12

    .line 162
    nop

    .line 159
    :goto_2
    add-int/lit8 v12, v12, 0x1

    goto :goto_0

    .line 171
    .end local v12    # "i":I
    :cond_4
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isGsmSupported()Z

    move-result v0

    if-eqz v0, :cond_5

    aget-wide v12, v8, v5

    cmp-long v0, v12, v10

    if-lez v0, :cond_5

    .line 172
    invoke-static {v9}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$012(I)I

    .line 175
    :cond_5
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isTdscdmaSupported()Z

    move-result v0

    const/4 v12, 0x2

    if-eqz v0, :cond_6

    aget-wide v13, v8, v9

    const-wide/16 v15, 0x3f

    and-long/2addr v13, v15

    cmp-long v0, v13, v10

    if-lez v0, :cond_6

    .line 176
    invoke-static {v12}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$012(I)I

    .line 179
    :cond_6
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isWcdmaSupported()Z

    move-result v0

    if-eqz v0, :cond_7

    aget-wide v13, v8, v9

    const-wide/16 v15, 0x3c0

    and-long/2addr v13, v15

    cmp-long v0, v13, v10

    if-lez v0, :cond_7

    .line 180
    const/4 v0, 0x4

    invoke-static {v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$012(I)I

    .line 182
    :cond_7
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isLteFddSupported()Z

    move-result v0

    if-eqz v0, :cond_8

    aget-wide v12, v8, v12

    cmp-long v0, v12, v10

    if-lez v0, :cond_8

    .line 183
    const/16 v0, 0x10

    invoke-static {v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$012(I)I

    .line 185
    :cond_8
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isLteTddSupported()Z

    move-result v0

    if-eqz v0, :cond_9

    const/4 v0, 0x3

    aget-wide v12, v8, v0

    cmp-long v0, v12, v10

    if-lez v0, :cond_9

    .line 186
    const/16 v0, 0x8

    invoke-static {v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$012(I)I

    .line 188
    :cond_9
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "mBandMode = "

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$000()I

    move-result v9

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    move-object/from16 v3, p0

    iget-object v0, v3, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$1;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->showDialog(I)V

    .line 191
    .end local v4    # "result":[Ljava/lang/String;
    .end local v6    # "splitString":Ljava/lang/String;
    .end local v7    # "getDigitalVal":[Ljava/lang/String;
    .end local v8    # "values":[J
    nop

    .line 195
    .end local v2    # "asyncResult":Landroid/os/AsyncResult;
    :goto_3
    return-void
.end method
