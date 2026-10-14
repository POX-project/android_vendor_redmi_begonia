package android.support.graphics.drawable;

import android.animation.TypeEvaluator;

/* JADX INFO: loaded from: classes.dex */
public class ArgbEvaluator implements TypeEvaluator {
    private static final ArgbEvaluator sInstance = new ArgbEvaluator();

    public static ArgbEvaluator getInstance() {
        return sInstance;
    }

    @Override // android.animation.TypeEvaluator
    public Object evaluate(float f, Object obj, Object obj2) {
        int iIntValue = ((Integer) obj).intValue();
        float f2 = ((iIntValue >> 24) & 255) / 255.0f;
        int iIntValue2 = ((Integer) obj2).intValue();
        float fPow = (float) Math.pow(((iIntValue >> 16) & 255) / 255.0f, 2.2d);
        float fPow2 = (float) Math.pow(((iIntValue >> 8) & 255) / 255.0f, 2.2d);
        float fPow3 = (float) Math.pow((iIntValue & 255) / 255.0f, 2.2d);
        return Integer.valueOf((Math.round(((((((iIntValue2 >> 24) & 255) / 255.0f) - f2) * f) + f2) * 255.0f) << 24) | (Math.round(((float) Math.pow(((((float) Math.pow(((iIntValue2 >> 16) & 255) / 255.0f, 2.2d)) - fPow) * f) + fPow, 0.45454545454545453d)) * 255.0f) << 16) | (Math.round(((float) Math.pow(((((float) Math.pow(((iIntValue2 >> 8) & 255) / 255.0f, 2.2d)) - fPow2) * f) + fPow2, 0.45454545454545453d)) * 255.0f) << 8) | Math.round(((float) Math.pow(((((float) Math.pow((iIntValue2 & 255) / 255.0f, 2.2d)) - fPow3) * f) + fPow3, 0.45454545454545453d)) * 255.0f));
    }
}
