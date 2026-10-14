package com.mediatek.engineermode.rsc;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.SystemProperties;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.emsvr.AFMFunctionCallEx;
import com.mediatek.engineermode.emsvr.FunctionReturn;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.parsers.SAXParserFactory;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;
import org.xml.sax.XMLReader;

/* JADX INFO: loaded from: classes3.dex */
public class RuntimeSwitchConfig extends Activity {
    static final int DIALOG_LOADING_PROJECT = 3;
    static final int DIALOG_WARNING_REBOOT = 1;
    static final int DIALOG_WRITING_SELECTION = 2;
    static final String PROJECT_LIST_FILE_PATH = "/system/etc/rsc/rsc.xml";
    private static final String PROJ_PROP = "ro.boot.rsc";
    private static final String TAG = "rcs/RuntimeSwitchConfig";
    private ArrayAdapter<String> mSpProjAdapter;
    private Spinner mSpProject = null;
    private Button mBtnApply = null;
    private ConfigXMLData mConfigData = new ConfigXMLData();
    private String mProjCurName = SystemProperties.get(PROJ_PROP);

    private class ProjectLoadTask extends AsyncTask<Void, Void, Void> {
        private int mProjCurIndex;

        private ProjectLoadTask() {
            this.mProjCurIndex = -1;
        }

        private void loadProjects() {
            try {
                parseXMLWithSAX(new FileInputStream(new File(RuntimeSwitchConfig.PROJECT_LIST_FILE_PATH)), RuntimeSwitchConfig.this.mConfigData);
            } catch (FileNotFoundException e) {
                e.printStackTrace();
            } catch (IOException e2) {
                e2.printStackTrace();
            } catch (ParserConfigurationException e3) {
                e3.printStackTrace();
            } catch (SAXException e4) {
                e4.printStackTrace();
            }
            RuntimeSwitchConfig.this.mSpProjAdapter.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
            int size = RuntimeSwitchConfig.this.mConfigData.getProjectList().size();
            for (int i = 0; i < size; i++) {
                ConfigXMLData.ProjectData projectData = RuntimeSwitchConfig.this.mConfigData.getProjectList().get(i);
                RuntimeSwitchConfig.this.mSpProjAdapter.add(projectData.getName());
                if (this.mProjCurIndex == -1 && RuntimeSwitchConfig.this.mProjCurName != null && RuntimeSwitchConfig.this.mProjCurName.equals(projectData.getName())) {
                    this.mProjCurIndex = i;
                }
            }
        }

        private void parseXMLWithSAX(InputStream inputStream, ConfigXMLData configXMLData) throws ParserConfigurationException, SAXException, IOException {
            XMLReader xMLReader = SAXParserFactory.newInstance().newSAXParser().getXMLReader();
            xMLReader.setContentHandler(new ContentHandler(configXMLData));
            xMLReader.parse(new InputSource(inputStream));
        }

        private void updateProjList() {
            RuntimeSwitchConfig.this.mSpProject.setAdapter((SpinnerAdapter) RuntimeSwitchConfig.this.mSpProjAdapter);
            if (this.mProjCurIndex != -1) {
                RuntimeSwitchConfig.this.mSpProject.setSelection(this.mProjCurIndex);
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Void... voidArr) {
            loadProjects();
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            updateProjList();
            RuntimeSwitchConfig.this.removeDialog(3);
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            RuntimeSwitchConfig.this.showDialog(3);
        }
    }

    private class ProjectSwitchTask extends AsyncTask<Void, Void, Void> {
        private ConfigXMLData.ProjectData mProj;

        private ProjectSwitchTask() {
        }

        private void doFactoryReset() {
            Intent intent = new Intent("android.intent.action.FACTORY_RESET");
            intent.setPackage("android");
            intent.addFlags(268435456);
            intent.putExtra("android.intent.extra.REASON", "rsc");
            RuntimeSwitchConfig.this.sendBroadcast(intent);
        }

        private void storeProjSelected() {
            FunctionReturn nextResult;
            Elog.i(RuntimeSwitchConfig.TAG, "storeProjSelected");
            AFMFunctionCallEx aFMFunctionCallEx = new AFMFunctionCallEx();
            if (aFMFunctionCallEx.startCallFunctionStringReturn(AFMFunctionCallEx.FUNCTION_EM_RSC_WRITE)) {
                Elog.i(RuntimeSwitchConfig.TAG, "start write");
                aFMFunctionCallEx.writeParamInt(RuntimeSwitchConfig.this.mConfigData.getVersion());
                aFMFunctionCallEx.writeParamInt(this.mProj.getIndex());
                aFMFunctionCallEx.writeParamString(this.mProj.getName());
                aFMFunctionCallEx.writeParamString(this.mProj.getOptr());
                aFMFunctionCallEx.writeParamString(RuntimeSwitchConfig.this.mConfigData.getTarPartOffset());
                Elog.i(RuntimeSwitchConfig.TAG, "end write");
                do {
                    nextResult = aFMFunctionCallEx.getNextResult();
                    Elog.i(RuntimeSwitchConfig.TAG, "funcRet:" + nextResult);
                } while (nextResult.mReturnCode == 1);
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Void... voidArr) {
            storeProjSelected();
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            RuntimeSwitchConfig.this.removeDialog(2);
            doFactoryReset();
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            RuntimeSwitchConfig.this.showDialog(2);
            this.mProj = RuntimeSwitchConfig.this.mConfigData.getProjectList().get(RuntimeSwitchConfig.this.mSpProject.getSelectedItemPosition());
        }
    }

    public static boolean supportRsc() {
        return new File(PROJECT_LIST_FILE_PATH).exists();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(com.mediatek.engineermode.R.layout.runtime_switch_config);
        this.mSpProjAdapter = new ArrayAdapter<>(this, R.layout.simple_spinner_item);
        this.mSpProject = (Spinner) findViewById(com.mediatek.engineermode.R.id.rsc_project_spinner);
        Button button = (Button) findViewById(com.mediatek.engineermode.R.id.rsc_btn_apply);
        this.mBtnApply = button;
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.rsc.RuntimeSwitchConfig.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                int selectedItemPosition = RuntimeSwitchConfig.this.mSpProject.getSelectedItemPosition();
                if (RuntimeSwitchConfig.this.mProjCurName == null || !RuntimeSwitchConfig.this.mProjCurName.equals(RuntimeSwitchConfig.this.mSpProjAdapter.getItem(selectedItemPosition))) {
                    RuntimeSwitchConfig.this.showDialog(1);
                } else {
                    Toast.makeText(RuntimeSwitchConfig.this, com.mediatek.engineermode.R.string.rsc_proj_unchanged, 1).show();
                }
            }
        });
        new ProjectLoadTask().execute(new Void[0]);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 1) {
            AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle(com.mediatek.engineermode.R.string.rsc_dlg_reboot_title);
            builder.setMessage(getString(com.mediatek.engineermode.R.string.rsc_dlg_reboot_content));
            builder.setPositiveButton(com.mediatek.engineermode.R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rsc.RuntimeSwitchConfig.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    new ProjectSwitchTask().execute(new Void[0]);
                }
            });
            builder.setNegativeButton(com.mediatek.engineermode.R.string.rsc_cancel, (DialogInterface.OnClickListener) null);
            return builder.create();
        }
        if (i == 2) {
            ProgressDialog progressDialog = new ProgressDialog(this);
            progressDialog.setMessage(getString(com.mediatek.engineermode.R.string.rsc_writing_selection));
            progressDialog.setCancelable(false);
            progressDialog.setIndeterminate(true);
            return progressDialog;
        }
        if (i != 3) {
            return null;
        }
        ProgressDialog progressDialog2 = new ProgressDialog(this);
        progressDialog2.setMessage(getString(com.mediatek.engineermode.R.string.rsc_loading_project));
        progressDialog2.setCancelable(false);
        progressDialog2.setIndeterminate(true);
        return progressDialog2;
    }
}
