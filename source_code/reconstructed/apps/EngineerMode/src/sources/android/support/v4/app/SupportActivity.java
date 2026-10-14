package android.support.v4.app;

import android.app.Activity;
import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.LifecycleOwner;
import android.arch.lifecycle.LifecycleRegistry;
import android.arch.lifecycle.ReportFragment;
import android.os.Bundle;
import android.support.v4.util.SimpleArrayMap;

/* JADX INFO: compiled from: ComponentActivity.java */
/* JADX INFO: loaded from: classes2.dex */
public class SupportActivity extends Activity implements LifecycleOwner {
    private SimpleArrayMap<Class<? extends ExtraData>, ExtraData> mExtraDataMap = new SimpleArrayMap<>();
    private LifecycleRegistry mLifecycleRegistry = new LifecycleRegistry(this);

    /* JADX INFO: compiled from: ComponentActivity.java */
    public static class ExtraData {
    }

    public <T extends ExtraData> T getExtraData(Class<T> cls) {
        return (T) this.mExtraDataMap.get(cls);
    }

    public Lifecycle getLifecycle() {
        return this.mLifecycleRegistry;
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        ReportFragment.injectIfNeededIn(this);
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        this.mLifecycleRegistry.markState(Lifecycle.State.CREATED);
        super.onSaveInstanceState(bundle);
    }

    public void putExtraData(ExtraData extraData) {
        this.mExtraDataMap.put((Class<? extends ExtraData>) extraData.getClass(), extraData);
    }
}
