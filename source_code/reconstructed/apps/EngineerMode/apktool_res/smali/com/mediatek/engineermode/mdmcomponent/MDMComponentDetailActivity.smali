.class public Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;
.super Landroid/app/Activity;
.source "MDMComponentDetailActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;
    }
.end annotation


# static fields
.field private static final DIALOG_MDM_ERROR:I = 0x1

.field private static final DIALOG_WAIT_UNSUBSCRIB:I = 0x0

.field private static final ENABLETRAP_DONE:I = 0x3

.field private static final MDM_ERROR:I = 0x4

.field public static final MSG_INIT_UI:I = 0x5

.field private static final MSG_MDM_ENABLETRAP:I = 0x0

.field public static final MSG_MDM_UNSUBSCRIBE:I = 0x1

.field public static final MSG_TASK_DONE:I = 0x1

.field public static final MSG_TASK_START:I = 0x0

.field public static final MSG_TASK_STOP:I = 0x2

.field private static final TAG:Ljava/lang/String; = "EmInfo/MDMComponentDetailActivity"

.field private static final UNSUBSCRIBE_DONE:I = 0x2

.field private static isMsgShow:Z

.field public static mModemType:I

.field public static mSimMccMnc:[Ljava/lang/String;

.field public static mSimType:I

.field public static mUpdateUiHandler:Landroid/os/Handler;

.field public static taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;


# instance fields
.field private allComponents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;",
            ">;"
        }
    .end annotation
.end field

.field private checked:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private content:Landroid/view/View;

.field private leftEdge:I

.field mCheckedEmInteger:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field mComponents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;",
            ">;"
        }
    .end annotation
.end field

.field private mCurrentItem:Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

.field private mCurrentItemIndex:I

.field private mHandler:Landroid/os/Handler;

.field private mInfoFrameLayout:Landroid/widget/FrameLayout;

.field private mItemCount:I

.field private mPageDown:Landroid/widget/Button;

.field private mPageUp:Landroid/widget/Button;

.field private mProgressDialog:Landroid/app/ProgressDialog;

.field private mTitle:Landroid/widget/TextView;

.field private menu:Landroid/view/View;

.field private menuPadding:I

.field private menuParams:Landroid/widget/LinearLayout$LayoutParams;

.field private screenHeight:I

.field private screenWidth:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 96
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    .line 97
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isMsgShow:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 76
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 99
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCheckedEmInteger:Ljava/util/ArrayList;

    .line 101
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItemIndex:I

    .line 106
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mItemCount:I

    .line 111
    const/16 v0, 0x50

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->menuPadding:I

    .line 118
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method public static DecodeICDPacketHeader(Ljava/nio/ByteBuffer;)Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    .locals 8
    .param p0, "icdPacket"    # Ljava/nio/ByteBuffer;

    .line 262
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;-><init>()V

    .line 263
    .local v0, "headIcd":Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit8 v2, v2, 0xf

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->type:I

    .line 264
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xf0

    const/4 v3, 0x4

    shr-int/2addr v2, v3

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->version:I

    .line 265
    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->type:I

    const/4 v4, 0x7

    const/4 v5, 0x6

    const/4 v6, 0x1

    const/4 v7, 0x2

    if-eqz v2, :cond_2

    if-eq v2, v6, :cond_0

    .line 304
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "type = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->type:I

    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponentDetailActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 288
    :cond_0
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit8 v2, v2, 0xf

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->type:I

    .line 289
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xf0

    shr-int/2addr v1, v3

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->version:I

    .line 290
    iget v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->version:I

    if-eq v1, v6, :cond_1

    if-eq v1, v7, :cond_1

    goto :goto_0

    .line 293
    :cond_1
    invoke-virtual {p0, v6}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xff

    .line 294
    invoke-virtual {p0, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    .line 295
    invoke-virtual {p0, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x10

    or-int/2addr v1, v2

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->total_size:I

    .line 296
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit8 v1, v1, 0xf

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->timestamp_type:I

    .line 297
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xf0

    shr-int/2addr v1, v3

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->protocol_id:I

    .line 298
    invoke-virtual {p0, v5}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xff

    invoke-virtual {p0, v4}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->msg_id:I

    .line 301
    :goto_0
    goto/16 :goto_2

    .line 267
    :cond_2
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit8 v2, v2, 0xf

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->type:I

    .line 268
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xf0

    shr-int/2addr v1, v3

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->version:I

    .line 269
    iget v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->version:I

    if-eq v1, v6, :cond_4

    if-eq v1, v7, :cond_3

    goto :goto_1

    .line 277
    :cond_3
    invoke-virtual {p0, v6}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xff

    invoke-virtual {p0, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    .line 278
    invoke-virtual {p0, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x10

    or-int/2addr v1, v2

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->total_size:I

    .line 279
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit8 v1, v1, 0xf

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->timestamp_type:I

    .line 280
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xf0

    shr-int/2addr v1, v3

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->protocol_id:I

    .line 281
    invoke-virtual {p0, v5}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xff

    invoke-virtual {p0, v4}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->msg_id:I

    goto :goto_1

    .line 271
    :cond_4
    invoke-virtual {p0, v6}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xff

    invoke-virtual {p0, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->total_size:I

    .line 272
    const/4 v1, 0x3

    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit8 v2, v2, 0xf

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->timestamp_type:I

    .line 273
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xf0

    shr-int/2addr v1, v3

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->protocol_id:I

    .line 274
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xff

    const/4 v2, 0x5

    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->msg_id:I

    .line 275
    nop

    .line 285
    :goto_1
    nop

    .line 317
    :goto_2
    return-object v0
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/app/ProgressDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$100()Z
    .locals 1

    .line 76
    sget-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isMsgShow:Z

    return v0
.end method

.method static synthetic access$102(Z)Z
    .locals 0
    .param p0, "x0"    # Z

    .line 76
    sput-boolean p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isMsgShow:Z

    return p0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 76
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mItemCount:I

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->initValues()V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->unSubscribeMdmMsg()Z

    move-result v0

    return v0
.end method

.method private initValues()V
    .locals 6

    .line 427
    const-string v0, "window"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/WindowManager;

    .line 428
    .local v0, "window":Landroid/view/WindowManager;
    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Display;->getWidth()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->screenWidth:I

    .line 429
    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Display;->getHeight()I

    move-result v1

    add-int/lit16 v1, v1, -0xc8

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->screenHeight:I

    .line 430
    const v1, 0x7f0602c3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->content:Landroid/view/View;

    .line 431
    const v1, 0x7f060578

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->menu:Landroid/view/View;

    .line 432
    invoke-virtual {v1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout$LayoutParams;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->menuParams:Landroid/widget/LinearLayout$LayoutParams;

    .line 433
    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->screenWidth:I

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->menuPadding:I

    sub-int/2addr v2, v3

    iput v2, v1, Landroid/widget/LinearLayout$LayoutParams;->width:I

    .line 434
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->menuParams:Landroid/widget/LinearLayout$LayoutParams;

    iget v1, v1, Landroid/widget/LinearLayout$LayoutParams;->width:I

    neg-int v1, v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->leftEdge:I

    .line 435
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->menuParams:Landroid/widget/LinearLayout$LayoutParams;

    iput v1, v2, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    .line 436
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->content:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->screenWidth:I

    iput v2, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 437
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->content:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->screenHeight:I

    iput v2, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 439
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->checked:Ljava/util/ArrayList;

    if-nez v1, :cond_0

    .line 440
    const-string v1, "EmInfo/MDMComponentDetailActivity"

    const-string v2, "checked is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 442
    :cond_0
    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 443
    .local v2, "s":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->allComponents:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 444
    .local v4, "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    invoke-virtual {v4}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 445
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 446
    goto :goto_2

    .line 448
    .end local v4    # "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    :cond_1
    goto :goto_1

    .line 449
    .end local v2    # "s":Ljava/lang/String;
    :cond_2
    :goto_2
    goto :goto_0

    .line 451
    :cond_3
    :goto_3
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mItemCount:I

    .line 452
    return-void
.end method

.method private unSubscribeMdmMsg()Z
    .locals 2

    .line 568
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->checkMonitorAlive()Z

    move-result v0

    if-nez v0, :cond_0

    .line 569
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "[unSubscribeTask] m_cmdProxy is null, md_monitor is stopped, finish"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 570
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->finish()V

    goto :goto_0

    .line 572
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->unSubscribeTrap()V

    .line 574
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private updateModemTypeStatus()V
    .locals 6

    .line 488
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "updateModemTypeStatus"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 489
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    .line 490
    .local v1, "capabilitySims":I
    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-nez v1, :cond_2

    .line 491
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    if-nez v5, :cond_0

    .line 492
    sput v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 493
    :cond_0
    if-ne v5, v4, :cond_1

    .line 494
    sput v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 496
    :cond_1
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 498
    :cond_2
    if-ne v1, v4, :cond_5

    .line 499
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    if-nez v5, :cond_3

    .line 500
    sput v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 501
    :cond_3
    if-ne v5, v4, :cond_4

    .line 502
    sput v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 504
    :cond_4
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 506
    :cond_5
    if-ne v1, v3, :cond_b

    .line 507
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v5

    if-eqz v5, :cond_8

    .line 508
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    if-nez v5, :cond_6

    .line 509
    sput v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 510
    :cond_6
    if-ne v5, v4, :cond_7

    .line 511
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 513
    :cond_7
    sput v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 516
    :cond_8
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    if-nez v5, :cond_9

    .line 517
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 518
    :cond_9
    if-ne v5, v4, :cond_a

    .line 519
    sput v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    goto :goto_0

    .line 521
    :cond_a
    sput v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    .line 525
    :cond_b
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->updateUI()V

    .line 526
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSimType = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",mModemType = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 527
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 2

    .line 354
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isMsgShow:Z

    .line 355
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->showDialog(I)V

    .line 356
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;

    const/4 v1, 0x1

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->start()V

    .line 357
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 361
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mItemCount:I

    if-nez v0, :cond_0

    .line 362
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "mComponents size =0"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 363
    return-void

    .line 365
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mPageUp:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 366
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItemIndex:I

    add-int/lit8 v0, v0, -0x1

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mItemCount:I

    add-int/2addr v0, v1

    rem-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItemIndex:I

    .line 367
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->updateUI()V

    goto :goto_0

    .line 368
    :cond_1
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mPageDown:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_2

    .line 369
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItemIndex:I

    add-int/lit8 v0, v0, 0x1

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mItemCount:I

    rem-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItemIndex:I

    .line 370
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->updateUI()V

    .line 372
    :cond_2
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 158
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 159
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "init MDMComponentDetailActivity .."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    const v0, 0x7f080094

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->setContentView(I)V

    .line 161
    const v0, 0x7f060321

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mTitle:Landroid/widget/TextView;

    .line 162
    const v0, 0x7f06031f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    .line 163
    const v0, 0x7f0600ac

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mPageUp:Landroid/widget/Button;

    .line 164
    const v0, 0x7f0600aa

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mPageDown:Landroid/widget/Button;

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mPageUp:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 166
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mPageDown:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 168
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 169
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mChecked"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    check-cast v1, Ljava/util/ArrayList;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->checked:Ljava/util/ArrayList;

    .line 170
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    .line 171
    const-string v1, "mModemType"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    .line 173
    invoke-static {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getComponents(Landroid/app/Activity;)Ljava/util/List;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->allComponents:Ljava/util/List;

    .line 174
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    .line 176
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V

    sput-object v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mUpdateUiHandler:Landroid/os/Handler;

    .line 236
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    if-nez v1, :cond_0

    .line 237
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    .line 239
    :cond_0
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;I)V

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->start()V

    .line 240
    return-void
.end method

.method protected onCreateDialog(ILandroid/os/Bundle;)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I
    .param p2, "args"    # Landroid/os/Bundle;

    .line 456
    const/4 v0, 0x0

    const-string v1, "EmInfo/MDMComponentDetailActivity"

    const/4 v2, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v2, :cond_0

    .line 483
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 466
    :cond_0
    const-string v2, "MDM error, need to finish self!"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 467
    const/4 v1, 0x0

    .line 468
    .local v1, "dialog":Landroid/app/Dialog;
    const/4 v2, 0x0

    .line 469
    .local v2, "builder":Landroid/app/AlertDialog$Builder;
    new-instance v3, Landroid/app/AlertDialog$Builder;

    invoke-direct {v3, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v2, v3

    .line 470
    const-string v3, "ERROR Warning"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 471
    invoke-virtual {v2, v0}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 472
    const-string v0, "MDM occurs error, MDM occurs error, please try re-enter"

    invoke-virtual {v2, v0}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 473
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V

    const-string v3, "OK"

    invoke-virtual {v2, v3, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 480
    invoke-virtual {v2}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 481
    .end local v1    # "dialog":Landroid/app/Dialog;
    .local v0, "dialog":Landroid/app/Dialog;
    return-object v0

    .line 458
    .end local v0    # "dialog":Landroid/app/Dialog;
    .end local v2    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_1
    const-string v3, "Wait unSubscribe message.."

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 459
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    .line 460
    const-string v4, "Waiting"

    invoke-virtual {v1, v4}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 461
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 462
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 463
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 464
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method public onDestroy()V
    .locals 2

    .line 341
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 342
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 343
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskExcute(I)V

    .line 344
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    .line 345
    sget-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isMsgShow:Z

    if-eqz v0, :cond_0

    .line 346
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isMsgShow:Z

    .line 347
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->showDialog(I)V

    .line 348
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;

    const/4 v1, 0x1

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->start()V

    .line 350
    :cond_0
    return-void
.end method

.method protected onResume()V
    .locals 7

    .line 322
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 323
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    const-string v1, "phone"

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    .line 326
    .local v1, "telephonyManager":Landroid/telephony/TelephonyManager;
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v2

    .line 327
    .local v2, "phoneIdMain":I
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    .line 328
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    add-int/lit8 v4, v2, 0x1

    rem-int/lit8 v4, v4, 0x2

    invoke-virtual {v1, v4}, Landroid/telephony/TelephonyManager;->getSimOperatorNumericForPhone(I)Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x1

    aput-object v4, v3, v6

    .line 329
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Read SIM MCC+MNC(PS1, PS2):"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v4, v4, v5

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v4, v4, v6

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->updateModemTypeStatus()V

    .line 331
    return-void
.end method

.method public onStop()V
    .locals 2

    .line 335
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 336
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "onStop"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 337
    return-void
.end method

.method public taskExcute(I)V
    .locals 2
    .param p1, "cmd"    # I

    .line 243
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    if-nez v0, :cond_0

    .line 244
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "taskDriver is null, not receiver. return "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/MDMComponentDetailActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    return-void

    .line 247
    :cond_0
    if-eqz p1, :cond_3

    const/4 v1, 0x1

    if-eq p1, v1, :cond_2

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    goto :goto_0

    .line 255
    :cond_1
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->taskStop()V

    .line 256
    goto :goto_0

    .line 252
    :cond_2
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->taskDone()V

    .line 253
    goto :goto_0

    .line 249
    :cond_3
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->taskStart()V

    .line 250
    nop

    .line 260
    :goto_0
    return-void
.end method

.method public unSubscribeTrap()V
    .locals 8

    .line 403
    const-string v0, "EmInfo/MDMComponentDetailActivity"

    const-string v1, "Before unSubscribeTrap.."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 404
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 405
    .local v1, "size":I
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    new-array v3, v1, [Ljava/lang/Long;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/Long;

    .line 406
    .local v2, "array":[Ljava/lang/Long;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "unSubscribeTrap msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v3

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    sget-object v6, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 409
    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v7

    .line 408
    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mediatek/mdml/MonitorCmdProxy;->onUnsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 410
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 411
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    new-array v4, v1, [Ljava/lang/Long;

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v3

    move-object v2, v3

    check-cast v2, [Ljava/lang/Long;

    .line 412
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "unSubscribeTrap icd record msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 413
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v3

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    sget-object v6, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_RECORD:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 415
    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v7

    .line 414
    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mediatek/mdml/MonitorCmdProxy;->onUnsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 417
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 418
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    new-array v4, v1, [Ljava/lang/Long;

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v3

    move-object v2, v3

    check-cast v2, [Ljava/lang/Long;

    .line 419
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "unSubscribeTrap icd event msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 420
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v0

    sget-wide v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    sget-object v5, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_EVENT:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 422
    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v6

    .line 421
    invoke-virtual {v0, v3, v4, v5, v6}, Lcom/mediatek/mdml/MonitorCmdProxy;->onUnsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 423
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mHandler:Landroid/os/Handler;

    const/4 v3, 0x2

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 424
    return-void
.end method

.method public updateUI()V
    .locals 5

    .line 375
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const-string v1, "EmInfo/MDMComponentDetailActivity"

    if-nez v0, :cond_0

    .line 376
    const-string v0, "mComponents size =0"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 377
    return-void

    .line 379
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItem:Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    if-eqz v0, :cond_1

    .line 380
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->removeView()V

    .line 382
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItemIndex:I

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItem:Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 383
    instance-of v0, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    if-eqz v0, :cond_2

    .line 384
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Selected Sim: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    const-string v3, "mSelectSim"

    const/4 v4, -0x1

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 385
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItem:Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setCurrentSimID(I)V

    .line 388
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mTitle:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItem:Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "(SimSlot="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    add-int/lit8 v3, v3, 0x1

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",ModemProtocol="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 391
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mCurrentItem:Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getView()Landroid/view/View;

    move-result-object v0

    .line 392
    .local v0, "view":Landroid/view/View;
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    .line 393
    .local v2, "parent":Landroid/view/ViewGroup;
    if-eqz v2, :cond_3

    .line 394
    invoke-virtual {v2}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 396
    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v3}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 397
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v3, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 399
    const-string v3, "updateUI done!"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    return-void
.end method
