package com.mediatek.ims.config;

import android.content.Context;
import android.database.ContentObserver;
import android.net.Uri;
import android.os.Handler;
import android.os.HandlerThread;
import java.util.HashSet;

/* JADX INFO: loaded from: classes.dex */
public abstract class Register {
    protected String argType;
    protected IArgsChangeListener mArgsListener;
    protected ArgsObserver mArgsObserver;
    protected Context mContext;
    private Handler mHandler;
    private HandlerThread mHandlerThread;
    protected int mPhoneId;
    protected HashSet<Integer> mRegArgs;

    public class ArgsObserver extends ContentObserver {
        private IArgsChangeListener mArgsObserver;

        public ArgsObserver(IArgsChangeListener iArgsChangeListener) {
            super(Register.this.mHandler);
            this.mArgsObserver = null;
            this.mArgsObserver = iArgsChangeListener;
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean z) {
            onChange(z, null);
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean z, Uri uri) {
            if (uri == null) {
                return;
            }
            String str = Register.this.argType;
            byte b = -1;
            int iHashCode = str.hashCode();
            if (iHashCode != -1354792126) {
                if (iHashCode == -979207434 && str.equals("feature")) {
                    b = 1;
                }
            } else if (str.equals("config")) {
                b = 0;
            }
            if (b == 0) {
                this.mArgsObserver.onChange(ImsConfigContract.configNameToId(uri.getLastPathSegment()));
            } else if (b == 1) {
                this.mArgsObserver.onChange(Integer.parseInt(uri.getPathSegments().get(2)));
            } else {
                throw new RuntimeException("Invalid Register class: " + Register.this.argType);
            }
        }
    }

    public interface IArgsChangeListener {
        void onChange(int i);
    }

    private Register() {
        this.argType = null;
        this.mRegArgs = new HashSet<>();
        this.mContext = null;
        this.mArgsListener = null;
        this.mArgsObserver = null;
        this.mHandler = null;
        this.mHandlerThread = null;
    }

    public Register(Context context, int i) {
        this(context, i, null);
    }

    public Register(Context context, int i, Handler handler) {
        this.argType = null;
        this.mRegArgs = new HashSet<>();
        this.mContext = null;
        this.mArgsListener = null;
        this.mArgsObserver = null;
        this.mHandler = null;
        this.mHandlerThread = null;
        this.mContext = context;
        this.mPhoneId = i;
        if (context == null) {
            throw new IllegalArgumentException("Null context!");
        }
        if (handler != null) {
            this.mHandler = handler;
            return;
        }
        HandlerThread handlerThread = new HandlerThread("Ims" + this.argType + "Reg");
        this.mHandlerThread = handlerThread;
        handlerThread.start();
        this.mHandler = new Handler(this.mHandlerThread.getLooper());
    }

    public Register addArg(int i) throws IllegalArgumentException {
        this.mRegArgs.add(Integer.valueOf(i));
        return this;
    }

    public void register(IArgsChangeListener iArgsChangeListener) throws IllegalArgumentException {
        this.mArgsListener = iArgsChangeListener;
        if (this.mRegArgs.isEmpty()) {
            throw new IllegalArgumentException("Empty " + this.argType + " for register");
        }
        if (iArgsChangeListener != null) {
            this.mArgsObserver = new ArgsObserver(this.mArgsListener);
            return;
        }
        throw new IllegalArgumentException("Null listener for " + this.argType + " register");
    }

    public void unregister() {
        if (this.mArgsObserver != null) {
            this.mContext.getContentResolver().unregisterContentObserver(this.mArgsObserver);
        }
    }
}
