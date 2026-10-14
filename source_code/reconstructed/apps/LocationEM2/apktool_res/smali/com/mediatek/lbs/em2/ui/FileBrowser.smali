.class public Lcom/mediatek/lbs/em2/ui/FileBrowser;
.super Landroid/app/ListActivity;
.source "FileBrowser.java"


# instance fields
.field private mButtonLocationEM:Landroid/widget/Button;

.field private mButtonSdCard:Landroid/widget/Button;

.field private mCurrentPath:Ljava/lang/String;

.field private mExit:Z

.field private mLocationEmPath:Ljava/lang/String;

.field private mRootPath:Ljava/lang/String;

.field private mSdcardPath:Ljava/lang/String;

.field private mTextView_FilePath:Landroid/widget/TextView;

.field private paths:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Landroid/app/ListActivity;-><init>()V

    const/4 v0, 0x0

    .line 21
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    const-string v0, "/"

    .line 22
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mCurrentPath:Ljava/lang/String;

    .line 23
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mRootPath:Ljava/lang/String;

    const-string v0, "/sdcard/nmea"

    .line 24
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mSdcardPath:Ljava/lang/String;

    const/4 v0, 0x0

    .line 26
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mExit:Z

    return-void
.end method

.method static synthetic access$002(Lcom/mediatek/lbs/em2/ui/FileBrowser;Z)Z
    .locals 0

    .line 20
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mExit:Z

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/FileBrowser;)Ljava/lang/String;
    .locals 0

    .line 20
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mSdcardPath:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/FileBrowser;Ljava/lang/String;)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->getFileDir(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/FileBrowser;)Ljava/lang/String;
    .locals 0

    .line 20
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mLocationEmPath:Ljava/lang/String;

    return-object p0
.end method

.method private getFileDir(Ljava/lang/String;)V
    .locals 4

    .line 94
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mCurrentPath:Ljava/lang/String;

    .line 95
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mTextView_FilePath:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 96
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 97
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    .line 98
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 100
    invoke-virtual {v1}, Ljava/io/File;->canRead()Z

    move-result v2

    if-nez v2, :cond_0

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ERR: The folder "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " cannot open"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    .line 102
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 103
    invoke-virtual {p0}, Landroid/app/ListActivity;->finish()V

    return-void

    .line 106
    :cond_0
    invoke-virtual {v1}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v2

    .line 108
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mRootPath:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 109
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Back to "

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mRootPath:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 110
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mRootPath:Ljava/lang/String;

    invoke-interface {p1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string p1, "Back to ../"

    .line 111
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 112
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    invoke-virtual {v1}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    const/4 p1, 0x0

    .line 114
    :goto_0
    array-length v1, v2

    if-ge p1, v1, :cond_2

    .line 115
    aget-object v1, v2, p1

    .line 116
    invoke-virtual {v1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 117
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    .line 119
    :cond_2
    new-instance p1, Lcom/mediatek/lbs/em2/ui/MyAdapter;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    invoke-direct {p1, p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/MyAdapter;-><init>(Landroid/content/Context;Ljava/util/List;Ljava/util/List;)V

    invoke-virtual {p0, p1}, Landroid/app/ListActivity;->setListAdapter(Landroid/widget/ListAdapter;)V

    return-void
.end method

.method private initWidget()V
    .locals 2

    const v0, 0x7f050136

    .line 48
    invoke-virtual {p0, v0}, Landroid/app/ListActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mButtonSdCard:Landroid/widget/Button;

    const v0, 0x7f050135

    .line 49
    invoke-virtual {p0, v0}, Landroid/app/ListActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mButtonLocationEM:Landroid/widget/Button;

    .line 51
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mButtonSdCard:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/FileBrowser$1;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/FileBrowser$1;-><init>(Lcom/mediatek/lbs/em2/ui/FileBrowser;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 57
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mButtonLocationEM:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/FileBrowser$2;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/FileBrowser$2;-><init>(Lcom/mediatek/lbs/em2/ui/FileBrowser;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 33
    invoke-super {p0, p1}, Landroid/app/ListActivity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f070004

    .line 34
    invoke-virtual {p0, p1}, Landroid/app/ListActivity;->setContentView(I)V

    const p1, 0x7f0500fc

    .line 35
    invoke-virtual {p0, p1}, Landroid/app/ListActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mTextView_FilePath:Landroid/widget/TextView;

    .line 36
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "/data/data/"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/app/ListActivity;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/nmea"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mLocationEmPath:Ljava/lang/String;

    .line 38
    new-instance p1, Ljava/io/File;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mLocationEmPath:Ljava/lang/String;

    invoke-direct {p1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 39
    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    .line 40
    new-instance p1, Ljava/io/File;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mSdcardPath:Ljava/lang/String;

    invoke-direct {p1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 41
    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    .line 43
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mLocationEmPath:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->getFileDir(Ljava/lang/String;)V

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->initWidget()V

    return-void
.end method

.method protected onDestroy()V
    .locals 0

    .line 163
    invoke-super {p0}, Landroid/app/ListActivity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 4

    .line 125
    invoke-virtual {p2}, Landroid/view/KeyEvent;->getKeyCode()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_1

    .line 126
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    const/4 v2, 0x1

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 127
    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0

    const/4 v1, 0x0

    if-ne v0, v2, :cond_0

    .line 128
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mCurrentPath:Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mRootPath:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mCurrentPath:Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mSdcardPath:Ljava/lang/String;

    .line 129
    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mCurrentPath:Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mLocationEmPath:Ljava/lang/String;

    .line 130
    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 131
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->getFileDir(Ljava/lang/String;)V

    .line 132
    iput-boolean v1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mExit:Z

    return v2

    .line 137
    :cond_0
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mExit:Z

    if-nez v0, :cond_1

    const-string p1, "click back key again to exit"

    .line 138
    invoke-static {p0, p1, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    .line 139
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 140
    iput-boolean v2, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mExit:Z

    return v2

    .line 144
    :cond_1
    invoke-super {p0, p1, p2}, Landroid/app/ListActivity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p0

    return p0
.end method

.method protected onListItemClick(Landroid/widget/ListView;Landroid/view/View;IJ)V
    .locals 0

    .line 66
    new-instance p1, Ljava/io/File;

    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x0

    .line 67
    iput-boolean p2, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->mExit:Z

    .line 68
    invoke-virtual {p1}, Ljava/io/File;->canRead()Z

    move-result p4

    const/4 p5, 0x1

    if-ne p4, p5, :cond_1

    .line 69
    invoke-virtual {p1}, Ljava/io/File;->isDirectory()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 70
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser;->paths:Ljava/util/List;

    invoke-interface {p1, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->getFileDir(Ljava/lang/String;)V

    goto :goto_0

    .line 71
    :cond_0
    invoke-virtual {p1}, Ljava/io/File;->isFile()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 72
    new-instance p2, Landroid/app/AlertDialog$Builder;

    invoke-direct {p2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string p3, "Confirm"

    .line 73
    invoke-virtual {p2, p3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object p2

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "Do you want to load "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 74
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object p1

    new-instance p2, Lcom/mediatek/lbs/em2/ui/FileBrowser$4;

    invoke-direct {p2, p0}, Lcom/mediatek/lbs/em2/ui/FileBrowser$4;-><init>(Lcom/mediatek/lbs/em2/ui/FileBrowser;)V

    const-string p3, "OK"

    .line 75
    invoke-virtual {p1, p3, p2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object p1

    new-instance p2, Lcom/mediatek/lbs/em2/ui/FileBrowser$3;

    invoke-direct {p2, p0}, Lcom/mediatek/lbs/em2/ui/FileBrowser$3;-><init>(Lcom/mediatek/lbs/em2/ui/FileBrowser;)V

    const-string p0, "Cancel"

    .line 80
    invoke-virtual {p1, p0, p2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object p0

    .line 84
    invoke-virtual {p0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    goto :goto_0

    .line 87
    :cond_1
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " cannot be read"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :cond_2
    :goto_0
    return-void
.end method

.method protected onPause()V
    .locals 0

    .line 157
    invoke-super {p0}, Landroid/app/ListActivity;->onPause()V

    return-void
.end method

.method protected onRestart()V
    .locals 0

    .line 151
    invoke-super {p0}, Landroid/app/ListActivity;->onRestart()V

    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 154
    invoke-super {p0}, Landroid/app/ListActivity;->onResume()V

    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 148
    invoke-super {p0}, Landroid/app/ListActivity;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 0

    .line 160
    invoke-super {p0}, Landroid/app/ListActivity;->onStop()V

    return-void
.end method
