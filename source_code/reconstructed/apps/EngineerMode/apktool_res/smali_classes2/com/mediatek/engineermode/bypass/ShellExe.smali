.class public Lcom/mediatek/engineermode/bypass/ShellExe;
.super Ljava/lang/Object;
.source "ShellExe.java"


# static fields
.field public static final ERROR:Ljava/lang/String; = "ERROR"

.field private static final OPERATION_ERROR_PREFIX:Ljava/lang/String; = "#$ERROR^&"

.field public static final RESULT_FAIL:I = -0x1

.field public static final RESULT_SUCCESS:I = 0x0

.field private static final TAG:Ljava/lang/String; = "Bypass/ReadFile"

.field private static sResultBuilder:Ljava/lang/StringBuilder;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 58
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 51
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getOutput()Ljava/lang/String;
    .locals 1

    .line 66
    sget-object v0, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static readTextFile(I)I
    .locals 11
    .param p0, "index"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 76
    sget-object v0, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 77
    const/4 v0, 0x1

    .line 78
    .local v0, "ret":Z
    new-instance v1, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;

    invoke-direct {v1}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;-><init>()V

    .line 79
    .local v1, "functionCall":Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;
    const v3, 0xc351

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->startCallFunctionStringReturn(I)Z

    move-result v0

    .line 81
    const/4 v3, -0x1

    const-string v4, "Bypass/ReadFile"

    if-eqz v0, :cond_5

    .line 82
    const/4 v5, 0x1

    invoke-virtual {v1, v5}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamNo(I)Z

    .line 83
    invoke-virtual {v1, p0}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamInt(I)Z

    .line 84
    const/4 v6, 0x0

    .line 86
    .local v6, "funcRet":Lcom/mediatek/engineermode/emsvr/FunctionReturn;
    :cond_0
    invoke-virtual {v1}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->getNextResult()Lcom/mediatek/engineermode/emsvr/FunctionReturn;

    move-result-object v6

    .line 87
    iget-object v7, v6, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnString:Ljava/lang/String;

    if-eqz v7, :cond_1

    iget-object v7, v6, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnString:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->length()I

    move-result v7

    if-lez v7, :cond_1

    .line 88
    sget-object v7, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    iget-object v8, v6, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnString:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 90
    :cond_1
    iget v7, v6, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnCode:I

    if-eq v7, v5, :cond_0

    .line 93
    :goto_0
    sget-object v7, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->length()I

    move-result v7

    .line 94
    .local v7, "len":I
    if-gtz v7, :cond_2

    .line 95
    goto :goto_1

    .line 97
    :cond_2
    sget-object v8, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    add-int/lit8 v9, v7, -0x1

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->charAt(I)C

    move-result v8

    .line 98
    .local v8, "c":C
    const/16 v9, 0xa

    if-ne v8, v9, :cond_3

    .line 99
    sget-object v9, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    add-int/lit8 v10, v7, -0x1

    invoke-virtual {v9, v10, v7}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 103
    .end local v7    # "len":I
    .end local v8    # "c":C
    goto :goto_0

    .line 104
    :cond_3
    :goto_1
    sget-object v7, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 105
    .local v7, "output":Ljava/lang/String;
    if-eqz v7, :cond_4

    const-string v8, "#$ERROR^&"

    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_4

    .line 106
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "error operation:"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v4, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    sget-object v4, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/String;->length()I

    move-result v8

    add-int/2addr v8, v5

    invoke-virtual {v4, v2, v8}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 108
    return v3

    .line 110
    :cond_4
    return v2

    .line 112
    .end local v6    # "funcRet":Lcom/mediatek/engineermode/emsvr/FunctionReturn;
    .end local v7    # "output":Ljava/lang/String;
    :cond_5
    const-string v2, "Function call start fail"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    sget-object v2, Lcom/mediatek/engineermode/bypass/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    const-string v4, "ERROR"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 114
    return v3
.end method
