.class public abstract Lorg/mipay/android/manager/IMipayService$Stub;
.super Landroid/os/Binder;
.source "IMipayService.java"

# interfaces
.implements Lorg/mipay/android/manager/IMipayService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/mipay/android/manager/IMipayService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 49
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "org.mipay.android.manager.IMipayService"

    .line 50
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

    const-string v2, "org.mipay.android.manager.IMipayService"

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    .line 161
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p0

    return p0

    .line 153
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 154
    invoke-interface {p0}, Lorg/mipay/android/manager/IMipayService;->getFpIds()Ljava/lang/String;

    move-result-object p0

    .line 155
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 156
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 143
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 145
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 146
    invoke-interface {p0, p1}, Lorg/mipay/android/manager/IMipayService;->removeAllKey(I)I

    move-result p0

    .line 147
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 148
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 135
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 136
    invoke-interface {p0}, Lorg/mipay/android/manager/IMipayService;->sign()[B

    move-result-object p0

    .line 137
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 138
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeByteArray([B)V

    return v1

    .line 123
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 125
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 127
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 128
    invoke-interface {p0, p1, p2}, Lorg/mipay/android/manager/IMipayService;->signUpdate(ILjava/lang/String;)I

    move-result p0

    .line 129
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 130
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 109
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 111
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 113
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 115
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 116
    invoke-interface {p0, p1, p4, p2}, Lorg/mipay/android/manager/IMipayService;->signInit(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    .line 117
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 118
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 95
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 97
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 99
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 101
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 102
    invoke-interface {p0, p1, p4, p2}, Lorg/mipay/android/manager/IMipayService;->generateKeyPair(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    .line 103
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 104
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 83
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 85
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 87
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 88
    invoke-interface {p0, p1, p2}, Lorg/mipay/android/manager/IMipayService;->contains(ILjava/lang/String;)Z

    move-result p0

    .line 89
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 90
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 78
    :cond_0
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
