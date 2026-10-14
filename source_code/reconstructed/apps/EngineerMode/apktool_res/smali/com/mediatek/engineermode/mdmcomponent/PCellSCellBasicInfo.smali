.class Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field DlCellAntPort:[[I

.field DlCellBler:[[I

.field DlCellCqiCw0:[[I

.field DlCellCqiCw1:[[I

.field DlCellImcs:[[I

.field DlCellRb:[[I

.field DlCellTput:[[I

.field DlCellri:[[I

.field FileNamePS:Ljava/lang/String;

.field FileNamePS1:Ljava/lang/String;

.field FileNamePS2:Ljava/lang/String;

.field StartTime:Ljava/lang/String;

.field UlCellBler:[[I

.field UlCellImcs:[[I

.field UlCellRb:[[I

.field UlCellTput:[[I

.field bandPcell:[I

.field bandScellArr:[[I

.field dlBandwidthPcell:[I

.field dlBandwidthScellArr:[[I

.field dlFreqPcell:[I

.field dlFreqScellArr:[[I

.field dlMod0Pcell:[I

.field dlMod0ScellArr:[[I

.field dlMod1Pcell:[I

.field dlMod1ScellArr:[[I

.field earfcnPcell:[J

.field earfcnScellArr:[[J

.field isFirstTimeRecord:Z

.field lastTime:[Ljava/lang/String;

.field mMappingBW:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMappingQam:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field oldDlMod0Pcell:[I

.field oldDlMod0ScellArr:[[I

.field oldDlMod1Pcell:[I

.field oldDlMod1ScellArr:[[I

.field oldUlPcell:[I

.field oldUlScellArr:[[I

.field pciPcell:[I

.field pciScellArr:[[I

.field rsrpPcell:[I

.field rsrpScellArr:[[I

.field rsrqPcell:[I

.field rsrqScellArr:[[I

.field snrPcell:[I

.field snrScellArr:[[I

.field title:Ljava/lang/String;

.field tmPcell:[I

.field tmScellArr:[[I

.field ulBandwidthPcell:[I

.field ulBandwidthScellArr:[[I

.field ulFreqPcell:[I

.field ulFreqScellArr:[[I

.field ulPcell:[I

.field ulScellArr:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 11660
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    const-string v1, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 5
    .param p1, "context"    # Landroid/app/Activity;

    .line 11761
    const-class v0, I

    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 11664
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    .line 11675
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    .line 11684
    const/4 v1, 0x3

    new-array v2, v1, [J

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnPcell:[J

    .line 11685
    const/4 v2, 0x2

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const-class v4, J

    invoke-static {v4, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[J

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    .line 11686
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandPcell:[I

    .line 11687
    new-array v3, v2, [I

    fill-array-data v3, :array_1

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    .line 11688
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthPcell:[I

    .line 11689
    new-array v3, v2, [I

    fill-array-data v3, :array_2

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    .line 11690
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthPcell:[I

    .line 11691
    new-array v3, v2, [I

    fill-array-data v3, :array_3

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    .line 11692
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmPcell:[I

    .line 11693
    new-array v3, v2, [I

    fill-array-data v3, :array_4

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    .line 11694
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciPcell:[I

    .line 11695
    new-array v3, v2, [I

    fill-array-data v3, :array_5

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    .line 11696
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrPcell:[I

    .line 11697
    new-array v3, v2, [I

    fill-array-data v3, :array_6

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    .line 11698
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqPcell:[I

    .line 11699
    new-array v3, v2, [I

    fill-array-data v3, :array_7

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    .line 11700
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqPcell:[I

    .line 11701
    new-array v3, v2, [I

    fill-array-data v3, :array_8

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    .line 11702
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpPcell:[I

    .line 11703
    new-array v3, v2, [I

    fill-array-data v3, :array_9

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    .line 11704
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqPcell:[I

    .line 11705
    new-array v3, v2, [I

    fill-array-data v3, :array_a

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    .line 11706
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod0Pcell:[I

    .line 11707
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0Pcell:[I

    .line 11708
    new-array v3, v2, [I

    fill-array-data v3, :array_b

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod0ScellArr:[[I

    .line 11709
    new-array v3, v2, [I

    fill-array-data v3, :array_c

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0ScellArr:[[I

    .line 11710
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod1Pcell:[I

    .line 11711
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1Pcell:[I

    .line 11712
    new-array v3, v2, [I

    fill-array-data v3, :array_d

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod1ScellArr:[[I

    .line 11713
    new-array v3, v2, [I

    fill-array-data v3, :array_e

    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [[I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1ScellArr:[[I

    .line 11714
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulPcell:[I

    .line 11715
    new-array v1, v1, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlPcell:[I

    .line 11716
    new-array v1, v2, [I

    fill-array-data v1, :array_f

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulScellArr:[[I

    .line 11717
    new-array v1, v2, [I

    fill-array-data v1, :array_10

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlScellArr:[[I

    .line 11720
    new-array v1, v2, [I

    fill-array-data v1, :array_11

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellAntPort:[[I

    .line 11721
    new-array v1, v2, [I

    fill-array-data v1, :array_12

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellTput:[[I

    .line 11722
    new-array v1, v2, [I

    fill-array-data v1, :array_13

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellTput:[[I

    .line 11723
    new-array v1, v2, [I

    fill-array-data v1, :array_14

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellImcs:[[I

    .line 11724
    new-array v1, v2, [I

    fill-array-data v1, :array_15

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellImcs:[[I

    .line 11725
    new-array v1, v2, [I

    fill-array-data v1, :array_16

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellBler:[[I

    .line 11726
    new-array v1, v2, [I

    fill-array-data v1, :array_17

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellBler:[[I

    .line 11727
    new-array v1, v2, [I

    fill-array-data v1, :array_18

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellRb:[[I

    .line 11728
    new-array v1, v2, [I

    fill-array-data v1, :array_19

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellRb:[[I

    .line 11729
    new-array v1, v2, [I

    fill-array-data v1, :array_1a

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw0:[[I

    .line 11730
    new-array v1, v2, [I

    fill-array-data v1, :array_1b

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [[I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw1:[[I

    .line 11731
    new-array v1, v2, [I

    fill-array-data v1, :array_1c

    invoke-static {v0, v1}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[I

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellri:[[I

    .line 11733
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->StartTime:Ljava/lang/String;

    .line 11734
    new-array v1, v2, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->lastTime:[Ljava/lang/String;

    .line 11735
    const-string v1, "_Pcell_and_Scell_basic_info.txt"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS:Ljava/lang/String;

    .line 11736
    const-string v1, "Time,Pcell_Band, Pcell_DL BW, Pcell_UL BW, Pcell_TM, Pcell_PCI, Pcell_EARFCN, Pcell_SNR, Pcell_DL_Freq, Pcell_UL_Freq, Pcell_RSRP, Pcell_RSRQ,Pcell_ant_port,Pcell_DL_Tput,Pcell_UL_Tput,Pcell_DL_Imcs,Pcell_UL_Imcs,Pcell_DL_bler,Pcell_UL_bler,Pcell_DL_rb,Pcell_UL_rb,Pcell_cqi_cw0,Pcell_cqi_cw1,Pcell_ri,Scell0_Band, Scell0_DL BW, Scell0_UL BW, Scell0_TM, Scell0_PCI, Scell0_EARFCN,Scell0_SNR, Scell0_DL_Freq, Scell0_UL_Freq, Scell0_RSRP, Scell0_RSRQ, Scell0_ant_port,Scell0_DL_Tput,Scell0_UL_Tput,Scell0_DL_Imcs,Scell0_UL_Imcs,Scell0_DL_bler,Scell0_UL_bler,Scell0_DL_rb,Scell0_UL_rb,Scell0_cqi_cw0,Scell0_cqi_cw1,Scell0_ri,Scell1_Band,Scell1_DL BW, Scell1_UL BW, Scell1_TM, Scell1_PCI, Scell1_EARFCN, Scell1_SNR,Scell1_DL_Freq, Scell1_UL_Freq, Scell1_RSRP, Scell1_RSRQ, Scell1_ant_port,Scell1_DL_Tput,Scell1_UL_Tput,Scell1_DL_Imcs,Scell1_UL_Imcs,Scell1_DL_bler,Scell1_UL_bler,Scell1_DL_rb,Scell1_UL_rb,Scell1_cqi_cw0,Scell1_cqi_cw1,Scell1_ri,Scell2_Band,Scell2_DL BW, Scell2_UL BW, Scell2_TM, Scell2_PCI, Scell2_EARFCN, Scell2_SNR,Scell2_DL_Freq, Scell2_UL_Freq,Scell2_RSRP, Scell2_RSRQ,Scell2_ant_port,Scell2_DL_Tput,Scell2_UL_Tput,Scell2_DL_Imcs,Scell2_UL_Imcs,Scell2_DL_bler,Scell2_UL_bler,Scell2_DL_rb,Scell2_UL_rb,Scell2_cqi_cw0,Scell2_cqi_cw1,Scell2_ri"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->title:Ljava/lang/String;

    .line 11756
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS1:Ljava/lang/String;

    .line 11757
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS2:Ljava/lang/String;

    .line 11758
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->isFirstTimeRecord:Z

    .line 11762
    return-void

    nop

    :array_0
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_1
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_2
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_3
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_4
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_5
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_6
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_7
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_8
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_9
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_a
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_b
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_c
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_d
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_e
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_f
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_10
    .array-data 4
        0x3
        0x3
    .end array-data

    :array_11
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_12
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_13
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_14
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_15
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_16
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_17
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_18
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_19
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_1a
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_1b
    .array-data 4
        0x3
        0x4
    .end array-data

    :array_1c
    .array-data 4
        0x3
        0x4
    .end array-data
.end method


# virtual methods
.method LogRecord(I)V
    .locals 16
    .param p1, "sim_idx"    # I

    .line 11791
    move-object/from16 v1, p0

    move/from16 v2, p1

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/String;

    .line 11792
    .local v4, "Pcell_log":[Ljava/lang/String;
    new-array v0, v3, [I

    fill-array-data v0, :array_0

    const-class v5, Ljava/lang/String;

    invoke-static {v5, v0}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v0

    move-object v5, v0

    check-cast v5, [[Ljava/lang/String;

    .line 11793
    .local v5, "Scell_log":[[Ljava/lang/String;
    new-array v6, v3, [Ljava/lang/String;

    .line 11795
    .local v6, "CurTime":[Ljava/lang/String;
    new-array v7, v3, [Ljava/lang/String;

    .line 11796
    .local v7, "Content":[Ljava/lang/String;
    const-string v8, "/Download"

    .line 11797
    .local v8, "path":Ljava/lang/String;
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v9, "0"

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v9, "EmInfo/MDMComponent"

    if-eqz v0, :cond_0

    .line 11798
    const-string v0, "Do not save info"

    invoke-static {v9, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11799
    return-void

    .line 11801
    :cond_0
    iget-boolean v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->isFirstTimeRecord:Z

    const/4 v10, 0x0

    const/4 v11, 0x1

    const-string v12, ","

    if-ne v0, v11, :cond_1

    .line 11802
    iput-boolean v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->isFirstTimeRecord:Z

    .line 11803
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->StartTime:Ljava/lang/String;

    .line 11805
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->StartTime:Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "_ps_1_"

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v13, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS1:Ljava/lang/String;

    .line 11807
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->StartTime:Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "_ps_2_"

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v13, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v13, v13, v11

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS2:Ljava/lang/String;

    .line 11809
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS1:Ljava/lang/String;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->title:Ljava/lang/String;

    invoke-virtual {v1, v8, v0, v13, v10}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 11810
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS2:Ljava/lang/String;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->title:Ljava/lang/String;

    invoke-virtual {v1, v8, v0, v13, v10}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 11811
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->lastTime:[Ljava/lang/String;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->StartTime:Ljava/lang/String;

    aput-object v13, v0, v10

    .line 11812
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->lastTime:[Ljava/lang/String;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->StartTime:Ljava/lang/String;

    aput-object v13, v0, v11
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 11815
    goto :goto_0

    .line 11813
    :catch_0
    move-exception v0

    .line 11814
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 11816
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "isFirstTimeRecord = "

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->isFirstTimeRecord:Z

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->title:Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11818
    :cond_1
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v6, v2

    .line 11819
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v13, v6, v2

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, " ,"

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandPcell:[I

    aget v13, v13, v2

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v14, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthPcell:[I

    aget v14, v14, v2

    .line 11821
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v14, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthPcell:[I

    aget v14, v14, v2

    .line 11822
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmPcell:[I

    aget v13, v13, v2

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciPcell:[I

    aget v13, v13, v2

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnPcell:[J

    aget-wide v13, v13, v2

    invoke-virtual {v0, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrPcell:[I

    aget v13, v13, v2

    int-to-float v13, v13

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v13, v14

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqPcell:[I

    aget v13, v13, v2

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqPcell:[I

    aget v13, v13, v2

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpPcell:[I

    aget v13, v13, v2

    int-to-float v13, v13

    div-float/2addr v13, v14

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqPcell:[I

    aget v13, v13, v2

    int-to-float v13, v13

    div-float/2addr v13, v14

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellAntPort:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellTput:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellTput:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellImcs:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellImcs:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellBler:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellBler:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellRb:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellRb:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw0:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw1:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellri:[[I

    aget-object v13, v13, v2

    aget v13, v13, v10

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v4, v2

    .line 11844
    aget-object v0, v5, v2

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v15, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v15, v15, v2

    aget v15, v15, v10

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v15, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    .line 11845
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v15, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v15, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v15, v15, v2

    aget v15, v15, v10

    .line 11846
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v3, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v3, v3, v2

    aget-wide v14, v3, v10

    invoke-virtual {v13, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    int-to-float v3, v3

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v3, v14

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    int-to-float v3, v3

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v3, v14

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v3, v3, v2

    aget v3, v3, v10

    int-to-float v3, v3

    div-float/2addr v3, v14

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellAntPort:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellTput:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellTput:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellImcs:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellImcs:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellBler:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellBler:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellRb:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellRb:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw0:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw1:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellri:[[I

    aget-object v3, v3, v2

    aget v3, v3, v11

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v10

    .line 11868
    aget-object v0, v5, v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v14, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v14, v14, v2

    aget v14, v14, v11

    .line 11869
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v14, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v14, v14, v2

    aget v14, v14, v11

    .line 11870
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v13, v13, v2

    aget-wide v13, v13, v11

    invoke-virtual {v3, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    int-to-float v13, v13

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    int-to-float v13, v13

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v11

    int-to-float v13, v13

    div-float/2addr v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellAntPort:[[I

    aget-object v13, v13, v2

    const/4 v14, 0x2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellTput:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellTput:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellImcs:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellImcs:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellBler:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellBler:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellRb:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellRb:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw0:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw1:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellri:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v11

    .line 11892
    aget-object v0, v5, v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v15, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v15, v15, v2

    aget v15, v15, v14

    .line 11893
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v13, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v15, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v15, v15, v2

    aget v15, v15, v14

    .line 11894
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v13, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v13, v13, v2

    aget v13, v13, v14

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v13, v13, v2

    aget-wide v10, v13, v14

    invoke-virtual {v3, v10, v11}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v10, v10, v2

    aget v10, v10, v14

    int-to-float v10, v10

    const/high16 v11, 0x40800000    # 4.0f

    div-float/2addr v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v10, v10, v2

    aget v10, v10, v14

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v10, v10, v2

    aget v10, v10, v14

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v10, v10, v2

    aget v10, v10, v14

    int-to-float v10, v10

    const/high16 v11, 0x40800000    # 4.0f

    div-float/2addr v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v10, v10, v2

    aget v10, v10, v14

    int-to-float v10, v10

    div-float/2addr v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellAntPort:[[I

    aget-object v10, v10, v2

    const/4 v11, 0x3

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellTput:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellTput:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellImcs:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellImcs:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellBler:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellBler:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellRb:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellRb:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw0:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw1:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellri:[[I

    aget-object v10, v10, v2

    aget v10, v10, v11

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v10, 0x2

    aput-object v3, v0, v10

    .line 11916
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v3, v4, v2

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v5, v2

    const/4 v10, 0x0

    aget-object v3, v3, v10

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v5, v2

    const/4 v10, 0x1

    aget-object v3, v3, v10

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v5, v2

    const/4 v10, 0x2

    aget-object v3, v3, v10

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v7, v2

    .line 11920
    :try_start_1
    const-string v0, "persist.radio.record.time"

    const-string v3, "5"

    invoke-static {v0, v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 11921
    .local v0, "sFlag":Ljava/lang/String;
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 11923
    .local v3, "recordTimer":I
    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->lastTime:[Ljava/lang/String;

    aget-object v10, v10, v2

    aget-object v11, v6, v2

    mul-int/lit16 v12, v3, 0x3e8

    invoke-virtual {v1, v10, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->diff_time(Ljava/lang/String;Ljava/lang/String;I)Z

    move-result v10

    const/4 v11, 0x1

    if-ne v10, v11, :cond_3

    .line 11925
    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->lastTime:[Ljava/lang/String;

    aget-object v11, v6, v2

    aput-object v11, v10, v2

    .line 11926
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "recordTimer "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 11928
    const-string v10, " to "

    const-string v11, "save "

    if-nez v2, :cond_2

    .line 11929
    :try_start_2
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v11, v7, v2

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS1:Ljava/lang/String;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11930
    iget-object v9, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS1:Ljava/lang/String;

    aget-object v10, v7, v2

    const/4 v11, 0x1

    invoke-virtual {v1, v8, v9, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_1

    .line 11931
    :cond_2
    const/4 v12, 0x1

    if-ne v2, v12, :cond_3

    .line 11932
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v11, v7, v2

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS2:Ljava/lang/String;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11933
    iget-object v9, v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->FileNamePS2:Ljava/lang/String;

    aget-object v10, v7, v2

    const/4 v11, 0x1

    invoke-virtual {v1, v8, v9, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 11938
    .end local v0    # "sFlag":Ljava/lang/String;
    .end local v3    # "recordTimer":I
    :cond_3
    :goto_1
    goto :goto_2

    .line 11936
    :catch_1
    move-exception v0

    .line 11937
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 11939
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_2
    return-void

    nop

    :array_0
    .array-data 4
        0x2
        0x3
    .end array-data
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 11776
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 11771
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 11781
    const-string v0, ""

    const-string v1, "Pcell"

    const-string v2, "Scell0"

    const-string v3, "Scell1"

    const-string v4, "Scell2"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 11766
    const-string v0, "Pcell and Scell basic info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 11786
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 18
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 11943
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 11944
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v2}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v3

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    .line 11945
    .local v3, "sim_idx":I
    const-string v5, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const-string v6, "]."

    const/4 v8, 0x3

    if-eqz v5, :cond_1

    .line 11946
    const-string v5, "serving_info."

    .line 11947
    .local v5, "coName":Ljava/lang/String;
    const-string v10, "scell_info_list.scell_info["

    .line 11949
    .local v10, "coName1":Ljava/lang/String;
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnPcell:[J

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "earfcn"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    int-to-long v14, v12

    aput-wide v14, v11, v3

    .line 11951
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciPcell:[I

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "pci"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    aput v12, v11, v3

    .line 11953
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpPcell:[I

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "rsrp"

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    aput v12, v11, v3

    .line 11955
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqPcell:[I

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "rsrq"

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    aput v12, v11, v3

    .line 11957
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrPcell:[I

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "rs_snr_in_qdb"

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    aput v12, v11, v3

    .line 11959
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandPcell:[I

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "serv_lte_band"

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    aput v12, v11, v3

    .line 11961
    const/4 v11, 0x0

    .local v11, "i":I
    :goto_0
    if-ge v11, v8, :cond_0

    .line 11962
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v12, v12, v3

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    move-object/from16 v17, v4

    move-object/from16 v16, v5

    .end local v5    # "coName":Ljava/lang/String;
    .local v16, "coName":Ljava/lang/String;
    int-to-long v4, v8

    aput-wide v4, v12, v11

    .line 11964
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v4, v4, v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    aput v5, v4, v11

    .line 11966
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v4, v4, v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v8, 0x1

    invoke-virtual {v0, v2, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    aput v5, v4, v11

    .line 11968
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v4, v4, v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v8, 0x1

    invoke-virtual {v0, v2, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    aput v5, v4, v11

    .line 11970
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v4, v4, v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v8, 0x1

    invoke-virtual {v0, v2, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    aput v5, v4, v11

    .line 11972
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v4, v4, v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v8, v17

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    aput v5, v4, v11

    .line 11961
    add-int/lit8 v11, v11, 0x1

    move-object v4, v8

    move-object/from16 v5, v16

    const/4 v8, 0x3

    goto/16 :goto_0

    .end local v16    # "coName":Ljava/lang/String;
    .restart local v5    # "coName":Ljava/lang/String;
    :cond_0
    move-object/from16 v16, v5

    .line 11975
    .end local v5    # "coName":Ljava/lang/String;
    .end local v10    # "coName1":Ljava/lang/String;
    .end local v11    # "i":I
    goto/16 :goto_9

    :cond_1
    const-string v4, "MSG_ID_EM_EL1_STATUS_IND"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_d

    .line 11976
    const-string v4, "cell_info[0]."

    .line 11977
    .local v4, "coName":Ljava/lang/String;
    const-string v5, "cell_info["

    .line 11978
    .local v5, "coName1":Ljava/lang/String;
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthPcell:[I

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "dl_bw"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11980
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthPcell:[I

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "ul_bw"

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11982
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmPcell:[I

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "tm"

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11984
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqPcell:[I

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "dlFreq"

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11985
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqPcell:[I

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "ulFreq"

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11986
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod0Pcell:[I

    const-string v8, "dl_info[0].DL_Mod0"

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11987
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0Pcell:[I

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod0Pcell:[I

    aget v12, v8, v3

    const/16 v13, 0xff

    if-ne v12, v13, :cond_2

    .line 11988
    aget v8, v7, v3

    goto :goto_1

    :cond_2
    aget v8, v8, v3

    :goto_1
    aput v8, v7, v3

    .line 11990
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod1Pcell:[I

    const-string v8, "dl_info[0].DL_Mod1"

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11991
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1Pcell:[I

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod1Pcell:[I

    aget v12, v8, v3

    if-ne v12, v13, :cond_3

    .line 11992
    aget v8, v7, v3

    goto :goto_2

    :cond_3
    aget v8, v8, v3

    :goto_2
    aput v8, v7, v3

    .line 11994
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulPcell:[I

    const-string v8, "ul_info[0].UL_Mod"

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v7, v3

    .line 11995
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlPcell:[I

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulPcell:[I

    aget v12, v8, v3

    if-ne v12, v13, :cond_4

    .line 11996
    aget v8, v7, v3

    goto :goto_3

    :cond_4
    aget v8, v8, v3

    :goto_3
    aput v8, v7, v3

    .line 11998
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_4
    const-string v8, "ul_info["

    const-string v12, "dl_info["

    const/4 v14, 0x3

    if-ge v7, v14, :cond_9

    .line 11999
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v14, v14, v3

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v13, v7, 0x1

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v14, v7

    .line 12001
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v13, v13, v3

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v15, v7, 0x1

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    aput v14, v13, v7

    .line 12003
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v13, v13, v3

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v15, v7, 0x1

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    aput v14, v13, v7

    .line 12005
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v13, v13, v3

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v15, v7, 0x1

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, "].dlFreq"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    aput v14, v13, v7

    .line 12006
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v13, v13, v3

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v15, v7, 0x1

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, "].ulFreq"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    aput v14, v13, v7

    .line 12007
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod0ScellArr:[[I

    aget-object v13, v13, v3

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v15, v7, 0x1

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, "].DL_Mod0"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    aput v14, v13, v7

    .line 12009
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0ScellArr:[[I

    aget-object v14, v13, v3

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod0ScellArr:[[I

    aget-object v17, v15, v3

    aget v1, v17, v7

    move-object/from16 v17, v4

    const/16 v4, 0xff

    .end local v4    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    if-ne v1, v4, :cond_5

    .line 12010
    aget-object v1, v13, v3

    aget v1, v1, v7

    goto :goto_5

    :cond_5
    aget-object v1, v15, v3

    aget v1, v1, v7

    :goto_5
    aput v1, v14, v7

    .line 12011
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod1ScellArr:[[I

    aget-object v1, v1, v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v12, v7, 0x1

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, "].DL_Mod1"

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v1, v7

    .line 12013
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1ScellArr:[[I

    aget-object v4, v1, v3

    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlMod1ScellArr:[[I

    aget-object v13, v12, v3

    aget v13, v13, v7

    const/16 v14, 0xff

    if-ne v13, v14, :cond_6

    .line 12014
    aget-object v1, v1, v3

    aget v1, v1, v7

    goto :goto_6

    :cond_6
    aget-object v1, v12, v3

    aget v1, v1, v7

    :goto_6
    aput v1, v4, v7

    .line 12015
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulScellArr:[[I

    aget-object v1, v1, v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v8, v7, 0x1

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "].UL_Mod"

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v1, v7

    .line 12017
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlScellArr:[[I

    aget-object v4, v1, v3

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulScellArr:[[I

    aget-object v12, v8, v3

    aget v12, v12, v7

    const/16 v13, 0xff

    if-ne v12, v13, :cond_7

    .line 12018
    aget-object v1, v1, v3

    aget v1, v1, v7

    goto :goto_7

    :cond_7
    aget-object v1, v8, v3

    aget v1, v1, v7

    :goto_7
    aput v1, v4, v7

    .line 12019
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v1, v1, v3

    aget v1, v1, v7

    if-nez v1, :cond_8

    .line 12020
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0ScellArr:[[I

    aget-object v1, v1, v3

    const/4 v4, 0x0

    aput v4, v1, v7

    .line 12021
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1ScellArr:[[I

    aget-object v1, v1, v3

    aput v4, v1, v7

    .line 12022
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlScellArr:[[I

    aget-object v1, v1, v3

    aput v4, v1, v7

    .line 11998
    :cond_8
    add-int/lit8 v7, v7, 0x1

    move-object/from16 v1, p1

    move-object/from16 v4, v17

    goto/16 :goto_4

    .end local v17    # "coName":Ljava/lang/String;
    .restart local v4    # "coName":Ljava/lang/String;
    :cond_9
    move-object/from16 v17, v4

    .line 12026
    .end local v4    # "coName":Ljava/lang/String;
    .end local v7    # "i":I
    .restart local v17    # "coName":Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_8
    const/4 v4, 0x4

    if-ge v1, v4, :cond_a

    .line 12027
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 12028
    .local v4, "coNamedl":Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 12029
    .local v7, "coNameul":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "cell_info["

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 12031
    .local v9, "coNamecell":Ljava/lang/String;
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellAntPort:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "ant_port"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/4 v13, 0x1

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12033
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellTput:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "DL_Tput"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    aput v11, v10, v1

    .line 12035
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellTput:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "UL_Tput"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    aput v11, v10, v1

    .line 12037
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellImcs:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "DL_Imcs"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/4 v13, 0x1

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12039
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellImcs:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_Imcs"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12041
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellBler:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "DL_bler"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12043
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellBler:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_bler"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12045
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellRb:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "DL_rb"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12047
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->UlCellRb:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_rb"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12049
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw0:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "cqi_cw0"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12051
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellCqiCw1:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "cqi_cw1"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    aput v11, v10, v1

    .line 12053
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->DlCellri:[[I

    aget-object v10, v10, v3

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "ri"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    aput v11, v10, v1

    .line 12026
    .end local v4    # "coNamedl":Ljava/lang/String;
    .end local v7    # "coNameul":Ljava/lang/String;
    .end local v9    # "coNamecell":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_8

    .line 12056
    .end local v1    # "i":I
    .end local v5    # "coName1":Ljava/lang/String;
    .end local v17    # "coName":Ljava/lang/String;
    :cond_a
    nop

    .line 12061
    :goto_9
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v4, "1"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v4, 0x2

    if-eqz v1, :cond_b

    if-ge v3, v4, :cond_b

    .line 12062
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->LogRecord(I)V

    .line 12064
    :cond_b
    add-int/lit8 v1, v3, 0x1

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v1, v5, :cond_c

    .line 12065
    return-void

    .line 12067
    :cond_c
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->clearData()V

    .line 12069
    const/4 v1, 0x5

    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "Band"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandPcell:[I

    aget v6, v6, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    .line 12070
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v8

    .line 12071
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->bandScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    .line 12072
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12069
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12075
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "DL BW(MHz)"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthPcell:[I

    aget v8, v8, v3

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v8, v8, v3

    aget v8, v8, v7

    .line 12076
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v7, v7, v3

    const/4 v8, 0x1

    aget v7, v7, v8

    .line 12077
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlBandwidthScellArr:[[I

    aget-object v7, v7, v3

    aget v7, v7, v4

    .line 12078
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12075
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12080
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "UL BW(MHz)"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthPcell:[I

    aget v8, v8, v3

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v8, v8, v3

    aget v8, v8, v7

    .line 12081
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v7, v7, v3

    const/4 v8, 0x1

    aget v7, v7, v8

    .line 12082
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingBW:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulBandwidthScellArr:[[I

    aget-object v7, v7, v3

    aget v7, v7, v4

    .line 12083
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12080
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12085
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "TM"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmPcell:[I

    aget v6, v6, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v8

    .line 12086
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->tmScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12085
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12088
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "PCI"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciPcell:[I

    aget v6, v6, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    .line 12089
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v8

    .line 12090
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->pciScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    .line 12091
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12088
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12094
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "EARFCN"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnPcell:[J

    aget-wide v8, v6, v3

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v6, v6, v3

    aget-wide v9, v6, v7

    .line 12095
    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v6, v6, v3

    aget-wide v6, v6, v8

    .line 12096
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->earfcnScellArr:[[J

    aget-object v6, v6, v3

    aget-wide v6, v6, v4

    .line 12097
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12094
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12100
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "RS_SNR"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrPcell:[I

    aget v6, v6, v3

    int-to-float v6, v6

    const/high16 v8, 0x40800000    # 4.0f

    div-float/2addr v6, v8

    .line 12101
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v9, 0x1

    aput-object v6, v5, v9

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12102
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v9

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12103
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->snrScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12104
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12100
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12107
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "DL Freq"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqPcell:[I

    aget v6, v6, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v9, 0x1

    aput-object v6, v5, v9

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    .line 12108
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v9

    .line 12109
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->dlFreqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    .line 12110
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12107
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12112
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "UL Freq"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqPcell:[I

    aget v6, v6, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v9, 0x1

    aput-object v6, v5, v9

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    .line 12113
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v9

    .line 12114
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->ulFreqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    .line 12115
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12112
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12118
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "RSRP"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpPcell:[I

    aget v6, v6, v3

    int-to-float v6, v6

    div-float/2addr v6, v8

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v9, 0x1

    aput-object v6, v5, v9

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12119
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v9

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12120
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrpScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12121
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12118
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12124
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "RSRQ"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqPcell:[I

    aget v6, v6, v3

    int-to-float v6, v6

    div-float/2addr v6, v8

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v9, 0x1

    aput-object v6, v5, v9

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v7

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12125
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v9

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12126
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->rsrqScellArr:[[I

    aget-object v6, v6, v3

    aget v6, v6, v4

    int-to-float v6, v6

    div-float/2addr v6, v8

    .line 12127
    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12124
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12130
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "DL Mod TB1"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0Pcell:[I

    aget v8, v8, v3

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0ScellArr:[[I

    aget-object v8, v8, v3

    aget v8, v8, v7

    .line 12131
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0ScellArr:[[I

    aget-object v7, v7, v3

    const/4 v8, 0x1

    aget v7, v7, v8

    .line 12132
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod0ScellArr:[[I

    aget-object v7, v7, v3

    aget v7, v7, v4

    .line 12133
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12130
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12136
    new-array v5, v1, [Ljava/lang/Object;

    const-string v6, "DL Mod TB2"

    const/4 v7, 0x0

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1Pcell:[I

    aget v8, v8, v3

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v8, 0x1

    aput-object v6, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1ScellArr:[[I

    aget-object v8, v8, v3

    aget v8, v8, v7

    .line 12137
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v5, v4

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1ScellArr:[[I

    aget-object v7, v7, v3

    const/4 v8, 0x1

    aget v7, v7, v8

    .line 12138
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x3

    aput-object v6, v5, v7

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldDlMod1ScellArr:[[I

    aget-object v7, v7, v3

    aget v7, v7, v4

    .line 12139
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    const/4 v7, 0x4

    aput-object v6, v5, v7

    .line 12136
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12142
    new-array v1, v1, [Ljava/lang/Object;

    const-string v5, "UL Mod"

    const/4 v6, 0x0

    aput-object v5, v1, v6

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlPcell:[I

    aget v7, v7, v3

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    const/4 v7, 0x1

    aput-object v5, v1, v7

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlScellArr:[[I

    aget-object v7, v7, v3

    aget v6, v7, v6

    .line 12143
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    aput-object v5, v1, v4

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlScellArr:[[I

    aget-object v6, v6, v3

    const/4 v7, 0x1

    aget v6, v6, v7

    .line 12144
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    const/4 v6, 0x3

    aput-object v5, v1, v6

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->mMappingQam:Ljava/util/HashMap;

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->oldUlScellArr:[[I

    aget-object v6, v6, v3

    aget v4, v6, v4

    .line 12145
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    const/4 v5, 0x4

    aput-object v4, v1, v5

    .line 12142
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;->addData([Ljava/lang/Object;)V

    .line 12146
    return-void

    .line 12057
    :cond_d
    const-string v1, "EmInfo/MDMComponent"

    const-string v4, "PCellSCellBasicInfo update invalid name"

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12058
    return-void
.end method
