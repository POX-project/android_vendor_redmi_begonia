.class Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;
.super Lcom/android/ims/internal/uce/options/IOptionsListener$Stub;
.source "AospPresenceListAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->initUce()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    .line 291
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-direct {p0}, Lcom/android/ims/internal/uce/options/IOptionsListener$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public cmdStatus(Lcom/android/ims/internal/uce/options/OptionsCmdStatus;)V
    .locals 4
    .param p1, "cmdStatus"    # Lcom/android/ims/internal/uce/options/OptionsCmdStatus;

    .line 326
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [CmdStatus] CmdId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/android/ims/internal/uce/options/OptionsCmdStatus;->getCmdId()Lcom/android/ims/internal/uce/options/OptionsCmdId;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/ims/internal/uce/options/OptionsCmdId;->getCmdId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", StatusCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 327
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/options/OptionsCmdStatus;->getStatus()Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", UserData = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 328
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/options/OptionsCmdStatus;->getUserData()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 329
    .local v0, "info":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-virtual {p1}, Lcom/android/ims/internal/uce/options/OptionsCmdStatus;->getCapInfo()Lcom/android/ims/internal/uce/common/CapInfo;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$300(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Lcom/android/ims/internal/uce/common/CapInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 330
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 331
    return-void
.end method

.method public getVersionCb(Ljava/lang/String;)V
    .locals 2
    .param p1, "version"    # Ljava/lang/String;

    .line 294
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [getVersionCb] Options service version = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 295
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 296
    return-void
.end method

.method public incomingOptions(Ljava/lang/String;Lcom/android/ims/internal/uce/options/OptionsCapInfo;I)V
    .locals 4
    .param p1, "uri"    # Ljava/lang/String;
    .param p2, "optionsCapInfo"    # Lcom/android/ims/internal/uce/options/OptionsCapInfo;
    .param p3, "tId"    # I

    .line 335
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [incomingOptions] uri = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", tId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 337
    .local v0, "info":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-virtual {p2}, Lcom/android/ims/internal/uce/options/OptionsCapInfo;->getCapInfo()Lcom/android/ims/internal/uce/common/CapInfo;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$300(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Lcom/android/ims/internal/uce/common/CapInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 338
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 339
    return-void
.end method

.method public serviceAvailable(Lcom/android/ims/internal/uce/common/StatusCode;)V
    .locals 2
    .param p1, "statusCode"    # Lcom/android/ims/internal/uce/common/StatusCode;

    .line 300
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [serviceAvailable] StatusCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 301
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 302
    return-void
.end method

.method public serviceUnavailable(Lcom/android/ims/internal/uce/common/StatusCode;)V
    .locals 2
    .param p1, "statusCode"    # Lcom/android/ims/internal/uce/common/StatusCode;

    .line 306
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [serviceUnAvailable] StatusCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 307
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 308
    return-void
.end method

.method public sipResponseReceived(Ljava/lang/String;Lcom/android/ims/internal/uce/options/OptionsSipResponse;Lcom/android/ims/internal/uce/options/OptionsCapInfo;)V
    .locals 4
    .param p1, "uri"    # Ljava/lang/String;
    .param p2, "response"    # Lcom/android/ims/internal/uce/options/OptionsSipResponse;
    .param p3, "optionsCapInfo"    # Lcom/android/ims/internal/uce/options/OptionsCapInfo;

    .line 313
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [sipResponseReceived] CmdId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 314
    invoke-virtual {p2}, Lcom/android/ims/internal/uce/options/OptionsSipResponse;->getCmdId()Lcom/android/ims/internal/uce/options/OptionsCmdId;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/ims/internal/uce/options/OptionsCmdId;->getCmdId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", RequestId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 315
    invoke-virtual {p2}, Lcom/android/ims/internal/uce/options/OptionsSipResponse;->getRequestId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", SipResponseCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 316
    invoke-virtual {p2}, Lcom/android/ims/internal/uce/options/OptionsSipResponse;->getSipResponseCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", RetryAfter time = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 317
    invoke-virtual {p2}, Lcom/android/ims/internal/uce/options/OptionsSipResponse;->getRetryAfter()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", ReasonPharse = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 318
    invoke-virtual {p2}, Lcom/android/ims/internal/uce/options/OptionsSipResponse;->getReasonPhrase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", sdp = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 319
    invoke-virtual {p3}, Lcom/android/ims/internal/uce/options/OptionsCapInfo;->getSdp()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 320
    .local v0, "info":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-virtual {p3}, Lcom/android/ims/internal/uce/options/OptionsCapInfo;->getCapInfo()Lcom/android/ims/internal/uce/common/CapInfo;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$300(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Lcom/android/ims/internal/uce/common/CapInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 321
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 322
    return-void
.end method
