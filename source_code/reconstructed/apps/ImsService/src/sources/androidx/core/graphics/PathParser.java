package androidx.core.graphics;

import android.graphics.Path;
import android.hardware.radio.V1_5.NgranBands;
import android.hardware.radio.V1_5.UtranBands;
import android.util.Log;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class PathParser {
    private static final String LOGTAG = "PathParser";

    private static class ExtractFloatResult {
        int mEndPosition;
        boolean mEndWithNegOrDot;

        ExtractFloatResult() {
        }
    }

    public static class PathDataNode {
        public float[] mParams;
        public char mType;

        PathDataNode(char c, float[] fArr) {
            this.mType = c;
            this.mParams = fArr;
        }

        PathDataNode(PathDataNode pathDataNode) {
            this.mType = pathDataNode.mType;
            float[] fArr = pathDataNode.mParams;
            this.mParams = PathParser.copyOfRange(fArr, 0, fArr.length);
        }

        private static void addCommand(Path path, float[] fArr, char c, char c2, float[] fArr2) {
            int i;
            int i2;
            float f;
            float f2;
            float f3;
            float f4;
            char c3 = c2;
            float f5 = fArr[0];
            float f6 = fArr[1];
            float f7 = fArr[2];
            float f8 = fArr[3];
            float f9 = fArr[4];
            float f10 = fArr[5];
            switch (c3) {
                case 'A':
                case 'a':
                    i = 7;
                    break;
                case 'C':
                case 'c':
                    i = 6;
                    break;
                case 'H':
                case NgranBands.BAND_86 /* 86 */:
                case UtranBands.BAND_D /* 104 */:
                case 'v':
                    i = 1;
                    break;
                case 'L':
                case 'M':
                case NgranBands.BAND_84 /* 84 */:
                case 'l':
                case 'm':
                case 't':
                    i = 2;
                    break;
                case 'Q':
                case NgranBands.BAND_83 /* 83 */:
                case 'q':
                case 's':
                    i = 4;
                    break;
                case NgranBands.BAND_90 /* 90 */:
                case 'z':
                    path.close();
                    f5 = f9;
                    f6 = f10;
                    f7 = f9;
                    f8 = f10;
                    path.moveTo(f5, f6);
                    i = 2;
                    break;
                default:
                    i = 2;
                    break;
            }
            char c4 = c;
            int i3 = 0;
            float f11 = f5;
            float f12 = f7;
            float f13 = f8;
            float f14 = f9;
            float f15 = f10;
            float f16 = f6;
            while (i3 < fArr2.length) {
                if (c3 == 'A') {
                    i2 = i3;
                    drawArc(path, f11, f16, fArr2[i2 + 5], fArr2[i2 + 6], fArr2[i2 + 0], fArr2[i2 + 1], fArr2[i2 + 2], fArr2[i2 + 3] != 0.0f, fArr2[i2 + 4] != 0.0f);
                    float f17 = fArr2[i2 + 5];
                    float f18 = fArr2[i2 + 6];
                    f11 = f17;
                    f16 = f18;
                    f12 = f17;
                    f13 = f18;
                } else if (c3 == 'C') {
                    i2 = i3;
                    path.cubicTo(fArr2[i2 + 0], fArr2[i2 + 1], fArr2[i2 + 2], fArr2[i2 + 3], fArr2[i2 + 4], fArr2[i2 + 5]);
                    f11 = fArr2[i2 + 4];
                    f16 = fArr2[i2 + 5];
                    f12 = fArr2[i2 + 2];
                    f13 = fArr2[i2 + 3];
                } else if (c3 == 'H') {
                    i2 = i3;
                    path.lineTo(fArr2[i2 + 0], f16);
                    f11 = fArr2[i2 + 0];
                } else if (c3 == 'Q') {
                    i2 = i3;
                    path.quadTo(fArr2[i2 + 0], fArr2[i2 + 1], fArr2[i2 + 2], fArr2[i2 + 3]);
                    f12 = fArr2[i2 + 0];
                    f13 = fArr2[i2 + 1];
                    f11 = fArr2[i2 + 2];
                    f16 = fArr2[i2 + 3];
                } else if (c3 == 'V') {
                    i2 = i3;
                    path.lineTo(f11, fArr2[i2 + 0]);
                    f16 = fArr2[i2 + 0];
                } else if (c3 == 'a') {
                    float f19 = f16;
                    i2 = i3;
                    drawArc(path, f11, f19, fArr2[i3 + 5] + f11, fArr2[i3 + 6] + f19, fArr2[i3 + 0], fArr2[i3 + 1], fArr2[i3 + 2], fArr2[i3 + 3] != 0.0f, fArr2[i3 + 4] != 0.0f);
                    f11 += fArr2[i2 + 5];
                    f16 = f19 + fArr2[i2 + 6];
                    f12 = f11;
                    f13 = f16;
                } else if (c3 == 'c') {
                    float f20 = f16;
                    path.rCubicTo(fArr2[i3 + 0], fArr2[i3 + 1], fArr2[i3 + 2], fArr2[i3 + 3], fArr2[i3 + 4], fArr2[i3 + 5]);
                    float f21 = fArr2[i3 + 2] + f11;
                    float f22 = f20 + fArr2[i3 + 3];
                    f11 += fArr2[i3 + 4];
                    f12 = f21;
                    f13 = f22;
                    i2 = i3;
                    f16 = fArr2[i3 + 5] + f20;
                } else if (c3 == 'h') {
                    path.rLineTo(fArr2[i3 + 0], 0.0f);
                    f11 += fArr2[i3 + 0];
                    i2 = i3;
                } else if (c3 == 'q') {
                    float f23 = f16;
                    path.rQuadTo(fArr2[i3 + 0], fArr2[i3 + 1], fArr2[i3 + 2], fArr2[i3 + 3]);
                    float f24 = fArr2[i3 + 0] + f11;
                    float f25 = f23 + fArr2[i3 + 1];
                    f11 += fArr2[i3 + 2];
                    f12 = f24;
                    f13 = f25;
                    i2 = i3;
                    f16 = fArr2[i3 + 3] + f23;
                } else if (c3 == 'v') {
                    path.rLineTo(0.0f, fArr2[i3 + 0]);
                    f16 += fArr2[i3 + 0];
                    i2 = i3;
                } else if (c3 == 'L') {
                    path.lineTo(fArr2[i3 + 0], fArr2[i3 + 1]);
                    f11 = fArr2[i3 + 0];
                    f16 = fArr2[i3 + 1];
                    i2 = i3;
                } else if (c3 == 'M') {
                    float f26 = fArr2[i3 + 0];
                    float f27 = fArr2[i3 + 1];
                    if (i3 > 0) {
                        path.lineTo(fArr2[i3 + 0], fArr2[i3 + 1]);
                        f11 = f26;
                        f16 = f27;
                        i2 = i3;
                    } else {
                        path.moveTo(fArr2[i3 + 0], fArr2[i3 + 1]);
                        f11 = f26;
                        f16 = f27;
                        f14 = f26;
                        f15 = f27;
                        i2 = i3;
                    }
                } else if (c3 == 'S') {
                    float f28 = f16;
                    float f29 = f11;
                    if (c4 == 'c' || c4 == 's' || c4 == 'C' || c4 == 'S') {
                        f = (f11 * 2.0f) - f12;
                        f2 = (f28 * 2.0f) - f13;
                    } else {
                        f = f29;
                        f2 = f28;
                    }
                    path.cubicTo(f, f2, fArr2[i3 + 0], fArr2[i3 + 1], fArr2[i3 + 2], fArr2[i3 + 3]);
                    f12 = fArr2[i3 + 0];
                    f13 = fArr2[i3 + 1];
                    f11 = fArr2[i3 + 2];
                    f16 = fArr2[i3 + 3];
                    i2 = i3;
                } else if (c3 == 'T') {
                    float f30 = f16;
                    float f31 = f11;
                    float f32 = f30;
                    if (c4 == 'q' || c4 == 't' || c4 == 'Q' || c4 == 'T') {
                        f31 = (f11 * 2.0f) - f12;
                        f32 = (f30 * 2.0f) - f13;
                    }
                    path.quadTo(f31, f32, fArr2[i3 + 0], fArr2[i3 + 1]);
                    f12 = f31;
                    f13 = f32;
                    f11 = fArr2[i3 + 0];
                    f16 = fArr2[i3 + 1];
                    i2 = i3;
                } else if (c3 == 'l') {
                    path.rLineTo(fArr2[i3 + 0], fArr2[i3 + 1]);
                    f11 += fArr2[i3 + 0];
                    f16 += fArr2[i3 + 1];
                    i2 = i3;
                } else if (c3 == 'm') {
                    f11 += fArr2[i3 + 0];
                    f16 += fArr2[i3 + 1];
                    if (i3 > 0) {
                        path.rLineTo(fArr2[i3 + 0], fArr2[i3 + 1]);
                        i2 = i3;
                    } else {
                        path.rMoveTo(fArr2[i3 + 0], fArr2[i3 + 1]);
                        f14 = f11;
                        f15 = f16;
                        i2 = i3;
                    }
                } else if (c3 == 's') {
                    if (c4 == 'c' || c4 == 's' || c4 == 'C' || c4 == 'S') {
                        f3 = f11 - f12;
                        f4 = f16 - f13;
                    } else {
                        f3 = 0.0f;
                        f4 = 0.0f;
                    }
                    float f33 = f4;
                    float f34 = f16;
                    path.rCubicTo(f3, f33, fArr2[i3 + 0], fArr2[i3 + 1], fArr2[i3 + 2], fArr2[i3 + 3]);
                    float f35 = fArr2[i3 + 0] + f11;
                    float f36 = f34 + fArr2[i3 + 1];
                    f11 += fArr2[i3 + 2];
                    f12 = f35;
                    f13 = f36;
                    i2 = i3;
                    f16 = fArr2[i3 + 3] + f34;
                } else if (c3 != 't') {
                    i2 = i3;
                } else {
                    float f37 = 0.0f;
                    float f38 = 0.0f;
                    if (c4 == 'q' || c4 == 't' || c4 == 'Q' || c4 == 'T') {
                        f37 = f11 - f12;
                        f38 = f16 - f13;
                    }
                    path.rQuadTo(f37, f38, fArr2[i3 + 0], fArr2[i3 + 1]);
                    float f39 = f11 + f37;
                    float f40 = f16 + f38;
                    f11 += fArr2[i3 + 0];
                    f16 += fArr2[i3 + 1];
                    f12 = f39;
                    f13 = f40;
                    i2 = i3;
                }
                c4 = c2;
                i3 = i2 + i;
                c3 = c2;
            }
            fArr[0] = f11;
            fArr[1] = f16;
            fArr[2] = f12;
            fArr[3] = f13;
            fArr[4] = f14;
            fArr[5] = f15;
        }

        private static void arcToBezier(Path path, double d, double d2, double d3, double d4, double d5, double d6, double d7, double d8, double d9) {
            double d10 = d3;
            int iCeil = (int) Math.ceil(Math.abs((d9 * 4.0d) / 3.141592653589793d));
            double dCos = Math.cos(d7);
            double dSin = Math.sin(d7);
            double dCos2 = Math.cos(d8);
            double dSin2 = Math.sin(d8);
            double d11 = ((-d10) * dSin * dSin2) + (d4 * dCos * dCos2);
            double d12 = d9 / ((double) iCeil);
            double d13 = d8;
            int i = 0;
            double d14 = d5;
            double d15 = (((-d10) * dCos) * dSin2) - ((d4 * dSin) * dCos2);
            double d16 = d6;
            while (i < iCeil) {
                double d17 = d13 + d12;
                double dSin3 = Math.sin(d17);
                double dCos3 = Math.cos(d17);
                double d18 = d12;
                double d19 = (d + ((d10 * dCos) * dCos3)) - ((d4 * dSin) * dSin3);
                double d20 = dCos2;
                double d21 = d2 + (d10 * dSin * dCos3) + (d4 * dCos * dSin3);
                double d22 = dSin2;
                double d23 = (((-d10) * dCos) * dSin3) - ((d4 * dSin) * dCos3);
                double d24 = ((-d10) * dSin * dSin3) + (d4 * dCos * dCos3);
                double dTan = Math.tan((d17 - d13) / 2.0d);
                double dSin4 = (Math.sin(d17 - d13) * (Math.sqrt(((dTan * 3.0d) * dTan) + 4.0d) - 1.0d)) / 3.0d;
                path.rLineTo(0.0f, 0.0f);
                path.cubicTo((float) (d14 + (dSin4 * d15)), (float) (d16 + (dSin4 * d11)), (float) (d19 - (dSin4 * d23)), (float) (d21 - (dSin4 * d24)), (float) d19, (float) d21);
                d13 = d17;
                d16 = d21;
                d15 = d23;
                d11 = d24;
                d14 = d19;
                i++;
                iCeil = iCeil;
                dSin2 = d22;
                d12 = d18;
                dCos2 = d20;
                dCos = dCos;
                dSin = dSin;
                d10 = d3;
            }
        }

        private static void drawArc(Path path, float f, float f2, float f3, float f4, float f5, float f6, float f7, boolean z, boolean z2) {
            double d;
            double d2;
            double radians = Math.toRadians(f7);
            double dCos = Math.cos(radians);
            double dSin = Math.sin(radians);
            double d3 = ((((double) f) * dCos) + (((double) f2) * dSin)) / ((double) f5);
            double d4 = ((((double) (-f)) * dSin) + (((double) f2) * dCos)) / ((double) f6);
            double d5 = ((((double) f3) * dCos) + (((double) f4) * dSin)) / ((double) f5);
            double d6 = ((((double) (-f3)) * dSin) + (((double) f4) * dCos)) / ((double) f6);
            double d7 = d3 - d5;
            double d8 = d4 - d6;
            double d9 = (d3 + d5) / 2.0d;
            double d10 = (d4 + d6) / 2.0d;
            double d11 = (d7 * d7) + (d8 * d8);
            if (d11 == 0.0d) {
                Log.w(PathParser.LOGTAG, " Points are coincident");
                return;
            }
            double d12 = (1.0d / d11) - 0.25d;
            if (d12 < 0.0d) {
                Log.w(PathParser.LOGTAG, "Points are too far apart " + d11);
                float fSqrt = (float) (Math.sqrt(d11) / 1.99999d);
                drawArc(path, f, f2, f3, f4, f5 * fSqrt, f6 * fSqrt, f7, z, z2);
                return;
            }
            double dSqrt = Math.sqrt(d12);
            double d13 = dSqrt * d7;
            double d14 = dSqrt * d8;
            if (z == z2) {
                d = d9 - d14;
                d2 = d10 + d13;
            } else {
                d = d9 + d14;
                d2 = d10 - d13;
            }
            double dAtan2 = Math.atan2(d4 - d2, d3 - d);
            double dAtan3 = Math.atan2(d6 - d2, d5 - d) - dAtan2;
            if (z2 != (dAtan3 >= 0.0d)) {
                dAtan3 = dAtan3 > 0.0d ? dAtan3 - 6.283185307179586d : dAtan3 + 6.283185307179586d;
            }
            double d15 = d * ((double) f5);
            double d16 = ((double) f6) * d2;
            arcToBezier(path, (d15 * dCos) - (d16 * dSin), (d15 * dSin) + (d16 * dCos), f5, f6, f, f2, radians, dAtan2, dAtan3);
        }

        public static void nodesToPath(PathDataNode[] pathDataNodeArr, Path path) {
            float[] fArr = new float[6];
            char c = 'm';
            for (int i = 0; i < pathDataNodeArr.length; i++) {
                addCommand(path, fArr, c, pathDataNodeArr[i].mType, pathDataNodeArr[i].mParams);
                c = pathDataNodeArr[i].mType;
            }
        }

        public void interpolatePathDataNode(PathDataNode pathDataNode, PathDataNode pathDataNode2, float f) {
            this.mType = pathDataNode.mType;
            int i = 0;
            while (true) {
                float[] fArr = pathDataNode.mParams;
                if (i >= fArr.length) {
                    return;
                }
                this.mParams[i] = (fArr[i] * (1.0f - f)) + (pathDataNode2.mParams[i] * f);
                i++;
            }
        }
    }

    private PathParser() {
    }

    private static void addNode(ArrayList<PathDataNode> arrayList, char c, float[] fArr) {
        arrayList.add(new PathDataNode(c, fArr));
    }

    public static boolean canMorph(PathDataNode[] pathDataNodeArr, PathDataNode[] pathDataNodeArr2) {
        if (pathDataNodeArr == null || pathDataNodeArr2 == null || pathDataNodeArr.length != pathDataNodeArr2.length) {
            return false;
        }
        for (int i = 0; i < pathDataNodeArr.length; i++) {
            if (pathDataNodeArr[i].mType != pathDataNodeArr2[i].mType || pathDataNodeArr[i].mParams.length != pathDataNodeArr2[i].mParams.length) {
                return false;
            }
        }
        return true;
    }

    static float[] copyOfRange(float[] fArr, int i, int i2) {
        if (i > i2) {
            throw new IllegalArgumentException();
        }
        int length = fArr.length;
        if (i < 0 || i > length) {
            throw new ArrayIndexOutOfBoundsException();
        }
        int i3 = i2 - i;
        float[] fArr2 = new float[i3];
        System.arraycopy(fArr, i, fArr2, 0, Math.min(i3, length - i));
        return fArr2;
    }

    public static PathDataNode[] createNodesFromPathData(String str) {
        if (str == null) {
            return null;
        }
        int i = 0;
        int i2 = 1;
        ArrayList arrayList = new ArrayList();
        while (i2 < str.length()) {
            int iNextStart = nextStart(str, i2);
            String strTrim = str.substring(i, iNextStart).trim();
            if (strTrim.length() > 0) {
                addNode(arrayList, strTrim.charAt(0), getFloats(strTrim));
            }
            i = iNextStart;
            i2 = iNextStart + 1;
        }
        if (i2 - i == 1 && i < str.length()) {
            addNode(arrayList, str.charAt(i), new float[0]);
        }
        return (PathDataNode[]) arrayList.toArray(new PathDataNode[arrayList.size()]);
    }

    public static Path createPathFromPathData(String str) {
        Path path = new Path();
        PathDataNode[] pathDataNodeArrCreateNodesFromPathData = createNodesFromPathData(str);
        if (pathDataNodeArrCreateNodesFromPathData == null) {
            return null;
        }
        try {
            PathDataNode.nodesToPath(pathDataNodeArrCreateNodesFromPathData, path);
            return path;
        } catch (RuntimeException e) {
            throw new RuntimeException("Error in parsing " + str, e);
        }
    }

    public static PathDataNode[] deepCopyNodes(PathDataNode[] pathDataNodeArr) {
        if (pathDataNodeArr == null) {
            return null;
        }
        PathDataNode[] pathDataNodeArr2 = new PathDataNode[pathDataNodeArr.length];
        for (int i = 0; i < pathDataNodeArr.length; i++) {
            pathDataNodeArr2[i] = new PathDataNode(pathDataNodeArr[i]);
        }
        return pathDataNodeArr2;
    }

    /* JADX WARN: Code duplicated, block: B:21:0x0036  */
    private static void extract(String str, int i, ExtractFloatResult extractFloatResult) {
        boolean z = false;
        extractFloatResult.mEndWithNegOrDot = false;
        boolean z2 = false;
        boolean z3 = false;
        for (int i2 = i; i2 < str.length(); i2++) {
            boolean z4 = z3;
            z3 = false;
            char cCharAt = str.charAt(i2);
            if (cCharAt == ' ') {
                z = true;
            } else if (cCharAt != 'E' && cCharAt != 'e') {
                switch (cCharAt) {
                    case ',':
                        z = true;
                        break;
                    case '-':
                        if (i2 != i && !z4) {
                            z = true;
                            extractFloatResult.mEndWithNegOrDot = true;
                        }
                        break;
                    case '.':
                        if (z2) {
                            z = true;
                            extractFloatResult.mEndWithNegOrDot = true;
                        } else {
                            z2 = true;
                        }
                        break;
                }
            } else {
                z3 = true;
            }
            if (z) {
                extractFloatResult.mEndPosition = i2;
            }
        }
        extractFloatResult.mEndPosition = i2;
    }

    private static float[] getFloats(String str) {
        if (str.charAt(0) == 'z' || str.charAt(0) == 'Z') {
            return new float[0];
        }
        try {
            float[] fArr = new float[str.length()];
            int i = 0;
            int i2 = 1;
            ExtractFloatResult extractFloatResult = new ExtractFloatResult();
            int length = str.length();
            while (i2 < length) {
                extract(str, i2, extractFloatResult);
                int i3 = extractFloatResult.mEndPosition;
                if (i2 < i3) {
                    fArr[i] = Float.parseFloat(str.substring(i2, i3));
                    i++;
                }
                i2 = extractFloatResult.mEndWithNegOrDot ? i3 : i3 + 1;
            }
            return copyOfRange(fArr, 0, i);
        } catch (NumberFormatException e) {
            throw new RuntimeException("error in parsing \"" + str + "\"", e);
        }
    }

    public static boolean interpolatePathDataNodes(PathDataNode[] pathDataNodeArr, PathDataNode[] pathDataNodeArr2, PathDataNode[] pathDataNodeArr3, float f) {
        if (pathDataNodeArr == null || pathDataNodeArr2 == null || pathDataNodeArr3 == null) {
            throw new IllegalArgumentException("The nodes to be interpolated and resulting nodes cannot be null");
        }
        if (pathDataNodeArr.length != pathDataNodeArr2.length || pathDataNodeArr2.length != pathDataNodeArr3.length) {
            throw new IllegalArgumentException("The nodes to be interpolated and resulting nodes must have the same length");
        }
        if (!canMorph(pathDataNodeArr2, pathDataNodeArr3)) {
            return false;
        }
        for (int i = 0; i < pathDataNodeArr.length; i++) {
            pathDataNodeArr[i].interpolatePathDataNode(pathDataNodeArr2[i], pathDataNodeArr3[i], f);
        }
        return true;
    }

    private static int nextStart(String str, int i) {
        while (i < str.length()) {
            char cCharAt = str.charAt(i);
            if (((cCharAt - 'A') * (cCharAt - 'Z') <= 0 || (cCharAt - 'a') * (cCharAt - 'z') <= 0) && cCharAt != 'e' && cCharAt != 'E') {
                return i;
            }
            i++;
        }
        return i;
    }

    public static void updateNodes(PathDataNode[] pathDataNodeArr, PathDataNode[] pathDataNodeArr2) {
        for (int i = 0; i < pathDataNodeArr2.length; i++) {
            pathDataNodeArr[i].mType = pathDataNodeArr2[i].mType;
            for (int i2 = 0; i2 < pathDataNodeArr2[i].mParams.length; i2++) {
                pathDataNodeArr[i].mParams[i2] = pathDataNodeArr2[i].mParams[i2];
            }
        }
    }
}
