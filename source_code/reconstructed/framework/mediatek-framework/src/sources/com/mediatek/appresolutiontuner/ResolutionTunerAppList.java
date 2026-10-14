package com.mediatek.appresolutiontuner;

import android.util.Slog;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

/* JADX INFO: loaded from: classes.dex */
public class ResolutionTunerAppList {
    private static final String APP_LIST_PATH = "system/etc/resolution_tuner_app_list.xml";
    private static final String NODE_FILTERED_WINDOW = "filteredwindow";
    private static final String NODE_PACKAGE_NAME = "packagename";
    private static final String NODE_SCALE = "scale";
    private static final String NODE_SCALING_FLOW = "flow";
    private static final String TAG = "AppResolutionTuner";
    private static final String TAG_APP = "app";
    private static final String VALUE_SCALING_FLOW_SURFACEVIEW = "surfaceview";
    private static final String VALUE_SCALING_FLOW_WMS = "wms";
    private static ResolutionTunerAppList sInstance;
    private ArrayList<Applic> mTunerAppCache;

    class Applic {
        private String packageName;
        private float scale;
        private ArrayList<String> filteredWindows = new ArrayList<>();
        private String scalingFlow = "";

        Applic() {
        }

        public void addFilteredWindow(String str) {
            this.filteredWindows.add(str);
        }

        public String getPackageName() {
            return this.packageName;
        }

        public float getScale() {
            return this.scale;
        }

        public String getScalingFlow() {
            return this.scalingFlow;
        }

        public boolean isFiltered(String str) {
            return this.filteredWindows.contains(str);
        }

        public void setPackageName(String str) {
            this.packageName = str;
        }

        public void setScale(float f) {
            this.scale = f;
        }

        public void setScalingFlow(String str) {
            this.scalingFlow = str;
        }

        public String toString() {
            return "App{packageName='" + this.packageName + "', scale='" + this.scale + "', filteredWindows= " + this.filteredWindows + "', scalingFlow= " + this.scalingFlow + "'}";
        }
    }

    public static ResolutionTunerAppList getInstance() {
        if (sInstance == null) {
            sInstance = new ResolutionTunerAppList();
        }
        return sInstance;
    }

    private ArrayList<Applic> parseAppListFile(InputStream inputStream) {
        ArrayList<Applic> arrayList = new ArrayList<>();
        try {
            NodeList elementsByTagName = DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(inputStream).getElementsByTagName(TAG_APP);
            for (int i = 0; i < elementsByTagName.getLength(); i++) {
                NodeList childNodes = elementsByTagName.item(i).getChildNodes();
                Applic applic = new Applic();
                for (int i2 = 0; i2 < childNodes.getLength(); i2++) {
                    Node nodeItem = childNodes.item(i2);
                    if (nodeItem.getNodeName().equals(NODE_PACKAGE_NAME)) {
                        applic.setPackageName(nodeItem.getTextContent());
                    } else if (nodeItem.getNodeName().equals(NODE_SCALE)) {
                        applic.setScale(Float.parseFloat(nodeItem.getTextContent()));
                    } else if (nodeItem.getNodeName().startsWith(NODE_FILTERED_WINDOW)) {
                        applic.addFilteredWindow(nodeItem.getTextContent());
                    } else if (nodeItem.getNodeName().startsWith(NODE_SCALING_FLOW)) {
                        applic.setScalingFlow(nodeItem.getTextContent());
                    }
                }
                arrayList.add(applic);
                Slog.d(TAG, "dom2xml: " + applic);
            }
            return arrayList;
        } catch (IOException e) {
            Slog.w(TAG, "IOException", e);
            return arrayList;
        } catch (ParserConfigurationException e2) {
            Slog.w(TAG, "dom2xml ParserConfigurationException", e2);
            return arrayList;
        } catch (SAXException e3) {
            Slog.w(TAG, "dom2xml SAXException", e3);
            return arrayList;
        }
    }

    public float getScaleValue(String str) {
        ArrayList<Applic> arrayList = this.mTunerAppCache;
        if (arrayList == null) {
            return 1.0f;
        }
        for (Applic applic : arrayList) {
            if (applic.getPackageName().equals(str)) {
                return applic.getScale();
            }
        }
        return 1.0f;
    }

    public boolean isScaledBySurfaceView(String str) {
        ArrayList<Applic> arrayList = this.mTunerAppCache;
        if (arrayList == null) {
            return false;
        }
        for (Applic applic : arrayList) {
            if (applic.getPackageName().equals(str) && !applic.getScalingFlow().equals(VALUE_SCALING_FLOW_WMS)) {
                return true;
            }
        }
        return false;
    }

    public boolean isScaledByWMS(String str, String str2) {
        ArrayList<Applic> arrayList = this.mTunerAppCache;
        if (arrayList == null) {
            return false;
        }
        for (Applic applic : arrayList) {
            if (applic.getPackageName().equals(str) && applic.getScalingFlow().equals(VALUE_SCALING_FLOW_WMS)) {
                return !applic.isFiltered(str2);
            }
        }
        return false;
    }

    public void loadTunerAppList() {
        Slog.d(TAG, "loadTunerAppList + ");
        InputStream inputStream = null;
        try {
            try {
                try {
                    File file = new File(APP_LIST_PATH);
                    if (file.exists()) {
                        FileInputStream fileInputStream = new FileInputStream(file);
                        this.mTunerAppCache = parseAppListFile(fileInputStream);
                        fileInputStream.close();
                        Slog.d(TAG, "loadTunerAppList - ");
                    }
                    Slog.e(TAG, "Target file doesn't exist: system/etc/resolution_tuner_app_list.xml");
                    if (0 != 0) {
                        try {
                            inputStream.close();
                        } catch (IOException e) {
                            Slog.w(TAG, "close failed..", e);
                        }
                    }
                } catch (Throwable th) {
                    if (0 != 0) {
                        try {
                            inputStream.close();
                        } catch (IOException e2) {
                            Slog.w(TAG, "close failed..", e2);
                        }
                    }
                    throw th;
                }
            } catch (IOException e3) {
                Slog.w(TAG, "IOException", e3);
                if (0 != 0) {
                    inputStream.close();
                }
                Slog.d(TAG, "loadTunerAppList - ");
            }
        } catch (IOException e4) {
            Slog.w(TAG, "close failed..", e4);
        }
    }
}
