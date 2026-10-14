.class Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;

    .line 5181
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5183
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Illegal UE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5184
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "PEI not accepted"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5185
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Illegal ME"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5186
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "5GS services not allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5187
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "UE identity cannot be derived by the network"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5188
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Implicitly de-registered"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5189
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "PLMN not allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5190
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Tracking area not allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5191
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Roaming not allowed in this tracking area"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5192
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "No suitable cells in tracking area"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5193
    const/16 v0, 0x14

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MAC failure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5194
    const/16 v0, 0x15

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Synch failure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5195
    const/16 v0, 0x16

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Congestion"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5196
    const/16 v0, 0x17

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "UE security capabilities mismatch"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5197
    const/16 v0, 0x18

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Security mode rejected, unspecified"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5198
    const/16 v0, 0x1a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Non-5G authentication unacceptable"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5199
    const/16 v0, 0x1b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "N1 mode not allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5200
    const/16 v0, 0x1c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Restricted service area"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5201
    const/16 v0, 0x1f

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Redirection to EPC required"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5202
    const/16 v0, 0x2b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "LADN not available"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5203
    const/16 v0, 0x3e

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "No network slices available"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5204
    const/16 v0, 0x41

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Maximum number of PDU sessions reached"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5205
    const/16 v0, 0x43

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Insufficient resources for specific slice and DNN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5206
    const/16 v0, 0x45

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Insufficient resources for specific slice"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5207
    const/16 v0, 0x47

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ngKSI already in use"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5208
    const/16 v0, 0x48

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Non-3GPP access to 5GCN not allowed"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5209
    const/16 v0, 0x49

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Serving network not authorized"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5210
    const/16 v0, 0x4a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Temporarily not authorized for this SNPN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5211
    const/16 v0, 0x4b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Permanently not authorized for this SNPN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5212
    const/16 v0, 0x4c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Not authorized for this CAG or authorized for CAG cells only"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5213
    const/16 v0, 0x5a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Payload was not forwarded"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5214
    const/16 v0, 0x5b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "DNN not supported or not subscribed in the slice"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5215
    const/16 v0, 0x5c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Insufficient user-plane resources for the PDU session"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5216
    const/16 v0, 0x60

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Semantically incorrect message"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5217
    const-string v1, "Invalid mandatory information"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5218
    const/16 v0, 0x61

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Message type non-existent or not implemented"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5219
    const/16 v0, 0x62

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Message type not compatible with the protocol state"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5220
    const/16 v0, 0x63

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Information element non-existent or not implemented"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5221
    const/16 v0, 0x64

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Conditional IE error"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5222
    const/16 v0, 0x66

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Message not compatible with the protocol state"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5223
    const/16 v0, 0x6f

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Protocol error, unspecified"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5224
    return-void
.end method
