package com.mediatek.internal.telephony;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.Typeface;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.TelephonyManager;
import android.telephony.UiccAccessRule;
import android.text.TextUtils;
import android.util.DisplayMetrics;

/* JADX INFO: loaded from: classes.dex */
public class MtkSubscriptionInfo extends SubscriptionInfo {
    public static final Parcelable.Creator<MtkSubscriptionInfo> CREATOR;
    private static final boolean IS_DEBUG_BUILD;
    private static final String LOG_TAG = "MtkSubscriptionInfo";
    private static final int TEXT_SIZE = 16;
    private Bitmap mIconBitmap;

    static {
        IS_DEBUG_BUILD = Build.TYPE.equals("eng") || Build.TYPE.equals("userdebug");
        CREATOR = new Parcelable.Creator<MtkSubscriptionInfo>() { // from class: com.mediatek.internal.telephony.MtkSubscriptionInfo.1
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public MtkSubscriptionInfo createFromParcel(Parcel parcel) {
                int i = parcel.readInt();
                String string = parcel.readString();
                int i2 = parcel.readInt();
                CharSequence charSequence = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
                CharSequence charSequence2 = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
                int i3 = parcel.readInt();
                int i4 = parcel.readInt();
                String string2 = parcel.readString();
                int i5 = parcel.readInt();
                String string3 = parcel.readString();
                String string4 = parcel.readString();
                String string5 = parcel.readString();
                Bitmap bitmap = (Bitmap) parcel.readParcelable(Bitmap.class.getClassLoader());
                boolean z = parcel.readBoolean();
                UiccAccessRule[] uiccAccessRuleArr = (UiccAccessRule[]) parcel.createTypedArray(UiccAccessRule.CREATOR);
                String string6 = parcel.readString();
                int i6 = parcel.readInt();
                boolean z2 = parcel.readBoolean();
                String string7 = parcel.readString();
                boolean z3 = parcel.readBoolean();
                int i7 = parcel.readInt();
                int i8 = parcel.readInt();
                int i9 = parcel.readInt();
                String[] strArrCreateStringArray = parcel.createStringArray();
                String[] strArrCreateStringArray2 = parcel.createStringArray();
                MtkSubscriptionInfo mtkSubscriptionInfo = new MtkSubscriptionInfo(i, string, i2, charSequence, charSequence2, i3, i4, string2, i5, bitmap, string3, string4, string5, z, uiccAccessRuleArr, string6, i6, z2, string7, z3, i7, i8, i9, parcel.readString(), (UiccAccessRule[]) parcel.createTypedArray(UiccAccessRule.CREATOR), parcel.readBoolean());
                mtkSubscriptionInfo.setAssociatedPlmns(strArrCreateStringArray, strArrCreateStringArray2);
                return mtkSubscriptionInfo;
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public MtkSubscriptionInfo[] newArray(int i) {
                return new MtkSubscriptionInfo[i];
            }
        };
    }

    public MtkSubscriptionInfo(int i, String str, int i2, CharSequence charSequence, CharSequence charSequence2, int i3, int i4, String str2, int i5, Bitmap bitmap, String str3, String str4, String str5, boolean z, UiccAccessRule[] uiccAccessRuleArr, String str6) {
        super(i, str, i2, charSequence, charSequence2, i3, i4, str2, i5, bitmap, str3, str4, str5, z, uiccAccessRuleArr, str6);
        this.mIconBitmap = bitmap;
    }

    public MtkSubscriptionInfo(int i, String str, int i2, CharSequence charSequence, CharSequence charSequence2, int i3, int i4, String str2, int i5, Bitmap bitmap, String str3, String str4, String str5, boolean z, UiccAccessRule[] uiccAccessRuleArr, String str6, int i6, boolean z2, String str7, boolean z3, int i7, int i8, int i9, String str8, UiccAccessRule[] uiccAccessRuleArr2, boolean z4) {
        super(i, str, i2, charSequence, charSequence2, i3, i4, str2, i5, bitmap, str3, str4, str5, z, uiccAccessRuleArr, str6, i6, z2, str7, z3, i7, i8, i9, str8, uiccAccessRuleArr2, z4);
        this.mIconBitmap = bitmap;
    }

    public MtkSubscriptionInfo(int i, String str, int i2, CharSequence charSequence, CharSequence charSequence2, int i3, int i4, String str2, int i5, Bitmap bitmap, String str3, String str4, String str5, boolean z, UiccAccessRule[] uiccAccessRuleArr, String str6, boolean z2, String str7, int i6, int i7) {
        super(i, str, i2, charSequence, charSequence2, i3, i4, str2, i5, bitmap, str3, str4, str5, z, uiccAccessRuleArr, str6, z2, str7, i6, i7);
        this.mIconBitmap = bitmap;
    }

    public static boolean isPrintableFullIccId() {
        return true;
    }

    @Override // android.telephony.SubscriptionInfo
    public Bitmap createIconBitmap(Context context) {
        return createIconBitmap(context, -1, true);
    }

    public Bitmap createIconBitmap(Context context, int i) {
        return createIconBitmap(context, i, true);
    }

    public Bitmap createIconBitmap(Context context, int i, boolean z) {
        Bitmap bitmapCreateBitmap;
        synchronized (this) {
            int width = this.mIconBitmap.getWidth();
            int height = this.mIconBitmap.getHeight();
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            if (IS_DEBUG_BUILD) {
                Rlog.d(LOG_TAG, "mIconBitmap width:" + width + " height:" + height + " metrics:" + displayMetrics.toString());
            }
            bitmapCreateBitmap = Bitmap.createBitmap(displayMetrics, width, height, this.mIconBitmap.getConfig());
            Canvas canvas = new Canvas(bitmapCreateBitmap);
            Paint paint = new Paint();
            paint.setColorFilter(new PorterDuffColorFilter(i == -1 ? getIconTint() : i, PorterDuff.Mode.SRC_ATOP));
            canvas.drawBitmap(this.mIconBitmap, 0.0f, 0.0f, paint);
            paint.setColorFilter(null);
            if (z) {
                paint.setAntiAlias(true);
                paint.setTypeface(Typeface.create("sans-serif", 0));
                paint.setColor(-1);
                paint.setTextSize(displayMetrics.density * 16.0f);
                String str = String.format("%d", Integer.valueOf(getSimSlotIndex() + 1));
                Rect rect = new Rect();
                paint.getTextBounds(str, 0, 1, rect);
                canvas.drawText(str, (width / 2.0f) - rect.centerX(), (height / 2.0f) - rect.centerY(), paint);
            }
        }
        return bitmapCreateBitmap;
    }

    @Override // android.telephony.SubscriptionInfo
    public String getCountryIso() {
        String countryIso = super.getCountryIso();
        if (!TextUtils.isEmpty(countryIso)) {
            return countryIso;
        }
        TelephonyManager.getDefault();
        return TelephonyManager.getSimCountryIso(super.getSubscriptionId());
    }

    @Override // android.telephony.SubscriptionInfo, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        synchronized (this) {
            super.writeToParcel(parcel, i);
        }
    }
}
