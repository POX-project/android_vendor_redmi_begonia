.class Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$2;
.super Ljava/lang/Object;
.source "AospPresenceTestActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->initClickListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    .line 119
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "v"    # Landroid/view/View;

    .line 122
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)Landroid/widget/EditText;

    move-result-object v0

    .line 123
    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 124
    .local v0, "contact2PhoneNum":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->access$100(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)Landroid/content/SharedPreferences;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    const-string v2, "Contact2PhoneNum"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 125
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 126
    return-void
.end method
