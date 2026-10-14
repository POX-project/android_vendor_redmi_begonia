.class public Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;
.super Ljava/lang/Object;
.source "MDMContentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "MDMHeaderICDStruct"
.end annotation


# instance fields
.field check_sum:[I

.field msg_id:[I

.field protocol_id:[I

.field reserved:[I

.field timeStamp:[I

.field timestamp_type:[I

.field total_size:[I

.field type:[I

.field version:[I


# direct methods
.method public constructor <init>([I[I[I[I[I[I[I[I[I)V
    .locals 0
    .param p1, "is"    # [I
    .param p2, "is2"    # [I
    .param p3, "is3"    # [I
    .param p4, "is4"    # [I
    .param p5, "is5"    # [I
    .param p6, "is6"    # [I
    .param p7, "is7"    # [I
    .param p8, "is8"    # [I
    .param p9, "is9"    # [I

    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 104
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->type:[I

    .line 105
    iput-object p2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->version:[I

    .line 106
    iput-object p3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->total_size:[I

    .line 107
    iput-object p4, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timestamp_type:[I

    .line 108
    iput-object p5, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->protocol_id:[I

    .line 109
    iput-object p6, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->reserved:[I

    .line 110
    iput-object p7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->msg_id:[I

    .line 111
    iput-object p8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->check_sum:[I

    .line 112
    iput-object p9, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timeStamp:[I

    .line 113
    return-void
.end method
