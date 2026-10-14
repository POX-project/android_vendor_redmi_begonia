.class Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;
.super Landroid/os/Handler;
.source "BtTestTool.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtTestTool;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtTestTool;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtTestTool;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    .line 280
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 283
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 284
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-eq v0, v1, :cond_1

    if-eq v0, v2, :cond_0

    goto :goto_0

    .line 295
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->access$100(Lcom/mediatek/engineermode/bluetooth/BtTestTool;)V

    goto :goto_0

    .line 292
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->access$000(Lcom/mediatek/engineermode/bluetooth/BtTestTool;I)V

    .line 293
    goto :goto_0

    .line 286
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 287
    .local v0, "prefs":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 288
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const/4 v2, -0x1

    const-string v3, "pref_ble_always_scanning"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 289
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 290
    nop

    .line 298
    .end local v0    # "prefs":Landroid/content/SharedPreferences;
    .end local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    :goto_0
    return-void
.end method
