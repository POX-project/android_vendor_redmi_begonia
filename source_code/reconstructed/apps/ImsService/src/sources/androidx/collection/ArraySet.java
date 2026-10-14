package androidx.collection;

import java.lang.reflect.Array;
import java.util.Collection;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public final class ArraySet<E> implements Collection<E>, Set<E> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean DEBUG = false;
    private static final String TAG = "ArraySet";
    private static Object[] sBaseCache;
    private static int sBaseCacheSize;
    private static Object[] sTwiceBaseCache;
    private static int sTwiceBaseCacheSize;
    Object[] mArray;
    private int[] mHashes;
    int mSize;
    private static final Object sBaseCacheLock = new Object();
    private static final Object sTwiceBaseCacheLock = new Object();

    private class ElementIterator extends IndexBasedArrayIterator<E> {
        ElementIterator() {
            super(ArraySet.this.mSize);
        }

        @Override // androidx.collection.IndexBasedArrayIterator
        protected E elementAt(int i) {
            return (E) ArraySet.this.valueAt(i);
        }

        @Override // androidx.collection.IndexBasedArrayIterator
        protected void removeAt(int i) {
            ArraySet.this.removeAt(i);
        }
    }

    public ArraySet() {
        this(0);
    }

    public ArraySet(int i) {
        if (i == 0) {
            this.mHashes = ContainerHelpers.EMPTY_INTS;
            this.mArray = ContainerHelpers.EMPTY_OBJECTS;
        } else {
            allocArrays(i);
        }
        this.mSize = 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ArraySet(ArraySet<E> arraySet) {
        this();
        if (arraySet != 0) {
            addAll((ArraySet) arraySet);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ArraySet(Collection<E> collection) {
        this();
        if (collection != 0) {
            addAll(collection);
        }
    }

    private void allocArrays(int i) {
        if (i == 8) {
            synchronized (sTwiceBaseCacheLock) {
                if (sTwiceBaseCache != null) {
                    Object[] objArr = sTwiceBaseCache;
                    try {
                        this.mArray = objArr;
                        sTwiceBaseCache = (Object[]) objArr[0];
                        int[] iArr = (int[]) objArr[1];
                        this.mHashes = iArr;
                        if (iArr != null) {
                            objArr[1] = null;
                            objArr[0] = null;
                            sTwiceBaseCacheSize--;
                            return;
                        }
                    } catch (ClassCastException e) {
                    }
                    System.out.println("ArraySet Found corrupt ArraySet cache: [0]=" + objArr[0] + " [1]=" + objArr[1]);
                    sTwiceBaseCache = null;
                    sTwiceBaseCacheSize = 0;
                }
            }
        } else if (i == 4) {
            synchronized (sBaseCacheLock) {
                if (sBaseCache != null) {
                    Object[] objArr2 = sBaseCache;
                    try {
                        this.mArray = objArr2;
                        sBaseCache = (Object[]) objArr2[0];
                        int[] iArr2 = (int[]) objArr2[1];
                        this.mHashes = iArr2;
                        if (iArr2 != null) {
                            objArr2[1] = null;
                            objArr2[0] = null;
                            sBaseCacheSize--;
                            return;
                        }
                    } catch (ClassCastException e2) {
                    }
                    System.out.println("ArraySet Found corrupt ArraySet cache: [0]=" + objArr2[0] + " [1]=" + objArr2[1]);
                    sBaseCache = null;
                    sBaseCacheSize = 0;
                }
            }
        }
        this.mHashes = new int[i];
        this.mArray = new Object[i];
    }

    private int binarySearch(int i) {
        try {
            return ContainerHelpers.binarySearch(this.mHashes, this.mSize, i);
        } catch (ArrayIndexOutOfBoundsException e) {
            throw new ConcurrentModificationException();
        }
    }

    private static void freeArrays(int[] iArr, Object[] objArr, int i) {
        if (iArr.length == 8) {
            synchronized (sTwiceBaseCacheLock) {
                if (sTwiceBaseCacheSize < 10) {
                    objArr[0] = sTwiceBaseCache;
                    objArr[1] = iArr;
                    for (int i2 = i - 1; i2 >= 2; i2--) {
                        objArr[i2] = null;
                    }
                    sTwiceBaseCache = objArr;
                    sTwiceBaseCacheSize++;
                }
            }
            return;
        }
        if (iArr.length == 4) {
            synchronized (sBaseCacheLock) {
                if (sBaseCacheSize < 10) {
                    objArr[0] = sBaseCache;
                    objArr[1] = iArr;
                    for (int i3 = i - 1; i3 >= 2; i3--) {
                        objArr[i3] = null;
                    }
                    sBaseCache = objArr;
                    sBaseCacheSize++;
                }
            }
        }
    }

    private int indexOf(Object obj, int i) {
        int i2 = this.mSize;
        if (i2 == 0) {
            return -1;
        }
        int iBinarySearch = binarySearch(i);
        if (iBinarySearch < 0 || obj.equals(this.mArray[iBinarySearch])) {
            return iBinarySearch;
        }
        int i3 = iBinarySearch + 1;
        while (i3 < i2 && this.mHashes[i3] == i) {
            if (obj.equals(this.mArray[i3])) {
                return i3;
            }
            i3++;
        }
        for (int i4 = iBinarySearch - 1; i4 >= 0 && this.mHashes[i4] == i; i4--) {
            if (obj.equals(this.mArray[i4])) {
                return i4;
            }
        }
        return ~i3;
    }

    private int indexOfNull() {
        int i = this.mSize;
        if (i == 0) {
            return -1;
        }
        int iBinarySearch = binarySearch(0);
        if (iBinarySearch < 0 || this.mArray[iBinarySearch] == null) {
            return iBinarySearch;
        }
        int i2 = iBinarySearch + 1;
        while (i2 < i && this.mHashes[i2] == 0) {
            if (this.mArray[i2] == null) {
                return i2;
            }
            i2++;
        }
        for (int i3 = iBinarySearch - 1; i3 >= 0 && this.mHashes[i3] == 0; i3--) {
            if (this.mArray[i3] == null) {
                return i3;
            }
        }
        return ~i2;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean add(E e) {
        int iHashCode;
        int iIndexOf;
        int i = this.mSize;
        if (e == null) {
            iHashCode = 0;
            iIndexOf = indexOfNull();
        } else {
            iHashCode = e.hashCode();
            iIndexOf = indexOf(e, iHashCode);
        }
        if (iIndexOf >= 0) {
            return DEBUG;
        }
        int i2 = ~iIndexOf;
        if (i >= this.mHashes.length) {
            int i3 = 4;
            if (i >= 8) {
                i3 = (i >> 1) + i;
            } else if (i >= 4) {
                i3 = 8;
            }
            int[] iArr = this.mHashes;
            Object[] objArr = this.mArray;
            allocArrays(i3);
            if (i != this.mSize) {
                throw new ConcurrentModificationException();
            }
            int[] iArr2 = this.mHashes;
            if (iArr2.length > 0) {
                System.arraycopy(iArr, 0, iArr2, 0, iArr.length);
                System.arraycopy(objArr, 0, this.mArray, 0, objArr.length);
            }
            freeArrays(iArr, objArr, i);
        }
        if (i2 < i) {
            int[] iArr3 = this.mHashes;
            System.arraycopy(iArr3, i2, iArr3, i2 + 1, i - i2);
            Object[] objArr2 = this.mArray;
            System.arraycopy(objArr2, i2, objArr2, i2 + 1, i - i2);
        }
        int i4 = this.mSize;
        if (i == i4) {
            int[] iArr4 = this.mHashes;
            if (i2 < iArr4.length) {
                iArr4[i2] = iHashCode;
                this.mArray[i2] = e;
                this.mSize = i4 + 1;
                return true;
            }
        }
        throw new ConcurrentModificationException();
    }

    public void addAll(ArraySet<? extends E> arraySet) {
        int i = arraySet.mSize;
        ensureCapacity(this.mSize + i);
        if (this.mSize != 0) {
            for (int i2 = 0; i2 < i; i2++) {
                add(arraySet.valueAt(i2));
            }
            return;
        }
        if (i > 0) {
            System.arraycopy(arraySet.mHashes, 0, this.mHashes, 0, i);
            System.arraycopy(arraySet.mArray, 0, this.mArray, 0, i);
            if (this.mSize != 0) {
                throw new ConcurrentModificationException();
            }
            this.mSize = i;
        }
    }

    @Override // java.util.Collection, java.util.Set
    public boolean addAll(Collection<? extends E> collection) {
        ensureCapacity(this.mSize + collection.size());
        boolean zAdd = DEBUG;
        Iterator<? extends E> it = collection.iterator();
        while (it.hasNext()) {
            zAdd |= add(it.next());
        }
        return zAdd;
    }

    @Override // java.util.Collection, java.util.Set
    public void clear() {
        if (this.mSize != 0) {
            int[] iArr = this.mHashes;
            Object[] objArr = this.mArray;
            int i = this.mSize;
            this.mHashes = ContainerHelpers.EMPTY_INTS;
            this.mArray = ContainerHelpers.EMPTY_OBJECTS;
            this.mSize = 0;
            freeArrays(iArr, objArr, i);
        }
        if (this.mSize != 0) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.Collection, java.util.Set
    public boolean contains(Object obj) {
        if (indexOf(obj) >= 0) {
            return true;
        }
        return DEBUG;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean containsAll(Collection<?> collection) {
        Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            if (!contains(it.next())) {
                return DEBUG;
            }
        }
        return true;
    }

    public void ensureCapacity(int i) {
        int i2 = this.mSize;
        if (this.mHashes.length < i) {
            int[] iArr = this.mHashes;
            Object[] objArr = this.mArray;
            allocArrays(i);
            int i3 = this.mSize;
            if (i3 > 0) {
                System.arraycopy(iArr, 0, this.mHashes, 0, i3);
                System.arraycopy(objArr, 0, this.mArray, 0, this.mSize);
            }
            freeArrays(iArr, objArr, this.mSize);
        }
        if (this.mSize != i2) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.Collection, java.util.Set
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Set)) {
            return DEBUG;
        }
        Set set = (Set) obj;
        if (size() != set.size()) {
            return DEBUG;
        }
        for (int i = 0; i < this.mSize; i++) {
            try {
                if (!set.contains(valueAt(i))) {
                    return DEBUG;
                }
            } catch (ClassCastException e) {
                return DEBUG;
            } catch (NullPointerException e2) {
                return DEBUG;
            }
        }
        return true;
    }

    @Override // java.util.Collection, java.util.Set
    public int hashCode() {
        int[] iArr = this.mHashes;
        int i = 0;
        int i2 = this.mSize;
        for (int i3 = 0; i3 < i2; i3++) {
            i += iArr[i3];
        }
        return i;
    }

    public int indexOf(Object obj) {
        return obj == null ? indexOfNull() : indexOf(obj, obj.hashCode());
    }

    @Override // java.util.Collection, java.util.Set
    public boolean isEmpty() {
        if (this.mSize <= 0) {
            return true;
        }
        return DEBUG;
    }

    @Override // java.util.Collection, java.lang.Iterable, java.util.Set
    public Iterator<E> iterator() {
        return new ElementIterator();
    }

    @Override // java.util.Collection, java.util.Set
    public boolean remove(Object obj) {
        int iIndexOf = indexOf(obj);
        if (iIndexOf < 0) {
            return DEBUG;
        }
        removeAt(iIndexOf);
        return true;
    }

    public boolean removeAll(ArraySet<? extends E> arraySet) {
        int i = arraySet.mSize;
        int i2 = this.mSize;
        for (int i3 = 0; i3 < i; i3++) {
            remove(arraySet.valueAt(i3));
        }
        if (i2 != this.mSize) {
            return true;
        }
        return DEBUG;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean removeAll(Collection<?> collection) {
        boolean zRemove = DEBUG;
        Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            zRemove |= remove(it.next());
        }
        return zRemove;
    }

    public E removeAt(int i) {
        int i2;
        int i3 = this.mSize;
        E e = (E) this.mArray[i];
        if (i3 <= 1) {
            clear();
        } else {
            int i4 = i3 - 1;
            int[] iArr = this.mHashes;
            if (iArr.length <= 8 || (i2 = this.mSize) >= iArr.length / 3) {
                if (i < i4) {
                    int[] iArr2 = this.mHashes;
                    System.arraycopy(iArr2, i + 1, iArr2, i, i4 - i);
                    Object[] objArr = this.mArray;
                    System.arraycopy(objArr, i + 1, objArr, i, i4 - i);
                }
                this.mArray[i4] = null;
            } else {
                int i5 = i2 > 8 ? i2 + (i2 >> 1) : 8;
                int[] iArr3 = this.mHashes;
                Object[] objArr2 = this.mArray;
                allocArrays(i5);
                if (i > 0) {
                    System.arraycopy(iArr3, 0, this.mHashes, 0, i);
                    System.arraycopy(objArr2, 0, this.mArray, 0, i);
                }
                if (i < i4) {
                    System.arraycopy(iArr3, i + 1, this.mHashes, i, i4 - i);
                    System.arraycopy(objArr2, i + 1, this.mArray, i, i4 - i);
                }
            }
            if (i3 != this.mSize) {
                throw new ConcurrentModificationException();
            }
            this.mSize = i4;
        }
        return e;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean retainAll(Collection<?> collection) {
        boolean z = DEBUG;
        for (int i = this.mSize - 1; i >= 0; i--) {
            if (!collection.contains(this.mArray[i])) {
                removeAt(i);
                z = true;
            }
        }
        return z;
    }

    @Override // java.util.Collection, java.util.Set
    public int size() {
        return this.mSize;
    }

    @Override // java.util.Collection, java.util.Set
    public Object[] toArray() {
        int i = this.mSize;
        Object[] objArr = new Object[i];
        System.arraycopy(this.mArray, 0, objArr, 0, i);
        return objArr;
    }

    @Override // java.util.Collection, java.util.Set
    public <T> T[] toArray(T[] tArr) {
        if (tArr.length < this.mSize) {
            tArr = (T[]) ((Object[]) Array.newInstance(tArr.getClass().getComponentType(), this.mSize));
        }
        System.arraycopy(this.mArray, 0, tArr, 0, this.mSize);
        int length = tArr.length;
        int i = this.mSize;
        if (length > i) {
            tArr[i] = null;
        }
        return tArr;
    }

    public String toString() {
        if (isEmpty()) {
            return "{}";
        }
        StringBuilder sb = new StringBuilder(this.mSize * 14);
        sb.append('{');
        for (int i = 0; i < this.mSize; i++) {
            if (i > 0) {
                sb.append(", ");
            }
            E eValueAt = valueAt(i);
            if (eValueAt != this) {
                sb.append(eValueAt);
            } else {
                sb.append("(this Set)");
            }
        }
        sb.append('}');
        return sb.toString();
    }

    public E valueAt(int i) {
        return (E) this.mArray[i];
    }
}
