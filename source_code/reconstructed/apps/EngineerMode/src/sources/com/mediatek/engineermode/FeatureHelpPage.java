package com.mediatek.engineermode;

import android.app.Activity;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.widget.TextView;

/* JADX INFO: loaded from: classes2.dex */
public class FeatureHelpPage extends Activity {
    public static final String HELP_MESSAGE_KEY = "helpMessage";
    public static final String HELP_TITLE_KEY = "helpTitle";

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.help_page);
        Intent intent = getIntent();
        Resources resources = getResources();
        String string = "";
        String string2 = "";
        if (intent != null) {
            string = resources.getString(intent.getIntExtra(HELP_TITLE_KEY, R.string.help));
            string2 = resources.getString(intent.getIntExtra(HELP_MESSAGE_KEY, R.string.help));
        }
        ((TextView) findViewById(R.id.textview_title)).setText(string);
        TextView textView = (TextView) findViewById(R.id.textview_help);
        textView.setText(string2);
        textView.setHorizontallyScrolling(false);
        textView.setMovementMethod(ScrollingMovementMethod.getInstance());
    }
}
