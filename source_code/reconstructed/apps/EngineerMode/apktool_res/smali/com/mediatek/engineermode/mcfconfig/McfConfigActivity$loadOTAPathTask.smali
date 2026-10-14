.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;
.super Landroid/os/AsyncTask;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "loadOTAPathTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Integer;",
        "Ljava/lang/Void;",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 1285
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Integer;)Ljava/lang/Integer;
    .locals 3
    .param p1, "params"    # [Ljava/lang/Integer;

    .line 1289
    const/4 v0, 0x0

    aget-object v1, p1, v0

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-eqz v1, :cond_2

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 1297
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    goto :goto_0

    .line 1294
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    .line 1295
    goto :goto_0

    .line 1291
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    .line 1292
    nop

    .line 1300
    :goto_0
    aget-object v0, p1, v0

    return-object v0
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 1285
    check-cast p1, [Ljava/lang/Integer;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->doInBackground([Ljava/lang/Integer;)Ljava/lang/Integer;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Integer;)V
    .locals 3
    .param p1, "result"    # Ljava/lang/Integer;

    .line 1305
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_3

    .line 1306
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-nez v0, :cond_2

    .line 1307
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->clearCheck()V

    .line 1308
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPathBt:Landroid/widget/RadioButton;

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaRuntimePathBt:Landroid/widget/RadioButton;

    :goto_0
    invoke-virtual {v1}, Landroid/widget/RadioButton;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 1309
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->clearCheck()V

    .line 1310
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1311
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPathBt:Landroid/widget/RadioButton;

    goto :goto_1

    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaRuntimePathBt:Landroid/widget/RadioButton;

    :goto_1
    invoke-virtual {v1}, Landroid/widget/RadioButton;->getId()I

    move-result v1

    .line 1310
    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 1312
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup$OnCheckedChangeListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 1313
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup$OnCheckedChangeListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 1315
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1316
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_4

    .line 1317
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v0

    if-nez v0, :cond_6

    .line 1318
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-nez v0, :cond_5

    .line 1319
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->clearCheck()V

    .line 1320
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPathBt:Landroid/widget/RadioButton;

    goto :goto_2

    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaRuntimePathBt:Landroid/widget/RadioButton;

    :goto_2
    invoke-virtual {v1}, Landroid/widget/RadioButton;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 1321
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup$OnCheckedChangeListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 1323
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_4

    .line 1324
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_8

    .line 1325
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->clearCheck()V

    .line 1326
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v1

    if-eqz v1, :cond_7

    const v1, 0x7f0605ea

    goto :goto_3

    :cond_7
    const v1, 0x7f060685

    :goto_3
    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 1327
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/Spinner;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v1

    add-int/lit8 v1, v1, -0xc

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 1328
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup$OnCheckedChangeListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 1329
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;)V

    .line 1346
    .local v0, "l":Landroid/widget/AdapterView$OnItemSelectedListener;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 1347
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v1

    rem-int/lit8 v1, v1, 0xc

    if-nez v1, :cond_8

    .line 1348
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/EditText;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 1349
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/EditText;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setVisibility(I)V

    .line 1352
    .end local v0    # "l":Landroid/widget/AdapterView$OnItemSelectedListener;
    :cond_8
    :goto_4
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 1285
    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->onPostExecute(Ljava/lang/Integer;)V

    return-void
.end method
