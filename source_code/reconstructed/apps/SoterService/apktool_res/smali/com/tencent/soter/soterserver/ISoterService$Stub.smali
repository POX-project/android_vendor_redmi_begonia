.class public abstract Lcom/tencent/soter/soterserver/ISoterService$Stub;
.super Landroid/os/Binder;
.source "ISoterService.java"

# interfaces
.implements Lcom/tencent/soter/soterserver/ISoterService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tencent/soter/soterserver/ISoterService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 77
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.tencent.soter.soterserver.ISoterService"

    .line 78
    invoke-virtual {p0, p0, v0}, Landroid/os/Binder;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const v0, 0x5f4e5446

    const/4 v1, 0x1

    const-string v2, "com.tencent.soter.soterserver.ISoterService"

    if-eq p1, v0, :cond_5

    const/4 v0, 0x0

    packed-switch p1, :pswitch_data_0

    .line 277
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p0

    return p0

    .line 269
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 270
    invoke-interface {p0}, Lcom/tencent/soter/soterserver/ISoterService;->aidlAuth()Ljava/lang/String;

    move-result-object p0

    .line 271
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 272
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 261
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 262
    invoke-interface {p0}, Lcom/tencent/soter/soterserver/ISoterService;->getVersion()I

    move-result p0

    .line 263
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 264
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 247
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 248
    invoke-interface {p0}, Lcom/tencent/soter/soterserver/ISoterService;->getDeviceId()Lcom/tencent/soter/soterserver/SoterDeviceResult;

    move-result-object p0

    .line 249
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p0, :cond_0

    .line 251
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 252
    invoke-virtual {p0, p3, v1}, Lcom/tencent/soter/soterserver/SoterDeviceResult;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 255
    :cond_0
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    return v1

    .line 231
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 233
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide p1

    .line 234
    invoke-interface {p0, p1, p2}, Lcom/tencent/soter/soterserver/ISoterService;->finishSign(J)Lcom/tencent/soter/soterserver/SoterSignResult;

    move-result-object p0

    .line 235
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p0, :cond_1

    .line 237
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 238
    invoke-virtual {p0, p3, v1}, Lcom/tencent/soter/soterserver/SoterSignResult;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_1

    .line 241
    :cond_1
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_1
    return v1

    .line 211
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 213
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 215
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 217
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 218
    invoke-interface {p0, p1, p4, p2}, Lcom/tencent/soter/soterserver/ISoterService;->initSigh(ILjava/lang/String;Ljava/lang/String;)Lcom/tencent/soter/soterserver/SoterSessionResult;

    move-result-object p0

    .line 219
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p0, :cond_2

    .line 221
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 222
    invoke-virtual {p0, p3, v1}, Lcom/tencent/soter/soterserver/SoterSessionResult;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_2

    .line 225
    :cond_2
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_2
    return v1

    .line 199
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 201
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 203
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 204
    invoke-interface {p0, p1, p2}, Lcom/tencent/soter/soterserver/ISoterService;->hasAuthKey(ILjava/lang/String;)Z

    move-result p0

    .line 205
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 206
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 189
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 191
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 192
    invoke-interface {p0, p1}, Lcom/tencent/soter/soterserver/ISoterService;->removeAllAuthKey(I)I

    move-result p0

    .line 193
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 194
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 171
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 173
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 175
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 176
    invoke-interface {p0, p1, p2}, Lcom/tencent/soter/soterserver/ISoterService;->getAuthKey(ILjava/lang/String;)Lcom/tencent/soter/soterserver/SoterExportResult;

    move-result-object p0

    .line 177
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p0, :cond_3

    .line 179
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 180
    invoke-virtual {p0, p3, v1}, Lcom/tencent/soter/soterserver/SoterExportResult;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_3

    .line 183
    :cond_3
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_3
    return v1

    .line 159
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 161
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 163
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 164
    invoke-interface {p0, p1, p2}, Lcom/tencent/soter/soterserver/ISoterService;->removeAuthKey(ILjava/lang/String;)I

    move-result p0

    .line 165
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 166
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 147
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 149
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 151
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 152
    invoke-interface {p0, p1, p2}, Lcom/tencent/soter/soterserver/ISoterService;->generateAuthKey(ILjava/lang/String;)I

    move-result p0

    .line 153
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 154
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 137
    :pswitch_a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 139
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 140
    invoke-interface {p0, p1}, Lcom/tencent/soter/soterserver/ISoterService;->hasAskAlready(I)Z

    move-result p0

    .line 141
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 142
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 121
    :pswitch_b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 123
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 124
    invoke-interface {p0, p1}, Lcom/tencent/soter/soterserver/ISoterService;->getAppSecureKey(I)Lcom/tencent/soter/soterserver/SoterExportResult;

    move-result-object p0

    .line 125
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p0, :cond_4

    .line 127
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 128
    invoke-virtual {p0, p3, v1}, Lcom/tencent/soter/soterserver/SoterExportResult;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_4

    .line 131
    :cond_4
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_4
    return v1

    .line 111
    :pswitch_c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 113
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 114
    invoke-interface {p0, p1}, Lcom/tencent/soter/soterserver/ISoterService;->generateAppSecureKey(I)I

    move-result p0

    .line 115
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 116
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 106
    :cond_5
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
