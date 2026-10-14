.class Lcom/mediatek/engineermode/voicesettings/VoiceList$1;
.super Ljava/lang/Object;
.source "VoiceList.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/voicesettings/VoiceList;->onCreateDialog(I)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/voicesettings/VoiceList;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/voicesettings/VoiceList;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/voicesettings/VoiceList;

    .line 150
    iput-object p1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList$1;->this$0:Lcom/mediatek/engineermode/voicesettings/VoiceList;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 152
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceList$1;->this$0:Lcom/mediatek/engineermode/voicesettings/VoiceList;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/voicesettings/VoiceList;->finish()V

    .line 153
    return-void
.end method
