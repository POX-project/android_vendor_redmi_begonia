.class public Lcom/mediatek/emcamera/AutoCalibration;
.super Landroid/app/Activity;
.source "AutoCalibration.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;
.implements Landroid/support/v4/app/ActivityCompat$OnRequestPermissionsResultCallback;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/emcamera/AutoCalibration$SensorItem;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "AutoCalibration"


# instance fields
.field private mCameraId:Ljava/lang/String;

.field private mCameraList:[Ljava/lang/String;

.field private mCaptureSensorMode:Landroid/widget/Spinner;

.field private mGisCaliLv:Landroid/widget/ListView;

.field private mIsInitialized:Z

.field private mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

.field private mSensorSpinner:Landroid/widget/Spinner;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 81
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 92
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mIsInitialized:Z

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/emcamera/AutoCalibration;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/AutoCalibration;

    .line 81
    iget-boolean v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mIsInitialized:Z

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/emcamera/AutoCalibration;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/AutoCalibration;

    .line 81
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraId:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/emcamera/AutoCalibration;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/AutoCalibration;
    .param p1, "x1"    # Ljava/lang/String;

    .line 81
    iput-object p1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraId:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/emcamera/AutoCalibration;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/AutoCalibration;

    .line 81
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->setStatusTodefault()V

    return-void
.end method

.method private initComponents()V
    .locals 1

    .line 138
    const v0, 0x7f08001e

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/AutoCalibration;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mSensorSpinner:Landroid/widget/Spinner;

    .line 139
    const v0, 0x7f08006f

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/AutoCalibration;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCaptureSensorMode:Landroid/widget/Spinner;

    .line 141
    const v0, 0x7f08003f

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/AutoCalibration;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mGisCaliLv:Landroid/widget/ListView;

    .line 142
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 143
    return-void
.end method

.method private initSensorSpnr()V
    .locals 16

    .line 177
    move-object/from16 v1, p0

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    move-object v2, v0

    .line 178
    .local v2, "sensorList":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/emcamera/AutoCalibration$SensorItem;>;"
    const/4 v0, 0x0

    .line 179
    .local v0, "mainSensorNumber":I
    const/4 v3, 0x0

    .line 180
    .local v3, "subSensorNumber":I
    const v4, 0x7f0d002a

    invoke-virtual {v1, v4}, Lcom/mediatek/emcamera/AutoCalibration;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 181
    .local v4, "mainName":Ljava/lang/String;
    const v5, 0x7f0d002b

    invoke-virtual {v1, v5}, Lcom/mediatek/emcamera/AutoCalibration;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 182
    .local v5, "subName":Ljava/lang/String;
    const-string v6, "camera"

    invoke-virtual {v1, v6}, Lcom/mediatek/emcamera/AutoCalibration;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Landroid/hardware/camera2/CameraManager;

    .line 183
    .local v6, "manager":Landroid/hardware/camera2/CameraManager;
    iget-object v7, v1, Lcom/mediatek/emcamera/AutoCalibration;->mCameraList:[Ljava/lang/String;

    array-length v8, v7

    move v10, v3

    const/4 v11, 0x0

    move v3, v0

    .end local v0    # "mainSensorNumber":I
    .local v3, "mainSensorNumber":I
    .local v10, "subSensorNumber":I
    :goto_0
    if-ge v11, v8, :cond_5

    aget-object v12, v7, v11

    .line 184
    .local v12, "cameraId":Ljava/lang/String;
    const/4 v13, 0x0

    .line 185
    .local v13, "facing":Ljava/lang/Integer;
    const/4 v14, 0x0

    .line 187
    .local v14, "sensorName":Ljava/lang/String;
    nop

    .line 188
    :try_start_0
    invoke-virtual {v6, v12}, Landroid/hardware/camera2/CameraManager;->getCameraCharacteristics(Ljava/lang/String;)Landroid/hardware/camera2/CameraCharacteristics;

    move-result-object v0

    .line 189
    .local v0, "characteristics":Landroid/hardware/camera2/CameraCharacteristics;
    sget-object v15, Landroid/hardware/camera2/CameraCharacteristics;->LENS_FACING:Landroid/hardware/camera2/CameraCharacteristics$Key;

    invoke-virtual {v0, v15}, Landroid/hardware/camera2/CameraCharacteristics;->get(Landroid/hardware/camera2/CameraCharacteristics$Key;)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Ljava/lang/Integer;
    :try_end_0
    .catch Landroid/hardware/camera2/CameraAccessException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v13, v15

    .line 192
    .end local v0    # "characteristics":Landroid/hardware/camera2/CameraCharacteristics;
    goto :goto_1

    .line 190
    :catch_0
    move-exception v0

    .line 191
    .local v0, "e":Landroid/hardware/camera2/CameraAccessException;
    invoke-virtual {v0}, Landroid/hardware/camera2/CameraAccessException;->printStackTrace()V

    .line 193
    .end local v0    # "e":Landroid/hardware/camera2/CameraAccessException;
    :goto_1
    const-string v0, ""

    const/4 v15, 0x1

    if-eqz v13, :cond_1

    invoke-virtual {v13}, Ljava/lang/Integer;->intValue()I

    move-result v9

    if-ne v9, v15, :cond_1

    .line 194
    add-int/lit8 v3, v3, 0x1

    .line 195
    if-ne v3, v15, :cond_0

    .line 196
    move-object v14, v4

    goto :goto_2

    .line 198
    :cond_0
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    goto :goto_2

    .line 200
    :cond_1
    if-eqz v13, :cond_3

    invoke-virtual {v13}, Ljava/lang/Integer;->intValue()I

    move-result v9

    if-nez v9, :cond_3

    .line 201
    add-int/lit8 v10, v10, 0x1

    .line 202
    if-ne v10, v15, :cond_2

    .line 203
    move-object v14, v5

    goto :goto_2

    .line 205
    :cond_2
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    goto :goto_2

    .line 208
    :cond_3
    const-string v0, "AutoCalibration"

    const-string v9, "add raw sensor; Invalid facing info"

    invoke-static {v0, v9}, Lcom/mediatek/emcamera/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 210
    :goto_2
    if-eqz v14, :cond_4

    .line 211
    new-instance v0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;

    invoke-direct {v0, v1, v14, v12}, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;-><init>(Lcom/mediatek/emcamera/AutoCalibration;Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    .local v0, "item":Lcom/mediatek/emcamera/AutoCalibration$SensorItem;
    invoke-interface {v2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 183
    .end local v0    # "item":Lcom/mediatek/emcamera/AutoCalibration$SensorItem;
    .end local v12    # "cameraId":Ljava/lang/String;
    .end local v13    # "facing":Ljava/lang/Integer;
    .end local v14    # "sensorName":Ljava/lang/String;
    :cond_4
    add-int/lit8 v11, v11, 0x1

    goto :goto_0

    .line 216
    :cond_5
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_6

    .line 217
    const-string v0, "no available raw sensor"

    const/4 v7, 0x0

    invoke-static {v1, v0, v7}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 218
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/emcamera/AutoCalibration;->finish()V

    .line 219
    return-void

    .line 221
    :cond_6
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v7, 0x1090008

    invoke-direct {v0, v1, v7, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 223
    .local v0, "sensorAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Lcom/mediatek/emcamera/AutoCalibration$SensorItem;>;"
    const v7, 0x1090009

    invoke-virtual {v0, v7}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 224
    iget-object v7, v1, Lcom/mediatek/emcamera/AutoCalibration;->mSensorSpinner:Landroid/widget/Spinner;

    invoke-virtual {v7, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 225
    iget-object v7, v1, Lcom/mediatek/emcamera/AutoCalibration;->mSensorSpinner:Landroid/widget/Spinner;

    new-instance v8, Lcom/mediatek/emcamera/AutoCalibration$1;

    invoke-direct {v8, v1}, Lcom/mediatek/emcamera/AutoCalibration$1;-><init>(Lcom/mediatek/emcamera/AutoCalibration;)V

    invoke-virtual {v7, v8}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 248
    return-void
.end method

.method private initSupportedUi()V
    .locals 4

    .line 146
    const-string v0, "camera"

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/AutoCalibration;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/hardware/camera2/CameraManager;

    .line 148
    .local v0, "manager":Landroid/hardware/camera2/CameraManager;
    :try_start_0
    invoke-virtual {v0}, Landroid/hardware/camera2/CameraManager;->getCameraIdList()[Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraList:[Ljava/lang/String;

    .line 149
    const-string v1, "AutoCalibration"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "availCameraNumber ="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraList:[Ljava/lang/String;

    array-length v3, v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/hardware/camera2/CameraAccessException; {:try_start_0 .. :try_end_0} :catch_0

    .line 152
    goto :goto_0

    .line 150
    :catch_0
    move-exception v1

    .line 151
    .local v1, "e":Landroid/hardware/camera2/CameraAccessException;
    invoke-virtual {v1}, Landroid/hardware/camera2/CameraAccessException;->printStackTrace()V

    .line 153
    .end local v1    # "e":Landroid/hardware/camera2/CameraAccessException;
    :goto_0
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraList:[Ljava/lang/String;

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    array-length v1, v1

    if-nez v1, :cond_0

    goto :goto_2

    .line 159
    :cond_0
    iget-boolean v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mIsInitialized:Z

    if-nez v1, :cond_1

    .line 160
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->initSensorSpnr()V

    .line 163
    :cond_1
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraId:Ljava/lang/String;

    invoke-direct {p0, v1}, Lcom/mediatek/emcamera/AutoCalibration;->isGisCalibrationSupported(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 164
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mGisCaliLv:Landroid/widget/ListView;

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setVisibility(I)V

    goto :goto_1

    .line 166
    :cond_2
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mGisCaliLv:Landroid/widget/ListView;

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setVisibility(I)V

    .line 169
    :goto_1
    return-void

    .line 154
    :cond_3
    :goto_2
    const-string v1, "No available Camera"

    invoke-static {p0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 155
    invoke-virtual {p0}, Lcom/mediatek/emcamera/AutoCalibration;->finish()V

    .line 156
    return-void
.end method

.method private isGisCalibrationSupported(Ljava/lang/String;)Z
    .locals 1
    .param p1, "cameraId"    # Ljava/lang/String;

    .line 172
    const/4 v0, 0x1

    return v0
.end method

.method private saveAllSettings(Ljava/lang/String;)V
    .locals 7
    .param p1, "key"    # Ljava/lang/String;

    .line 269
    const-string v0, "AutoCalibration"

    const-string v1, "saveAllSettings start"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 270
    const/4 v1, 0x0

    invoke-virtual {p0, p1, v1}, Lcom/mediatek/emcamera/AutoCalibration;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 272
    .local v1, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 273
    .local v2, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v3, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCaptureSensorMode:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    .line 274
    .local v3, "pos":I
    const v4, 0x7f0d0032

    invoke-virtual {p0, v4}, Lcom/mediatek/emcamera/AutoCalibration;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v4, v3}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 275
    const v4, 0x7f0d0031

    invoke-virtual {p0, v4}, Lcom/mediatek/emcamera/AutoCalibration;->getString(I)Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraId:Ljava/lang/String;

    invoke-interface {v2, v4, v5}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 276
    iget-object v4, p0, Lcom/mediatek/emcamera/AutoCalibration;->mSensorSpinner:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;

    .line 277
    .local v4, "item":Lcom/mediatek/emcamera/AutoCalibration$SensorItem;
    const v5, 0x7f0d0033

    invoke-virtual {p0, v5}, Lcom/mediatek/emcamera/AutoCalibration;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, v5, v6}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 278
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 279
    const-string v5, "saveAllSettings end"

    invoke-static {v0, v5}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 280
    return-void
.end method

.method private setStatusTodefault()V
    .locals 2

    .line 251
    const-string v0, "AutoCalibration"

    const-string v1, "setStatusTodefault()"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 253
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCaptureSensorMode:Landroid/widget/Spinner;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 254
    const-string v0, "Reset to default state!"

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 255
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 256
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 115
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 116
    const-string v0, "AutoCalibration"

    const-string v1, "onCreate."

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    invoke-static {}, Lcom/mediatek/emcamera/Utils;->isAutoTest()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 118
    const-string v1, "Monkey running."

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    invoke-virtual {p0}, Lcom/mediatek/emcamera/AutoCalibration;->finish()V

    .line 120
    return-void

    .line 122
    :cond_0
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mIsInitialized:Z

    .line 123
    const v1, 0x7f0a001c

    invoke-virtual {p0, v1}, Lcom/mediatek/emcamera/AutoCalibration;->setContentView(I)V

    .line 124
    new-instance v1, Lcom/mediatek/emcamera/PermissionManager;

    invoke-direct {v1, p0}, Lcom/mediatek/emcamera/PermissionManager;-><init>(Landroid/app/Activity;)V

    iput-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    .line 126
    const-string v1, "0"

    iput-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mCameraId:Ljava/lang/String;

    .line 127
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->initComponents()V

    .line 128
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    invoke-virtual {v1}, Lcom/mediatek/emcamera/PermissionManager;->requestCameraLaunchPermissions()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 129
    const-string v1, "requestCameraLaunchPermissions return true"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->initSupportedUi()V

    .line 131
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->setStatusTodefault()V

    .line 132
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mIsInitialized:Z

    .line 135
    :cond_1
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 260
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    invoke-virtual {p1}, Landroid/widget/AdapterView;->getId()I

    move-result v0

    const v1, 0x7f08003f

    if-ne v0, v1, :cond_0

    .line 261
    const-string v0, "AutoCalibration"

    const-string v1, "Start GIS Calibration"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    const-string v0, "camera_inter_settings"

    invoke-direct {p0, v0}, Lcom/mediatek/emcamera/AutoCalibration;->saveAllSettings(Ljava/lang/String;)V

    .line 263
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 264
    .local v0, "intent":Landroid/content/Intent;
    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/AutoCalibration;->startActivity(Landroid/content/Intent;)V

    .line 266
    .end local v0    # "intent":Landroid/content/Intent;
    :cond_0
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 2
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 283
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRequestPermissionsResult(), requestCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AutoCalibration"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 284
    if-eqz p3, :cond_3

    array-length v0, p3

    if-gtz v0, :cond_0

    goto :goto_1

    .line 287
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/PermissionManager;->getCameraLaunchPermissionRequestCode()I

    move-result v0

    if-ne v0, p1, :cond_2

    .line 288
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    invoke-virtual {v0, p2, p3}, Lcom/mediatek/emcamera/PermissionManager;->isCameraLaunchPermissionsResultReady([Ljava/lang/String;[I)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 289
    const v0, 0x7f0d0035

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 290
    invoke-virtual {p0}, Lcom/mediatek/emcamera/AutoCalibration;->finish()V

    goto :goto_0

    .line 292
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->initSupportedUi()V

    .line 293
    invoke-direct {p0}, Lcom/mediatek/emcamera/AutoCalibration;->setStatusTodefault()V

    .line 294
    iput-boolean v1, p0, Lcom/mediatek/emcamera/AutoCalibration;->mIsInitialized:Z

    goto :goto_0

    .line 297
    :cond_2
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 299
    :goto_0
    return-void

    .line 285
    :cond_3
    :goto_1
    return-void
.end method
