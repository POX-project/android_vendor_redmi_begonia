package androidx.core.app;

import android.os.Build;
import android.os.Bundle;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public final class RemoteInput {
    static android.app.RemoteInput fromCompat(RemoteInput remoteInput) {
        android.app.RemoteInput.Builder builderAddExtras = new android.app.RemoteInput.Builder(remoteInput.getResultKey()).setLabel(remoteInput.getLabel()).setChoices(remoteInput.getChoices()).setAllowFreeFormInput(remoteInput.getAllowFreeFormInput()).addExtras(remoteInput.getExtras());
        if (Build.VERSION.SDK_INT >= 29) {
            builderAddExtras.setEditChoicesBeforeSending(remoteInput.getEditChoicesBeforeSending());
        }
        return builderAddExtras.build();
    }

    static android.app.RemoteInput[] fromCompat(RemoteInput[] remoteInputArr) {
        if (remoteInputArr == null) {
            return null;
        }
        android.app.RemoteInput[] remoteInputArr2 = new android.app.RemoteInput[remoteInputArr.length];
        for (int i = 0; i < remoteInputArr.length; i++) {
            remoteInputArr2[i] = fromCompat(remoteInputArr[i]);
        }
        return remoteInputArr2;
    }

    public abstract boolean getAllowFreeFormInput();

    public abstract Set<String> getAllowedDataTypes();

    public abstract CharSequence[] getChoices();

    public abstract int getEditChoicesBeforeSending();

    public abstract Bundle getExtras();

    public abstract CharSequence getLabel();

    public abstract String getResultKey();
}
