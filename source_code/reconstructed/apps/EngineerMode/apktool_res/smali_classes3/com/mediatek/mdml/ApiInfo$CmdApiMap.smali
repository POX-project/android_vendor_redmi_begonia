.class Lcom/mediatek/mdml/ApiInfo$CmdApiMap;
.super Ljava/lang/Object;
.source "ApiInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/mdml/ApiInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "CmdApiMap"
.end annotation


# instance fields
.field public m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public m_szApi:Ljava/lang/String;

.field public m_szMethod:Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/mdml/ApiInfo;


# direct methods
.method public constructor <init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/mdml/ApiInfo;
    .param p2, "cmd_code"    # Lcom/mediatek/mdml/MONITOR_CMD_CODE;
    .param p3, "szApi"    # Ljava/lang/String;
    .param p4, "szMethod"    # Ljava/lang/String;

    .line 123
    iput-object p1, p0, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->this$0:Lcom/mediatek/mdml/ApiInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 124
    iput-object p2, p0, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 125
    iput-object p3, p0, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_szApi:Ljava/lang/String;

    .line 126
    iput-object p4, p0, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_szMethod:Ljava/lang/String;

    .line 127
    return-void
.end method
