.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
.super Landroid/app/Activity;
.source "RfDesenseDigRFTest.java"


# static fields
.field private static final AT_CMD_START:Ljava/lang/String; = "AT+EGCMD=4896,1,\"04\""

.field private static final AT_CMD_STOP:Ljava/lang/String; = "AT+EGCMD=4896,1,\"05\""

.field private static final CLOSE:I = 0x2

.field private static final HINT:I = 0x1

.field public static final KEY_PERIOD:Ljava/lang/String; = "digrf_period"

.field public static final KEY_PERIOD_STATUS:Ljava/lang/String; = "digrf_period_status"

.field public static final KEY_ROUND:Ljava/lang/String; = "digrf_round"

.field public static final KEY_ROUND_STATUS:Ljava/lang/String; = "digrf_round_status"

.field public static final KEY_STATE:Ljava/lang/String; = "digrf_state"

.field private static final MSG_NW_RF_OFF:I = 0x6

.field public static final MSG_TEST_PERIOD_END:I = 0x7

.field private static final OPEN:I = 0x1

.field private static final PAUSE:I = 0x3

.field private static final SIM_CARD_INSERT:I = 0x2

.field private static final START:I = 0x0

.field public static final STATE_CLOSED:I = 0x4

.field public static final STATE_NONE:I = 0x0

.field public static final STATE_OPENED:I = 0x3

.field public static final STATE_PAUSED:I = 0x2

.field public static final STATE_STARTED:I = 0x1

.field public static final TAG:Ljava/lang/String; = "RfDesenseDigRFTest"

.field public static final TEST_RESULT_TITLE:Ljava/lang/String; = "Test Result:\n\n"

.field private static final UPDATE_BUTTON:I = 0x5

.field private static final VRB_LENGTH_MAX:I

.field private static final VRB_LENGTH_MIN:I

.field private static final VRB_START_MAX:I

.field private static final VRB_START_MIN:I


# instance fields
.field TestPeriodMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field isPeriod:Z

.field isRound:Z

.field private mButtonPause:Landroid/widget/Button;

.field private mButtonStart:Landroid/widget/Button;

.field private mCellCount:I

.field private mHandler:Landroid/os/Handler;

.field private final mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mOnCheckListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private mOnClickListener:Landroid/view/View$OnClickListener;

.field private mPhone:Lcom/android/internal/telephony/Phone;

.field private mProgress:Landroid/widget/ProgressBar;

.field private mState:I

.field private mToast:Landroid/widget/Toast;

.field oneResult:[Z

.field private period:I

.field private phoneid:I

.field resultList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field resultText:Ljava/lang/String;

.field private round:I

.field private testFailedNum:I

.field private testNum:I

.field private testPeriod:I

.field private testPeriodCb:Landroid/widget/CheckBox;

.field private testPeriodSpinner:Landroid/widget/Spinner;

.field private testResultOverallTv:Landroid/widget/TextView;

.field private testResultTitleTv:Landroid/widget/TextView;

.field private testResultTv:Landroid/widget/TextView;

.field private testRound:I

.field private testRoundCb:Landroid/widget/CheckBox;

.field private testRoundEt:Landroid/widget/EditText;

.field private testSucceedNum:I

.field timer:Landroid/os/CountDownTimer;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 85
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 124
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->phoneid:I

    .line 125
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mToast:Landroid/widget/Toast;

    .line 127
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    .line 128
    const/4 v1, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mCellCount:I

    .line 129
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    .line 132
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    .line 133
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    .line 134
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testFailedNum:I

    .line 135
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testSucceedNum:I

    .line 136
    iput-boolean v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    .line 137
    iput-boolean v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isRound:Z

    .line 139
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    .line 140
    const/4 v0, 0x2

    new-array v0, v0, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    .line 143
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->TestPeriodMap:Ljava/util/HashMap;

    .line 162
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mOnClickListener:Landroid/view/View$OnClickListener;

    .line 181
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    .line 196
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$4;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mOnCheckListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 286
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->disableAllButtons()V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testStart()V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
    .param p1, "x1"    # Ljava/lang/String;

    .line 85
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->period:I

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    return v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
    .param p1, "x1"    # I

    .line 85
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
    .param p1, "x1"    # I

    .line 85
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    return p1
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)Landroid/widget/ProgressBar;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # I

    .line 85
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->sendAtCommand(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEnd()V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    return v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 85
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->updateButtons()V

    return-void
.end method

.method private disableAllButtons()V
    .locals 2

    .line 492
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonStart:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 493
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonPause:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 494
    return-void
.end method

.method private getTestPeriodIndex(I)I
    .locals 3
    .param p1, "period"    # I

    .line 155
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->TestPeriodMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 156
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->TestPeriodMap:Ljava/util/HashMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, p1, :cond_0

    .line 157
    return v0

    .line 155
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 159
    .end local v0    # "i":I
    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method private restoreState()V
    .locals 4

    .line 477
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 480
    .local v0, "pref":Landroid/content/SharedPreferences;
    const-string v2, "digrf_period"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    .line 481
    const-string v2, "digrf_round"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    .line 482
    const-string v2, "digrf_period_status"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v2

    iput-boolean v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    .line 483
    const-string v2, "digrf_round_status"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isRound:Z

    .line 484
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodSpinner:Landroid/widget/Spinner;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->getTestPeriodIndex(I)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 485
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodCb:Landroid/widget/CheckBox;

    iget-boolean v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 486
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundCb:Landroid/widget/CheckBox;

    iget-boolean v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isRound:Z

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 487
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 488
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->updateButtons()V

    .line 489
    return-void
.end method

.method private saveState()V
    .locals 5

    .line 453
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 454
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 455
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->TestPeriodMap:Ljava/util/HashMap;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodSpinner:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    .line 456
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 457
    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    goto :goto_0

    .line 460
    :cond_0
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 464
    goto :goto_0

    .line 461
    :catch_0
    move-exception v1

    .line 462
    .local v1, "e":Ljava/lang/NumberFormatException;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "NumberFormatException for "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "RfDesenseDigRFTest"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 463
    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    .line 466
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodCb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    .line 467
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodCb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    .line 468
    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    const-string v2, "digrf_state"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 469
    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    const-string v2, "digrf_period"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 470
    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    const-string v2, "digrf_round"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 471
    iget-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    const-string v2, "digrf_period_status"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 472
    iget-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isRound:Z

    const-string v2, "digrf_round_status"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 473
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 474
    return-void
.end method

.method private sendAtCommand(Ljava/lang/String;I)V
    .locals 4
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "what"    # I

    .line 513
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 v2, 0x1

    const-string v3, ""

    aput-object v3, v0, v2

    .line 514
    .local v0, "cmd":[Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "send: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v1, v0, v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "RfDesenseDigRFTest"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 515
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 516
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 504
    const-string v0, "RfDesenseDigRFTest"

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 505
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 506
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 508
    :cond_0
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mToast:Landroid/widget/Toast;

    .line 509
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 510
    return-void
.end method

.method private testRoundEnd()V
    .locals 7

    .line 340
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getProgress()I

    move-result v1

    const/4 v2, 0x1

    add-int/2addr v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setSecondaryProgress(I)V

    .line 341
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/16 v1, 0x63

    if-lt v0, v1, :cond_0

    .line 342
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    sub-int/2addr v1, v2

    invoke-interface {v0, v1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 344
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    const/4 v1, 0x0

    aget-boolean v3, v0, v1

    const-string v4, "Round "

    if-eqz v3, :cond_1

    aget-boolean v0, v0, v2

    if-eqz v0, :cond_1

    .line 345
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " : PASS\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v1, v3}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 346
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testSucceedNum:I

    add-int/2addr v0, v2

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testSucceedNum:I

    goto :goto_0

    .line 348
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " : NG\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v1, v3}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 349
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testFailedNum:I

    add-int/2addr v0, v2

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testFailedNum:I

    .line 351
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "NG: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testFailedNum:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " round, PASS: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testSucceedNum:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " round\n"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultText:Ljava/lang/String;

    .line 353
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultOverallTv:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 354
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTv:Landroid/widget/TextView;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, " "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "["

    const-string v6, ""

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "]"

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    const-string v5, ","

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 355
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    add-int/2addr v0, v2

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    .line 356
    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    if-ge v0, v3, :cond_2

    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    const/4 v3, 0x2

    if-eq v0, v3, :cond_2

    .line 357
    const-string v0, "AT+EGCMD=4896,1,\"04\""

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->sendAtCommand(Ljava/lang/String;I)V

    .line 358
    const/4 v0, 0x4

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    .line 359
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    mul-int/lit8 v1, v1, 0x64

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    div-int/2addr v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    goto :goto_1

    .line 361
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTv:Landroid/widget/TextView;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 362
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mHandler:Landroid/os/Handler;

    const/4 v3, 0x5

    const-wide/16 v4, 0x3e8

    invoke-virtual {v0, v3, v4, v5}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 363
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Test stoped round  "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ": ("

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testSucceedNum:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " : "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testFailedNum:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ")."

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "RfDesenseDigRFTest"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 364
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    mul-int/lit8 v3, v3, 0x64

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    div-int/2addr v3, v4

    invoke-virtual {v0, v3}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 365
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    if-lt v0, v3, :cond_3

    .line 366
    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    .line 367
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    invoke-virtual {v0, v2}, Landroid/widget/ProgressBar;->setVisibility(I)V

    .line 368
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTv:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 371
    :cond_3
    :goto_1
    return-void
.end method

.method private testStart()V
    .locals 6

    .line 213
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v2, "RfDesenseDigRFTest"

    const/4 v3, 0x1

    if-eqz v0, :cond_0

    .line 214
    iput v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    goto :goto_1

    .line 217
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRound:I

    .line 218
    iget-boolean v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isRound:Z

    if-eqz v4, :cond_1

    goto :goto_0

    :cond_1
    move v0, v3

    :goto_0
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 222
    goto :goto_1

    .line 219
    :catch_0
    move-exception v0

    .line 220
    .local v0, "e":Ljava/lang/NumberFormatException;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "NumberFormatException for "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, " "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    iput v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    .line 224
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->TestPeriodMap:Ljava/util/HashMap;

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodSpinner:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriod:I

    .line 225
    iget-boolean v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    const/4 v5, 0x0

    if-eqz v4, :cond_2

    goto :goto_2

    :cond_2
    move v0, v5

    :goto_2
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->period:I

    .line 226
    iput v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTitleTv:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 228
    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultText:Ljava/lang/String;

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultOverallTv:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultOverallTv:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->resultList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTv:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTv:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 234
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    invoke-virtual {v0, v5}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    invoke-virtual {v0, v3}, Landroid/widget/ProgressBar;->setSecondaryProgress(I)V

    .line 236
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    invoke-virtual {v0, v5}, Landroid/widget/ProgressBar;->setVisibility(I)V

    .line 237
    iput v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    .line 238
    iput v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testSucceedNum:I

    .line 239
    iput v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testFailedNum:I

    .line 240
    const/4 v0, 0x2

    new-array v0, v0, [Z

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    .line 242
    const-string v0, "AT+EGCMD=4896,1,\"04\""

    invoke-direct {p0, v0, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->sendAtCommand(Ljava/lang/String;I)V

    .line 243
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Test Start -> period: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->period:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ",round:  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 244
    return-void

    :array_0
    .array-data 1
        0x0t
        0x0t
    .end array-data
.end method

.method private testStop()V
    .locals 3

    .line 277
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    .line 278
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->timer:Landroid/os/CountDownTimer;

    if-eqz v1, :cond_0

    .line 279
    invoke-virtual {v1}, Landroid/os/CountDownTimer;->cancel()V

    .line 280
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->timer:Landroid/os/CountDownTimer;

    .line 282
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Test Stop -> period: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->period:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",round:  "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->round:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", testNum:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testNum:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "RfDesenseDigRFTest"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 283
    const-string v1, "AT+EGCMD=4896,1,\"05\""

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->sendAtCommand(Ljava/lang/String;I)V

    .line 284
    return-void
.end method

.method private updateButtons()V
    .locals 3

    .line 497
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[updateButtons] mState :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RfDesenseDigRFTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 498
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->disableAllButtons()V

    .line 499
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    goto :goto_0

    .line 500
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonStart:Landroid/widget/Button;

    goto :goto_1

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonPause:Landroid/widget/Button;

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 501
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 3

    .line 423
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mState:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    goto :goto_0

    .line 426
    :cond_0
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 427
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    goto :goto_1

    .line 424
    :cond_1
    :goto_0
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->showDialog(I)V

    .line 429
    :goto_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 375
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 376
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    .line 377
    const v0, 0x7f0800c9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->setContentView(I)V

    .line 379
    const v0, 0x7f06025b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonStart:Landroid/widget/Button;

    .line 380
    const v0, 0x7f060257

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonPause:Landroid/widget/Button;

    .line 381
    const v0, 0x7f060717

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodSpinner:Landroid/widget/Spinner;

    .line 382
    const v0, 0x7f060657

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodCb:Landroid/widget/CheckBox;

    .line 383
    const v0, 0x7f06071c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    .line 384
    const v0, 0x7f060658

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundCb:Landroid/widget/CheckBox;

    .line 385
    const v0, 0x7f060719

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTv:Landroid/widget/TextView;

    .line 386
    const v0, 0x7f060718

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    .line 387
    const v0, 0x7f06071b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultTitleTv:Landroid/widget/TextView;

    .line 388
    const v0, 0x7f06071a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testResultOverallTv:Landroid/widget/TextView;

    .line 390
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonStart:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 391
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mButtonPause:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 392
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodSpinner:Landroid/widget/Spinner;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 393
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testPeriodCb:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mOnCheckListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 394
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundCb:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mOnCheckListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 395
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->testRoundEt:Landroid/widget/EditText;

    const/4 v1, 0x1

    new-array v2, v1, [Landroid/text/InputFilter;

    new-instance v3, Landroid/text/InputFilter$LengthFilter;

    const/16 v4, 0xa

    invoke-direct {v3, v4}, Landroid/text/InputFilter$LengthFilter;-><init>(I)V

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setFilters([Landroid/text/InputFilter;)V

    .line 397
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->disableAllButtons()V

    .line 398
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->ifAirplaneModeEnabled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 399
    const-string v0, "RfDesenseDigRFTest"

    const-string v2, "it is in AirplaneMode"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 402
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->restoreState()V

    .line 403
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I

    .line 433
    const/4 v0, 0x1

    const/4 v1, 0x0

    const-string v2, "Confirm"

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 449
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 441
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 442
    .local v0, "builder2":Landroid/app/AlertDialog$Builder;
    const-string v3, "Notice"

    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 443
    const-string v4, "Please pull out the sim card before test"

    invoke-virtual {v3, v4}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 444
    invoke-virtual {v3, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 445
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 442
    return-object v1

    .line 435
    .end local v0    # "builder2":Landroid/app/AlertDialog$Builder;
    :cond_1
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 436
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    const-string v3, "Hint"

    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 437
    const-string v4, "Please pause the test first!"

    invoke-virtual {v3, v4}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 438
    invoke-virtual {v3, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 439
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 436
    return-object v1
.end method

.method protected onDestroy()V
    .locals 0

    .line 407
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->saveState()V

    .line 408
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 409
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 413
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 414
    const-string v0, "RfDesenseDigRFTest"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 415
    const/4 v1, -0x1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 416
    const-string v1, "some card insert"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->showDialog(I)V

    .line 419
    :cond_0
    return-void
.end method

.method public startTimer(I)V
    .locals 9
    .param p1, "waitTime"    # I

    .line 248
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "waitTime = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "s"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RfDesenseDigRFTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->mProgress:Landroid/widget/ProgressBar;

    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getProgress()I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setSecondaryProgress(I)V

    .line 250
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;

    mul-int/lit16 v1, p1, 0x3e8

    int-to-long v4, v1

    const-wide/16 v6, 0x64

    move-object v2, v0

    move-object v3, p0

    move v8, p1

    invoke-direct/range {v2 .. v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;JJI)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->timer:Landroid/os/CountDownTimer;

    .line 273
    invoke-virtual {v0}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 274
    return-void
.end method
