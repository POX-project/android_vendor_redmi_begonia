.class public Lcom/mediatek/engineermode/ShellExe;
.super Ljava/lang/Object;
.source "ShellExe.java"


# static fields
.field public static final ERROR:Ljava/lang/String; = "ERROR"

.field private static final OPERATION_ERROR_PREFIX:Ljava/lang/String; = "#$ERROR^&"

.field public static final RESULT_EXCEPTION:I = -0x2

.field public static final RESULT_FAIL:I = -0x1

.field public static final RESULT_SUCCESS:I = 0x0

.field private static final TAG:Ljava/lang/String; = "ShellExe"

.field private static sResultBuilder:Ljava/lang/StringBuilder;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 58
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static execCommand(Ljava/lang/String;)I
    .locals 3
    .param p0, "command"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 76
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "sh"

    aput-object v2, v0, v1

    const/4 v1, 0x1

    const-string v2, "-c"

    aput-object v2, v0, v1

    const/4 v1, 0x2

    aput-object p0, v0, v1

    invoke-static {v0}, Lcom/mediatek/engineermode/ShellExe;->execCommand([Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static execCommand(Ljava/lang/String;Z)I
    .locals 3
    .param p0, "command"    # Ljava/lang/String;
    .param p1, "execOnLocal"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 97
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "sh"

    aput-object v2, v0, v1

    const/4 v1, 0x1

    const-string v2, "-c"

    aput-object v2, v0, v1

    const/4 v1, 0x2

    aput-object p0, v0, v1

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/ShellExe;->execCommand([Ljava/lang/String;Z)I

    move-result v0

    return v0
.end method

.method public static execCommand([Ljava/lang/String;)I
    .locals 1
    .param p0, "command"    # [Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 86
    invoke-static {p0}, Lcom/mediatek/engineermode/ShellExe;->execCommandOnServer([Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method private static execCommand([Ljava/lang/String;Z)I
    .locals 1
    .param p0, "command"    # [Ljava/lang/String;
    .param p1, "execOnLocal"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 108
    if-eqz p1, :cond_0

    .line 109
    invoke-static {p0}, Lcom/mediatek/engineermode/ShellExe;->execCommandLocal([Ljava/lang/String;)I

    move-result v0

    return v0

    .line 111
    :cond_0
    invoke-static {p0}, Lcom/mediatek/engineermode/ShellExe;->execCommandOnServer([Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method private static execCommandLocal([Ljava/lang/String;)I
    .locals 11
    .param p0, "command"    # [Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 122
    const-string v0, "ERROR"

    const-string v1, "close reader in finally block exception: "

    const-string v2, "ShellExe"

    const/4 v3, -0x1

    .line 123
    .local v3, "result":I
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v4

    .line 124
    .local v4, "runtime":Ljava/lang/Runtime;
    invoke-virtual {v4, p0}, Ljava/lang/Runtime;->exec([Ljava/lang/String;)Ljava/lang/Process;

    move-result-object v5

    .line 125
    .local v5, "proc":Ljava/lang/Process;
    const/4 v6, 0x0

    .line 126
    .local v6, "bufferedReader":Ljava/io/BufferedReader;
    sget-object v7, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->length()I

    move-result v8

    const/4 v9, 0x0

    invoke-virtual {v7, v9, v8}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 128
    :try_start_0
    new-instance v7, Ljava/io/BufferedReader;

    new-instance v8, Ljava/io/InputStreamReader;

    .line 129
    invoke-virtual {v5}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v9

    invoke-static {}, Ljava/nio/charset/Charset;->defaultCharset()Ljava/nio/charset/Charset;

    move-result-object v10

    invoke-direct {v8, v9, v10}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V

    invoke-direct {v7, v8}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    move-object v6, v7

    .line 130
    invoke-virtual {v5}, Ljava/lang/Process;->waitFor()I

    move-result v7

    if-nez v7, :cond_2

    .line 131
    invoke-virtual {v6}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v7

    .line 132
    .local v7, "line":Ljava/lang/String;
    if-eqz v7, :cond_1

    .line 133
    sget-object v8, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 135
    :goto_0
    invoke-virtual {v6}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v8

    move-object v7, v8

    .line 136
    if-nez v7, :cond_0

    .line 137
    goto :goto_1

    .line 139
    :cond_0
    sget-object v8, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    const/16 v9, 0xa

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 140
    sget-object v8, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 144
    :cond_1
    :goto_1
    const/4 v0, 0x0

    .line 145
    .end local v3    # "result":I
    .end local v7    # "line":Ljava/lang/String;
    .local v0, "result":I
    goto :goto_2

    .line 146
    .end local v0    # "result":I
    .restart local v3    # "result":I
    :cond_2
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "exit value = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/Process;->exitValue()I

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    sget-object v7, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 148
    const/4 v0, -0x1

    .line 156
    .end local v3    # "result":I
    .restart local v0    # "result":I
    :goto_2
    nop

    .line 158
    :try_start_1
    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 161
    :goto_3
    goto :goto_5

    .line 159
    :catch_0
    move-exception v3

    .line 160
    .local v3, "e":Ljava/io/IOException;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    :goto_4
    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v3    # "e":Ljava/io/IOException;
    goto :goto_3

    .line 156
    .end local v0    # "result":I
    .local v3, "result":I
    :catchall_0
    move-exception v0

    goto :goto_6

    .line 150
    :catch_1
    move-exception v7

    .line 151
    .local v7, "e":Ljava/lang/InterruptedException;
    :try_start_2
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "exe shell command InterruptedException: "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 152
    invoke-virtual {v7}, Ljava/lang/InterruptedException;->getMessage()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 151
    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    sget-object v8, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 154
    const/4 v0, -0x2

    .line 156
    .end local v3    # "result":I
    .end local v7    # "e":Ljava/lang/InterruptedException;
    .restart local v0    # "result":I
    if-eqz v6, :cond_3

    .line 158
    :try_start_3
    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_3

    .line 159
    :catch_2
    move-exception v3

    .line 160
    .local v3, "e":Ljava/io/IOException;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    goto :goto_4

    .line 164
    .end local v3    # "e":Ljava/io/IOException;
    :cond_3
    :goto_5
    return v0

    .line 156
    .end local v0    # "result":I
    .local v3, "result":I
    :goto_6
    if-eqz v6, :cond_4

    .line 158
    :try_start_4
    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    .line 161
    goto :goto_7

    .line 159
    :catch_3
    move-exception v7

    .line 160
    .local v7, "e":Ljava/io/IOException;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 163
    .end local v7    # "e":Ljava/io/IOException;
    :cond_4
    :goto_7
    throw v0
.end method

.method private static execCommandOnServer([Ljava/lang/String;)I
    .locals 14
    .param p0, "command"    # [Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 174
    if-eqz p0, :cond_b

    array-length v0, p0

    if-eqz v0, :cond_b

    .line 177
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 178
    .local v0, "cmdBuilder":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    .line 180
    .local v1, "i":I
    const/4 v2, 0x0

    aget-object v3, p0, v2

    const-string v4, "sh"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    aget-object v3, p0, v2

    const-string v4, "/sh"

    invoke-virtual {v3, v4}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 181
    :cond_0
    array-length v3, p0

    const/4 v4, 0x3

    if-lt v3, v4, :cond_a

    .line 184
    const/4 v1, 0x2

    .line 186
    :cond_1
    :goto_0
    array-length v3, p0

    const/4 v4, 0x1

    if-ge v1, v3, :cond_3

    .line 187
    aget-object v3, p0, v1

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 188
    array-length v3, p0

    sub-int/2addr v3, v4

    if-ge v1, v3, :cond_2

    .line 189
    const-string v3, " "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 186
    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 192
    :cond_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 193
    .local v3, "cmd":Ljava/lang/String;
    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    .line 194
    sget-object v5, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->length()I

    move-result v6

    invoke-virtual {v5, v2, v6}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 195
    const/4 v5, 0x1

    .line 196
    .local v5, "ret":Z
    new-instance v6, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;

    invoke-direct {v6}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;-><init>()V

    .line 197
    .local v6, "functionCall":Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;
    const v7, 0x13881

    invoke-virtual {v6, v7}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->startCallFunctionStringReturn(I)Z

    move-result v5

    .line 199
    const/4 v7, -0x1

    const-string v8, "ShellExe"

    if-eqz v5, :cond_9

    .line 200
    invoke-virtual {v6, v4}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamNo(I)Z

    .line 201
    invoke-virtual {v6, v3}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamString(Ljava/lang/String;)Z

    .line 202
    const/4 v9, 0x0

    .line 204
    .local v9, "funcRet":Lcom/mediatek/engineermode/emsvr/FunctionReturn;
    :cond_4
    invoke-virtual {v6}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->getNextResult()Lcom/mediatek/engineermode/emsvr/FunctionReturn;

    move-result-object v9

    .line 205
    iget-object v10, v9, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnString:Ljava/lang/String;

    if-eqz v10, :cond_5

    iget-object v10, v9, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnString:Ljava/lang/String;

    invoke-virtual {v10}, Ljava/lang/String;->length()I

    move-result v10

    if-lez v10, :cond_5

    .line 206
    sget-object v10, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    iget-object v11, v9, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnString:Ljava/lang/String;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 208
    :cond_5
    iget v10, v9, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnCode:I

    if-eq v10, v4, :cond_4

    .line 211
    :goto_1
    sget-object v10, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->length()I

    move-result v10

    .line 212
    .local v10, "len":I
    if-gtz v10, :cond_6

    .line 213
    goto :goto_2

    .line 215
    :cond_6
    sget-object v11, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    add-int/lit8 v12, v10, -0x1

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->charAt(I)C

    move-result v11

    .line 216
    .local v11, "c":C
    const/16 v12, 0xa

    if-ne v11, v12, :cond_7

    .line 217
    sget-object v12, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    add-int/lit8 v13, v10, -0x1

    invoke-virtual {v12, v13, v10}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 221
    .end local v10    # "len":I
    .end local v11    # "c":C
    goto :goto_1

    .line 222
    :cond_7
    :goto_2
    sget-object v10, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    .line 223
    .local v10, "output":Ljava/lang/String;
    if-eqz v10, :cond_8

    const-string v11, "#$ERROR^&"

    invoke-virtual {v10, v11}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_8

    .line 224
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "error operation:"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v8, v12}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    sget-object v8, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/String;->length()I

    move-result v11

    add-int/2addr v11, v4

    invoke-virtual {v8, v2, v11}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 226
    return v7

    .line 228
    :cond_8
    return v2

    .line 230
    .end local v9    # "funcRet":Lcom/mediatek/engineermode/emsvr/FunctionReturn;
    .end local v10    # "output":Ljava/lang/String;
    :cond_9
    const-string v2, "Function call start fail"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 231
    sget-object v2, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    const-string v4, "ERROR"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 232
    return v7

    .line 182
    .end local v3    # "cmd":Ljava/lang/String;
    .end local v5    # "ret":Z
    .end local v6    # "functionCall":Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;
    :cond_a
    new-instance v2, Ljava/lang/IllegalArgumentException;

    const-string v3, "invalid or unknown cmd to execute"

    invoke-direct {v2, v3}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v2

    .line 175
    .end local v0    # "cmdBuilder":Ljava/lang/StringBuilder;
    .end local v1    # "i":I
    :cond_b
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Invalid shell command to execute"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static getOutput()Ljava/lang/String;
    .locals 1

    .line 66
    sget-object v0, Lcom/mediatek/engineermode/ShellExe;->sResultBuilder:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
