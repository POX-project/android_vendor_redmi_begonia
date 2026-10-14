.class Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;
.super Ljava/lang/Object;
.source "HIDLMCPTransmitter.java"

# interfaces
.implements Landroid/os/IHwBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/mdml/HIDLMCPTransmitter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "TransmitterDeathRecipient"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/mdml/HIDLMCPTransmitter;


# direct methods
.method constructor <init>(Lcom/mediatek/mdml/HIDLMCPTransmitter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/mdml/HIDLMCPTransmitter;

    .line 91
    iput-object p1, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;->this$0:Lcom/mediatek/mdml/HIDLMCPTransmitter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public serviceDied(J)V
    .locals 2
    .param p1, "cookie"    # J

    .line 94
    const-string v0, "MDML/HIDLMCPTransmitter"

    const-string v1, "MDM HIDL Service died."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 96
    return-void
.end method
