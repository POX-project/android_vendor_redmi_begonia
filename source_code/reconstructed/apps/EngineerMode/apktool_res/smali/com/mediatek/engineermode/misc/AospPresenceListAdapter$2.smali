.class Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;
.super Ljava/lang/Object;
.source "AospPresenceListAdapter.java"

# interfaces
.implements Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    .line 82
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onSharedPreferenceChanged(Landroid/content/SharedPreferences;Ljava/lang/String;)V
    .locals 5
    .param p1, "prefs"    # Landroid/content/SharedPreferences;
    .param p2, "key"    # Ljava/lang/String;

    .line 84
    const-string v0, "-1"

    invoke-interface {p1, p2, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 85
    .local v0, "value":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Key changed: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$000(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 86
    const-string v1, "Contact1PhoneNum"

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "tel:"

    if-eqz v1, :cond_0

    .line 87
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$100(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)[Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v3

    goto :goto_0

    .line 88
    :cond_0
    const-string v1, "Contact2PhoneNum"

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 89
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$100(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)[Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v3

    .line 91
    :cond_1
    :goto_0
    return-void
.end method
