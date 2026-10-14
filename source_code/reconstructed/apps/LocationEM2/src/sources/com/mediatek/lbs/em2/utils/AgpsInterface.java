package com.mediatek.lbs.em2.utils;

import android.os.IHwBinder;
import android.os.RemoteException;
import android.util.Log;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import vendor.mediatek.hardware.lbs.V1_0.ILbs;
import vendor.mediatek.hardware.lbs.V1_0.ILbsCallback;

/* JADX INFO: loaded from: classes.dex */
public class AgpsInterface {
    ILbs mLbsHidlClient;
    protected DataCoder2.DataCoderBuffer out = new DataCoder2.DataCoderBuffer(16384);
    protected DataCoder2.DataCoderBuffer in = new DataCoder2.DataCoderBuffer(16384);
    ArrayList<Byte> mData = new ArrayList<>();
    LbsHidlCallback mLbsHidlCallback = new LbsHidlCallback();
    LbsHidlDeathRecipient mLLbsHidlDeathRecipient = new LbsHidlDeathRecipient();

    class LbsHidlCallback extends ILbsCallback.Stub {
        LbsHidlCallback() {
        }

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbsCallback
        public boolean callbackToClient(ArrayList<Byte> arrayList) {
            AgpsInterface.this.mData = arrayList;
            return true;
        }
    }

    class LbsHidlDeathRecipient implements IHwBinder.DeathRecipient {
        LbsHidlDeathRecipient() {
        }

        public void serviceDied(long j) {
            AgpsInterface.log("serviceDied");
            AgpsInterface.this.mLbsHidlClient = null;
        }
    }

    public AgpsInterface() throws IOException {
        checkVersion();
    }

    public static ArrayList<Byte> convertByteArrayToArrayList(byte[] bArr, int i) {
        if (bArr == null) {
            return null;
        }
        if (i >= bArr.length) {
            i = bArr.length;
        }
        ArrayList<Byte> arrayList = new ArrayList<>();
        for (int i2 = 0; i2 < i; i2++) {
            arrayList.add(Byte.valueOf(bArr[i2]));
        }
        return arrayList;
    }

    public static void covertArrayListToByteArray(ArrayList<Byte> arrayList, byte[] bArr) {
        for (int i = 0; i < arrayList.size() && i < bArr.length; i++) {
            bArr[i] = arrayList.get(i).byteValue();
        }
    }

    private void doHidl(String str, byte[] bArr, int i) {
        try {
            if (this.mLbsHidlClient == null) {
                ILbs service = ILbs.getService(str);
                this.mLbsHidlClient = service;
                service.linkToDeath(this.mLLbsHidlDeathRecipient, 0L);
            }
            if (this.mLbsHidlClient.sendToServerWithCallback(this.mLbsHidlCallback, convertByteArrayToArrayList(bArr, i))) {
                covertArrayListToByteArray(this.mData, this.in.mBuff);
            } else {
                Arrays.fill(this.in.mBuff, (byte) 0);
            }
        } catch (RemoteException | RuntimeException e) {
            e.printStackTrace();
        }
    }

    private void getAgpsConfigInt(int i, AgpsConfig agpsConfig) throws IOException {
        AgpsSetting agpsSetting = agpsConfig.getAgpsSetting();
        agpsSetting.agpsEnable = DataCoder2.getBoolean(this.in);
        agpsSetting.agpsProtocol = DataCoder2.getInt(this.in);
        agpsSetting.gpevt = DataCoder2.getBoolean(this.in);
        CpSetting cpSetting = agpsConfig.getCpSetting();
        cpSetting.molrPosMethod = DataCoder2.getInt(this.in);
        cpSetting.externalAddrEnable = DataCoder2.getBoolean(this.in);
        cpSetting.externalAddr = DataCoder2.getString(this.in);
        cpSetting.mlcNumberEnable = DataCoder2.getBoolean(this.in);
        cpSetting.mlcNumber = DataCoder2.getString(this.in);
        cpSetting.cpAutoReset = DataCoder2.getBoolean(this.in);
        cpSetting.epcMolrLppPayloadEnable = DataCoder2.getBoolean(this.in);
        cpSetting.epcMolrLppPayload = DataCoder2.getBinary(this.in);
        UpSetting upSetting = agpsConfig.getUpSetting();
        GnssSetting gnssSetting = agpsConfig.getGnssSetting();
        upSetting.caEnable = DataCoder2.getBoolean(this.in);
        upSetting.niRequest = DataCoder2.getBoolean(this.in);
        upSetting.roaming = DataCoder2.getBoolean(this.in);
        upSetting.cdmaPreferred = DataCoder2.getInt(this.in);
        upSetting.prefMethod = DataCoder2.getInt(this.in);
        upSetting.suplVersion = DataCoder2.getInt(this.in);
        upSetting.tlsVersion = DataCoder2.getInt(this.in);
        upSetting.suplLog = DataCoder2.getBoolean(this.in);
        upSetting.msaEnable = DataCoder2.getBoolean(this.in);
        upSetting.msbEnable = DataCoder2.getBoolean(this.in);
        upSetting.ecidEnable = DataCoder2.getBoolean(this.in);
        upSetting.otdoaEnable = DataCoder2.getBoolean(this.in);
        upSetting.qopHacc = DataCoder2.getInt(this.in);
        upSetting.qopVacc = DataCoder2.getInt(this.in);
        upSetting.qopLocAge = DataCoder2.getInt(this.in);
        upSetting.qopDelay = DataCoder2.getInt(this.in);
        if (i >= 105) {
            upSetting.lppEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 106) {
            upSetting.certFromSdcard = DataCoder2.getBoolean(this.in);
        }
        if (i >= 107) {
            upSetting.autoProfileEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 108) {
            upSetting.ut2 = DataCoder2.getByte(this.in);
            upSetting.ut3 = DataCoder2.getByte(this.in);
        }
        if (i >= 109) {
            upSetting.apnEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 110) {
            upSetting.syncToslp = DataCoder2.getBoolean(this.in);
        }
        if (i >= 111) {
            upSetting.udpEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 112) {
            upSetting.autonomousEnable = DataCoder2.getBoolean(this.in);
            upSetting.afltEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 113) {
            upSetting.imsiEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 114) {
            gnssSetting.sib8sib16Enable = DataCoder2.getBoolean(this.in);
            gnssSetting.gpsSatelliteEnable = DataCoder2.getBoolean(this.in);
            gnssSetting.glonassSatelliteEnable = DataCoder2.getBoolean(this.in);
            gnssSetting.beidouSatelliteEnable = DataCoder2.getBoolean(this.in);
            gnssSetting.galileoSatelliteEnable = DataCoder2.getBoolean(this.in);
            gnssSetting.gpsSatelliteSupport = DataCoder2.getBoolean(this.in);
            gnssSetting.glonassSatelliteSupport = DataCoder2.getBoolean(this.in);
            gnssSetting.beidousSatelliteSupport = DataCoder2.getBoolean(this.in);
            gnssSetting.galileoSatelliteSupport = DataCoder2.getBoolean(this.in);
        }
        if (i >= 115) {
            upSetting.suplVerMinor = DataCoder2.getByte(this.in);
            upSetting.suplVerSerInd = DataCoder2.getByte(this.in);
        }
        if (i >= 116) {
            gnssSetting.aGlonassSatelliteEnable = DataCoder2.getBoolean(this.in);
        }
        SuplProfile curSuplProfile = agpsConfig.getCurSuplProfile();
        curSuplProfile.name = DataCoder2.getString(this.in);
        curSuplProfile.addr = DataCoder2.getString(this.in);
        curSuplProfile.port = DataCoder2.getInt(this.in);
        curSuplProfile.tls = DataCoder2.getBoolean(this.in);
        curSuplProfile.mccMnc = DataCoder2.getString(this.in);
        curSuplProfile.appId = DataCoder2.getString(this.in);
        curSuplProfile.providerId = DataCoder2.getString(this.in);
        curSuplProfile.defaultApn = DataCoder2.getString(this.in);
        curSuplProfile.optionalApn = DataCoder2.getString(this.in);
        curSuplProfile.optionalApn2 = DataCoder2.getString(this.in);
        curSuplProfile.addressType = DataCoder2.getString(this.in);
        if (i >= 117) {
            CdmaProfile cdmaProfile = agpsConfig.getCdmaProfile();
            cdmaProfile.name = DataCoder2.getString(this.in);
            cdmaProfile.mcpEnable = DataCoder2.getBoolean(this.in);
            cdmaProfile.mcpAddr = DataCoder2.getString(this.in);
            cdmaProfile.mcpPort = DataCoder2.getInt(this.in);
            cdmaProfile.pdeAddrValid = DataCoder2.getBoolean(this.in);
            cdmaProfile.pdeIpType = DataCoder2.getInt(this.in);
            cdmaProfile.pdeAddr = DataCoder2.getString(this.in);
            cdmaProfile.pdePort = DataCoder2.getInt(this.in);
            cdmaProfile.pdeUrlValid = DataCoder2.getBoolean(this.in);
            cdmaProfile.pdeUrlAddr = DataCoder2.getString(this.in);
        }
        if (i >= 118) {
            agpsSetting.e911GpsIconEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 119) {
            agpsSetting.e911OpenGpsEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 120) {
            gnssSetting.aGpsSatelliteEnable = DataCoder2.getBoolean(this.in);
            gnssSetting.aBeidouSatelliteEnable = DataCoder2.getBoolean(this.in);
            gnssSetting.aGalileoSatelliteEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 121) {
            upSetting.shaVersion = DataCoder2.getInt(this.in);
            upSetting.preferred2g3gCellAge = DataCoder2.getInt(this.in);
            upSetting.ut1 = DataCoder2.getByte(this.in);
            upSetting.noSensitiveLog = DataCoder2.getBoolean(this.in);
            upSetting.tlsReuseEnable = DataCoder2.getBoolean(this.in);
            upSetting.imsiCacheEnable = DataCoder2.getBoolean(this.in);
            upSetting.suplRawDataEnable = DataCoder2.getBoolean(this.in);
            upSetting.tc10Enable = DataCoder2.getBoolean(this.in);
            upSetting.tc10UseApn = DataCoder2.getBoolean(this.in);
            upSetting.tc10UseFwDns = DataCoder2.getBoolean(this.in);
            upSetting.allowNiForGpsOff = DataCoder2.getBoolean(this.in);
            upSetting.forceOtdoaAssistReq = DataCoder2.getBoolean(this.in);
            cpSetting.rejectNon911NilrEnable = DataCoder2.getBoolean(this.in);
            cpSetting.cp2gDisable = DataCoder2.getBoolean(this.in);
            cpSetting.cp3gDisable = DataCoder2.getBoolean(this.in);
            cpSetting.cp4gDisable = DataCoder2.getBoolean(this.in);
            agpsSetting.tc10IgnoreFwConfig = DataCoder2.getBoolean(this.in);
            agpsSetting.lppeHideWifiBtStatus = DataCoder2.getBoolean(this.in);
        }
        if (i >= 122) {
            agpsSetting.lppeNetworkLocationDisable = DataCoder2.getBoolean(this.in);
            cpSetting.cpLppeEnable = DataCoder2.getBoolean(this.in);
            upSetting.upLppeEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 123) {
            cpSetting.cpLppeSupport = DataCoder2.getBoolean(this.in);
            gnssSetting.lppeSupport = DataCoder2.getBoolean(this.in);
        }
        if (i >= 124) {
            agpsSetting.agpsNvramEnable = DataCoder2.getBoolean(this.in);
            agpsSetting.lbsLogEnable = DataCoder2.getBoolean(this.in);
            agpsSetting.lppeCrowdSourceConfident = DataCoder2.getInt(this.in);
            upSetting.esuplApnMode = DataCoder2.getInt(this.in);
            upSetting.tcpKeepAlive = DataCoder2.getInt(this.in);
            upSetting.aospProfileEnable = DataCoder2.getBoolean(this.in);
            upSetting.bindNlpSettingToSupl = DataCoder2.getBoolean(this.in);
        }
        if (i >= 125) {
            agpsSetting.ignoreSiForE911 = DataCoder2.getBoolean(this.in);
            cpSetting.cpLppeWlanEnable = DataCoder2.getBoolean(this.in);
            cpSetting.cpLppeSrnEnable = DataCoder2.getBoolean(this.in);
            cpSetting.cpLppeSensorEnable = DataCoder2.getBoolean(this.in);
            cpSetting.cpLppeDbhEnable = DataCoder2.getBoolean(this.in);
            upSetting.upLppeWlanEnable = DataCoder2.getBoolean(this.in);
            upSetting.upLppeSrnEnable = DataCoder2.getBoolean(this.in);
            upSetting.upLppeSensorEnable = DataCoder2.getBoolean(this.in);
            upSetting.upLppeDbhEnable = DataCoder2.getBoolean(this.in);
            upSetting.ipVersionPrefer = DataCoder2.getInt(this.in);
            upSetting.upLppIn2g3gDisable = DataCoder2.getBoolean(this.in);
            upSetting.upRrlpIn4gDisable = DataCoder2.getBoolean(this.in);
            upSetting.upSiDisable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 126) {
            upSetting.useNiSlp = DataCoder2.getBoolean(this.in);
            agpsSetting.useTc10Config = DataCoder2.getBoolean(this.in);
            agpsSetting.defaultNlpEnable = DataCoder2.getBoolean(this.in);
        }
        if (i >= 127) {
            agpsSetting.emergencyExtSecs = DataCoder2.getInt(this.in);
            upSetting.aospPosModeEnable = DataCoder2.getBoolean(this.in);
            upSetting.privacyOverrideMode = DataCoder2.getInt(this.in);
        }
    }

    protected static void log(String str) {
        Log.d("AgpsInterface [agps]", str);
    }

    protected static void msleep(int i) {
        try {
            Thread.sleep(i);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    private void writeToHidl() {
        DataCoder2.DataCoderBuffer dataCoderBuffer = this.out;
        doHidl("AgpsInterface", dataCoderBuffer.mBuff, dataCoderBuffer.mOffset);
        this.out.flush();
        this.in.clear();
    }

    public void checkVersion() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 1);
                DataCoder2.putShort(this.out, (short) 1);
                DataCoder2.putShort(this.out, (short) 1);
                writeToHidl();
                short s = DataCoder2.getShort(this.in);
                short s2 = DataCoder2.getShort(this.in);
                if (s != 1) {
                    throw new IOException("app maj ver=1 is not equal to AGPSD's maj ver=" + ((int) s));
                }
                if (s2 >= 1) {
                    DataCoder2.getByte(this.in);
                    close();
                } else {
                    throw new IOException("app min ver=1 is greater than AGPSD's min ver=" + ((int) s2));
                }
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    protected void close() {
        this.in.clear();
    }

    public void coderTest() throws IOException {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 0);
                DataCoder2.putByte(this.out, (byte) 18);
                DataCoder2.putShort(this.out, (short) 4660);
                DataCoder2.putInt(this.out, 305419896);
                DataCoder2.putLong(this.out, 1311768467294899695L);
                DataCoder2.putFloat(this.out, 1.0f);
                DataCoder2.putDouble(this.out, 2.0d);
                DataCoder2.putString(this.out, "string");
                DataCoder2.putBinary(this.out, new byte[]{0, 1, 2, 3, 4, 5, 6, 7, 8});
                writeToHidl();
                long j = DataCoder2.getByte(this.in);
                if (j != 18) {
                    throw new IOException("getByte failed expected=" + Long.toHexString(18L) + " actually=" + Long.toHexString(j));
                }
                long j2 = DataCoder2.getShort(this.in);
                if (j2 != 4660) {
                    throw new IOException("getShort failed expected=" + Long.toHexString(4660L) + " actually=" + Long.toHexString(j2));
                }
                long j3 = DataCoder2.getInt(this.in);
                if (j3 != 305419896) {
                    throw new IOException("getInt failed expected=" + Long.toHexString(305419896L) + " actually=" + Long.toHexString(j3));
                }
                long j4 = DataCoder2.getLong(this.in);
                if (j4 != 1311768467294899695L) {
                    throw new IOException("getLong failed expected=" + Long.toHexString(1311768467294899695L) + " actually=" + Long.toHexString(j4));
                }
                float f = DataCoder2.getFloat(this.in);
                if (f != 1.0f) {
                    throw new IOException("getFloat failed expected=1.0 actually=" + f);
                }
                double d = DataCoder2.getDouble(this.in);
                if (d != 2.0d) {
                    throw new IOException("getDouble failed expected=2 actually=" + d);
                }
                String string = DataCoder2.getString(this.in);
                if (!string.equals("string")) {
                    throw new IOException("getString failed expected=" + string + " actually=" + string);
                }
                byte[] binary = DataCoder2.getBinary(this.in);
                if (binary == null) {
                    throw new IOException("getBinary failed, get null");
                }
                if (binary.length != 9) {
                    throw new IOException("getBinary failed, length expected=9 actually=" + binary.length);
                }
                for (int i = 0; i < 9; i++) {
                    if (binary[i] != i) {
                        throw new IOException("getBinary failed, data[" + i + "] expected=" + i + " actually=" + ((int) binary[i]));
                    }
                }
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new IOException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    protected void connect() throws IOException {
    }

    public AgpsConfig getAgpsConfig() {
        AgpsConfig agpsConfig = new AgpsConfig();
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 100);
                writeToHidl();
                getAgpsConfigInt(100, agpsConfig);
                DataCoder2.getByte(this.in);
                close();
                return agpsConfig;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public AgpsConfig getAgpsConfigV17() {
        AgpsConfig agpsConfig = new AgpsConfig();
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 120);
                writeToHidl();
                getAgpsConfigInt(120, agpsConfig);
                DataCoder2.getByte(this.in);
                close();
                return agpsConfig;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public AgpsConfig getAgpsConfigV24() {
        AgpsConfig agpsConfig = new AgpsConfig();
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 127);
                writeToHidl();
                getAgpsConfigInt(127, agpsConfig);
                DataCoder2.getByte(this.in);
                close();
                return agpsConfig;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public AgpsProfilingInfo getAgpsProfilingInfo() {
        AgpsProfilingInfo agpsProfilingInfo = new AgpsProfilingInfo();
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 103);
                writeToHidl();
                int i = DataCoder2.getInt(this.in);
                for (int i2 = 0; i2 < i; i2++) {
                    agpsProfilingInfo.addElement(DataCoder2.getInt(this.in), DataCoder2.getLong(this.in), DataCoder2.getString(this.in));
                }
                DataCoder2.getByte(this.in);
                close();
                return agpsProfilingInfo;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public int getEmulatorMode() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 104);
                writeToHidl();
                int i = DataCoder2.getInt(this.in);
                DataCoder2.getByte(this.in);
                close();
                return i;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public SuplProfile getSuplProfile() {
        SuplProfile suplProfile = new SuplProfile();
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 101);
                writeToHidl();
                suplProfile.name = DataCoder2.getString(this.in);
                suplProfile.addr = DataCoder2.getString(this.in);
                suplProfile.port = DataCoder2.getInt(this.in);
                suplProfile.tls = DataCoder2.getBoolean(this.in);
                suplProfile.mccMnc = DataCoder2.getString(this.in);
                suplProfile.appId = DataCoder2.getString(this.in);
                suplProfile.providerId = DataCoder2.getString(this.in);
                suplProfile.defaultApn = DataCoder2.getString(this.in);
                suplProfile.optionalApn = DataCoder2.getString(this.in);
                suplProfile.optionalApn2 = DataCoder2.getString(this.in);
                suplProfile.addressType = DataCoder2.getString(this.in);
                DataCoder2.getByte(this.in);
                close();
                return suplProfile;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public String getSystemProperty(String str, String str2) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 102);
                DataCoder2.putString(this.out, str);
                DataCoder2.putString(this.out, str2);
                writeToHidl();
                String string = DataCoder2.getString(this.in);
                DataCoder2.getByte(this.in);
                close();
                return string;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void resetAgpsd() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 402);
                writeToHidl();
                log("resetAgpsd() before sleep 1 sec");
                msleep(1000);
                log("resetAgpsd() after sleep 1 sec");
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAbeidouSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 251);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAgalileoSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 252);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAglonassSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 246);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAgpsEnabled(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 200);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAgpsSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 250);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAllowNI(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 215);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAllowNiForGpsOff(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 262);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAllowRoaming(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 216);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAospPosModeEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 297);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAospProfileEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 274);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setAutoProfileEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 228);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setBeidouSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 240);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setBindNlpSettingToSupl(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 275);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setCdmaPref(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 202);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setCertFromSdcard(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 227);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setCertVerify(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 224);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setCpAutoReset(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 214);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setDefaultNlpEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 296);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setE911GpsIconEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 248);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setE911OpenGpsEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 249);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setEpcMolrPduEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 221);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setExternalAddr(boolean z, String str) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 212);
                DataCoder2.putBoolean(this.out, z);
                DataCoder2.putString(this.out, str);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setForceOtdoaAssistReq(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 263);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setGalileoSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 241);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setGlonassSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 239);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setGpsSatelliteEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 238);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setImsiEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 236);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setIngoreSiForE911(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 281);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setIpVersionPrefer(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 290);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLbsLogEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 279);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 226);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeCpDbhEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 285);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeCpEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 271);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeCpSensorEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 284);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeCpSrnEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 283);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeCpWlanEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 282);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeCrowdSourceConfident(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 280);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeHideWifiBtStatus(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 269);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeNetworkLocationDisable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 270);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeUpDbhEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 289);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeUpEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 272);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeUpSensorEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 288);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeUpSrnEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 287);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setLppeUpWlanEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 286);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setMlcNumber(boolean z, String str) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 213);
                DataCoder2.putBoolean(this.out, z);
                DataCoder2.putString(this.out, str);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setMolrPosMethod(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 211);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setNiRequest(int i, byte[] bArr) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 220);
                DataCoder2.putInt(this.out, i);
                DataCoder2.putBinary(this.out, bArr);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setNiStatisticEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 509);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setNoSensitiveLog(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 255);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPosTechnologyAFLT(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 235);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPosTechnologyAutonomous(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 234);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPosTechnologyECID(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 206);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPosTechnologyMSA(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 204);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPosTechnologyMSB(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 205);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPosTechnologyOTDOA(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 207);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setPrivacyOverrideMode(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 298);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setProtocol(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 201);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setQop(int i, int i2, int i3, int i4) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 210);
                DataCoder2.putInt(this.out, i);
                DataCoder2.putInt(this.out, i2);
                DataCoder2.putInt(this.out, i3);
                DataCoder2.putInt(this.out, i4);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setResetToDefault() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 218);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSib8Sib16Enable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 237);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSupl2file(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 217);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplDedicatedApnEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 231);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplProfile(SuplProfile suplProfile) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 219);
                DataCoder2.putString(this.out, suplProfile.name);
                DataCoder2.putString(this.out, suplProfile.addr);
                DataCoder2.putInt(this.out, suplProfile.port);
                DataCoder2.putBoolean(this.out, suplProfile.tls);
                DataCoder2.putString(this.out, suplProfile.mccMnc);
                DataCoder2.putString(this.out, suplProfile.appId);
                DataCoder2.putString(this.out, suplProfile.providerId);
                DataCoder2.putString(this.out, suplProfile.defaultApn);
                DataCoder2.putString(this.out, suplProfile.optionalApn);
                DataCoder2.putString(this.out, suplProfile.optionalApn2);
                DataCoder2.putString(this.out, suplProfile.addressType);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplProfile(String str, int i, boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 209);
                DataCoder2.putString(this.out, str);
                DataCoder2.putInt(this.out, i);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplUt2(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 229);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplUt3(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 230);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplVerMinor(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 244);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplVerSerInd(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 245);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSuplVersion(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 208);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setSyncToSlpEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 232);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setTcpKeepAlive(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 277);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setTlsVersion(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 223);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setUdpEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 233);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setUpLppIn2g3gDisable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 291);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setUpPrefMethod(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 203);
                DataCoder2.putByte(this.out, (byte) i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setUpRrlpIn4gDisable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 292);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setUpSiDisable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 293);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void setVzwDebugScreenEnable(boolean z) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 273);
                DataCoder2.putBoolean(this.out, z);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void startAreaEvent(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 302);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void startEmulatorMode(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 403);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                log("startEmulatorMode() before sleep 1 sec");
                msleep(1000);
                log("startEmulatorMode() after sleep 1 sec");
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void startPeriodic() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 300);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void stopAreaEvent() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 303);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void stopPeriodic() {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 301);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void testButton(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 401);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }

    public void testCase(int i) {
        try {
            try {
                connect();
                DataCoder2.putInt(this.out, 400);
                DataCoder2.putInt(this.out, i);
                writeToHidl();
                DataCoder2.getByte(this.in);
                close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        } catch (Throwable th) {
            close();
            throw th;
        }
    }
}
