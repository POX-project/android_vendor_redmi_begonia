package android.support.v4.view;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class ViewPager$SavedState extends AbsSavedState {
    public static final Parcelable.Creator<ViewPager$SavedState> CREATOR = new Parcelable.ClassLoaderCreator<ViewPager$SavedState>() { // from class: android.support.v4.view.ViewPager$SavedState.1
        @Override // android.os.Parcelable.Creator
        public ViewPager$SavedState createFromParcel(Parcel parcel) {
            return new ViewPager$SavedState(parcel, null);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.ClassLoaderCreator
        public ViewPager$SavedState createFromParcel(Parcel parcel, ClassLoader classLoader) {
            return new ViewPager$SavedState(parcel, classLoader);
        }

        @Override // android.os.Parcelable.Creator
        public ViewPager$SavedState[] newArray(int i) {
            return new ViewPager$SavedState[i];
        }
    };
    Parcelable adapterState;
    int position;

    ViewPager$SavedState(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        classLoader = classLoader == null ? ViewPager$SavedState.class.getClassLoader() : classLoader;
        this.position = parcel.readInt();
        this.adapterState = parcel.readParcelable(classLoader);
    }

    public String toString() {
        return "FragmentPager.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " position=" + this.position + "}";
    }

    @Override // android.support.v4.view.AbsSavedState, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeInt(this.position);
        parcel.writeParcelable(this.adapterState, i);
    }
}
