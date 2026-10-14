package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v4.content.LocalBroadcastManager;
import android.text.Html;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.PopupMenu;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.lbs.em2.utils.AgpsDebugInterface;
import com.mediatek.lbs.em2.utils.AgpsDebugListener;
import com.mediatek.lbs.em2.utils.AgpsInterface;
import java.io.IOException;
import java.util.GregorianCalendar;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public class LbsFlow extends Activity {
    protected static Context context;
    protected AgpsInterface agpsInterface;
    protected AlertDialog alert;
    protected Button buttonClearScreen;
    protected Button buttonEmulatorMode;
    protected Button buttonResetAgpsd;
    protected Button buttonTestCase;
    protected AgpsDebugInterface debugInterface;
    protected DelayShowHandler delayShowHandler;
    protected LinearLayout layoutDebug;
    protected LocalBroadcastManager mLocalBroadcastManager;
    protected PopupMenu popupEmulatorMode;
    protected PopupMenu popupTestCase;
    protected StringList stringList;
    protected TextView textViewMessage;
    protected Toast toast;
    protected int toastCount;
    protected boolean mAgpsdExisted = false;
    protected AgpsDebugListener debugListener = new AgpsDebugListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.9
        @Override // com.mediatek.lbs.em2.utils.AgpsDebugListener
        public void onDialogMessageReceived(String str, String str2) {
            LbsFlow.this.alert.setTitle(str);
            LbsFlow.this.alert.setMessage(str2);
            LbsFlow.this.alert.show();
        }

        @Override // com.mediatek.lbs.em2.utils.AgpsDebugListener
        public void onNiStatisticMessageReceived(int i, int i2, String str) {
            Intent intent = new Intent("com.mediatek.lbs.em2.action.ni_message");
            intent.setPackage("com.mediatek.lbs.em2.ui");
            intent.putExtra("ni_msgType", i);
            intent.putExtra("ni_protocolType", i2);
            intent.putExtra("ni_msg", str);
            LbsFlow.this.mLocalBroadcastManager.sendBroadcast(intent);
        }

        @Override // com.mediatek.lbs.em2.utils.AgpsDebugListener
        public void onToastMessageReceived(String str) {
            LbsFlow lbsFlow = LbsFlow.this;
            lbsFlow.toastCount++;
            lbsFlow.toast.setText("[" + LbsFlow.this.toastCount + "] " + str);
            LbsFlow.this.toast.show();
        }

        @Override // com.mediatek.lbs.em2.utils.AgpsDebugListener
        public void onViewMessageReceived(int i, String str) {
            LbsFlow.this.stringList.add("<font color='#" + Integer.toHexString(i & 16777215) + "'>" + LbsFlow.getTimeString() + " " + str + "</font><br>");
            Message messageObtain = Message.obtain();
            messageObtain.what = 0;
            LbsFlow.this.delayShowHandler.removeMessages(0);
            LbsFlow.this.delayShowHandler.sendMessageDelayed(messageObtain, 200L);
        }

        @Override // com.mediatek.lbs.em2.utils.AgpsDebugListener
        public void onVzwDebugMessageReceived(String str) {
            Intent intent = new Intent("com.mediatek.lbs.em2.action.debug_message");
            intent.setPackage("com.mediatek.lbs.em2.ui");
            intent.putExtra("vzw_dbg", str);
            LbsFlow.this.mLocalBroadcastManager.sendBroadcast(intent);
        }
    };

    static class DelayShowHandler extends Handler {
        protected StringList stringList;
        protected TextView textViewMessage;

        public DelayShowHandler(StringList stringList, TextView textView) {
            this.stringList = stringList;
            this.textViewMessage = textView;
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            this.textViewMessage.setText(Html.fromHtml(this.stringList.get()), TextView.BufferType.SPANNABLE);
        }
    }

    protected static String getTimeString() {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.setTimeInMillis(System.currentTimeMillis());
        return String.format(Locale.US, "%02d:%02d.%03d", Integer.valueOf(gregorianCalendar.get(12)), Integer.valueOf(gregorianCalendar.get(13)), Integer.valueOf(gregorianCalendar.get(14)));
    }

    protected static void log(Object obj) {
        Log.d("LocationEM", "" + obj);
    }

    protected static void loge(Object obj) {
        Log.d("LocationEM [agps] ERR: ", "" + obj);
        Toast toastMakeText = Toast.makeText(context, "ERR: " + obj, 1);
        toastMakeText.setGravity(17, 0, 0);
        toastMakeText.show();
    }

    protected void addOnClickListener() {
        this.buttonResetAgpsd.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsFlow.this.agpsInterface.resetAgpsd();
            }
        });
        this.buttonEmulatorMode.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsFlow.this.popupEmulatorMode.show();
            }
        });
        this.buttonTestCase.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.7
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsFlow.this.popupTestCase.show();
            }
        });
        this.buttonClearScreen.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.8
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsFlow.this.stringList.clear();
                LbsFlow lbsFlow = LbsFlow.this;
                lbsFlow.textViewMessage.setText(Html.fromHtml(lbsFlow.stringList.get()), TextView.BufferType.SPANNABLE);
            }
        });
    }

    protected void init() {
        context = getApplicationContext();
        this.stringList = new StringList(80);
        this.toast = Toast.makeText(context, "", 1);
        this.toastCount = 0;
        this.alert = new AlertDialog.Builder(this).setTitle("my title").setMessage("my content").setCancelable(false).setOnCancelListener(new DialogInterface.OnCancelListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsFlow.2
            @Override // android.content.DialogInterface.OnCancelListener
            public void onCancel(DialogInterface dialogInterface) {
            }
        }).setPositiveButton("OK", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsFlow.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
            }
        }).create();
    }

    protected void initAgpsInterface() {
        try {
            this.agpsInterface = new AgpsInterface();
        } catch (IOException e) {
            loge("agps interface connection failure");
            e.printStackTrace();
        }
    }

    protected void initDebugInterface() {
        try {
            this.debugInterface = new AgpsDebugInterface(this.debugListener);
        } catch (IOException e) {
            loge("agps debug interface connection failure");
            e.printStackTrace();
        }
    }

    protected void initPopupMenu() {
        PopupMenu popupMenu = new PopupMenu(this, this.buttonEmulatorMode);
        this.popupEmulatorMode = popupMenu;
        popupMenu.getMenu().add(0, 0, 0, "Off");
        this.popupEmulatorMode.getMenu().add(0, 1, 0, "On");
        this.popupEmulatorMode.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.3
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                LbsFlow.this.agpsInterface.startEmulatorMode(menuItem.getItemId());
                return false;
            }
        });
        PopupMenu popupMenu2 = new PopupMenu(this, this.buttonEmulatorMode);
        this.popupTestCase = popupMenu2;
        popupMenu2.getMenu().add(0, 0, 0, "All TC Loop 1");
        this.popupTestCase.getMenu().add(0, 1, 0, "All TC Loop 2");
        this.popupTestCase.getMenu().add(0, 2, 0, "All TC Loop 1000");
        this.popupTestCase.getMenu().add(0, 3, 0, "All Common TC");
        this.popupTestCase.getMenu().add(0, 4, 0, "All UP TC");
        this.popupTestCase.getMenu().add(0, 5, 0, "All CP TC");
        this.popupTestCase.getMenu().add(0, 6, 0, "All EVDO TC");
        this.popupTestCase.getMenu().add(0, 7, 0, "Partial TC 1");
        this.popupTestCase.getMenu().add(0, 8, 0, "Partial TC 2");
        this.popupTestCase.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsFlow.4
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                LbsFlow.this.agpsInterface.testCase(menuItem.getItemId());
                return false;
            }
        });
    }

    protected void initUI() {
        this.layoutDebug = (LinearLayout) findViewById(R.id.LinearLayout_Debug);
        this.buttonResetAgpsd = (Button) findViewById(R.id.Button_ResetAgpsd);
        this.buttonEmulatorMode = (Button) findViewById(R.id.Button_EmulatorMode);
        this.buttonTestCase = (Button) findViewById(R.id.Button_TestCase);
        this.buttonClearScreen = (Button) findViewById(R.id.Button_ClearScreen);
        this.textViewMessage = (TextView) findViewById(R.id.TextView_Message);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mLocalBroadcastManager = LocalBroadcastManager.getInstance(this);
        try {
            initAgpsInterface();
            this.mAgpsdExisted = true;
            setContentView(R.layout.flow);
            init();
            initUI();
            initPopupMenu();
            addOnClickListener();
            setLayoutDependency();
            initDebugInterface();
            this.delayShowHandler = new DelayShowHandler(this.stringList, this.textViewMessage);
        } catch (RuntimeException unused) {
            log("Failed to check agps version mAgpsdExisted=" + this.mAgpsdExisted);
        }
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        AgpsDebugInterface agpsDebugInterface = this.debugInterface;
        if (agpsDebugInterface != null) {
            agpsDebugInterface.removeListener();
        }
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        if (this.mAgpsdExisted) {
            setLayoutDependency();
        }
    }

    protected void setLayoutDependency() {
        setVisibility(this.layoutDebug, LbsUtility.isDebugModeEnabled(this));
    }

    protected void setVisibility(View view, boolean z) {
        if (z) {
            view.setVisibility(0);
        } else {
            view.setVisibility(8);
        }
    }
}
