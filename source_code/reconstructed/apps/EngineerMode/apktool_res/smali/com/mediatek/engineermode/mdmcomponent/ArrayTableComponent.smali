.class abstract Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponent.java"


# instance fields
.field mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

.field mLabels:[Ljava/lang/String;

.field mListView:Landroid/widget/ListView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 1088
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 1089
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    if-nez v0, :cond_0

    .line 1090
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    .line 1092
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    if-nez v0, :cond_1

    .line 1093
    new-instance v0, Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/widget/ListView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    .line 1095
    :cond_1
    return-void
.end method


# virtual methods
.method varargs addData([Ljava/lang/Object;)V
    .locals 3
    .param p1, "data"    # [Ljava/lang/Object;

    .line 1126
    array-length v0, p1

    new-array v0, v0, [Ljava/lang/String;

    .line 1127
    .local v0, "strings":[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 1128
    aget-object v2, p1, v1

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    .line 1127
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1130
    .end local v1    # "i":I
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->addData([Ljava/lang/String;)V

    .line 1131
    return-void
.end method

.method addData([Ljava/lang/String;)V
    .locals 2
    .param p1, "data"    # [Ljava/lang/String;

    .line 1134
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1135
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1136
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1137
    return-void
.end method

.method addData([[Ljava/lang/String;)V
    .locals 3
    .param p1, "data"    # [[Ljava/lang/String;

    .line 1181
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1182
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    .line 1184
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 1185
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1186
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_1

    aget-object v1, p1, v0

    if-eqz v1, :cond_1

    .line 1187
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    aget-object v2, p1, v0

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1186
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1189
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1190
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1191
    return-void
.end method

.method clearData()V
    .locals 2

    .line 1117
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1118
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    .line 1120
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 1121
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1122
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1123
    return-void
.end method

.method abstract getLabels()[Ljava/lang/String;
.end method

.method getView()Landroid/view/View;
    .locals 2

    .line 1099
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1100
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    .line 1102
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    if-nez v0, :cond_1

    .line 1104
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1106
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1107
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1108
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    return-object v0
.end method

.method removeView()V
    .locals 2

    .line 1113
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1114
    return-void
.end method

.method setDataAtPosition(IILjava/lang/Object;)V
    .locals 3
    .param p1, "row"    # I
    .param p2, "column"    # I
    .param p3, "data"    # Ljava/lang/Object;

    .line 1161
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1162
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    .line 1164
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    array-length v0, v0

    if-lt p2, v0, :cond_1

    .line 1165
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Set data position error: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/MDMComponent"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1166
    return-void

    .line 1168
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1169
    :cond_2
    add-int/lit8 v0, p1, 0x1

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v1

    if-lt v0, v1, :cond_3

    .line 1170
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    .local v0, "i":I
    :goto_0
    add-int/lit8 v1, p1, 0x1

    if-gt v0, v1, :cond_3

    .line 1171
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    array-length v2, v2

    new-array v2, v2, [Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1170
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1174
    .end local v0    # "i":I
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    add-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    .line 1175
    .local v0, "items":[Ljava/lang/String;
    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, p2

    .line 1176
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1177
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1178
    return-void
.end method

.method setDataAtPosition(I[Ljava/lang/String;)V
    .locals 4
    .param p1, "position"    # I
    .param p2, "data"    # [Ljava/lang/String;

    .line 1140
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1141
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    .line 1143
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    array-length v1, v0

    if-lt p1, v1, :cond_1

    .line 1144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Set data position error: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/MDMComponent"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1145
    return-void

    .line 1147
    :cond_1
    array-length v1, p2

    array-length v0, v0

    const/4 v2, 0x2

    new-array v2, v2, [I

    const/4 v3, 0x1

    aput v0, v2, v3

    const/4 v0, 0x0

    aput v1, v2, v0

    const-class v0, Ljava/lang/String;

    invoke-static {v0, v2}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[Ljava/lang/String;

    .line 1148
    .local v0, "items":[[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p2

    if-ge v1, v2, :cond_3

    .line 1149
    add-int/lit8 v2, v1, 0x1

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 1150
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    add-int/lit8 v3, v1, 0x1

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/String;

    aput-object v2, v0, v1

    .line 1151
    :cond_2
    aget-object v2, v0, v1

    aget-object v3, p2, v1

    aput-object v3, v2, p1

    .line 1148
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1153
    .end local v1    # "i":I
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 1154
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mLabels:[Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1155
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_1
    array-length v2, p2

    if-ge v1, v2, :cond_4

    .line 1156
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    aget-object v3, v0, v1

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1155
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 1157
    .end local v1    # "i":I
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1158
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1159
    return-void
.end method
