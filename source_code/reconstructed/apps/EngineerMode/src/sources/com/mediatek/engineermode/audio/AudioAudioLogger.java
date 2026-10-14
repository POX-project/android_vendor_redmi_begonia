package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.media.AudioSystem;
import android.os.Bundle;
import android.os.Environment;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.parsers.SAXParserFactory;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;
import org.xml.sax.XMLReader;

/* JADX INFO: loaded from: classes2.dex */
public class AudioAudioLogger extends Activity {
    private static final int DIALOG_ID_NO_SDCARD = 1;
    private static final int DIALOG_ID_SDCARD_BUSY = 2;
    private static final int DIALOG_ID_SHOW_CHECKBOX_RET = 5;
    private static final int DIALOG_ID_SHOW_GET_RET = 3;
    private static final int DIALOG_ID_SHOW_SET_RET = 4;
    private static final String GET_AUDIO_COMMAND = "GetAudioCommand";
    private static final String GET_PARAMETERS = "GetParameters";
    private static final String SET_AUDIO_COMMAND = "SetAudioCommand";
    private static final String SET_PARAMETERS = "SetParameters";
    private static final String TAG = "Audio/AudioLogger";
    private static final String mFileName = "/vendor/etc/audio_em.xml";
    private ArrayList<CheckBox> mDumpOptionsCheck;
    private Spinner mSpGetAudioParameter = null;
    private Spinner mSpSetAudioParameter = null;
    private Spinner mSpSetAudioCommand = null;
    private Spinner mSpGetAudioCommand = null;
    private EditText mEditSetAudioCommandText = null;
    private EditText mEditGetAudioCommandText = null;
    private EditText mEditSetAudioParameterText = null;
    private EditText mEditGetAudioParameterText = null;
    private Button mBtGetAudioCommand = null;
    private Button mBtSetAudioCommand = null;
    private Button mBtGetAudioParameter = null;
    private Button mBtSetAudioParameter = null;
    private LinearLayout mCheckBoxLinearLayout = null;
    private File mXmlFile = null;
    private InputStream mInputStream = null;
    private AudioLoggerXMLData mAudioLoggerXMLData = null;
    private int mAudioSetRet = 0;
    private String mAudioGetRet = null;
    private String mAudioTitle = null;
    private boolean mCategoryTitleFlag = false;
    private ArrayList<String> mAudioCheckBoxRet = null;
    private final View.OnClickListener mAudioButtonClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioAudioLogger.1
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            if (AudioAudioLogger.this.checkSDCardIsAvaliable().booleanValue()) {
                switch (view.getId()) {
                    case R.id.Audio_GetAudioCommand /* 2131099674 */:
                        String string = AudioAudioLogger.this.mEditGetAudioCommandText.getText().toString();
                        Elog.d(AudioAudioLogger.TAG, "Audio_GetAudioCommand=" + string);
                        try {
                            AudioAudioLogger.this.mAudioGetRet = String.valueOf(AudioTuningJni.getAudioCommand(Integer.decode(string).intValue()));
                            Elog.d(AudioAudioLogger.TAG, "Audio_GetAudioCommand=" + string + ",ret= " + AudioAudioLogger.this.mAudioGetRet);
                            AudioAudioLogger.this.mAudioTitle = string;
                            Toast.makeText(AudioAudioLogger.this, AudioAudioLogger.this.mAudioGetRet, 0).show();
                            AudioAudioLogger.this.showDialog(3);
                        } catch (NumberFormatException e) {
                            AudioAudioLogger audioAudioLogger = AudioAudioLogger.this;
                            Toast.makeText(audioAudioLogger, audioAudioLogger.getString(R.string.number_arrage_tip, new Object[]{Integer.MAX_VALUE}), 0).show();
                            return;
                        }
                        break;
                    case R.id.Audio_GetAudioParameter /* 2131099676 */:
                        String string2 = AudioAudioLogger.this.mEditGetAudioParameterText.getText().toString();
                        AudioAudioLogger.this.mAudioGetRet = AudioSystem.getParameters(string2);
                        Elog.d(AudioAudioLogger.TAG, "Audio_GetAudioParameter=" + string2 + ",ret=" + AudioAudioLogger.this.mAudioGetRet);
                        AudioAudioLogger.this.mAudioTitle = string2;
                        AudioAudioLogger audioAudioLogger2 = AudioAudioLogger.this;
                        Toast.makeText(audioAudioLogger2, audioAudioLogger2.mAudioGetRet, 0).show();
                        AudioAudioLogger.this.showDialog(3);
                        break;
                    case R.id.Audio_SetAudioCommand /* 2131099705 */:
                        String string3 = AudioAudioLogger.this.mEditSetAudioCommandText.getText().toString();
                        String[] strArrSplit = string3.replaceAll("\\s*", "").split(",");
                        try {
                            int audioCommand = AudioTuningJni.setAudioCommand(Integer.decode(strArrSplit[0]).intValue(), Integer.decode(strArrSplit[1]).intValue());
                            Elog.d(AudioAudioLogger.TAG, "Audio_SetAudioCommand=" + string3 + ",ret= " + audioCommand);
                            AudioAudioLogger.this.mAudioSetRet = audioCommand;
                            AudioAudioLogger.this.mAudioTitle = string3;
                            Toast.makeText(AudioAudioLogger.this, String.valueOf(AudioAudioLogger.this.mAudioSetRet), 0).show();
                            AudioAudioLogger.this.showDialog(4);
                        } catch (ArrayIndexOutOfBoundsException e2) {
                            AudioAudioLogger audioAudioLogger3 = AudioAudioLogger.this;
                            Toast.makeText(audioAudioLogger3, audioAudioLogger3.getString(R.string.set_failed_tip), 0).show();
                            return;
                        } catch (NumberFormatException e3) {
                            AudioAudioLogger audioAudioLogger4 = AudioAudioLogger.this;
                            Toast.makeText(audioAudioLogger4, audioAudioLogger4.getString(R.string.number_arrage_tip, new Object[]{Integer.MAX_VALUE}), 0).show();
                            return;
                        }
                        break;
                    case R.id.Audio_SetAudioParameter /* 2131099707 */:
                        String string4 = AudioAudioLogger.this.mEditSetAudioParameterText.getText().toString();
                        int parameters = AudioSystem.setParameters(string4);
                        Elog.d(AudioAudioLogger.TAG, "Audio_SetAudioParameter=" + string4 + ",ret= " + parameters);
                        AudioAudioLogger.this.mAudioSetRet = parameters;
                        AudioAudioLogger.this.mAudioTitle = string4;
                        AudioAudioLogger audioAudioLogger5 = AudioAudioLogger.this;
                        Toast.makeText(audioAudioLogger5, String.valueOf(audioAudioLogger5.mAudioSetRet), 0).show();
                        AudioAudioLogger.this.showDialog(4);
                        break;
                }
            }
        }
    };
    private final AdapterView.OnItemSelectedListener mSpinnerListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioAudioLogger.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            Elog.d(AudioAudioLogger.TAG, "id:" + adapterView.getId());
            switch (adapterView.getId()) {
                case R.id.Audio_GetAudioCommandSpinner /* 2131099675 */:
                    AudioAudioLogger.this.mEditGetAudioCommandText.setText(adapterView.getItemAtPosition(i).toString());
                    break;
                case R.id.Audio_GetAudioParameterSpinner /* 2131099677 */:
                    AudioAudioLogger.this.mEditGetAudioParameterText.setText(adapterView.getItemAtPosition(i).toString());
                    break;
                case R.id.Audio_SetAudioCommandSpinner /* 2131099706 */:
                    AudioAudioLogger.this.mEditSetAudioCommandText.setText(adapterView.getItemAtPosition(i).toString());
                    break;
                case R.id.Audio_SetAudioParameterSpinner /* 2131099708 */:
                    AudioAudioLogger.this.mEditSetAudioParameterText.setText(adapterView.getItemAtPosition(i).toString());
                    break;
            }
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    };
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.audio.AudioAudioLogger.3
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            int id = compoundButton.getId();
            String str = (String) compoundButton.getText();
            int i = id >> 8;
            int i2 = id & 255;
            if (AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCategoryTitle.equals(str)) {
                AudioAudioLogger.this.mCategoryTitleFlag = true;
                for (int i3 = 0; i3 < AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmdName.size(); i3++) {
                    ((CheckBox) AudioAudioLogger.this.findViewById(id + i3 + 1)).setChecked(compoundButton.isChecked());
                }
                if (AudioAudioLogger.this.mAudioCheckBoxRet != null && !AudioAudioLogger.this.mAudioCheckBoxRet.isEmpty()) {
                    Elog.d(AudioAudioLogger.TAG, "CategoryTitle is checked, show dialog");
                    AudioAudioLogger.this.mAudioTitle = str;
                    if (z && ("Output".equals(AudioAudioLogger.this.mAudioTitle) || "Input".equals(AudioAudioLogger.this.mAudioTitle) || "USB".equals(AudioAudioLogger.this.mAudioTitle))) {
                        Toast.makeText(AudioAudioLogger.this, R.string.audio_dump_path_change_msg, 1).show();
                    }
                    AudioAudioLogger.this.showDialog(5);
                }
                AudioAudioLogger.this.mCategoryTitleFlag = false;
            } else if (AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmdName.get(i2 - 1).equals(str)) {
                if (AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mType.get(i2 - 1).equals(AudioAudioLogger.SET_AUDIO_COMMAND)) {
                    int iIntValue = Integer.decode(AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmd.get(i2 - 1)).intValue();
                    int iIntValue2 = Integer.decode(AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCheck.get(i2 - 1)).intValue();
                    int iIntValue3 = Integer.decode(AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mUncheck.get(i2 - 1)).intValue();
                    StringBuilder sb = new StringBuilder();
                    sb.append(Integer.toHexString(iIntValue));
                    sb.append(", ");
                    sb.append(z ? String.valueOf(iIntValue2) : String.valueOf(iIntValue3));
                    String string = sb.toString();
                    Elog.d(AudioAudioLogger.TAG, "cmdSend: " + string);
                    int audioCommand = AudioTuningJni.setAudioCommand(iIntValue, z ? iIntValue2 : iIntValue3);
                    AudioAudioLogger.this.mAudioCheckBoxRet.add("Set: 0x" + string + " Ret: " + String.valueOf(audioCommand));
                } else if (AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mType.get(i2 - 1).equals(AudioAudioLogger.SET_PARAMETERS)) {
                    String str2 = AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmd.get(i2 - 1);
                    String str3 = AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCheck.get(i2 - 1);
                    String str4 = AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mUncheck.get(i2 - 1);
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(str2);
                    sb2.append("=");
                    sb2.append(z ? str3 : str4);
                    String string2 = sb2.toString();
                    Elog.d(AudioAudioLogger.TAG, "cmdSend: " + string2);
                    int parameters = AudioSystem.setParameters(string2);
                    AudioAudioLogger.this.mAudioCheckBoxRet.add("Set: " + string2 + "   Ret: " + String.valueOf(parameters));
                } else if (AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mType.get(i2 - 1).equals(AudioAudioLogger.GET_AUDIO_COMMAND)) {
                    String str5 = AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmd.get(i2 - 1);
                    int iIntValue4 = Integer.decode(str5).intValue();
                    Elog.d(AudioAudioLogger.TAG, "cmdSend: " + str5);
                    int audioCommand2 = AudioTuningJni.getAudioCommand(iIntValue4);
                    AudioAudioLogger.this.mAudioCheckBoxRet.add("Get: " + str5 + "  Ret: " + String.valueOf(audioCommand2));
                } else if (AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mType.get(i2 - 1).equals(AudioAudioLogger.GET_PARAMETERS)) {
                    String str6 = AudioAudioLogger.this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmd.get(i2 - 1);
                    String parameters2 = AudioSystem.getParameters(str6);
                    Elog.d(AudioAudioLogger.TAG, "cmdSend: " + str6);
                    AudioAudioLogger.this.mAudioCheckBoxRet.add("Get: " + str6 + "   Ret: " + parameters2);
                }
                if (AudioAudioLogger.this.mCategoryTitleFlag) {
                    return;
                }
                Elog.d(AudioAudioLogger.TAG, "mCmdName is checked, show dialog");
                AudioAudioLogger audioAudioLogger = AudioAudioLogger.this;
                audioAudioLogger.mAudioTitle = audioAudioLogger.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCategoryTitle;
                if (z && ("Output".equals(AudioAudioLogger.this.mAudioTitle) || "Input".equals(AudioAudioLogger.this.mAudioTitle) || "USB".equals(AudioAudioLogger.this.mAudioTitle))) {
                    Toast.makeText(AudioAudioLogger.this, R.string.audio_dump_path_change_msg, 1).show();
                }
                AudioAudioLogger.this.showDialog(5);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public Boolean checkSDCardIsAvaliable() {
        String externalStorageState = Environment.getExternalStorageState();
        Elog.i(Audio.TAG, "Environment.getExternalStorageState() is : " + externalStorageState);
        if (externalStorageState.equals("removed")) {
            showDialog(1);
            return false;
        }
        if (!externalStorageState.equals("shared")) {
            return true;
        }
        showDialog(2);
        return false;
    }

    private boolean initmSpGetAudioCommand(Spinner spinner, AudioLoggerXMLData audioLoggerXMLData) {
        ArrayList<String> arrayList = audioLoggerXMLData.mAudioCommandGetOperation;
        int size = arrayList.size();
        if (size > 0) {
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            spinner.setAdapter((SpinnerAdapter) arrayAdapter);
            return true;
        }
        Elog.d(TAG, "init audio spinner fail; mmAudioCount:" + size);
        return false;
    }

    private boolean initmSpGetAudioParameter(Spinner spinner, AudioLoggerXMLData audioLoggerXMLData) {
        ArrayList<String> arrayList = audioLoggerXMLData.mParametersGetOperationItems;
        int size = arrayList.size();
        if (size > 0) {
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            spinner.setAdapter((SpinnerAdapter) arrayAdapter);
            return true;
        }
        Elog.d(TAG, "init audio spinner fail; mAudioCount:" + size);
        return false;
    }

    private boolean initmSpSetAudioCommand(Spinner spinner, AudioLoggerXMLData audioLoggerXMLData) {
        ArrayList<String> arrayList = audioLoggerXMLData.mAudioCommandSetOperation;
        int size = arrayList.size();
        if (size > 0) {
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            spinner.setAdapter((SpinnerAdapter) arrayAdapter);
            return true;
        }
        Elog.d(TAG, "init audio spinner fail; mmAudioCount:" + size);
        return false;
    }

    private boolean initmSpSetAudioParameter(Spinner spinner, AudioLoggerXMLData audioLoggerXMLData) {
        ArrayList<String> arrayList = audioLoggerXMLData.mParametersSetOperationItems;
        int size = arrayList.size();
        if (size > 0) {
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            spinner.setAdapter((SpinnerAdapter) arrayAdapter);
            return true;
        }
        Elog.d(TAG, "init audio spinner fail; mAudioCount:" + size);
        return false;
    }

    private void parseXMLWithSAX(InputStream inputStream, AudioLoggerXMLData audioLoggerXMLData) throws ParserConfigurationException, SAXException, IOException {
        XMLReader xMLReader = SAXParserFactory.newInstance().newSAXParser().getXMLReader();
        xMLReader.setContentHandler(new ContentHandler(audioLoggerXMLData));
        xMLReader.parse(new InputSource(inputStream));
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_audiologger);
        this.mAudioLoggerXMLData = new AudioLoggerXMLData();
        this.mAudioCheckBoxRet = new ArrayList<>();
        File file = new File(mFileName);
        this.mXmlFile = file;
        if (!file.exists()) {
            Elog.d(TAG, "mFileName:/vendor/etc/audio_em.xmlis not exists");
            Toast.makeText(this, "/vendor/etc/audio_em.xmlis not exists", 1).show();
            finish();
            return;
        }
        try {
            this.mInputStream = new FileInputStream(this.mXmlFile);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        try {
            parseXMLWithSAX(this.mInputStream, this.mAudioLoggerXMLData);
        } catch (IOException e2) {
            e2.printStackTrace();
        } catch (ParserConfigurationException e3) {
            e3.printStackTrace();
        } catch (SAXException e4) {
            e4.printStackTrace();
        }
        Elog.d(TAG, "parseXMLWithSAX pass!");
        this.mSpSetAudioCommand = (Spinner) findViewById(R.id.Audio_SetAudioCommandSpinner);
        this.mSpGetAudioCommand = (Spinner) findViewById(R.id.Audio_GetAudioCommandSpinner);
        this.mSpSetAudioParameter = (Spinner) findViewById(R.id.Audio_SetAudioParameterSpinner);
        this.mSpGetAudioParameter = (Spinner) findViewById(R.id.Audio_GetAudioParameterSpinner);
        this.mEditSetAudioCommandText = (EditText) findViewById(R.id.SetAudioCommandText);
        this.mEditGetAudioCommandText = (EditText) findViewById(R.id.GetAudioCommandText);
        this.mEditSetAudioParameterText = (EditText) findViewById(R.id.SetAudioParameterText);
        this.mEditGetAudioParameterText = (EditText) findViewById(R.id.GetAudioParameterText);
        this.mBtGetAudioCommand = (Button) findViewById(R.id.Audio_GetAudioCommand);
        this.mBtSetAudioCommand = (Button) findViewById(R.id.Audio_SetAudioCommand);
        this.mBtSetAudioParameter = (Button) findViewById(R.id.Audio_SetAudioParameter);
        this.mBtGetAudioParameter = (Button) findViewById(R.id.Audio_GetAudioParameter);
        this.mCheckBoxLinearLayout = (LinearLayout) findViewById(R.id.LinearLayoutCheck);
        this.mDumpOptionsCheck = new ArrayList<>();
        for (int i = 0; i < this.mAudioLoggerXMLData.mAudioDumpOperation.size(); i++) {
            String str = this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCategoryTitle;
            Elog.d(TAG, "title:" + i + " : " + str);
            CheckBox checkBox = new CheckBox(this);
            checkBox.setText(str);
            checkBox.setId(i << 8);
            this.mDumpOptionsCheck.add(checkBox);
            this.mCheckBoxLinearLayout.addView(checkBox);
            boolean zIsChecked = true;
            for (int i2 = 0; i2 < this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmdName.size(); i2++) {
                String str2 = this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmd.get(i2);
                String str3 = this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mCmdName.get(i2);
                String str4 = this.mAudioLoggerXMLData.mAudioDumpOperation.get(i).mType.get(i2);
                CheckBox checkBox2 = new CheckBox(this);
                checkBox2.setText(str3);
                checkBox2.setX(30.0f);
                checkBox2.setId((i << 8) + i2 + 1);
                if (str4.equals(SET_AUDIO_COMMAND)) {
                    String strValueOf = String.valueOf(AudioTuningJni.getAudioCommand(Integer.decode(str2).intValue() + 1));
                    this.mAudioGetRet = strValueOf;
                    if (!strValueOf.isEmpty()) {
                        Elog.d(TAG, "Audio_GetAudioCommand:" + str2 + ",ret= " + this.mAudioGetRet);
                        checkBox2.setChecked(this.mAudioGetRet.equals("1"));
                    }
                } else if (str4.equals(SET_PARAMETERS)) {
                    String parameters = AudioSystem.getParameters(str2);
                    this.mAudioGetRet = parameters;
                    if (!parameters.isEmpty()) {
                        String[] strArrSplit = this.mAudioGetRet.split("=");
                        Elog.d(TAG, "Audio_GetAudioParameter:" + str2 + ",ret=" + this.mAudioGetRet);
                        checkBox2.setChecked(strArrSplit[1].equals("1"));
                    }
                }
                this.mDumpOptionsCheck.add(checkBox2);
                this.mCheckBoxLinearLayout.addView(checkBox2);
                Elog.d(TAG, "mAudioDumpOperation,mCmd:" + str2);
                Elog.d(TAG, "mAudioDumpOperation,mCmd name:" + str3);
                zIsChecked &= checkBox2.isChecked();
            }
            checkBox.setChecked(zIsChecked);
        }
        for (int i3 = 0; i3 < this.mDumpOptionsCheck.size(); i3++) {
            this.mDumpOptionsCheck.get(i3).setOnCheckedChangeListener(this.mCheckedListener);
        }
        this.mSpSetAudioCommand.setOnItemSelectedListener(this.mSpinnerListener);
        this.mSpGetAudioCommand.setOnItemSelectedListener(this.mSpinnerListener);
        this.mSpSetAudioParameter.setOnItemSelectedListener(this.mSpinnerListener);
        this.mSpGetAudioParameter.setOnItemSelectedListener(this.mSpinnerListener);
        this.mBtSetAudioCommand.setOnClickListener(this.mAudioButtonClickListener);
        this.mBtGetAudioCommand.setOnClickListener(this.mAudioButtonClickListener);
        this.mBtSetAudioParameter.setOnClickListener(this.mAudioButtonClickListener);
        this.mBtGetAudioParameter.setOnClickListener(this.mAudioButtonClickListener);
        if (!initmSpSetAudioCommand(this.mSpSetAudioCommand, this.mAudioLoggerXMLData)) {
            Toast.makeText(this, "mSpSetAudioCommand spinner fail", 0).show();
            finish();
            return;
        }
        if (!initmSpGetAudioCommand(this.mSpGetAudioCommand, this.mAudioLoggerXMLData)) {
            Toast.makeText(this, "mSpSetAudioCommand spinner fail", 0).show();
            finish();
        } else if (!initmSpSetAudioParameter(this.mSpSetAudioParameter, this.mAudioLoggerXMLData)) {
            Toast.makeText(this, "mSpSetAudioCommand spinner fail", 0).show();
            finish();
        } else {
            if (initmSpGetAudioParameter(this.mSpGetAudioParameter, this.mAudioLoggerXMLData)) {
                return;
            }
            Toast.makeText(this, "mSpSetAudioCommand spinner fail", 0).show();
            finish();
        }
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 1) {
            return new AlertDialog.Builder(this).setTitle(R.string.no_sdcard_title).setMessage(R.string.no_sdcard_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        if (i == 2) {
            return new AlertDialog.Builder(this).setTitle(R.string.sdcard_busy_title).setMessage(R.string.sdcard_busy_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        if (i == 3) {
            return new AlertDialog.Builder(this).setTitle(this.mAudioTitle).setMessage("ret : " + this.mAudioGetRet).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioAudioLogger.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    AudioAudioLogger.this.removeDialog(3);
                }
            }).create();
        }
        if (i != 4) {
            if (i != 5) {
                return null;
            }
            ArrayList<String> arrayList = this.mAudioCheckBoxRet;
            return new AlertDialog.Builder(this).setTitle(this.mAudioTitle).setItems((CharSequence[]) arrayList.toArray(new CharSequence[arrayList.size()]), (DialogInterface.OnClickListener) null).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioAudioLogger.6
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    AudioAudioLogger.this.mAudioCheckBoxRet.clear();
                    AudioAudioLogger.this.removeDialog(5);
                }
            }).create();
        }
        return new AlertDialog.Builder(this).setTitle(this.mAudioTitle).setMessage("ret : " + String.valueOf(this.mAudioSetRet)).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioAudioLogger.5
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                AudioAudioLogger.this.removeDialog(4);
            }
        }).create();
    }
}
