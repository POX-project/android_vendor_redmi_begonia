.class Lcom/tencent/soter/soterserver/SoterSignResult$1;
.super Ljava/lang/Object;
.source "SoterSignResult.java"

# interfaces
.implements Landroid/os/Parcelable$Creator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tencent/soter/soterserver/SoterSignResult;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/os/Parcelable$Creator<",
        "Lcom/tencent/soter/soterserver/SoterSignResult;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public createFromParcel(Landroid/os/Parcel;)Lcom/tencent/soter/soterserver/SoterSignResult;
    .locals 0

    .line 36
    new-instance p0, Lcom/tencent/soter/soterserver/SoterSignResult;

    invoke-direct {p0, p1}, Lcom/tencent/soter/soterserver/SoterSignResult;-><init>(Landroid/os/Parcel;)V

    return-object p0
.end method

.method public bridge synthetic createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;
    .locals 0

    .line 33
    invoke-virtual {p0, p1}, Lcom/tencent/soter/soterserver/SoterSignResult$1;->createFromParcel(Landroid/os/Parcel;)Lcom/tencent/soter/soterserver/SoterSignResult;

    move-result-object p0

    return-object p0
.end method

.method public newArray(I)[Lcom/tencent/soter/soterserver/SoterSignResult;
    .locals 0

    .line 41
    new-array p0, p1, [Lcom/tencent/soter/soterserver/SoterSignResult;

    return-object p0
.end method

.method public bridge synthetic newArray(I)[Ljava/lang/Object;
    .locals 0

    .line 33
    invoke-virtual {p0, p1}, Lcom/tencent/soter/soterserver/SoterSignResult$1;->newArray(I)[Lcom/tencent/soter/soterserver/SoterSignResult;

    move-result-object p0

    return-object p0
.end method
