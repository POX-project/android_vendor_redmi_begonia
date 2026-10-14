package com.mediatek.common.jpe;

/* JADX INFO: loaded from: classes.dex */
public class JpeException extends SecurityException {
    private String errorMessage;

    public JpeException(String str) {
        super(str, null);
        this.errorMessage = null;
        this.errorMessage = str;
    }

    @Override // java.lang.Throwable
    public String getMessage() {
        StringBuffer stringBuffer = new StringBuffer();
        if (this.errorMessage != null) {
            stringBuffer.append("error - ").append(this.errorMessage).append("\n");
        } else {
            stringBuffer.append(super.getMessage());
        }
        return stringBuffer.toString();
    }
}
