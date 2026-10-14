.class public Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;
.super Landroid/app/Activity;
.source "McfFileSelectActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;
    }
.end annotation


# static fields
.field public static final DIALOG_LOAD_FILES:I = 0x0

.field public static final GEN_OPOTA_FILE_CODE:I = 0x2

.field public static final OPOTA_FILE_CODE:I = 0x1

.field public static final OP_OTA_SUFFIX:[Ljava/lang/String;

.field public static final OTA_FILE_CODE:I = 0x0

.field public static final OTA_SUFFIX:[Ljava/lang/String;

.field public static final SAVED_PATH_KEY:Ljava/lang/String; = "saved_path"

.field protected static final TAG:Ljava/lang/String; = "McfConfig/McfFileSelectActivity"


# instance fields
.field private adapter:Lcom/mediatek/engineermode/mcfconfig/FileInfoAdapter;

.field private btnCancel:Landroid/widget/Button;

.field private currentPath:Ljava/lang/String;

.field private instance:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

.field private lvContent:Landroid/widget/ListView;

.field private mEmCallback:Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

.field private mFileList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/mcfconfig/FileInfo;",
            ">;"
        }
    .end annotation
.end field

.field protected mSavedInstanceState:Landroid/os/Bundle;

.field private mcfFileType:I

.field private root:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 41
    const-string v0, "mcfopota"

    const-string v1, "bin"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    .line 42
    const-string v0, "mcfota"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OTA_SUFFIX:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 33
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 43
    iput-object p0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->instance:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    .line 44
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mFileList:Ljava/util/ArrayList;

    .line 51
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mSavedInstanceState:Landroid/os/Bundle;

    .line 161
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$2;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mEmCallback:Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    .line 33
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mEmCallback:Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    .line 33
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mFileList:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    .line 33
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->refreshView()V

    return-void
.end method

.method public static actionStart(Landroid/app/Activity;Ljava/lang/String;I)V
    .locals 2
    .param p0, "mActivity"    # Landroid/app/Activity;
    .param p1, "root"    # Ljava/lang/String;
    .param p2, "REQUEST"    # I

    .line 57
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 58
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "root"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 59
    const-string v1, "file_type"

    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 60
    invoke-virtual {p0, v0, p2}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    .line 61
    return-void
.end method

.method private initEvent()V
    .locals 2

    .line 100
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->btnCancel:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$1;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 108
    return-void
.end method

.method private refreshView()V
    .locals 3

    .line 114
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->adapter:Lcom/mediatek/engineermode/mcfconfig/FileInfoAdapter;

    if-nez v0, :cond_0

    .line 115
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/FileInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->instance:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mFileList:Ljava/util/ArrayList;

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/FileInfoAdapter;-><init>(Landroid/content/Context;Ljava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->adapter:Lcom/mediatek/engineermode/mcfconfig/FileInfoAdapter;

    .line 116
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->lvContent:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 117
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->lvContent:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    goto :goto_0

    .line 119
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/FileInfoAdapter;->notifyDataSetChanged()V

    .line 121
    :goto_0
    return-void
.end method


# virtual methods
.method public checkFileValid(Lcom/mediatek/engineermode/mcfconfig/FileInfo;)Z
    .locals 5
    .param p1, "file"    # Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    .line 171
    invoke-virtual {p1}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->getFileName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->getFileExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 172
    .local v0, "fileExtension":Ljava/lang/String;
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mcfFileType:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_2

    if-eq v1, v3, :cond_0

    const/4 v4, 0x2

    if-eq v1, v4, :cond_0

    .line 183
    return v3

    .line 179
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 180
    return v3

    .line 181
    :cond_1
    return v2

    .line 174
    :cond_2
    sget-object v1, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OTA_SUFFIX:[Ljava/lang/String;

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 175
    return v3

    .line 176
    :cond_3
    return v2
.end method

.method public initLayout()V
    .locals 3

    .line 76
    const v0, 0x7f0800d8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->setContentView(I)V

    .line 78
    const v0, 0x7f0606a5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->btnCancel:Landroid/widget/Button;

    .line 81
    const v0, 0x7f060535

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->lvContent:Landroid/widget/ListView;

    .line 82
    if-eqz v0, :cond_0

    .line 83
    const v1, 0x7f06037c

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setEmptyView(Landroid/view/View;)V

    .line 84
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->lvContent:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->lvContent:Landroid/widget/ListView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setFastScrollEnabled(Z)V

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->lvContent:Landroid/widget/ListView;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setVerticalScrollBarEnabled(Z)V

    .line 88
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mSavedInstanceState:Landroid/os/Bundle;

    if-eqz v0, :cond_1

    .line 89
    const-string v1, "saved_path"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 90
    .local v0, "savePath":Ljava/lang/String;
    if-eqz v0, :cond_1

    .line 91
    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->currentPath:Ljava/lang/String;

    .line 92
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onCreate, mCurrentPath updated to = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->currentPath:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "McfConfig/McfFileSelectActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    .end local v0    # "savePath":Ljava/lang/String;
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->initEvent()V

    .line 97
    return-void
.end method

.method public onBackPressed()V
    .locals 2

    .line 152
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->currentPath:Ljava/lang/String;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->root:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 153
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->currentPath:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 154
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->currentPath:Ljava/lang/String;

    .line 155
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->refreshView()V

    .line 156
    .end local v0    # "file":Ljava/io/File;
    goto :goto_0

    .line 157
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 159
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 65
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 67
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "root"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->root:Ljava/lang/String;

    .line 68
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "file_type"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mcfFileType:I

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->root:Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->currentPath:Ljava/lang/String;

    .line 70
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "root path: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->root:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", file_type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mcfFileType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig/McfFileSelectActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 71
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->root:Ljava/lang/String;

    aput-object v3, v1, v2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 72
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->initLayout()V

    .line 73
    return-void
.end method

.method protected onCreateDialog(ILandroid/os/Bundle;)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I
    .param p2, "bundle"    # Landroid/os/Bundle;

    .line 126
    if-eqz p1, :cond_0

    .line 134
    const/4 v0, 0x0

    return-object v0

    .line 128
    :cond_0
    new-instance v0, Landroid/app/ProgressDialog;

    invoke-direct {v0, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 129
    .local v0, "dlgQueryFilters":Landroid/app/ProgressDialog;
    const v1, 0x7f0a0409

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 130
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 131
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 132
    return-object v0
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 141
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    invoke-virtual {p1, p3}, Landroid/widget/AdapterView;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    .line 142
    .local v0, "selecteItemFileInfo":Lcom/mediatek/engineermode/mcfconfig/FileInfo;
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 143
    .local v1, "intent":Landroid/content/Intent;
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->getUri()Landroid/net/Uri;

    move-result-object v2

    .line 144
    .local v2, "uri":Landroid/net/Uri;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onItemClick RESULT_OK, uri : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "McfConfig/McfFileSelectActivity"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    invoke-virtual {v1, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 146
    const/4 v3, -0x1

    invoke-virtual {p0, v3, v1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->setResult(ILandroid/content/Intent;)V

    .line 147
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->finish()V

    .line 148
    return-void
.end method

.method public setFilePathListFromServer(Ljava/lang/String;)V
    .locals 13
    .param p1, "mReturnString"    # Ljava/lang/String;

    .line 189
    const-string v0, "McfConfig/McfFileSelectActivity"

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 190
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "add fileInfo:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    const-string v1, ";"

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 192
    .local v1, "fileArray":[Ljava/lang/String;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v1

    if-ge v2, v3, :cond_3

    .line 193
    const/4 v3, 0x0

    .line 194
    .local v3, "fileInfo":Lcom/mediatek/engineermode/mcfconfig/FileInfo;
    aget-object v4, v1, v2

    const-string v5, ":"

    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 195
    .local v4, "file":[Ljava/lang/String;
    if-eqz v4, :cond_2

    .line 196
    array-length v5, v4

    const/4 v6, 0x2

    const-wide/16 v7, -0x1

    const/4 v9, 0x1

    const/4 v10, 0x0

    if-ne v5, v6, :cond_0

    aget-object v5, v4, v10

    if-eqz v5, :cond_0

    .line 198
    :try_start_0
    new-instance v5, Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    aget-object v6, v4, v10

    aget-object v9, v4, v9

    invoke-static {v9}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v11

    invoke-direct {v5, v6, v11, v12}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;-><init>(Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v3, v5

    goto :goto_1

    .line 199
    :catch_0
    move-exception v5

    .line 200
    .local v5, "e":Ljava/lang/NumberFormatException;
    new-instance v6, Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    aget-object v9, v4, v10

    invoke-direct {v6, v9, v7, v8}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;-><init>(Ljava/lang/String;J)V

    move-object v3, v6

    .line 201
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "getFileSize occurs exception:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 202
    invoke-virtual {v5}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 201
    invoke-static {v0, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    .end local v5    # "e":Ljava/lang/NumberFormatException;
    :goto_1
    goto :goto_2

    .line 204
    :cond_0
    array-length v5, v4

    if-ne v5, v9, :cond_1

    .line 205
    new-instance v5, Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    aget-object v6, v4, v10

    invoke-direct {v5, v6, v7, v8}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;-><init>(Ljava/lang/String;J)V

    move-object v3, v5

    .line 207
    :cond_1
    :goto_2
    if-eqz v3, :cond_2

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->checkFileValid(Lcom/mediatek/engineermode/mcfconfig/FileInfo;)Z

    move-result v5

    if-eqz v5, :cond_2

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->mFileList:Ljava/util/ArrayList;

    invoke-virtual {v5, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 192
    .end local v3    # "fileInfo":Lcom/mediatek/engineermode/mcfconfig/FileInfo;
    .end local v4    # "file":[Ljava/lang/String;
    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 210
    .end local v1    # "fileArray":[Ljava/lang/String;
    .end local v2    # "i":I
    :cond_3
    goto :goto_3

    .line 211
    :cond_4
    const-string v1, "[setFilePathListFromServer] return empty"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 213
    :goto_3
    return-void
.end method
