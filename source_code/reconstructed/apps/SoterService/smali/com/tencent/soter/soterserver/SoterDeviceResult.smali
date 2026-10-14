.class public Lcom/tencent/soter/soterserver/SoterDeviceResult;
.super Ljava/lang/Object;
.source "SoterDeviceResult.java"

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tencent/soter/soterserver/SoterDeviceResult;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public exportData:[B

.field public exportDataLength:I

.field public resultCode:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    new-instance v0, Lcom/tencent/soter/soterserver/SoterDeviceResult$1;

    invoke-direct {v0}, Lcom/tencent/soter/soterserver/SoterDeviceResult$1;-><init>()V

    sput-object v0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method protected constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->resultCode:I

    .line 18
    invoke-virtual {p1}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->exportData:[B

    .line 19
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    iput p1, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->exportDataLength:I

    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 0

    const/4 p0, 0x0

    return p0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 24
    iget p2, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->resultCode:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 25
    iget-object p2, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->exportData:[B

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByteArray([B)V

    .line 26
    iget p0, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->exportDataLength:I

    invoke-virtual {p1, p0}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method
