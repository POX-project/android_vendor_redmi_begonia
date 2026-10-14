package android.support.v4.text.util;

import android.support.v4.os.BuildCompat;
import android.support.v4.util.PatternsCompat;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.method.LinkMovementMethod;
import android.text.method.MovementMethod;
import android.text.style.URLSpan;
import android.text.util.Linkify;
import android.webkit.WebView;
import android.widget.TextView;
import java.io.UnsupportedEncodingException;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public final class LinkifyCompat {
    private static final String[] EMPTY_STRING = new String[0];
    private static final Comparator<LinkSpec> COMPARATOR = new Comparator<LinkSpec>() { // from class: android.support.v4.text.util.LinkifyCompat.1
        @Override // java.util.Comparator
        public int compare(LinkSpec linkSpec, LinkSpec linkSpec2) {
            if (linkSpec.start < linkSpec2.start) {
                return -1;
            }
            if (linkSpec.start <= linkSpec2.start && linkSpec.end >= linkSpec2.end) {
                return linkSpec.end > linkSpec2.end ? -1 : 0;
            }
            return 1;
        }
    };

    private static class LinkSpec {
        int end;
        URLSpan frameworkAddedSpan;
        int start;
        String url;

        LinkSpec() {
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface LinkifyMask {
    }

    private LinkifyCompat() {
    }

    private static void addLinkMovementMethod(TextView textView) {
        MovementMethod movementMethod = textView.getMovementMethod();
        if ((movementMethod == null || !(movementMethod instanceof LinkMovementMethod)) && textView.getLinksClickable()) {
            textView.setMovementMethod(LinkMovementMethod.getInstance());
        }
    }

    public static void addLinks(TextView textView, Pattern pattern, String str) {
        if (shouldAddLinksFallbackToFramework()) {
            Linkify.addLinks(textView, pattern, str);
        } else {
            addLinks(textView, pattern, str, (String[]) null, (Linkify.MatchFilter) null, (Linkify.TransformFilter) null);
        }
    }

    public static void addLinks(TextView textView, Pattern pattern, String str, Linkify.MatchFilter matchFilter, Linkify.TransformFilter transformFilter) {
        if (shouldAddLinksFallbackToFramework()) {
            Linkify.addLinks(textView, pattern, str, matchFilter, transformFilter);
        } else {
            addLinks(textView, pattern, str, (String[]) null, matchFilter, transformFilter);
        }
    }

    public static void addLinks(TextView textView, Pattern pattern, String str, String[] strArr, Linkify.MatchFilter matchFilter, Linkify.TransformFilter transformFilter) {
        if (shouldAddLinksFallbackToFramework()) {
            Linkify.addLinks(textView, pattern, str, strArr, matchFilter, transformFilter);
            return;
        }
        SpannableString spannableStringValueOf = SpannableString.valueOf(textView.getText());
        if (addLinks(spannableStringValueOf, pattern, str, strArr, matchFilter, transformFilter)) {
            textView.setText(spannableStringValueOf);
            addLinkMovementMethod(textView);
        }
    }

    public static boolean addLinks(Spannable spannable, int i) {
        if (shouldAddLinksFallbackToFramework()) {
            return Linkify.addLinks(spannable, i);
        }
        if (i == 0) {
            return false;
        }
        URLSpan[] uRLSpanArr = (URLSpan[]) spannable.getSpans(0, spannable.length(), URLSpan.class);
        for (int length = uRLSpanArr.length - 1; length >= 0; length--) {
            spannable.removeSpan(uRLSpanArr[length]);
        }
        if ((i & 4) != 0) {
            Linkify.addLinks(spannable, 4);
        }
        ArrayList<LinkSpec> arrayList = new ArrayList();
        if ((i & 1) != 0) {
            gatherLinks(arrayList, spannable, PatternsCompat.AUTOLINK_WEB_URL, new String[]{"http://", "https://", "rtsp://"}, Linkify.sUrlMatchFilter, null);
        }
        if ((i & 2) != 0) {
            gatherLinks(arrayList, spannable, PatternsCompat.AUTOLINK_EMAIL_ADDRESS, new String[]{"mailto:"}, null, null);
        }
        if ((i & 8) != 0) {
            gatherMapLinks(arrayList, spannable);
        }
        pruneOverlaps(arrayList, spannable);
        if (arrayList.size() == 0) {
            return false;
        }
        for (LinkSpec linkSpec : arrayList) {
            if (linkSpec.frameworkAddedSpan == null) {
                applyLink(linkSpec.url, linkSpec.start, linkSpec.end, spannable);
            }
        }
        return true;
    }

    public static boolean addLinks(Spannable spannable, Pattern pattern, String str) {
        return shouldAddLinksFallbackToFramework() ? Linkify.addLinks(spannable, pattern, str) : addLinks(spannable, pattern, str, (String[]) null, (Linkify.MatchFilter) null, (Linkify.TransformFilter) null);
    }

    public static boolean addLinks(Spannable spannable, Pattern pattern, String str, Linkify.MatchFilter matchFilter, Linkify.TransformFilter transformFilter) {
        return shouldAddLinksFallbackToFramework() ? Linkify.addLinks(spannable, pattern, str, matchFilter, transformFilter) : addLinks(spannable, pattern, str, (String[]) null, matchFilter, transformFilter);
    }

    public static boolean addLinks(Spannable spannable, Pattern pattern, String str, String[] strArr, Linkify.MatchFilter matchFilter, Linkify.TransformFilter transformFilter) {
        if (shouldAddLinksFallbackToFramework()) {
            return Linkify.addLinks(spannable, pattern, str, strArr, matchFilter, transformFilter);
        }
        if (str == null) {
            str = "";
        }
        if (strArr == null || strArr.length < 1) {
            strArr = EMPTY_STRING;
        }
        String[] strArr2 = new String[strArr.length + 1];
        strArr2[0] = str.toLowerCase(Locale.ROOT);
        for (int i = 0; i < strArr.length; i++) {
            String str2 = strArr[i];
            strArr2[i + 1] = str2 == null ? "" : str2.toLowerCase(Locale.ROOT);
        }
        boolean z = false;
        Matcher matcher = pattern.matcher(spannable);
        while (matcher.find()) {
            int iStart = matcher.start();
            int iEnd = matcher.end();
            if (matchFilter != null ? matchFilter.acceptMatch(spannable, iStart, iEnd) : true) {
                applyLink(makeUrl(matcher.group(0), strArr2, matcher, transformFilter), iStart, iEnd, spannable);
                z = true;
            }
        }
        return z;
    }

    public static boolean addLinks(TextView textView, int i) {
        if (shouldAddLinksFallbackToFramework()) {
            return Linkify.addLinks(textView, i);
        }
        if (i == 0) {
            return false;
        }
        CharSequence text = textView.getText();
        if (text instanceof Spannable) {
            if (!addLinks((Spannable) text, i)) {
                return false;
            }
            addLinkMovementMethod(textView);
            return true;
        }
        SpannableString spannableStringValueOf = SpannableString.valueOf(text);
        if (!addLinks(spannableStringValueOf, i)) {
            return false;
        }
        addLinkMovementMethod(textView);
        textView.setText(spannableStringValueOf);
        return true;
    }

    private static void applyLink(String str, int i, int i2, Spannable spannable) {
        spannable.setSpan(new URLSpan(str), i, i2, 33);
    }

    private static String findAddress(String str) {
        return BuildCompat.isAtLeastP() ? WebView.findAddress(str) : FindAddress.findAddress(str);
    }

    private static void gatherLinks(ArrayList<LinkSpec> arrayList, Spannable spannable, Pattern pattern, String[] strArr, Linkify.MatchFilter matchFilter, Linkify.TransformFilter transformFilter) {
        Matcher matcher = pattern.matcher(spannable);
        while (matcher.find()) {
            int iStart = matcher.start();
            int iEnd = matcher.end();
            if (matchFilter == null || matchFilter.acceptMatch(spannable, iStart, iEnd)) {
                LinkSpec linkSpec = new LinkSpec();
                linkSpec.url = makeUrl(matcher.group(0), strArr, matcher, transformFilter);
                linkSpec.start = iStart;
                linkSpec.end = iEnd;
                arrayList.add(linkSpec);
            }
        }
    }

    private static void gatherMapLinks(ArrayList<LinkSpec> arrayList, Spannable spannable) {
        int iIndexOf;
        String string = spannable.toString();
        int i = 0;
        while (true) {
            try {
                String strFindAddress = findAddress(string);
                if (strFindAddress != null && (iIndexOf = string.indexOf(strFindAddress)) >= 0) {
                    LinkSpec linkSpec = new LinkSpec();
                    int length = iIndexOf + strFindAddress.length();
                    linkSpec.start = i + iIndexOf;
                    linkSpec.end = i + length;
                    string = string.substring(length);
                    i += length;
                    try {
                        linkSpec.url = "geo:0,0?q=" + URLEncoder.encode(strFindAddress, "UTF-8");
                        arrayList.add(linkSpec);
                    } catch (UnsupportedEncodingException e) {
                    }
                }
                return;
            } catch (UnsupportedOperationException e2) {
                return;
            }
        }
    }

    private static String makeUrl(String str, String[] strArr, Matcher matcher, Linkify.TransformFilter transformFilter) {
        if (transformFilter != null) {
            str = transformFilter.transformUrl(matcher, str);
        }
        boolean z = false;
        for (int i = 0; i < strArr.length; i++) {
            if (str.regionMatches(true, 0, strArr[i], 0, strArr[i].length())) {
                z = true;
                if (!str.regionMatches(false, 0, strArr[i], 0, strArr[i].length())) {
                    str = strArr[i] + str.substring(strArr[i].length());
                    break;
                }
                break;
            }
        }
        if (z || strArr.length <= 0) {
            return str;
        }
        return strArr[0] + str;
    }

    private static void pruneOverlaps(ArrayList<LinkSpec> arrayList, Spannable spannable) {
        URLSpan[] uRLSpanArr = (URLSpan[]) spannable.getSpans(0, spannable.length(), URLSpan.class);
        for (int i = 0; i < uRLSpanArr.length; i++) {
            LinkSpec linkSpec = new LinkSpec();
            linkSpec.frameworkAddedSpan = uRLSpanArr[i];
            linkSpec.start = spannable.getSpanStart(uRLSpanArr[i]);
            linkSpec.end = spannable.getSpanEnd(uRLSpanArr[i]);
            arrayList.add(linkSpec);
        }
        Collections.sort(arrayList, COMPARATOR);
        int size = arrayList.size();
        int i2 = 0;
        while (i2 < size - 1) {
            LinkSpec linkSpec2 = arrayList.get(i2);
            LinkSpec linkSpec3 = arrayList.get(i2 + 1);
            int i3 = -1;
            if (linkSpec2.start <= linkSpec3.start && linkSpec2.end > linkSpec3.start) {
                if (linkSpec3.end <= linkSpec2.end || linkSpec2.end - linkSpec2.start > linkSpec3.end - linkSpec3.start) {
                    i3 = i2 + 1;
                } else if (linkSpec2.end - linkSpec2.start < linkSpec3.end - linkSpec3.start) {
                    i3 = i2;
                }
                if (i3 != -1) {
                    Object obj = arrayList.get(i3).frameworkAddedSpan;
                    if (obj != null) {
                        spannable.removeSpan(obj);
                    }
                    arrayList.remove(i3);
                    size--;
                }
            }
            i2++;
        }
    }

    private static boolean shouldAddLinksFallbackToFramework() {
        return BuildCompat.isAtLeastP();
    }
}
