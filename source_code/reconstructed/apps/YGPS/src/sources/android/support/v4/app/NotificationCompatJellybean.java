package android.support.v4.app;

import android.app.Notification;
import android.os.Bundle;
import android.util.Log;
import android.util.SparseArray;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
class NotificationCompatJellybean {
    private static Field sExtrasField;
    private static boolean sExtrasFieldAccessFailed;
    private static final Object sExtrasLock = new Object();

    public static SparseArray<Bundle> buildActionExtrasMap(List<Bundle> list) {
        int size = list.size();
        SparseArray<Bundle> sparseArray = null;
        for (int i = 0; i < size; i++) {
            Bundle bundle = list.get(i);
            if (bundle != null) {
                if (sparseArray == null) {
                    sparseArray = new SparseArray<>();
                }
                sparseArray.put(i, bundle);
            }
        }
        return sparseArray;
    }

    static Bundle getBundleForAction(NotificationCompat.Action action) {
        Bundle bundle = new Bundle();
        bundle.putInt("icon", action.getIcon());
        bundle.putCharSequence("title", action.getTitle());
        bundle.putParcelable("actionIntent", action.getActionIntent());
        Bundle bundle2 = action.getExtras() != null ? new Bundle(action.getExtras()) : new Bundle();
        bundle2.putBoolean("android.support.allowGeneratedReplies", action.getAllowGeneratedReplies());
        bundle.putBundle("extras", bundle2);
        bundle.putParcelableArray("remoteInputs", toBundleArray(action.getRemoteInputs()));
        bundle.putBoolean("showsUserInterface", action.getShowsUserInterface());
        bundle.putInt("semanticAction", action.getSemanticAction());
        return bundle;
    }

    public static Bundle getExtras(Notification notification) {
        synchronized (sExtrasLock) {
            if (sExtrasFieldAccessFailed) {
                return null;
            }
            try {
                if (sExtrasField == null) {
                    Field declaredField = Notification.class.getDeclaredField("extras");
                    if (!Bundle.class.isAssignableFrom(declaredField.getType())) {
                        Log.e("NotificationCompat", "Notification.extras field is not of type Bundle");
                        sExtrasFieldAccessFailed = true;
                        return null;
                    }
                    declaredField.setAccessible(true);
                    sExtrasField = declaredField;
                }
                Bundle bundle = (Bundle) sExtrasField.get(notification);
                if (bundle == null) {
                    bundle = new Bundle();
                    sExtrasField.set(notification, bundle);
                }
                return bundle;
            } catch (IllegalAccessException e) {
                Log.e("NotificationCompat", "Unable to access notification extras", e);
                sExtrasFieldAccessFailed = true;
                return null;
            } catch (NoSuchFieldException e2) {
                Log.e("NotificationCompat", "Unable to access notification extras", e2);
                sExtrasFieldAccessFailed = true;
                return null;
            }
        }
    }

    private static Bundle toBundle(RemoteInput remoteInput) {
        Bundle bundle = new Bundle();
        bundle.putString("resultKey", remoteInput.getResultKey());
        bundle.putCharSequence("label", remoteInput.getLabel());
        bundle.putCharSequenceArray("choices", remoteInput.getChoices());
        bundle.putBoolean("allowFreeFormInput", remoteInput.getAllowFreeFormInput());
        bundle.putBundle("extras", remoteInput.getExtras());
        Set<String> allowedDataTypes = remoteInput.getAllowedDataTypes();
        if (allowedDataTypes != null && !allowedDataTypes.isEmpty()) {
            ArrayList<String> arrayList = new ArrayList<>(allowedDataTypes.size());
            Iterator<String> it = allowedDataTypes.iterator();
            while (it.hasNext()) {
                arrayList.add(it.next());
            }
            bundle.putStringArrayList("allowedDataTypes", arrayList);
        }
        return bundle;
    }

    private static Bundle[] toBundleArray(RemoteInput[] remoteInputArr) {
        if (remoteInputArr == null) {
            return null;
        }
        Bundle[] bundleArr = new Bundle[remoteInputArr.length];
        for (int i = 0; i < remoteInputArr.length; i++) {
            bundleArr[i] = toBundle(remoteInputArr[i]);
        }
        return bundleArr;
    }

    public static Bundle writeActionAndGetExtras(Notification.Builder builder, NotificationCompat.Action action) {
        builder.addAction(action.getIcon(), action.getTitle(), action.getActionIntent());
        Bundle bundle = new Bundle(action.getExtras());
        if (action.getRemoteInputs() != null) {
            bundle.putParcelableArray("android.support.remoteInputs", toBundleArray(action.getRemoteInputs()));
        }
        if (action.getDataOnlyRemoteInputs() != null) {
            bundle.putParcelableArray("android.support.dataRemoteInputs", toBundleArray(action.getDataOnlyRemoteInputs()));
        }
        bundle.putBoolean("android.support.allowGeneratedReplies", action.getAllowGeneratedReplies());
        return bundle;
    }
}
