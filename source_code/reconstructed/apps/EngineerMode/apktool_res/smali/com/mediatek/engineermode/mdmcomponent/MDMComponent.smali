.class public abstract Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.super Ljava/lang/Object;
.source "MDMComponent.java"

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;",
        ">;"
    }
.end annotation


# static fields
.field protected static final TAG:Ljava/lang/String; = "EmInfo/MDMComponent"

.field protected static emLogInfo:[Ljava/lang/String;

.field protected static icdLogInfo:[Ljava/lang/String;

.field private static mComponents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field protected mActivity:Landroid/app/Activity;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 79
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    .line 81
    const/4 v0, 0x6

    new-array v1, v0, [Ljava/lang/String;

    sput-object v1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->icdLogInfo:[Ljava/lang/String;

    .line 82
    new-array v0, v0, [Ljava/lang/String;

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->emLogInfo:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 85
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mActivity:Landroid/app/Activity;

    .line 86
    return-void
.end method

.method static getComponents(Landroid/app/Activity;)Ljava/util/List;
    .locals 3
    .param p0, "context"    # Landroid/app/Activity;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            ")",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;",
            ">;"
        }
    .end annotation

    .line 90
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    if-nez v0, :cond_1

    .line 91
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    .line 94
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RRCState;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RRCState;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 95
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RRState;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RRState;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 96
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 97
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 98
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 99
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    const/4 v2, 0x2

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;-><init>(Landroid/app/Activity;I)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 101
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 102
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 103
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LaiRaiUmtsTdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LaiRaiUmtsTdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 104
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 105
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 106
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 107
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 108
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlBlockErrorRate;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlBlockErrorRate;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 109
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDownlinkBandwidth;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDownlinkBandwidth;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 110
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellUplinkBandwidth;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellUplinkBandwidth;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 111
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellUplinkDownlinkConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellUplinkDownlinkConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 112
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellSpecialSubframeConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellSpecialSubframeConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 113
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellTransmissionMode;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellTransmissionMode;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 114
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlBlockErrorRate;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlBlockErrorRate;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 115
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDownlinkBandwidth;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDownlinkBandwidth;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 116
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellUplinkBandwidth;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellUplinkBandwidth;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 117
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellUplinkDownlinkConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellUplinkDownlinkConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 118
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSpecialSubframeConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSpecialSubframeConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 119
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 120
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Tai;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Tai;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 121
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EmIrReport;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 122
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3a;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3a;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 123
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 124
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 125
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 126
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3a;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3a;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 127
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 128
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3c;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3c;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 129
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3d;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3d;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 130
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 131
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfoGSM;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfoGSM;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 132
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 133
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 134
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 135
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 136
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 137
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 138
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/DcHsdpaConfiguredUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/DcHsdpaConfiguredUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 139
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 140
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/HsupaConfiguredUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/HsupaConfiguredUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 141
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 142
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 143
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 144
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 145
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 146
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/DtxConfiguredUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/DtxConfiguredUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 147
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/DrxConfiguredUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/DrxConfiguredUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 148
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 149
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 150
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyDetectedSetUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyDetectedSetUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 151
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 152
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CsOverHspaUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 153
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 154
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 155
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 156
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlImcs;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlImcs;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 157
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlResourceBlock;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlResourceBlock;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 158
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellAntennaPort;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellAntennaPort;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 159
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 160
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlBlockRate;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellDlBlockRate;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 161
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 162
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlImcs;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlImcs;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 163
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 164
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellAntennaPort;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellAntennaPort;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 165
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 166
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlBlockRate;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlBlockRate;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 167
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/DownlinkDataThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/DownlinkDataThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 168
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 169
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 170
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 171
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 172
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 173
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondHsDschServingCell;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondHsDschServingCell;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 174
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 175
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 176
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 177
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 178
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 179
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 181
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 183
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 184
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/UtraTddNeighbouringCellInformation;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/UtraTddNeighbouringCellInformation;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 185
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 186
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 187
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/GSMTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 188
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 189
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 190
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 191
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRsrpRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRsrpRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 192
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRsrp;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRsrp;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 193
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRsrq;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRsrq;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 194
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRssiRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellRssiRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 195
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellSnrRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellSnrRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 196
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellOsSnr;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellOsSnr;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 197
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRsrpRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRsrpRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 198
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRsrp;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRsrp;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 199
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRsrq;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRsrq;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 200
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRssiRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellRssiRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 201
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 202
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellOsSnr;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellOsSnr;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 203
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 204
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 205
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 206
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 207
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PCellSCellBasicInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 208
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 209
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/El2FeatureDetection;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/El2FeatureDetection;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 210
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErlcDlDrbConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErlcDlDrbConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 211
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErlcUlDrbConfiguration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErlcUlDrbConfiguration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 212
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCell;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCell;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 213
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 214
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 215
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EPSBearerThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EPSBearerThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 216
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 218
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteEmacRachFailure;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteEmacRachFailure;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 219
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 220
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 221
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 223
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 224
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 225
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 226
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 227
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 228
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 230
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 231
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 232
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 234
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 235
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 236
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 237
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 238
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 239
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EvdoNghdrSet;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoNghdrSet;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 241
    :cond_0
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 242
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 243
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 244
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 245
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 246
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 247
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 248
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 251
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 252
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 253
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 254
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 255
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 256
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 257
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTERLCThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTERLCThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 258
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 259
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 260
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 261
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 262
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 263
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 264
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 265
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 266
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 267
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 268
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 269
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 270
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellSinrRx;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellSinrRx;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 271
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 272
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 273
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 274
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 275
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStatePMI1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStatePMI1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 276
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStatePMI2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStatePMI2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 277
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 278
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 279
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateRi;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateRi;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 280
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 281
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB2;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 282
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 283
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 284
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellBLER;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellBLER;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 285
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellSDAPThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellSDAPThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 286
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPDCPThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPDCPThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 287
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 288
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellMACThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellMACThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 289
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 290
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 291
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 292
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NSA;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NSA;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 293
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SA;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SA;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 294
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 295
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 296
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 297
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 298
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 299
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 300
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ONasInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 301
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 302
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/DRBType;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/DRBType;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 303
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 304
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 305
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;-><init>(Landroid/app/Activity;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 306
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->mComponents:Ljava/util/List;

    return-object v0

    .line 93
    :cond_1
    return-object v0
.end method


# virtual methods
.method addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;
    .locals 5
    .param p1, "a"    # [Ljava/lang/String;
    .param p2, "b"    # [Ljava/lang/String;
    .param p3, "position"    # I

    .line 674
    array-length v0, p1

    array-length v1, p2

    add-int/2addr v0, v1

    new-array v0, v0, [Ljava/lang/String;

    .line 675
    .local v0, "c":[Ljava/lang/String;
    array-length v1, p1

    if-lt p3, v1, :cond_0

    .line 676
    array-length v1, p1

    const/4 v2, 0x0

    invoke-static {p1, v2, v0, v2, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 677
    array-length v1, p1

    array-length v3, p2

    invoke-static {p2, v2, v0, v1, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_3

    .line 679
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_4

    .line 680
    if-ge v1, p3, :cond_1

    .line 681
    aget-object v2, p1, v1

    aput-object v2, v0, v1

    goto :goto_2

    .line 682
    :cond_1
    if-ne v1, p3, :cond_3

    .line 683
    const/4 v2, 0x0

    .local v2, "j":I
    :goto_1
    array-length v3, p2

    if-ge v2, v3, :cond_2

    .line 684
    add-int v3, v1, v2

    aget-object v4, p2, v2

    aput-object v4, v0, v3

    .line 683
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 686
    .end local v2    # "j":I
    :cond_2
    array-length v2, p2

    add-int/2addr v2, v1

    aget-object v3, p1, v1

    aput-object v3, v0, v2

    goto :goto_2

    .line 688
    :cond_3
    array-length v2, p2

    add-int/2addr v2, v1

    aget-object v3, p1, v1

    aput-object v3, v0, v2

    .line 679
    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 692
    .end local v1    # "i":I
    :cond_4
    :goto_3
    return-object v0
.end method

.method abstract clearData()V
.end method

.method public compareTo(Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;)I
    .locals 2
    .param p1, "another"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 311
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->compareTo(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public bridge synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    .line 76
    check-cast p1, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->compareTo(Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;)I

    move-result p1

    return p1
.end method

.method public varargs concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">([TT;[[TT;)[TT;"
        }
    .end annotation

    .line 716
    .local p1, "first":[Ljava/lang/Object;, "[TT;"
    .local p2, "rest":[[Ljava/lang/Object;, "[[TT;"
    array-length v0, p1

    .line 717
    .local v0, "totalLength":I
    array-length v1, p2

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_0

    aget-object v4, p2, v3

    .line 718
    .local v4, "array":[Ljava/lang/Object;, "[TT;"
    array-length v5, v4

    add-int/2addr v0, v5

    .line 717
    .end local v4    # "array":[Ljava/lang/Object;, "[TT;"
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 720
    :cond_0
    invoke-static {p1, v0}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v1

    .line 721
    .local v1, "result":[Ljava/lang/Object;, "[TT;"
    array-length v3, p1

    .line 722
    .local v3, "offset":I
    array-length v4, p2

    move v5, v2

    :goto_1
    if-ge v5, v4, :cond_1

    aget-object v6, p2, v5

    .line 723
    .local v6, "array":[Ljava/lang/Object;, "[TT;"
    array-length v7, v6

    invoke-static {v6, v2, v1, v3, v7}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 724
    array-length v7, v6

    add-int/2addr v3, v7

    .line 722
    .end local v6    # "array":[Ljava/lang/Object;, "[TT;"
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 726
    :cond_1
    return-object v1
.end method

.method public diff_time(Ljava/lang/String;Ljava/lang/String;I)Z
    .locals 7
    .param p1, "lastTime"    # Ljava/lang/String;
    .param p2, "CurTime"    # Ljava/lang/String;
    .param p3, "diff_s"    # I

    .line 791
    const/4 v0, 0x0

    .line 792
    .local v0, "dlast":Ljava/util/Date;
    const/4 v1, 0x0

    .line 793
    .local v1, "dcurrent":Ljava/util/Date;
    const/4 v2, 0x0

    .line 794
    .local v2, "mCurrectTime":Ljava/text/SimpleDateFormat;
    new-instance v3, Ljava/text/SimpleDateFormat;

    const-string v4, "yyyy_MM_dd_HH_mm_ss_SS"

    invoke-direct {v3, v4}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    move-object v2, v3

    .line 797
    :try_start_0
    invoke-virtual {v2, p1}, Ljava/text/SimpleDateFormat;->parse(Ljava/lang/String;)Ljava/util/Date;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v3

    .line 801
    goto :goto_0

    .line 798
    :catch_0
    move-exception v3

    .line 800
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 803
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    :try_start_1
    invoke-virtual {v2, p2}, Ljava/text/SimpleDateFormat;->parse(Ljava/lang/String;)Ljava/util/Date;

    move-result-object v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v1, v3

    .line 807
    goto :goto_1

    .line 804
    :catch_1
    move-exception v3

    .line 806
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 808
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_1
    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v3

    invoke-virtual {v0}, Ljava/util/Date;->getTime()J

    move-result-wide v5

    sub-long/2addr v3, v5

    .line 809
    .local v3, "diff":J
    int-to-long v5, p3

    cmp-long v5, v3, v5

    if-lez v5, :cond_0

    .line 810
    const/4 v5, 0x1

    return v5

    .line 812
    :cond_0
    const/4 v5, 0x0

    return v5
.end method

.method public getCurrectTime()Ljava/lang/String;
    .locals 3

    .line 784
    const/4 v0, 0x0

    .line 785
    .local v0, "mCurrectTime":Ljava/text/SimpleDateFormat;
    new-instance v1, Ljava/text/SimpleDateFormat;

    const-string v2, "yyyy_MM_dd_HH_mm_ss_SS"

    invoke-direct {v1, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    move-object v0, v1

    .line 786
    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    .line 787
    .local v1, "mTimes":Ljava/lang/String;
    return-object v1
.end method

.method abstract getEmComponentName()[Ljava/lang/String;
.end method

.method public getFieldHeaderLength(Ljava/nio/ByteBuffer;)I
    .locals 8
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;

    .line 498
    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit16 v1, v1, 0xf0

    shr-int/lit8 v1, v1, 0x4

    .line 499
    .local v1, "version":I
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit8 v2, v2, 0xf

    .line 500
    .local v2, "type":I
    const/4 v3, 0x0

    .local v3, "len":I
    const/4 v4, 0x0

    .line 501
    .local v4, "timestamp_type":I
    new-instance v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent$1;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;)V

    .line 510
    .local v5, "TimeStampSize":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Integer;>;"
    const/4 v6, 0x2

    const/4 v7, 0x1

    if-eqz v2, :cond_3

    if-eq v2, v7, :cond_0

    .line 538
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "getFieldHeaderLength error, type is : "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 525
    :cond_0
    if-eq v1, v7, :cond_2

    if-eq v1, v6, :cond_1

    goto :goto_0

    .line 531
    :cond_1
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_RECORD_V2:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v6, v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timeStamp:[I

    aget v3, v6, v0

    .line 532
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_RECORD_V2:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timestamp_type:[I

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v6

    long-to-int v4, v6

    goto :goto_0

    .line 527
    :cond_2
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_RECORD_V1:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v6, v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timeStamp:[I

    aget v3, v6, v0

    .line 528
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_RECORD_V1:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timestamp_type:[I

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v6

    long-to-int v4, v6

    .line 529
    nop

    .line 535
    :goto_0
    goto :goto_2

    .line 512
    :cond_3
    if-eq v1, v7, :cond_5

    if-eq v1, v6, :cond_4

    goto :goto_1

    .line 518
    :cond_4
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_EVENT_V2:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v6, v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timeStamp:[I

    aget v3, v6, v0

    .line 519
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_EVENT_V2:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timestamp_type:[I

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v6

    long-to-int v4, v6

    goto :goto_1

    .line 514
    :cond_5
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_EVENT_V1:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v6, v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timeStamp:[I

    aget v3, v6, v0

    .line 515
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;->ICD_EVENT_V1:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICDStruct;->timestamp_type:[I

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v6

    long-to-int v4, v6

    .line 516
    nop

    .line 522
    :goto_1
    nop

    .line 541
    :goto_2
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v5, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit8 v0, v0, 0x8

    add-int/2addr v0, v3

    return v0
.end method

.method public getFieldSignedValueIcd(Ljava/nio/ByteBuffer;II)I
    .locals 4
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "offset"    # I
    .param p3, "length"    # I

    .line 664
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldHeaderLength(Ljava/nio/ByteBuffer;)I

    move-result v0

    .line 665
    .local v0, "headLen":I
    const/4 v1, 0x2

    new-array v1, v1, [I

    add-int v2, p2, v0

    const/4 v3, 0x0

    aput v2, v1, v3

    const/4 v2, 0x1

    aput p3, v1, v2

    invoke-virtual {p0, p1, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getSignedValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v1

    long-to-int v1, v1

    return v1
.end method

.method public getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I
    .locals 3
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "msgName"    # Ljava/lang/String;

    .line 371
    invoke-virtual {p1, p2}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    .line 372
    .local v0, "bData":[B
    if-nez v0, :cond_0

    .line 373
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getFieldValue] returned null from :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 375
    :cond_0
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([B)J

    move-result-wide v1

    long-to-int v1, v1

    .line 377
    .local v1, "iData":I
    return v1
.end method

.method public getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I
    .locals 3
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "msgName"    # Ljava/lang/String;
    .param p3, "sign"    # Z

    .line 381
    if-nez p3, :cond_0

    .line 382
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    return v0

    .line 384
    :cond_0
    invoke-virtual {p1, p2}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    .line 386
    .local v0, "bData":[B
    if-nez v0, :cond_1

    .line 387
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getFieldValue] returned null from :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 389
    :cond_1
    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([BZ)J

    move-result-wide v1

    long-to-int v1, v1

    .line 391
    .local v1, "iData":I
    return v1
.end method

.method public getFieldValueIcd(Ljava/nio/ByteBuffer;II)I
    .locals 4
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "offset"    # I
    .param p3, "length"    # I

    .line 669
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldHeaderLength(Ljava/nio/ByteBuffer;)I

    move-result v0

    .line 670
    .local v0, "headLen":I
    const/4 v1, 0x2

    new-array v1, v1, [I

    add-int v2, p2, v0

    const/4 v3, 0x0

    aput v2, v1, v3

    const/4 v2, 0x1

    aput p3, v1, v2

    invoke-virtual {p0, p1, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v1

    long-to-int v1, v1

    return v1
.end method

.method public getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I
    .locals 3
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "offset"    # I
    .param p3, "length"    # I
    .param p4, "sign"    # Z

    .line 404
    invoke-virtual {p0, p1, p2, p3}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcd(Ljava/nio/ByteBuffer;II)I

    move-result v0

    .line 405
    .local v0, "value":I
    if-nez p4, :cond_0

    .line 406
    return v0

    .line 408
    :cond_0
    add-int v1, p2, p3

    add-int/lit8 v1, v1, -0x1

    div-int/lit8 v1, v1, 0x8

    add-int/lit8 v1, v1, 0x15

    .line 409
    .local v1, "endByte":I
    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v2

    and-int/lit16 v2, v2, 0x80

    if-eqz v2, :cond_1

    .line 410
    not-int v2, v0

    return v2

    .line 412
    :cond_1
    return v0
.end method

.method public getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I
    .locals 3
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "version"    # I
    .param p3, "offsetAddrs"    # [[I

    .line 439
    const-string v0, "EmInfo/MDMComponent"

    if-lez p2, :cond_2

    if-eqz p3, :cond_2

    array-length v1, p3

    if-nez v1, :cond_0

    goto :goto_0

    .line 443
    :cond_0
    array-length v1, p3

    if-le p2, v1, :cond_1

    .line 444
    array-length p2, p3

    .line 445
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "offsetAddrs < version, use latest record"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, p3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 447
    :cond_1
    add-int/lit8 v0, p2, -0x1

    aget-object v0, p3, v0

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v0

    return v0

    .line 440
    :cond_2
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getFieldValueIcd: version: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", offsetAddrs, need check!"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 441
    const/4 v0, 0x0

    return v0
.end method

.method public getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I
    .locals 3
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "version"    # I
    .param p3, "offsetAddrs"    # [[I
    .param p4, "isSigned"    # Z

    .line 452
    const-string v0, "EmInfo/MDMComponent"

    if-lez p2, :cond_2

    if-eqz p3, :cond_2

    array-length v1, p3

    if-nez v1, :cond_0

    goto :goto_0

    .line 456
    :cond_0
    array-length v1, p3

    if-le p2, v1, :cond_1

    .line 457
    array-length p2, p3

    .line 458
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "offsetAddrs < version, use latest record"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, p3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 460
    :cond_1
    add-int/lit8 v0, p2, -0x1

    aget-object v0, p3, v0

    invoke-virtual {p0, p1, v0, p4}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v0

    return v0

    .line 453
    :cond_2
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getFieldValueIcd: version: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", offsetAddrs, need check!"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 454
    const/4 v0, 0x0

    return v0
.end method

.method public getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I
    .locals 5
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "offsetAddrs"    # [I

    .line 426
    array-length v0, p2

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 427
    const/16 v0, 0x8

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 428
    .local v0, "version":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getFieldValueIcd] offsetAddrs length is 0, version is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", return"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "EmInfo/MDMComponent"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 429
    return v1

    .line 431
    .end local v0    # "version":I
    :cond_0
    array-length v0, p2

    add-int/lit8 v0, v0, -0x1

    .line 432
    .local v0, "endIndex":I
    invoke-static {p2, v1, v0}, Ljava/util/Arrays;->copyOfRange([III)[I

    move-result-object v1

    .line 433
    .local v1, "addrs":[I
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getOffsetByAddrs([I)I

    move-result v2

    .line 434
    .local v2, "offset":I
    aget v3, p2, v0

    .line 435
    .local v3, "length":I
    invoke-virtual {p0, p1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcd(Ljava/nio/ByteBuffer;II)I

    move-result v4

    return v4
.end method

.method public getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I
    .locals 5
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "offsetAddrs"    # [I
    .param p3, "isSigned"    # Z

    .line 483
    array-length v0, p2

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 484
    const/16 v0, 0x8

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 485
    .local v0, "version":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getFieldValueIcd] offsetAddrs length is 0, version is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", return"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "EmInfo/MDMComponent"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 486
    return v1

    .line 488
    .end local v0    # "version":I
    :cond_0
    array-length v0, p2

    add-int/lit8 v0, v0, -0x1

    .line 489
    .local v0, "endIndex":I
    invoke-static {p2, v1, v0}, Ljava/util/Arrays;->copyOfRange([III)[I

    move-result-object v1

    .line 490
    .local v1, "addrs":[I
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getOffsetByAddrs([I)I

    move-result v2

    .line 491
    .local v2, "offset":I
    aget v3, p2, v0

    .line 492
    .local v3, "length":I
    if-eqz p3, :cond_1

    .line 493
    invoke-virtual {p0, p1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldSignedValueIcd(Ljava/nio/ByteBuffer;II)I

    move-result v4

    return v4

    .line 494
    :cond_1
    invoke-virtual {p0, p1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldValueIcd(Ljava/nio/ByteBuffer;II)I

    move-result v4

    return v4
.end method

.method public getFieldValueIcdType(Ljava/nio/ByteBuffer;)I
    .locals 1
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;

    .line 421
    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v0

    and-int/lit8 v0, v0, 0xf

    .line 422
    .local v0, "type":I
    return v0
.end method

.method public getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I
    .locals 3
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "len"    # I

    .line 415
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldHeaderLength(Ljava/nio/ByteBuffer;)I

    move-result v0

    .line 416
    .local v0, "headLen":I
    const/4 v1, 0x2

    new-array v1, v1, [I

    const/4 v2, 0x0

    aput v0, v1, v2

    const/4 v2, 0x1

    aput p2, v1, v2

    invoke-virtual {p0, p1, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v1

    long-to-int v1, v1

    .line 417
    .local v1, "version":I
    return v1
.end method

.method abstract getGroup()Ljava/lang/String;
.end method

.method public getLongFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)J
    .locals 9
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "version"    # I
    .param p3, "offsetAddrs"    # [[I
    .param p4, "isSigned"    # Z

    .line 465
    const-string v0, "EmInfo/MDMComponent"

    if-lez p2, :cond_3

    if-eqz p3, :cond_3

    array-length v1, p3

    if-nez v1, :cond_0

    goto :goto_1

    .line 469
    :cond_0
    array-length v1, p3

    if-le p2, v1, :cond_1

    .line 470
    array-length p2, p3

    .line 471
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "offsetAddrs < version, use latest record"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, p3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 473
    :cond_1
    add-int/lit8 v0, p2, -0x1

    aget-object v0, p3, v0

    array-length v0, v0

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    .line 474
    .local v0, "endIndex":I
    add-int/lit8 v2, p2, -0x1

    aget-object v2, p3, v2

    const/4 v3, 0x0

    invoke-static {v2, v3, v0}, Ljava/util/Arrays;->copyOfRange([III)[I

    move-result-object v2

    .line 475
    .local v2, "addrs":[I
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getOffsetByAddrs([I)I

    move-result v4

    .line 476
    .local v4, "offset":I
    add-int/lit8 v5, p2, -0x1

    aget-object v5, p3, v5

    aget v5, v5, v0

    .line 477
    .local v5, "length":I
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getFieldHeaderLength(Ljava/nio/ByteBuffer;)I

    move-result v6

    .line 478
    .local v6, "headLen":I
    const/4 v7, 0x2

    if-eqz p4, :cond_2

    new-array v7, v7, [I

    add-int v8, v4, v6

    aput v8, v7, v3

    aput v5, v7, v1

    invoke-virtual {p0, p1, v7}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getSignedValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v7

    goto :goto_0

    .line 479
    :cond_2
    new-array v7, v7, [I

    add-int v8, v4, v6

    aput v8, v7, v3

    aput v5, v7, v1

    invoke-virtual {p0, p1, v7}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J

    move-result-wide v7

    :goto_0
    long-to-int v1, v7

    int-to-long v7, v1

    .line 478
    return-wide v7

    .line 466
    .end local v0    # "endIndex":I
    .end local v2    # "addrs":[I
    .end local v4    # "offset":I
    .end local v5    # "length":I
    .end local v6    # "headLen":I
    :cond_3
    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getFieldValueIcd: version: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", offsetAddrs, need check!"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 467
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method abstract getName()Ljava/lang/String;
.end method

.method public getOffsetByAddrs([I)I
    .locals 3
    .param p1, "addrs"    # [I

    .line 396
    const/4 v0, 0x0

    .line 397
    .local v0, "sum":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 398
    aget v2, p1, v1

    add-int/2addr v0, v2

    .line 397
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 400
    .end local v1    # "i":I
    :cond_0
    return v0
.end method

.method public getSignedValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J
    .locals 16
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "despArr"    # [I

    .line 604
    move-object/from16 v0, p1

    const/4 v1, 0x0

    aget v2, p2, v1

    .line 605
    .local v2, "offset":I
    const/4 v3, 0x1

    aget v4, p2, v3

    .line 606
    .local v4, "length":I
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v5

    and-int/lit16 v5, v5, 0xf0

    shr-int/lit8 v5, v5, 0x4

    .line 607
    .local v5, "version":I
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit8 v1, v1, 0xf

    .line 608
    .local v1, "type":I
    const/4 v6, 0x0

    .line 609
    .local v6, "shiftBit":I
    const-wide/16 v7, 0x0

    .line 610
    .local v7, "value":J
    rem-int/lit8 v9, v2, 0x8

    .line 611
    .local v9, "maskBit":I
    div-int/lit8 v10, v2, 0x8

    .line 612
    .local v10, "beginByte":I
    add-int v11, v2, v4

    rem-int/lit8 v11, v11, 0x8

    .line 613
    .local v11, "endBit":I
    add-int v12, v4, v2

    div-int/lit8 v12, v12, 0x8

    .line 614
    .local v12, "endByte":I
    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    if-gt v12, v13, :cond_5

    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    if-le v10, v13, :cond_0

    goto :goto_1

    .line 623
    :cond_0
    if-eqz v9, :cond_2

    .line 624
    rsub-int/lit8 v13, v9, 0x8

    if-gt v4, v13, :cond_1

    .line 625
    invoke-virtual {v0, v10}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    shr-int/2addr v13, v9

    shl-int v14, v3, v4

    sub-int/2addr v14, v3

    and-int v3, v13, v14

    int-to-long v13, v3

    or-long/2addr v7, v13

    .line 631
    return-wide v7

    .line 633
    :cond_1
    invoke-virtual {v0, v10}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    shr-int/2addr v13, v9

    int-to-long v13, v13

    or-long/2addr v7, v13

    .line 639
    rsub-int/lit8 v9, v9, 0x8

    .line 640
    add-int/lit8 v10, v10, 0x1

    .line 642
    :cond_2
    if-le v12, v10, :cond_3

    .line 643
    move v13, v10

    .local v13, "i":I
    :goto_0
    if-ge v13, v12, :cond_3

    .line 645
    sub-int v14, v13, v10

    mul-int/lit8 v14, v14, 0x8

    add-int v6, v14, v9

    .line 646
    invoke-virtual {v0, v13}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v14

    shl-int/2addr v14, v6

    int-to-long v14, v14

    or-long/2addr v7, v14

    .line 643
    add-int/lit8 v13, v13, 0x1

    goto :goto_0

    .line 652
    .end local v13    # "i":I
    :cond_3
    if-eqz v11, :cond_4

    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    if-ge v12, v13, :cond_4

    .line 653
    sub-int v13, v12, v10

    mul-int/lit8 v13, v13, 0x8

    add-int v6, v13, v9

    .line 654
    invoke-virtual {v0, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    shl-int v14, v3, v11

    sub-int/2addr v14, v3

    and-int v3, v13, v14

    shl-int/2addr v3, v6

    int-to-long v13, v3

    or-long/2addr v7, v13

    .line 660
    :cond_4
    return-wide v7

    .line 615
    :cond_5
    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "getFieldSignedValueIcd version: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", type: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", offset: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", length: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", limit: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 617
    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", beginByte: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", maskBit: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", endByte: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", endBit: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 615
    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 620
    const-string v3, "data transfer error! return....."

    invoke-static {v13, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 621
    return-wide v7
.end method

.method getTypeIndex(Ljava/lang/String;)I
    .locals 3
    .param p1, "type"    # Ljava/lang/String;

    .line 346
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v0

    .line 347
    .local v0, "types":[Ljava/lang/String;
    if-eqz v0, :cond_2

    .line 348
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_1

    .line 349
    aget-object v2, v0, v1

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 350
    return v1

    .line 348
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .end local v1    # "i":I
    :cond_1
    goto :goto_1

    .line 354
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "type is null "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 356
    :goto_1
    const/4 v1, -0x1

    return v1
.end method

.method public getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;
    .locals 2
    .param p2, "index"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;I)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 360
    .local p1, "mappings":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/String;>;"
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 361
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    .line 363
    :cond_0
    const/4 v0, -0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 364
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    .line 366
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getValueFromIcdSource(Ljava/nio/ByteBuffer;[I)J
    .locals 16
    .param p1, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p2, "despArr"    # [I

    .line 545
    move-object/from16 v0, p1

    const/4 v1, 0x0

    aget v2, p2, v1

    .line 546
    .local v2, "offset":I
    const/4 v3, 0x1

    aget v4, p2, v3

    .line 547
    .local v4, "length":I
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v5

    and-int/lit16 v5, v5, 0xf0

    shr-int/lit8 v5, v5, 0x4

    .line 548
    .local v5, "version":I
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v1

    and-int/lit8 v1, v1, 0xf

    .line 549
    .local v1, "type":I
    const/4 v6, 0x0

    .line 550
    .local v6, "shiftBit":I
    const-wide/16 v7, 0x0

    .line 551
    .local v7, "value":J
    rem-int/lit8 v9, v2, 0x8

    .line 552
    .local v9, "maskBit":I
    div-int/lit8 v10, v2, 0x8

    .line 553
    .local v10, "beginByte":I
    add-int v11, v2, v4

    rem-int/lit8 v11, v11, 0x8

    .line 554
    .local v11, "endBit":I
    add-int v12, v4, v2

    div-int/lit8 v12, v12, 0x8

    .line 555
    .local v12, "endByte":I
    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    if-gt v12, v13, :cond_5

    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    if-le v10, v13, :cond_0

    goto :goto_1

    .line 564
    :cond_0
    if-eqz v9, :cond_2

    .line 565
    rsub-int/lit8 v13, v9, 0x8

    if-gt v4, v13, :cond_1

    .line 566
    invoke-virtual {v0, v10}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    and-int/lit16 v13, v13, 0xff

    shr-int/2addr v13, v9

    shl-int v14, v3, v4

    sub-int/2addr v14, v3

    and-int v3, v13, v14

    int-to-long v13, v3

    or-long/2addr v7, v13

    .line 572
    return-wide v7

    .line 574
    :cond_1
    invoke-virtual {v0, v10}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    and-int/lit16 v13, v13, 0xff

    shr-int/2addr v13, v9

    int-to-long v13, v13

    or-long/2addr v7, v13

    .line 580
    rsub-int/lit8 v9, v9, 0x8

    .line 581
    add-int/lit8 v10, v10, 0x1

    .line 583
    :cond_2
    if-le v12, v10, :cond_3

    .line 584
    move v13, v10

    .local v13, "i":I
    :goto_0
    if-ge v13, v12, :cond_3

    .line 586
    sub-int v14, v13, v10

    mul-int/lit8 v14, v14, 0x8

    add-int v6, v14, v9

    .line 587
    invoke-virtual {v0, v13}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v14

    and-int/lit16 v14, v14, 0xff

    shl-int/2addr v14, v6

    int-to-long v14, v14

    or-long/2addr v7, v14

    .line 584
    add-int/lit8 v13, v13, 0x1

    goto :goto_0

    .line 592
    .end local v13    # "i":I
    :cond_3
    if-eqz v11, :cond_4

    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    if-ge v12, v13, :cond_4

    .line 593
    sub-int v13, v12, v10

    mul-int/lit8 v13, v13, 0x8

    add-int v6, v13, v9

    .line 594
    invoke-virtual {v0, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    and-int/lit16 v13, v13, 0xff

    shl-int v14, v3, v11

    sub-int/2addr v14, v3

    and-int v3, v13, v14

    shl-int/2addr v3, v6

    int-to-long v13, v3

    or-long/2addr v7, v13

    .line 600
    :cond_4
    return-wide v7

    .line 556
    :cond_5
    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "getFieldValueIcd version: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", type: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", offset: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", length: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", limit: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 558
    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v13

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", beginByte: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", maskBit: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", endByte: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", endBit: "

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 556
    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 561
    const-string v3, "data transfer error! return....."

    invoke-static {v13, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 562
    return-wide v7
.end method

.method abstract getView()Landroid/view/View;
.end method

.method hasEmType(Ljava/lang/String;)Z
    .locals 4
    .param p1, "type"    # Ljava/lang/String;

    .line 332
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v0

    .line 333
    .local v0, "types":[Ljava/lang/String;
    if-eqz v0, :cond_2

    .line 334
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_1

    .line 335
    aget-object v2, v0, v1

    invoke-virtual {v2}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 336
    const/4 v2, 0x1

    return v2

    .line 334
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .end local v1    # "i":I
    :cond_1
    goto :goto_1

    .line 340
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "type is null "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 342
    :goto_1
    const/4 v1, 0x0

    return v1
.end method

.method protected insertElement([III)[I
    .locals 4
    .param p1, "original"    # [I
    .param p2, "element"    # I
    .param p3, "index"    # I

    .line 730
    array-length v0, p1

    .line 731
    .local v0, "length":I
    if-gt p3, v0, :cond_2

    neg-int v1, p3

    if-le v1, v0, :cond_0

    goto :goto_0

    .line 732
    :cond_0
    if-gez p3, :cond_1

    neg-int v1, p3

    if-ge v1, v0, :cond_1

    .line 733
    add-int/2addr p3, v0

    .line 734
    :cond_1
    add-int/lit8 v1, v0, 0x1

    new-array v1, v1, [I

    .line 736
    .local v1, "destination":[I
    const/4 v2, 0x0

    invoke-static {p1, v2, v1, v2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 737
    aput p2, v1, p3

    .line 738
    add-int/lit8 v2, p3, 0x1

    sub-int v3, v0, p3

    invoke-static {p1, p3, v1, v2, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 739
    return-object v1

    .line 731
    .end local v1    # "destination":[I
    :cond_2
    :goto_0
    return-object p1
.end method

.method protected insertElement([[II[II)[[I
    .locals 6
    .param p1, "original"    # [[I
    .param p2, "version"    # I
    .param p3, "elementArrays"    # [I
    .param p4, "index"    # I

    .line 743
    if-lez p2, :cond_7

    if-eqz p1, :cond_7

    array-length v0, p1

    if-nez v0, :cond_0

    goto :goto_4

    .line 747
    :cond_0
    array-length v0, p3

    if-le p2, v0, :cond_1

    array-length v0, p3

    goto :goto_0

    :cond_1
    move v0, p2

    :goto_0
    add-int/lit8 v0, v0, -0x1

    aget v0, p3, v0

    .line 748
    .local v0, "element":I
    array-length v1, p1

    if-le p2, v1, :cond_2

    array-length v1, p1

    goto :goto_1

    :cond_2
    move v1, p2

    :goto_1
    add-int/lit8 v1, v1, -0x1

    aget-object v1, p1, v1

    .line 749
    .local v1, "curOrigin":[I
    array-length v2, v1

    .line 750
    .local v2, "length":I
    add-int/lit8 v3, v2, 0x1

    new-array v3, v3, [I

    .line 751
    .local v3, "destination":[I
    if-eqz p4, :cond_6

    if-gt p4, v2, :cond_6

    neg-int v4, p4

    if-le v4, v2, :cond_3

    goto :goto_3

    .line 752
    :cond_3
    if-gez p4, :cond_4

    neg-int v4, p4

    if-ge v4, v2, :cond_4

    .line 753
    add-int/2addr p4, v2

    .line 755
    :cond_4
    const/4 v4, 0x0

    invoke-static {v1, v4, v3, v4, p4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 756
    aput v0, v3, p4

    .line 757
    add-int/lit8 v4, p4, 0x1

    sub-int v5, v2, p4

    invoke-static {v1, p4, v3, v4, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 758
    array-length v4, p1

    if-le p2, v4, :cond_5

    array-length v4, p1

    goto :goto_2

    :cond_5
    move v4, p2

    :goto_2
    add-int/lit8 v4, v4, -0x1

    aput-object v3, p1, v4

    .line 759
    return-object p1

    .line 751
    :cond_6
    :goto_3
    return-object p1

    .line 744
    .end local v0    # "element":I
    .end local v1    # "curOrigin":[I
    .end local v2    # "length":I
    .end local v3    # "destination":[I
    :cond_7
    :goto_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getFieldValueIcd: version: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", offsetAddrs, need check!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/MDMComponent"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 745
    return-object p1
.end method

.method removeLablesAtPosition([Ljava/lang/String;II)[Ljava/lang/String;
    .locals 3
    .param p1, "a"    # [Ljava/lang/String;
    .param p2, "position"    # I
    .param p3, "num"    # I

    .line 696
    array-length v0, p1

    if-lt p2, v0, :cond_0

    .line 697
    return-object p1

    .line 699
    :cond_0
    array-length v0, p1

    sub-int/2addr v0, p3

    new-array v0, v0, [Ljava/lang/String;

    .line 700
    .local v0, "c":[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    sub-int/2addr v2, p3

    if-ge v1, v2, :cond_4

    .line 701
    if-ge v1, p2, :cond_1

    .line 702
    aget-object v2, p1, v1

    aput-object v2, v0, v1

    goto :goto_1

    .line 703
    :cond_1
    if-ne v1, p2, :cond_3

    .line 704
    array-length v2, p1

    sub-int/2addr v2, p2

    if-gt v2, p3, :cond_2

    .line 705
    goto :goto_2

    .line 707
    :cond_2
    add-int v2, v1, p3

    aget-object v2, p1, v2

    aput-object v2, v0, v1

    goto :goto_1

    .line 709
    :cond_3
    add-int v2, v1, p3

    aget-object v2, p1, v2

    aput-object v2, v0, v1

    .line 700
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 712
    .end local v1    # "i":I
    :cond_4
    :goto_2
    return-object v0
.end method

.method abstract removeView()V
.end method

.method public saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 5
    .param p1, "dirName"    # Ljava/lang/String;
    .param p2, "fileName"    # Ljava/lang/String;
    .param p3, "content"    # Ljava/lang/String;
    .param p4, "append"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 772
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 773
    .local v0, "path":Ljava/lang/String;
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 774
    .local v1, "filedDir":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 775
    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    .line 776
    :cond_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0, p2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 777
    .local v2, "file":Ljava/io/File;
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v2, p4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    .line 778
    .local v3, "fos":Ljava/io/FileOutputStream;
    invoke-virtual {p3}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/io/FileOutputStream;->write([B)V

    .line 779
    const-string v4, "\r\n"

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/io/FileOutputStream;->write([B)V

    .line 780
    invoke-virtual {v3}, Ljava/io/FileOutputStream;->close()V

    .line 781
    return-void
.end method

.method abstract supportMultiSIM()Z
.end method

.method public testData()V
    .locals 0

    .line 819
    return-void
.end method

.method abstract update(Ljava/lang/String;Ljava/lang/Object;)V
.end method

.method protected updateElement([III)[I
    .locals 2
    .param p1, "original"    # [I
    .param p2, "element"    # I
    .param p3, "index"    # I

    .line 763
    array-length v0, p1

    if-gt p3, v0, :cond_2

    neg-int v0, p3

    array-length v1, p1

    if-le v0, v1, :cond_0

    goto :goto_0

    .line 764
    :cond_0
    if-gez p3, :cond_1

    neg-int v0, p3

    array-length v1, p1

    if-ge v0, v1, :cond_1

    .line 765
    array-length v0, p1

    add-int/2addr p3, v0

    .line 766
    :cond_1
    aput p2, p1, p3

    .line 767
    return-object p1

    .line 763
    :cond_2
    :goto_0
    return-object p1
.end method
