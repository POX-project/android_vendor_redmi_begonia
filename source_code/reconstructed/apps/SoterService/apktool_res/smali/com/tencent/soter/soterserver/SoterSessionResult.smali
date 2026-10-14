.class public Lcom/tencent/soter/soterserver/SoterSessionResult;
.super Ljava/lang/Object;
.source "SoterSessionResult.java"

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tencent/soter/soterserver/SoterSessionResult;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public resultCode:I

.field public session:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    new-instance v0, Lcom/tencent/soter/soterserver/SoterSessionResult$1;

    invoke-direct {v0}, Lcom/tencent/soter/soterserver/SoterSessionResult$1;-><init>()V

    sput-object v0, Lcom/tencent/soter/soterserver/SoterSessionResult;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method protected constructor <init>(Landroid/os/Parcel;)V
    .locals 2

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tencent/soter/soterserver/SoterSessionResult;->session:J

    .line 16
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    iput p1, p0, Lcom/tencent/soter/soterserver/SoterSessionResult;->resultCode:I

    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 0

    const/4 p0, 0x0

    return p0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 21
    iget-wide v0, p0, Lcom/tencent/soter/soterserver/SoterSessionResult;->session:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 22
    iget p0, p0, Lcom/tencent/soter/soterserver/SoterSessionResult;->resultCode:I

    invoke-virtual {p1, p0}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method
