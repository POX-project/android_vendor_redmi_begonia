package android.support.v4.os;

/* JADX INFO: loaded from: classes2.dex */
public class OperationCanceledException extends RuntimeException {
    public OperationCanceledException() {
        this(null);
    }

    public OperationCanceledException(String str) {
        super(str != null ? str : "The operation has been canceled.");
    }
}
