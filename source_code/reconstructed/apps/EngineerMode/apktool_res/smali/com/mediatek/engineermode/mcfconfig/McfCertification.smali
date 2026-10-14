.class public Lcom/mediatek/engineermode/mcfconfig/McfCertification;
.super Ljava/lang/Object;
.source "McfCertification.java"


# instance fields
.field private cmdResult:[[Z

.field private currentCmd:[I

.field private fileList:Ljava/lang/String;

.field private filePath:Ljava/lang/String;

.field private opName:Ljava/lang/String;

.field private opid:I

.field private opotaFileName:Ljava/lang/String;

.field private otaFileName:Ljava/lang/String;

.field private pathFleg:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    const/4 v0, 0x2

    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->currentCmd:[I

    .line 10
    new-array v0, v0, [I

    fill-array-data v0, :array_0

    const-class v1, Z

    invoke-static {v1, v0}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[Z

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    return-void

    :array_0
    .array-data 4
        0x2
        0x3
    .end array-data
.end method


# virtual methods
.method public getCmdResult(II)Z
    .locals 2
    .param p1, "index"    # I
    .param p2, "cmd"    # I

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    aget-object v0, v0, p1

    add-int/lit8 v1, p2, -0x1

    aget-boolean v0, v0, v1

    return v0
.end method

.method public getCmdResult()[[Z
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    return-object v0
.end method

.method public getCurCmdResult(I)Z
    .locals 2
    .param p1, "index"    # I

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    aget-object v0, v0, p1

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    aget-boolean v0, v0, v1

    return v0
.end method

.method public getCurrentCmd(I)I
    .locals 1
    .param p1, "index"    # I

    .line 70
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->currentCmd:[I

    aget v0, v0, p1

    return v0
.end method

.method public getCurrentCmd()[I
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->currentCmd:[I

    return-object v0
.end method

.method public getFileList()Ljava/lang/String;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->fileList:Ljava/lang/String;

    return-object v0
.end method

.method public getFilePath()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->filePath:Ljava/lang/String;

    return-object v0
.end method

.method public getOpName()Ljava/lang/String;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opName:Ljava/lang/String;

    return-object v0
.end method

.method public getOpid()I
    .locals 1

    .line 18
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opid:I

    return v0
.end method

.method public getOpotaFileName()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opotaFileName:Ljava/lang/String;

    return-object v0
.end method

.method public getOpotaFilePath()Ljava/lang/String;
    .locals 2

    .line 62
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->filePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opotaFileName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getOtaFileName()Ljava/lang/String;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->otaFileName:Ljava/lang/String;

    return-object v0
.end method

.method public getOtaFilePath()Ljava/lang/String;
    .locals 2

    .line 58
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->filePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->otaFileName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPathFleg()I
    .locals 1

    .line 82
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->pathFleg:I

    return v0
.end method

.method public setCmdResult(IIZ)V
    .locals 2
    .param p1, "index"    # I
    .param p2, "cmd"    # I
    .param p3, "cmdResult"    # Z

    .line 114
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    aget-object v0, v0, p1

    add-int/lit8 v1, p2, -0x1

    aput-boolean p3, v0, v1

    .line 115
    return-void
.end method

.method public setCmdResult(I[Z)V
    .locals 3
    .param p1, "index"    # I
    .param p2, "cmdResult"    # [Z

    .line 118
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    aget-object v2, v1, p1

    array-length v2, v2

    if-ge v0, v2, :cond_0

    .line 119
    aget-object v1, v1, p1

    aget-boolean v2, p2, v0

    aput-boolean v2, v1, v0

    .line 118
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 120
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public setCmdResult([[Z)V
    .locals 0
    .param p1, "cmdResult"    # [[Z

    .line 110
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->cmdResult:[[Z

    .line 111
    return-void
.end method

.method public setCurrentCmd(II)V
    .locals 1
    .param p1, "index"    # I
    .param p2, "currentCmd"    # I

    .line 74
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->currentCmd:[I

    aput p2, v0, p1

    .line 75
    return-void
.end method

.method public setCurrentCmd([I)V
    .locals 0
    .param p1, "currentCmd"    # [I

    .line 78
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->currentCmd:[I

    .line 79
    return-void
.end method

.method public setFileList(Ljava/lang/String;)V
    .locals 0
    .param p1, "fileList"    # Ljava/lang/String;

    .line 30
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->fileList:Ljava/lang/String;

    .line 31
    return-void
.end method

.method public setFilePath(Ljava/lang/String;)V
    .locals 0
    .param p1, "filePath"    # Ljava/lang/String;

    .line 38
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->filePath:Ljava/lang/String;

    .line 39
    return-void
.end method

.method public setOpName(Ljava/lang/String;)V
    .locals 0
    .param p1, "opName"    # Ljava/lang/String;

    .line 94
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opName:Ljava/lang/String;

    .line 95
    return-void
.end method

.method public setOpid(I)V
    .locals 0
    .param p1, "opid"    # I

    .line 22
    iput p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opid:I

    .line 23
    return-void
.end method

.method public setOpotaFileName(Ljava/lang/String;)V
    .locals 0
    .param p1, "sbpFileName"    # Ljava/lang/String;

    .line 46
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->opotaFileName:Ljava/lang/String;

    .line 47
    return-void
.end method

.method public setOtaFileName(Ljava/lang/String;)V
    .locals 0
    .param p1, "otaFileName"    # Ljava/lang/String;

    .line 54
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->otaFileName:Ljava/lang/String;

    .line 55
    return-void
.end method

.method public setPathFleg(I)V
    .locals 0
    .param p1, "pathFleg"    # I

    .line 86
    iput p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->pathFleg:I

    .line 87
    return-void
.end method
