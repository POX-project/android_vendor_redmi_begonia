package android.support.v4.media.session;

import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.app.BundleCompat;
import android.support.v4.media.SessionToken2;

/* JADX INFO: loaded from: classes.dex */
public final class MediaSessionCompat$Token implements Parcelable {
    public static final Parcelable.Creator<MediaSessionCompat$Token> CREATOR = new Parcelable.Creator<MediaSessionCompat$Token>() { // from class: android.support.v4.media.session.MediaSessionCompat$Token.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MediaSessionCompat$Token createFromParcel(Parcel parcel) {
            return new MediaSessionCompat$Token(Build.VERSION.SDK_INT >= 21 ? parcel.readParcelable(null) : parcel.readStrongBinder());
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MediaSessionCompat$Token[] newArray(int i) {
            return new MediaSessionCompat$Token[i];
        }
    };
    private IMediaSession mExtraBinder;
    private final Object mInner;

    MediaSessionCompat$Token(Object obj) {
        this(obj, null, null);
    }

    MediaSessionCompat$Token(Object obj, IMediaSession iMediaSession, SessionToken2 sessionToken2) {
        this.mInner = obj;
        this.mExtraBinder = iMediaSession;
    }

    public static MediaSessionCompat$Token fromBundle(Bundle bundle) {
        if (bundle == null) {
            return null;
        }
        IMediaSession iMediaSessionAsInterface = IMediaSession.Stub.asInterface(BundleCompat.getBinder(bundle, "android.support.v4.media.session.EXTRA_BINDER"));
        SessionToken2 sessionToken2FromBundle = SessionToken2.fromBundle(bundle.getBundle("android.support.v4.media.session.SESSION_TOKEN2"));
        MediaSessionCompat$Token mediaSessionCompat$Token = (MediaSessionCompat$Token) bundle.getParcelable("android.support.v4.media.session.TOKEN");
        if (mediaSessionCompat$Token == null) {
            return null;
        }
        return new MediaSessionCompat$Token(mediaSessionCompat$Token.mInner, iMediaSessionAsInterface, sessionToken2FromBundle);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof MediaSessionCompat$Token)) {
            return false;
        }
        MediaSessionCompat$Token mediaSessionCompat$Token = (MediaSessionCompat$Token) obj;
        Object obj2 = this.mInner;
        if (obj2 == null) {
            return mediaSessionCompat$Token.mInner == null;
        }
        Object obj3 = mediaSessionCompat$Token.mInner;
        if (obj3 == null) {
            return false;
        }
        return obj2.equals(obj3);
    }

    public IMediaSession getExtraBinder() {
        return this.mExtraBinder;
    }

    public int hashCode() {
        Object obj = this.mInner;
        if (obj == null) {
            return 0;
        }
        return obj.hashCode();
    }

    public void setExtraBinder(IMediaSession iMediaSession) {
        this.mExtraBinder = iMediaSession;
    }

    public void setSessionToken2(SessionToken2 sessionToken2) {
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (Build.VERSION.SDK_INT >= 21) {
            parcel.writeParcelable((Parcelable) this.mInner, i);
        } else {
            parcel.writeStrongBinder((IBinder) this.mInner);
        }
    }
}
