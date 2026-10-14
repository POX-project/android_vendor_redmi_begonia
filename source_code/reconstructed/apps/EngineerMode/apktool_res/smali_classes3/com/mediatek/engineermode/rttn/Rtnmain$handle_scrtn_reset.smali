.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "handle_scrtn_reset"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0

    .line 1076
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p2, "x1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$1;

    .line 1076
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .line 1083
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "handle_scrtn_reset"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1084
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 1085
    .local v0, "scrtn_reset_cnf":Landroid/app/AlertDialog$Builder;
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v2, 0x7f0a00a4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 1086
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v2, 0x7f0a058f

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 1087
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v2, 0x1040013

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;)V

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 1118
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v2, 0x1040009

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$2;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;)V

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 1126
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 1127
    .local v1, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v1}, Landroid/app/AlertDialog;->show()V

    .line 1128
    return-void
.end method
