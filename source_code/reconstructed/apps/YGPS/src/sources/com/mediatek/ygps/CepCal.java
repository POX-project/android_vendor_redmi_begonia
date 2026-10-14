package com.mediatek.ygps;

/* JADX INFO: loaded from: classes.dex */
public class CepCal {
    static double calCEP(double d, double d2, double d3, double d4) {
        double dRad = rad(d);
        double dRad2 = rad(d2);
        double dRad3 = rad(d3);
        double dRad4 = rad(d4);
        if (dRad != 0.0d) {
            dRad = 1.5707963267948966d - dRad;
        }
        if (dRad2 < 0.0d) {
            dRad2 += 1.5707963267948966d;
        }
        if (dRad3 != 0.0d) {
            dRad3 = 1.5707963267948966d - dRad3;
        }
        if (dRad4 < 0.0d) {
            dRad4 += 1.5707963267948966d;
        }
        double dCos = Math.cos(dRad2) * 6378137.0d * Math.sin(dRad);
        double dSin = Math.sin(dRad2) * 6378137.0d * Math.sin(dRad);
        double dCos2 = Math.cos(dRad) * 6378137.0d;
        double dCos3 = Math.cos(dRad4) * 6378137.0d * Math.sin(dRad3);
        double d5 = dCos - dCos3;
        double dSin2 = dSin - ((Math.sin(dRad4) * 6378137.0d) * Math.sin(dRad3));
        double dCos4 = dCos2 - (Math.cos(dRad3) * 6378137.0d);
        double dSqrt = Math.sqrt((d5 * d5) + (dSin2 * dSin2) + (dCos4 * dCos4));
        return Math.acos((8.1361263181538E13d - (dSqrt * dSqrt)) / 8.1361263181538E13d) * 6378137.0d;
    }

    private static double rad(double d) {
        return (d * 3.141592653589793d) / 180.0d;
    }
}
