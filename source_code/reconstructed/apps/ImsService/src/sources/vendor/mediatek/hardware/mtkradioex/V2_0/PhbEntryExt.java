package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class PhbEntryExt {
    public int index = 0;
    public String number = new String();
    public int type = 0;
    public String text = new String();
    public int hidden = 0;
    public String group = new String();
    public String adnumber = new String();
    public String adnumber_a = new String();
    public String adnumber_b = new String();
    public int adtype = 0;
    public String secondtext = new String();
    public String email = new String();
    public int secondtext_dcs = 0;
    public int email_dcs = 0;
    public int text_dcs = 0;

    public static final ArrayList<PhbEntryExt> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<PhbEntryExt> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 176, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            PhbEntryExt phbEntryExt = new PhbEntryExt();
            phbEntryExt.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 176);
            arrayList.add(phbEntryExt);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<PhbEntryExt> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 176);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 176);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != PhbEntryExt.class) {
            return false;
        }
        PhbEntryExt phbEntryExt = (PhbEntryExt) obj;
        return this.index == phbEntryExt.index && HidlSupport.deepEquals(this.number, phbEntryExt.number) && this.type == phbEntryExt.type && HidlSupport.deepEquals(this.text, phbEntryExt.text) && this.hidden == phbEntryExt.hidden && HidlSupport.deepEquals(this.group, phbEntryExt.group) && HidlSupport.deepEquals(this.adnumber, phbEntryExt.adnumber) && HidlSupport.deepEquals(this.adnumber_a, phbEntryExt.adnumber_a) && HidlSupport.deepEquals(this.adnumber_b, phbEntryExt.adnumber_b) && this.adtype == phbEntryExt.adtype && HidlSupport.deepEquals(this.secondtext, phbEntryExt.secondtext) && HidlSupport.deepEquals(this.email, phbEntryExt.email) && this.secondtext_dcs == phbEntryExt.secondtext_dcs && this.email_dcs == phbEntryExt.email_dcs && this.text_dcs == phbEntryExt.text_dcs;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.index))), Integer.valueOf(HidlSupport.deepHashCode(this.number)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.type))), Integer.valueOf(HidlSupport.deepHashCode(this.text)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.hidden))), Integer.valueOf(HidlSupport.deepHashCode(this.group)), Integer.valueOf(HidlSupport.deepHashCode(this.adnumber)), Integer.valueOf(HidlSupport.deepHashCode(this.adnumber_a)), Integer.valueOf(HidlSupport.deepHashCode(this.adnumber_b)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.adtype))), Integer.valueOf(HidlSupport.deepHashCode(this.secondtext)), Integer.valueOf(HidlSupport.deepHashCode(this.email)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.secondtext_dcs))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.email_dcs))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.text_dcs))));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.index = hwBlob.getInt32(j + 0);
        String string = hwBlob.getString(j + 8);
        this.number = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 8 + 0, false);
        this.type = hwBlob.getInt32(j + 24);
        String string2 = hwBlob.getString(j + 32);
        this.text = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 32 + 0, false);
        this.hidden = hwBlob.getInt32(j + 48);
        String string3 = hwBlob.getString(j + 56);
        this.group = string3;
        hwParcel.readEmbeddedBuffer(string3.getBytes().length + 1, hwBlob.handle(), j + 56 + 0, false);
        String string4 = hwBlob.getString(j + 72);
        this.adnumber = string4;
        hwParcel.readEmbeddedBuffer(string4.getBytes().length + 1, hwBlob.handle(), j + 72 + 0, false);
        String string5 = hwBlob.getString(j + 88);
        this.adnumber_a = string5;
        hwParcel.readEmbeddedBuffer(string5.getBytes().length + 1, hwBlob.handle(), j + 88 + 0, false);
        String string6 = hwBlob.getString(j + 104);
        this.adnumber_b = string6;
        hwParcel.readEmbeddedBuffer(string6.getBytes().length + 1, hwBlob.handle(), j + 104 + 0, false);
        this.adtype = hwBlob.getInt32(j + 120);
        String string7 = hwBlob.getString(j + 128);
        this.secondtext = string7;
        hwParcel.readEmbeddedBuffer(string7.getBytes().length + 1, hwBlob.handle(), j + 128 + 0, false);
        String string8 = hwBlob.getString(j + 144);
        this.email = string8;
        hwParcel.readEmbeddedBuffer(string8.getBytes().length + 1, hwBlob.handle(), j + 144 + 0, false);
        this.secondtext_dcs = hwBlob.getInt32(j + 160);
        this.email_dcs = hwBlob.getInt32(j + 164);
        this.text_dcs = hwBlob.getInt32(j + 168);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(176L), 0L);
    }

    public final String toString() {
        return "{.index = " + this.index + ", .number = " + this.number + ", .type = " + this.type + ", .text = " + this.text + ", .hidden = " + this.hidden + ", .group = " + this.group + ", .adnumber = " + this.adnumber + ", .adnumber_a = " + this.adnumber_a + ", .adnumber_b = " + this.adnumber_b + ", .adtype = " + this.adtype + ", .secondtext = " + this.secondtext + ", .email = " + this.email + ", .secondtext_dcs = " + this.secondtext_dcs + ", .email_dcs = " + this.email_dcs + ", .text_dcs = " + this.text_dcs + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.index);
        hwBlob.putString(8 + j, this.number);
        hwBlob.putInt32(24 + j, this.type);
        hwBlob.putString(32 + j, this.text);
        hwBlob.putInt32(48 + j, this.hidden);
        hwBlob.putString(56 + j, this.group);
        hwBlob.putString(72 + j, this.adnumber);
        hwBlob.putString(88 + j, this.adnumber_a);
        hwBlob.putString(104 + j, this.adnumber_b);
        hwBlob.putInt32(120 + j, this.adtype);
        hwBlob.putString(128 + j, this.secondtext);
        hwBlob.putString(144 + j, this.email);
        hwBlob.putInt32(160 + j, this.secondtext_dcs);
        hwBlob.putInt32(164 + j, this.email_dcs);
        hwBlob.putInt32(168 + j, this.text_dcs);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(176);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
