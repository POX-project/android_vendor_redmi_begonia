.class Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;
.super Ljava/lang/Object;
.source "YgpsActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "YgpsWakeLock"
.end annotation


# instance fields
.field private mCpuWakeLock:Landroid/os/PowerManager$WakeLock;

.field private mScreenWakeLock:Landroid/os/PowerManager$WakeLock;


# direct methods
.method private constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    .line 2060
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mScreenWakeLock:Landroid/os/PowerManager$WakeLock;

    .line 2061
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mCpuWakeLock:Landroid/os/PowerManager$WakeLock;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsActivity$1;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    return-void
.end method


# virtual methods
.method acquireCpuWakeLock(Landroid/content/Context;)V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "Acquiring cpu wake lock"

    .line 2070
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 2071
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mCpuWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const-string v1, "power"

    .line 2076
    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/PowerManager;

    const v1, 0x10000001

    .line 2078
    invoke-virtual {p1, v1, v0}, Landroid/os/PowerManager;->newWakeLock(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mCpuWakeLock:Landroid/os/PowerManager$WakeLock;

    .line 2080
    invoke-virtual {p1}, Landroid/os/PowerManager$WakeLock;->acquire()V

    return-void
.end method

.method acquireScreenWakeLock(Landroid/content/Context;)V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "Acquiring screen wake lock"

    .line 2090
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 2091
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mScreenWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const-string v1, "power"

    .line 2096
    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/PowerManager;

    const v1, 0x1000001a

    .line 2098
    invoke-virtual {p1, v1, v0}, Landroid/os/PowerManager;->newWakeLock(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mScreenWakeLock:Landroid/os/PowerManager$WakeLock;

    .line 2100
    invoke-virtual {p1}, Landroid/os/PowerManager$WakeLock;->acquire()V

    return-void
.end method

.method releaseCpuWakeLock()V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "Releasing cpu wake lock"

    .line 2116
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 2117
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mCpuWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    .line 2118
    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->release()V

    const/4 v0, 0x0

    .line 2119
    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mCpuWakeLock:Landroid/os/PowerManager$WakeLock;

    :cond_0
    return-void
.end method

.method releaseScreenWakeLock()V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "Releasing wake lock"

    .line 2107
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 2109
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mScreenWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    .line 2110
    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->release()V

    const/4 v0, 0x0

    .line 2111
    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->mScreenWakeLock:Landroid/os/PowerManager$WakeLock;

    :cond_0
    return-void
.end method
