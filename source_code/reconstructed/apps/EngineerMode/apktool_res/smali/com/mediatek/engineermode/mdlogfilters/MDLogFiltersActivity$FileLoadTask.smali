.class Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;
.super Landroid/os/AsyncTask;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "FileLoadTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V
    .locals 0

    .line 507
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p2, "x1"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;

    .line 507
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 507
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Void;
    .locals 13
    .param p1, "params"    # [Ljava/lang/Void;

    .line 518
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1200(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V

    .line 519
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "default filter path:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1300(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MDLogFilters"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 520
    new-instance v0, Ljava/io/File;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1300(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 521
    .local v0, "srcFolder":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v2

    if-eqz v2, :cond_5

    .line 523
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v2

    .line 524
    .local v2, "fileList":[Ljava/io/File;
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 525
    .local v3, "tempFileList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    if-eqz v2, :cond_5

    .line 526
    array-length v4, v2

    const/4 v5, 0x0

    :goto_0
    const-string v6, "add fileInfo:"

    const-string v7, " "

    const/4 v8, 0x1

    if-ge v5, v4, :cond_3

    aget-object v9, v2, v5

    .line 527
    .local v9, "file":Ljava/io/File;
    invoke-virtual {v9}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v10

    .line 528
    .local v10, "filePath":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "filePath:"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v1, v11}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 529
    iget-object v11, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v11, v10, v8}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1400(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v8

    .line 530
    .local v8, "filterName":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "filterName:"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v1, v11}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 531
    if-eqz v8, :cond_2

    .line 532
    const-string v11, "PLS_PS_ONLY"

    invoke-virtual {v11, v8}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_0

    .line 533
    goto :goto_1

    .line 537
    :cond_0
    const-string v11, "_Default"

    invoke-virtual {v11, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_1

    .line 538
    new-instance v11, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;

    iget-object v12, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-direct {v11, v12, v8, v10}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 539
    .local v11, "fileInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    iget-object v12, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v12}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1500(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/util/ArrayList;

    move-result-object v12

    invoke-virtual {v12, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 540
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 541
    .end local v11    # "fileInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    goto :goto_1

    .line 542
    :cond_1
    invoke-virtual {v3, v10}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 526
    .end local v8    # "filterName":Ljava/lang/String;
    .end local v9    # "file":Ljava/io/File;
    .end local v10    # "filePath":Ljava/lang/String;
    :cond_2
    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 548
    :cond_3
    invoke-static {v3}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 549
    invoke-virtual {v3}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :goto_2
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_5

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 551
    .local v5, "filePath":Ljava/lang/String;
    iget-object v9, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v9, v5, v8}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1400(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v9

    .line 552
    .local v9, "filterName":Ljava/lang/String;
    if-eqz v9, :cond_4

    .line 553
    const-string v10, "_"

    invoke-virtual {v9, v10, v7}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 554
    new-instance v10, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;

    iget-object v11, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-direct {v10, v11, v9, v5}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 555
    .local v10, "fileInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    iget-object v11, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v11}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1500(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/util/ArrayList;

    move-result-object v11

    invoke-virtual {v11, v10}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 556
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v1, v11}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 560
    .end local v5    # "filePath":Ljava/lang/String;
    .end local v9    # "filterName":Ljava/lang/String;
    .end local v10    # "fileInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    :cond_4
    goto :goto_2

    .line 564
    .end local v2    # "fileList":[Ljava/io/File;
    .end local v3    # "tempFileList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    :cond_5
    const/4 v1, 0x0

    return-object v1
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 507
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Void;

    .line 569
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->removeDialog(I)V

    .line 570
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1600(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V

    .line 571
    return-void
.end method

.method protected onPreExecute()V
    .locals 2

    .line 512
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    .line 513
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->showDialog(I)V

    .line 514
    return-void
.end method
