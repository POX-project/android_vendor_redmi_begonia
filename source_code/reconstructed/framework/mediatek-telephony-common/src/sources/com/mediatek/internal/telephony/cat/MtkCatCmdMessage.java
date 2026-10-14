package com.mediatek.internal.telephony.cat;

import android.os.Parcel;
import android.os.Parcelable;
import com.android.internal.telephony.cat.CatCmdMessage;
import com.android.internal.telephony.cat.CommandDetails;
import com.android.internal.telephony.cat.CommandParams;
import com.android.internal.telephony.cat.Menu;

/* JADX INFO: loaded from: classes.dex */
public class MtkCatCmdMessage extends CatCmdMessage {
    public static final Parcelable.Creator<MtkCatCmdMessage> CREATOR = new Parcelable.Creator<MtkCatCmdMessage>() { // from class: com.mediatek.internal.telephony.cat.MtkCatCmdMessage.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkCatCmdMessage createFromParcel(Parcel parcel) {
            return new MtkCatCmdMessage(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkCatCmdMessage[] newArray(int i) {
            return new MtkCatCmdMessage[i];
        }
    };

    public MtkCatCmdMessage(Parcel parcel) {
        super(parcel);
    }

    MtkCatCmdMessage(CommandParams commandParams) {
        super(commandParams);
    }

    public static CatCmdMessage getCmdMsg() {
        CommandDetails commandDetails = new CommandDetails();
        commandDetails.typeOfCommand = 112;
        return new CatCmdMessage(new CommandParams(commandDetails));
    }

    public CatCmdMessage convertToCatCmdMessage(CommandParams commandParams, MtkCatCmdMessage mtkCatCmdMessage) {
        CatCmdMessage catCmdMessage = new CatCmdMessage(commandParams);
        if (mtkCatCmdMessage != null) {
            catCmdMessage.mCmdDet = mtkCatCmdMessage.mCmdDet;
            catCmdMessage.mTextMsg = mtkCatCmdMessage.mTextMsg;
            Menu menu = new Menu();
            if (mtkCatCmdMessage.mMenu != null) {
                menu.items = mtkCatCmdMessage.mMenu.items;
                menu.titleAttrs = mtkCatCmdMessage.mMenu.titleAttrs;
                menu.presentationType = mtkCatCmdMessage.mMenu.presentationType;
                menu.title = mtkCatCmdMessage.mMenu.title;
                menu.titleIcon = mtkCatCmdMessage.mMenu.titleIcon;
                menu.defaultItem = mtkCatCmdMessage.mMenu.defaultItem;
                menu.softKeyPreferred = mtkCatCmdMessage.mMenu.softKeyPreferred;
                menu.helpAvailable = mtkCatCmdMessage.mMenu.helpAvailable;
                menu.titleIconSelfExplanatory = mtkCatCmdMessage.mMenu.titleIconSelfExplanatory;
                menu.itemsIconSelfExplanatory = mtkCatCmdMessage.mMenu.itemsIconSelfExplanatory;
            }
            catCmdMessage.mMenu = menu;
            catCmdMessage.mInput = mtkCatCmdMessage.mInput;
            catCmdMessage.mBrowserSettings = mtkCatCmdMessage.mBrowserSettings;
            catCmdMessage.mToneSettings = mtkCatCmdMessage.mToneSettings;
            catCmdMessage.mCallSettings = mtkCatCmdMessage.mCallSettings;
            catCmdMessage.mSetupEventListSettings = mtkCatCmdMessage.mSetupEventListSettings;
            catCmdMessage.mLoadIconFailed = mtkCatCmdMessage.mLoadIconFailed;
        }
        return catCmdMessage;
    }

    public int getCmdQualifier() {
        return this.mCmdDet.commandQualifier;
    }
}
