package mediatek.app;

import android.app.SystemServiceRegistry;
import android.content.Context;
import android.net.ConnectivityThread;
import android.os.Looper;
import android.os.ServiceManager;
import android.util.ArrayMap;
import android.util.Log;
import com.mediatek.search.SearchEngineManager;
import java.lang.reflect.Constructor;
import java.util.Optional;

/* JADX INFO: loaded from: classes.dex */
public final class MtkSystemServiceRegistry {
    private static final String TAG = "MtkSystemServiceRegistry";
    private static ArrayMap<String, SystemServiceRegistry.ServiceFetcher<?>> sSystemServiceFetchers;
    private static ArrayMap<Class<?>, String> sSystemServiceNames;

    private MtkSystemServiceRegistry() {
    }

    public static void registerAllService() {
        Log.i(TAG, "registerAllService start");
        Log.i(TAG, "Comment out registerService");
        registerService(SearchEngineManager.SEARCH_ENGINE_SERVICE, SearchEngineManager.class, new SystemServiceRegistry.StaticServiceFetcher<SearchEngineManager>() { // from class: mediatek.app.MtkSystemServiceRegistry.1
            /* JADX INFO: renamed from: createService, reason: merged with bridge method [inline-methods] */
            public SearchEngineManager m0createService() {
                return new SearchEngineManager();
            }
        });
        registerFmService();
        registerOmadmService();
    }

    public static void registerFmService() {
        Class<?> cls;
        final Constructor<?> constructor;
        try {
            Class<?> cls2 = Class.forName("com.mediatek.fmradio.FmRadioPackageManager");
            if (cls2 == null || (cls = Class.forName((String) cls2.getMethod("getPackageName", null).invoke(null, new Object[0]))) == null || (constructor = cls.getConstructor(Context.class, Looper.class)) == null) {
                return;
            }
            registerService("fm_radio_service", Optional.class, new SystemServiceRegistry.StaticServiceFetcher<Optional>() { // from class: mediatek.app.MtkSystemServiceRegistry.2
                public Optional createService() throws ServiceManager.ServiceNotFoundException {
                    Optional optionalEmpty = Optional.empty();
                    try {
                        return Optional.of(constructor.newInstance(ConnectivityThread.getInstanceLooper()));
                    } catch (Exception e) {
                        Log.e(MtkSystemServiceRegistry.TAG, "Exception while creating FmRadioManager object");
                        return optionalEmpty;
                    }
                }
            });
        } catch (Exception e) {
            Log.e(TAG, "Exception while getting FmRadioPackageManager class");
        }
    }

    public static void registerOmadmService() {
        final Constructor<?> constructor;
        try {
            Class<?> cls = Class.forName("com.mediatek.common.omadm.OmadmManager");
            if (cls == null || (constructor = cls.getConstructor(Context.class)) == null) {
                return;
            }
            registerService("omadm_service", Optional.class, new SystemServiceRegistry.StaticServiceFetcher<Optional>() { // from class: mediatek.app.MtkSystemServiceRegistry.3
                public Optional createService() throws ServiceManager.ServiceNotFoundException {
                    Optional optionalEmpty = Optional.empty();
                    try {
                        return Optional.of(constructor.newInstance(new Object[0]));
                    } catch (Exception e) {
                        Log.e(MtkSystemServiceRegistry.TAG, "Exception while creating OmadmManager object");
                        return optionalEmpty;
                    }
                }
            });
        } catch (Exception e) {
            Log.e(TAG, "Exception while getting OmadmManager class");
        }
    }

    private static <T> void registerService(String str, Class<T> cls, SystemServiceRegistry.ServiceFetcher<T> serviceFetcher) {
        sSystemServiceNames.put(cls, str);
        sSystemServiceFetchers.put(str, serviceFetcher);
    }

    public static void setMtkSystemServiceName(ArrayMap<Class<?>, String> arrayMap, ArrayMap<String, SystemServiceRegistry.ServiceFetcher<?>> arrayMap2) {
        Log.i(TAG, "setMtkSystemServiceName start names" + arrayMap + ",fetchers" + arrayMap2);
        sSystemServiceNames = arrayMap;
        sSystemServiceFetchers = arrayMap2;
    }
}
