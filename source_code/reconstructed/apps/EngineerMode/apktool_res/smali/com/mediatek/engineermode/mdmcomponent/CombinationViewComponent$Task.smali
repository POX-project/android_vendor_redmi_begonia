.class Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
.super Ljava/lang/Object;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "Task"
.end annotation


# instance fields
.field private canRepeate:Z

.field private mData:Ljava/lang/Object;

.field private mName:Ljava/lang/String;

.field private mSimID:I

.field private mTaskId:I

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;I)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
    .param p2, "taskId"    # I

    .line 2963
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2945
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    .line 2946
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    .line 2947
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mData:Ljava/lang/Object;

    .line 2948
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    .line 2949
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->canRepeate:Z

    .line 2964
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    .line 2965
    return-void
.end method

.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;ILjava/lang/String;Lcom/mediatek/mdml/Msg;I)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
    .param p2, "taskId"    # I
    .param p3, "name"    # Ljava/lang/String;
    .param p4, "data"    # Lcom/mediatek/mdml/Msg;
    .param p5, "simID"    # I

    .line 2950
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2945
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    .line 2946
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    .line 2947
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mData:Ljava/lang/Object;

    .line 2948
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    .line 2949
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->canRepeate:Z

    .line 2951
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    .line 2952
    iput-object p3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    .line 2953
    iput-object p4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mData:Ljava/lang/Object;

    .line 2954
    iput p5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    .line 2955
    return-void
.end method

.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;ILjava/lang/String;Lcom/mediatek/mdml/Msg;IZ)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
    .param p2, "taskId"    # I
    .param p3, "name"    # Ljava/lang/String;
    .param p4, "data"    # Lcom/mediatek/mdml/Msg;
    .param p5, "simID"    # I
    .param p6, "canRepeate"    # Z

    .line 2956
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2945
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    .line 2946
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    .line 2947
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mData:Ljava/lang/Object;

    .line 2948
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    .line 2949
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->canRepeate:Z

    .line 2957
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    .line 2958
    iput-object p3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    .line 2959
    iput-object p4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mData:Ljava/lang/Object;

    .line 2960
    iput p5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    .line 2961
    iput-boolean p6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->canRepeate:Z

    .line 2962
    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 2944
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->canRepeate:Z

    return v0
.end method


# virtual methods
.method public getExtraMsg()Ljava/lang/Object;
    .locals 1

    .line 2973
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mData:Ljava/lang/Object;

    return-object v0
.end method

.method public getExtraName()Ljava/lang/String;
    .locals 1

    .line 2970
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    return-object v0
.end method

.method public getExtraSimID()I
    .locals 1

    .line 2976
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    return v0
.end method

.method public getTaskId()I
    .locals 1

    .line 2967
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 2979
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Task ID: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mTaskId:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", msgName: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mSimID: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->mSimID:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
