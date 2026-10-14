package com.mediatek.internal.telephony;

import android.telephony.MtkRadioAccessFamily;
import android.telephony.PhoneNumberUtils;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.Editable;
import android.text.Selection;
import android.text.SpannableStringBuilder;
import com.mediatek.provider.MtkContactsContract;
import java.util.Arrays;
import java.util.Locale;
import mediatek.telephony.MtkDisconnectCause;
import mediatek.telephony.MtkServiceState;

/* JADX INFO: loaded from: classes.dex */
public class MtkPhoneNumberFormatUtil {
    public static final boolean DEBUG = false;
    public static final int FORMAT_AUSTRALIA = 21;
    public static final int FORMAT_BRAZIL = 23;
    public static final int FORMAT_CHINA_HONGKONG = 4;
    public static final int FORMAT_CHINA_MACAU = 5;
    public static final int FORMAT_CHINA_MAINLAND = 3;
    public static final int FORMAT_ENGLAND = 7;
    public static final int FORMAT_FRANCE = 8;
    public static final int FORMAT_GERMANY = 10;
    public static final int FORMAT_INDIA = 12;
    public static final int FORMAT_INDONESIA = 16;
    public static final int FORMAT_ITALY = 9;
    public static final int FORMAT_JAPAN = 2;
    public static final int FORMAT_MALAYSIA = 14;
    public static final int FORMAT_NANP = 1;
    public static final int FORMAT_NEW_ZEALAND = 22;
    public static final int FORMAT_POLAND = 20;
    public static final int FORMAT_PORTUGAL = 19;
    public static final int FORMAT_RUSSIAN = 11;
    public static final int FORMAT_SINGAPORE = 15;
    public static final int FORMAT_SPAIN = 13;
    public static final int FORMAT_TAIWAN = 6;
    public static final int FORMAT_THAILAND = 17;
    public static final int FORMAT_TURKEY = 24;
    public static final int FORMAT_UNKNOWN = 0;
    public static final int FORMAT_VIETNAM = 18;
    public static final String TAG = "MtkPhoneNumberFormatUtil";
    private static final String[] NANP_COUNTRIES = {"US", "CA", "AS", "AI", "AG", "BS", "BB", "BM", "VG", "KY", "DM", "DO", "GD", "GU", "JM", "PR", "MS", "MP", "KN", "LC", "VC", "TT", "TC", "VI"};
    public static final String[] NANP_INTERNATIONAL_PREFIXS = {"011"};
    public static final String[] JAPAN_INTERNATIONAL_PREFIXS = {"010", "001", "0041", "0061"};
    public static final String[] HONGKONG_INTERNATIONAL_PREFIXS = {"001", "0080", "0082", "009"};
    public static final String[] TAIWAN_INTERNATIONAL_PREFIXS = {"002", "005", "006", "007", "009", "019"};
    public static final String[] FRANCE_INTERNATIONAL_PREFIXS = {"00", "40", "50", "70", "90"};
    public static final String[] SINGAPORE_INTERNATIONAL_PREFIXS = {"001", "002", "008", "012", "013", "018", "019"};
    public static final String[] INDONESIA_INTERNATIONAL_PREFIXS = {"001", "007", "008", "009"};
    public static final String[] THAILAND_INTERNATIONAL_PREFIXS = {"001", "004", "005", "006", "007", "008", "009"};
    public static final String[] AUSTRALIA_INTERNATIONAL_PREFIXS = {"0011", "0014", "0015", "0016", "0018", "0019"};
    public static final String[] BRAZIL_INTERNATIONAL_PREFIXS = {"0012", "0014", "0015", "0021", "0023", "0025", "0031", "0041"};
    public static String[] FORMAT_COUNTRY_CODES = {"1", "81", "86", "852", "853", "886", "44", "33", "39", "49", "7", "91", "34", "60", "65", "62", "66", "84", "351", "48", "61", "64", "55", "90"};
    public static final String[] FORMAT_COUNTRY_NAMES = {"US", "JP", "CN", "HK", "MO", "TW", "GB", "FR", "IT", "DE", "RU", "IN", "ES", "MY", "SG", "ID", "TH", "VN", "PT", "PL", "AU", "NZ", "BR", "TR"};
    private static final int[] INDIA_THREE_DIGIG_AREA_CODES = {120, 121, 122, 124, 129, MtkServiceState.RIL_RADIO_TECHNOLOGY_HSDPAP_UPA, MtkServiceState.RIL_RADIO_TECHNOLOGY_HSUPAP, MtkServiceState.RIL_RADIO_TECHNOLOGY_HSUPAP_DPA, MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_HSDPAP, 141, 144, MtkPhoneNumberUtils.TOA_International, 151, 154, 160, 161, 164, 171, 172, 175, 177, 180, 181, 183, 184, 186, 191, 194, 212, 215, 217, 230, 231, 233, 240, 241, 250, 251, 253, 257, 260, 261, 265, 268, 278, 281, 285, 286, 288, 291, 294, 326, 341, 342, 343, 353, 354, 360, 361, 364, 368, 369, 370, 372, 373, 374, 376, 381, 385, 389, 413, 416, 421, 422, 423, 424, 427, 431, 435, 451, 452, 461, 462, 468, 469, 470, 471, 474, 475, 476, 477, 478, 479, 480, 481, 483, 484, 485, 487, 490, 491, 494, 495, 496, 497, MtkRadioAccessFamily.RAF_HSPA, 515, 522, 532, 535, 542, 548, 551, 562, 565, 571, 581, 591, 595, 612, 621, 631, 641, 651, 657, 661, 663, 671, 674, 680, 712, 721, 724, 731, 733, 734, 744, 747, 751, 755, 761, 771, 788, 816, 820, 821, 824, 831, 832, 836, 861, 863, 866, 870, 877, 878, 883, 884, 891};
    private static final int[] Germany_THREE_PART_REGION_CODES = {202, 203, 208, 209, 212, 214, 221, 228, 234, 249, 310, 335, 340, 345, 365, 375, 385, 395, 457, 458, 459, 700, 709, 710, 728, 729, 749, 759, 769, 778, 779, 786, 787, 788, 789, 792, 798, 799, 800, 872, 875, 879, 900, 902, 903, 906};
    private static final int[] Germany_FOUR_PART_REGION_CODES = {3301, 3302, 3303, 3304, 3306, 3307, 3321, 3322, 3327, 3328, 3329, 3331, 3332, 3334, 3335, 3337, 3338, 3341, 3342, 3344, 3346, 3361, 3362, 3364, 3366, 3371, 3372, 3375, 3377, 3378, 3379, 3381, 3382, 3385, 3386, 3391, 3394, 3395, 3421, 3423, 3425, 3431, 3433, 3435, 3437, 3441, 3443, 3445, 3447, 3448, 3461, 3462, 3464, 3466, 3471, 3473, 3475, 3476, 3491, 3493, 3494, 3496, 3501, 3504, 3521, 3522, 3523, 3525, 3528, 3529, 3531, 3533, 3537, 3541, 3542, 3544, 3546, 3561, 3562, 3563, 3564, 3571, 3573, 3574, 3576, 3578, 3581, 3583, 3585, 3586, 3588, 3591, 3592, 3594, 3596, 3601, 3603, 3605, 3606, 3621, 3622, 3623, 3624, 3626, 3627, 3628, 3629, 3631, 3632, 3634, 3635, 3636, 3641, 3643, 3644, 3647, 3661, 3663, 3671, 3672, 3675, 3677, 3679, 3680, 3681, 3682, 3683, 3685, 3686, 3691, 3693, 3695, 3721, 3722, 3723, 3724, 3725, 3726, 3727, 3731, 3733, 3735, 3737, 3741, 3744, 3745, 3761, 3762, 3763, 3764, 3765, 3771, 3772, 3773, 3774, 3821, 3831, 3834, 3838, 3841, 3843, 3844, 3847, 3871, 3874, 3876, 3877, 3881, 3883, 3886, 3901, 3921, 3923, 3925, 3928, 3931, 3933, 3935, 3937, 3941, 3942, 3943, 3944, 3946, 3947, 3949, 3961, 3962, 3963, 3964, 3965, 3966, 3967, 3968, 3969, 3971, 3973, 3976, 3981, 3984, 3991, 3994, 3996, 3997};
    private static final int[] ITALY_MOBILE_PREFIXS = {328, 329, 330, 333, 334, 335, 336, 337, 338, 339, 347, 348, 349, 360, 368, MtkDisconnectCause.IMS_EMERGENCY_REREG, 388, 389};

    private static int checkIndiaNumber(char c, char c2, char c3, char c4) {
        int i = -1;
        int i2 = ((c3 - '0') * 10) + (c4 - '0');
        if (c == '9') {
            i = 0;
        } else if (c == '8') {
            if ((c2 == '0' && (i2 < 20 || ((i2 >= 50 && i2 <= 60) || i2 >= 80))) || ((c2 == '1' && (i2 < 10 || ((i2 >= 20 && i2 <= 29) || (i2 >= 40 && i2 <= 49)))) || ((c2 == '7' && (i2 >= 90 || i2 == 69)) || ((c2 == '8' && (i2 < 10 || i2 == 17 || ((i2 >= 25 && i2 <= 28) || i2 == 44 || i2 == 53 || i2 >= 90))) || (c3 == '9' && (i2 < 10 || i2 == 23 || i2 == 39 || ((i2 >= 50 && i2 <= 62) || i2 == 67 || i2 == 68 || i2 >= 70))))))) {
                i = 0;
            }
        } else if (c == '7' && (c2 == '0' || ((c2 == '2' && (i2 == 0 || ((i2 >= 4 && i2 <= 9) || i2 == 50 || i2 == 59 || ((i2 >= 75 && i2 <= 78) || i2 == 93 || i2 == 9)))) || ((c2 == '3' && (i2 == 73 || i2 == 76 || i2 == 77 || i2 == 96 || i2 == 98 || i2 == 99)) || ((c2 == '4' && (i2 < 10 || i2 == 11 || ((i2 >= 15 && i2 <= 19) || i2 == 28 || i2 == 29 || i2 == 39 || i2 == 83 || i2 == 88 || i2 == 89 || i2 == 98 || i2 == 99))) || ((c2 == '5' && (i2 <= 4 || i2 == 49 || i2 == 50 || ((i2 >= 66 && i2 <= 69) || i2 == 79 || ((i2 >= 87 && i2 <= 89) || i2 >= 97)))) || ((c2 == '6' && (i2 == 0 || i2 == 2 || i2 == 7 || i2 == 20 || i2 == 31 || i2 == 39 || i2 == 54 || i2 == 55 || ((i2 >= 65 && i2 <= 69) || ((i2 >= 76 && i2 <= 79) || i2 >= 96)))) || ((c2 == '7' && (i2 == 2 || i2 == 8 || i2 == 9 || ((i2 >= 35 && i2 <= 39) || i2 == 42 || i2 == 60 || i2 == 77 || i2 >= 95))) || ((c2 == '8' && i2 <= 39 && (i2 == 0 || ((i2 >= 7 && i2 <= 9) || i2 == 14 || ((i2 >= 27 && i2 <= 30) || (i2 >= 37 && i2 <= 39))))) || (c2 == '8' && i2 > 39 && (i2 == 42 || i2 == 45 || i2 == 60 || ((i2 >= 69 && i2 <= 79) || i2 >= 90)))))))))))) {
            i = 0;
        }
        if (i == 0) {
            return i;
        }
        if ((c == '1' && c2 == '1') || ((c == '2' && (c2 == '0' || c2 == '2')) || ((c == '3' && c2 == '3') || ((c == '4' && (c2 == '0' || c2 == '4')) || ((c == '7' && c2 == '9') || (c == '8' && c2 == '0')))))) {
            return 2;
        }
        return Arrays.binarySearch(INDIA_THREE_DIGIG_AREA_CODES, (((c + 65488) * 100) + ((c2 + 65488) * 10)) + (c3 + 65488)) >= 0 ? 3 : 4;
    }

    static boolean checkInputNormalNumber(CharSequence charSequence) {
        for (int i = 0; i < charSequence.length(); i++) {
            char cCharAt = charSequence.charAt(i);
            if ((cCharAt < '0' || cCharAt > '9') && cCharAt != '*' && cCharAt != '#' && cCharAt != '+' && cCharAt != ' ' && cCharAt != '-') {
                return false;
            }
        }
        return true;
    }

    private static String formatAustraliaNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            if (sb.charAt(i4) == '4') {
                if (length > i4 + 5) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 8) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 1;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 5;
                    i2++;
                }
            }
        } else {
            System.out.println(length);
            if (length == i3 + 8) {
                iArr[0] = i3 + 4;
                i2 = 0 + 1;
            }
        }
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = iArr[i5];
            sb.replace(i6 + i5, i6 + i5, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatBrazilNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[5];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                iArr[0] = i3 + 1;
                i4++;
                i2 = 0 + 1;
            }
            if (length > i4 + 3) {
                iArr[i2] = i4 + 2;
                i2++;
            }
            if (length > i4 + 7 && length <= i4 + 10) {
                iArr[i2] = i4 + 6;
                i2++;
            } else if (length > i4 + 10) {
                int i5 = i2 + 1;
                iArr[i2] = i4 + 4;
                i2 = i5 + 1;
                iArr[i5] = i4 + 8;
            }
        } else if (length > i3 + 5) {
            iArr[0] = i3 + 4;
            i2 = 0 + 1;
        }
        for (int i6 = 0; i6 < i2; i6++) {
            int i7 = iArr[i6];
            sb.replace(i7 + i6, i7 + i6, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatChinaNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            if ((cCharAt == '1' && cCharAt2 == '0') || cCharAt == '2') {
                iArr[0] = i4 + 2;
                i2 = 0 + 1;
            } else if (cCharAt == '1') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 8) {
                    iArr[i2] = i4 + 7;
                    i2++;
                }
            } else {
                iArr[0] = i4 + 3;
                i2 = 0 + 1;
            }
        } else {
            char cCharAt3 = sb.charAt(i3);
            char cCharAt4 = sb.charAt(i3 + 1);
            if (cCharAt3 == '1' && cCharAt4 != '0') {
                if (length > i3 + 4) {
                    iArr[0] = i3 + 3;
                    i2 = 0 + 1;
                }
                if (length > i3 + 8) {
                    iArr[i2] = i3 + 7;
                    i2++;
                }
            } else if (cCharAt3 == '1' && cCharAt4 == '0') {
                if (length > i3 + 3) {
                    iArr[0] = i3 + 2;
                    i2 = 0 + 1;
                }
            } else if (length > i3 + 8) {
                if (cCharAt3 == '2') {
                    iArr[0] = i3 + 2;
                    i2 = 0 + 1;
                } else {
                    iArr[0] = i3 + 3;
                    i2 = 0 + 1;
                }
            }
        }
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = iArr[i5];
            sb.replace(i6 + i5, i6 + i5, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatEnglandNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            char cCharAt3 = sb.charAt(i4 + 2);
            if (cCharAt == '7') {
                if (length > i4 + 5) {
                    iArr[0] = i4 + 4;
                    i2 = 0 + 1;
                }
            } else if (cCharAt == '2') {
                int i5 = 0 + 1;
                iArr[0] = i4 + 2;
                if (length > i4 + 7) {
                    i2 = i5 + 1;
                    iArr[i5] = i4 + 6;
                } else {
                    i2 = i5;
                }
            } else if (cCharAt == '1') {
                int iCharAt = ((cCharAt - '0') * 1000) + ((cCharAt2 - '0') * 100) + ((cCharAt3 - '0') * 10) + sb.charAt(i4 + 2);
                if (cCharAt2 == '1' || cCharAt3 == '1') {
                    if (length > i4 + 4) {
                        iArr[0] = i4 + 3;
                        i2 = 0 + 1;
                    }
                    if (length > i4 + 7) {
                        iArr[i2] = i4 + 6;
                        i2++;
                    }
                } else if (iCharAt == 1387 || iCharAt == 1539 || iCharAt == 1697 || iCharAt == 1768 || iCharAt == 1946) {
                    if (length > i4 + 6) {
                        iArr[0] = i4 + 5;
                        i2 = 0 + 1;
                    }
                } else if (length > i4 + 5) {
                    iArr[0] = i4 + 4;
                    i2 = 0 + 1;
                }
            } else if (cCharAt == '3' || cCharAt == '8' || cCharAt == '9') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 7) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else {
                int i6 = 0 + 1;
                iArr[0] = i4 + 2;
                if (length > i4 + 7) {
                    i2 = i6 + 1;
                    iArr[i6] = i4 + 6;
                } else {
                    i2 = i6;
                }
            }
        } else if (length > i3 + 4 && length < i3 + 8) {
            iArr[0] = i3 + 3;
            i2 = 0 + 1;
        } else if (length >= i3 + 8) {
            iArr[0] = i3 + 4;
            i2 = 0 + 1;
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatFranceNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[4];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        char cCharAt = sb.charAt(i3);
        if (i3 > 0 || cCharAt == '0' || cCharAt == '4' || cCharAt == '5' || cCharAt == '7' || cCharAt == '9') {
            int i4 = i3;
            if ((i3 == 0 && (cCharAt == '0' || cCharAt == '4' || cCharAt == '5' || cCharAt == '7' || cCharAt == '9')) || (i3 > 0 && cCharAt == '0')) {
                i4++;
            }
            int i5 = 0 + 1;
            iArr[0] = i4 + 1;
            if (length > i4 + 4) {
                iArr[i5] = i4 + 3;
                i5++;
            }
            if (length > i4 + 6) {
                i2 = i5 + 1;
                iArr[i5] = i4 + 5;
            } else {
                i2 = i5;
            }
            if (length > i4 + 8) {
                iArr[i2] = i4 + 7;
                i2++;
            }
        }
        for (int i6 = 0; i6 < i2; i6++) {
            int i7 = iArr[i6];
            sb.replace(i7 + i6, i7 + i6, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatGermanyNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            if (cCharAt == '1') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if ((cCharAt2 == '5' || cCharAt2 == '6' || cCharAt2 == '7') && length > i4 + 10) {
                    iArr[i2] = i4 + 9;
                    i2++;
                }
            } else if ((cCharAt == '3' && cCharAt2 == '0') || ((cCharAt == '4' && cCharAt2 == '0') || ((cCharAt == '6' && cCharAt2 == '9') || (cCharAt == '8' && cCharAt2 == '9')))) {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 2;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 5;
                    i2++;
                }
            } else if (length > i4 + 3) {
                char cCharAt3 = sb.charAt(i4 + 2);
                char cCharAt4 = sb.charAt(i4 + 3);
                int i5 = ((cCharAt - '0') * 100) + ((cCharAt2 - '0') * 10) + (cCharAt3 - '0');
                int i6 = (i5 * 10) + (cCharAt4 - '0');
                if (cCharAt3 == '1' || (Arrays.binarySearch(Germany_THREE_PART_REGION_CODES, i5) >= 0 && (i5 != 212 || (i5 == 212 && cCharAt4 != '9')))) {
                    if (length > i4 + 4) {
                        iArr[0] = i4 + 3;
                        i2 = 0 + 1;
                    }
                    if (length > i4 + 7) {
                        iArr[i2] = i4 + 6;
                        i2++;
                    }
                } else if (cCharAt != '3' || (cCharAt == '3' && Arrays.binarySearch(Germany_FOUR_PART_REGION_CODES, i6) >= 0)) {
                    if (length > i4 + 5) {
                        iArr[0] = i4 + 4;
                        i2 = 0 + 1;
                    }
                    if (length > i4 + 8) {
                        iArr[i2] = i4 + 7;
                        i2++;
                    }
                } else {
                    if (length > i4 + 6) {
                        iArr[0] = i4 + 5;
                        i2 = 0 + 1;
                    }
                    if (length > i4 + 9) {
                        iArr[i2] = i4 + 8;
                        i2++;
                    }
                }
            }
        } else if (length >= i3 + 6 && length <= i3 + 8) {
            iArr[0] = i3 + 3;
            i2 = 0 + 1;
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatHeightLengthWithoutRegionCodeNumber(StringBuilder sb, int i) {
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (sb.length() >= i3 + 6) {
            iArr[0] = i3 + 4;
            i2 = 0 + 1;
        }
        for (int i4 = 0; i4 < i2; i4++) {
            int i5 = iArr[i4];
            sb.replace(i5 + i4, i5 + i4, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return removeTrailingDashes(sb);
    }

    private static String formatIndiaNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        char cCharAt = sb.charAt(i3);
        if ((i3 > 0 && cCharAt != '0') || (cCharAt == '0' && length > i3 + 4)) {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            int iCheckIndiaNumber = checkIndiaNumber(sb.charAt(i4), sb.charAt(i4 + 1), sb.charAt(i4 + 2), sb.charAt(i4 + 3));
            if (iCheckIndiaNumber == 0) {
                int i5 = 0 + 1;
                iArr[0] = i4 + 2;
                if (length > i4 + 7) {
                    i2 = i5 + 1;
                    iArr[i5] = i4 + 4;
                } else {
                    i2 = i5;
                }
            } else if (iCheckIndiaNumber == 2) {
                iArr[0] = i4 + 2;
                i2 = 0 + 1;
            } else if (iCheckIndiaNumber == 3) {
                iArr[0] = i4 + 3;
                i2 = 0 + 1;
            } else if (length > i4 + 5) {
                iArr[0] = i4 + 4;
                i2 = 0 + 1;
            }
        } else if (length > i3 + 8) {
            int i6 = 0 + 1;
            iArr[0] = i3 + 2;
            i2 = i6 + 1;
            iArr[i6] = i3 + 4;
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatIndonesiaNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            char cCharAt3 = sb.charAt(i4 + 2);
            if (cCharAt == '8') {
                if (length > i4 + 5) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length >= i4 + 8 && length <= i4 + 10) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
                if (length > i4 + 10) {
                    iArr[i2] = i4 + 7;
                    i2++;
                }
            } else if ((cCharAt == '2' && (cCharAt2 == '1' || cCharAt2 == '2' || cCharAt2 == '4')) || ((cCharAt == '3' && cCharAt2 == '1') || (cCharAt == '6' && cCharAt2 == '1' && cCharAt3 != '9'))) {
                if (length > i4 + 3) {
                    iArr[0] = i4 + 2;
                    i2 = 0 + 1;
                }
                if (length > i4 + 7) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 7) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            }
        } else if (length == i3 + 7) {
            iArr[0] = i3 + 3;
            i2 = 0 + 1;
        } else if (length == i3 + 8) {
            iArr[0] = i3 + 4;
            i2 = 0 + 1;
        } else if (sb.charAt(i3) == '8') {
            if (length > i3 + 8 && length <= i3 + 10) {
                int i5 = 0 + 1;
                iArr[0] = i3 + 3;
                i2 = i5 + 1;
                iArr[i5] = i3 + 6;
            } else if (length > i3 + 10) {
                int i6 = 0 + 1;
                iArr[0] = i3 + 3;
                i2 = i6 + 1;
                iArr[i6] = i3 + 7;
            }
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatItalyNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            if (Arrays.binarySearch(ITALY_MOBILE_PREFIXS, ((cCharAt - '0') * 100) + ((cCharAt2 - '0') * 10) + (sb.charAt(i4 + 2) - '0')) >= 0) {
                if (length > i4 + 5) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 8) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else if (cCharAt == '2' || cCharAt == '6') {
                iArr[0] = i4 + 1;
                i2 = 0 + 1;
            } else if (cCharAt2 == '0' || cCharAt2 == '1' || cCharAt2 == '5' || cCharAt2 == '9') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 2;
                    i2 = 0 + 1;
                }
            } else if (length > i4 + 5) {
                iArr[0] = i4 + 3;
                i2 = 0 + 1;
            }
        } else if (Arrays.binarySearch(ITALY_MOBILE_PREFIXS, ((sb.charAt(i3) - '0') * 100) + ((sb.charAt(i3 + 1) - '0') * 10) + (sb.charAt(i3 + 2) - '0')) >= 0) {
            if (length > i3 + 5) {
                iArr[0] = i3 + 3;
                i2 = 0 + 1;
            }
            if (length > i3 + 7) {
                iArr[i2] = i3 + 6;
                i2++;
            }
        }
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = iArr[i5];
            sb.replace(i6 + i5, i6 + i5, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatMacauNumber(StringBuilder sb, int i) {
        int i2 = i == -1 ? 0 : i + 1;
        if (sb.charAt(i2) != '0' || sb.charAt(i2 + 1) != '1') {
            return formatHeightLengthWithoutRegionCodeNumber(sb, i);
        }
        sb.replace(i2 + 2, i2 + 2, " ");
        return formatHeightLengthWithoutRegionCodeNumber(sb, i + 3);
    }

    private static String formatMalaysiaNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            if ((cCharAt < '3' || cCharAt > '7') && cCharAt != '9') {
                if (cCharAt == '8') {
                    if (length > i4 + 4) {
                        iArr[0] = i4 + 2;
                        i2 = 0 + 1;
                    }
                } else if (cCharAt == '1') {
                    if (length > i4 + 4) {
                        iArr[0] = i4 + 2;
                        i2 = 0 + 1;
                    }
                    if (length > i4 + 6) {
                        iArr[i2] = i4 + 5;
                        i2++;
                    }
                } else if (cCharAt == '2') {
                    if (length > i4 + 4) {
                        iArr[0] = i4 + 1;
                        i2 = 0 + 1;
                    }
                    if (length > i4 + 7) {
                        iArr[i2] = i4 + 5;
                        i2++;
                    }
                }
            } else if (length > i4 + 4) {
                iArr[0] = i4 + 1;
                i2 = 0 + 1;
            }
        } else if (sb.charAt(i3) == '2' && length > i3 + 8) {
            int i5 = 0 + 1;
            iArr[0] = i3 + 1;
            i2 = i5 + 1;
            iArr[i5] = i3 + 5;
        } else if (sb.charAt(i3) == '1' && length > i3 + 8) {
            int i6 = 0 + 1;
            iArr[0] = i3 + 2;
            i2 = i6 + 1;
            iArr[i6] = i3 + 5;
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatNewZealandNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            if (sb.charAt(i4) != '2' || sb.charAt(i4 + 1) == '4') {
                if (length > i4 + 3) {
                    iArr[0] = i4 + 1;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 4;
                    i2++;
                }
            } else {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 2;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 5;
                    i2++;
                }
            }
        } else {
            System.out.println(length);
            if (length == i3 + 7) {
                iArr[0] = i3 + 3;
                i2 = 0 + 1;
            }
        }
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = iArr[i5];
            sb.replace(i6 + i5, i6 + i5, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    public static String formatNumber(String str) {
        return formatNumber(str, getFormatTypeForLocale(Locale.getDefault()));
    }

    public static String formatNumber(String str, int i) {
        log("MTK Format Number:" + str + " " + i);
        if (!checkInputNormalNumber(str)) {
            log("Abnormal Number:" + str + ", do nothing.");
            return str;
        }
        String strRemoveAllDash = removeAllDash(new StringBuilder(str));
        int i2 = i == 0 ? 1 : i;
        if (strRemoveAllDash.length() > 2 && strRemoveAllDash.charAt(0) == '+') {
            if (strRemoveAllDash.charAt(1) == '1') {
                i2 = 1;
            } else if (strRemoveAllDash.length() >= 3 && strRemoveAllDash.charAt(1) == '8' && strRemoveAllDash.charAt(2) == '1') {
                i2 = 2;
            } else if (i2 == 1 || i2 == 2) {
                return mtkFormatNumber(strRemoveAllDash, i2);
            }
        }
        log("formatNumber:" + i2);
        return (i2 == 1 || i2 == 2) ? PhoneNumberUtils.formatNumber(strRemoveAllDash, i2) : mtkFormatNumber(strRemoveAllDash, i2);
    }

    public static void formatNumber(Editable editable, int i) {
        String number = formatNumber(editable.toString(), i);
        if (number == null || number.equals(editable.toString())) {
            return;
        }
        int selectionStart = Selection.getSelectionStart(editable);
        int i2 = selectionStart;
        for (int i3 = 0; i3 < selectionStart; i3++) {
            char cCharAt = editable.charAt(i3);
            if (cCharAt == ' ' || cCharAt == '-') {
                i2--;
            }
        }
        editable.replace(0, editable.length(), number);
        int i4 = 0;
        int i5 = 0;
        while (i5 < editable.length() && i4 < i2) {
            char cCharAt2 = editable.charAt(i5);
            if (cCharAt2 != ' ' && cCharAt2 != '-') {
                i4++;
            }
            i5++;
        }
        Selection.setSelection(editable, i5);
    }

    private static String formatPolandNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[3];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (sb.charAt(i3) < '5' || sb.charAt(i3) > '8') {
            if (length > i3 + 5) {
                iArr[0] = i3 + 3;
                i2 = 0 + 1;
            }
            if (length > i3 + 8) {
                iArr[i2] = i3 + 6;
                i2++;
            }
        } else {
            if (length > i3 + 4) {
                iArr[0] = i3 + 2;
                i2 = 0 + 1;
            }
            if (length > i3 + 6) {
                iArr[i2] = i3 + 5;
                i2++;
            }
            if (length > i3 + 8) {
                iArr[i2] = i3 + 7;
                i2++;
            }
        }
        for (int i4 = 0; i4 < i2; i4++) {
            int i5 = iArr[i4];
            sb.replace(i5 + i4, i5 + i4, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatPortugalNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (length > i3 + 4) {
            iArr[0] = i3 + 2;
            i2 = 0 + 1;
        }
        if (length > i3 + 8) {
            iArr[i2] = i3 + 5;
            i2++;
        }
        for (int i4 = 0; i4 < i2; i4++) {
            int i5 = iArr[i4];
            sb.replace(i5 + i4, i5 + i4, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatRussianNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[3];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0) {
            if (length > i3 + 5) {
                iArr[0] = i3 + 3;
                i2 = 0 + 1;
            }
            if (length > i3 + 7) {
                iArr[i2] = i3 + 6;
                i2++;
            }
            if (length > i3 + 9) {
                iArr[i2] = i3 + 8;
                i2++;
            }
        } else if (length == i3 + 6) {
            int i4 = 0 + 1;
            iArr[0] = i3 + 2;
            i2 = i4 + 1;
            iArr[i4] = i3 + 4;
        } else if (length == i3 + 7) {
            int i5 = 0 + 1;
            iArr[0] = i3 + 3;
            i2 = i5 + 1;
            iArr[i5] = i3 + 5;
        } else if (length >= i3 + 8) {
            int i6 = 0 + 1;
            iArr[0] = i3 + 3;
            i2 = i6 + 1;
            iArr[i6] = i3 + 6;
            if (length > i3 + 9) {
                iArr[i2] = i3 + 8;
                i2++;
            }
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatSpainNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (length > i3 + 5) {
            iArr[0] = i3 + 3;
            i2 = 0 + 1;
        }
        if (length > i3 + 7) {
            iArr[i2] = i3 + 6;
            i2++;
        }
        for (int i4 = 0; i4 < i2; i4++) {
            int i5 = iArr[i4];
            sb.replace(i5 + i4, i5 + i4, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatTaiwanNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            char cCharAt3 = sb.charAt(i4 + 2);
            if (cCharAt == '9') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 7) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else if ((cCharAt == '8' && cCharAt2 == '2' && cCharAt3 == '6') || (cCharAt == '8' && cCharAt2 == '3' && cCharAt3 == '6')) {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 7) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else if ((cCharAt == '3' && cCharAt2 == '7') || ((cCharAt == '4' && cCharAt2 == '9') || ((cCharAt == '8' && cCharAt2 == '9') || (cCharAt == '8' && cCharAt2 == '2')))) {
                int i5 = 0 + 1;
                iArr[0] = i4 + 2;
                if (length > i4 + 6 && length < i4 + 10) {
                    i2 = i5 + 1;
                    iArr[i5] = i4 + 5;
                } else if (length >= i4 + 10) {
                    i2 = i5 + 1;
                    iArr[i5] = i4 + 6;
                } else {
                    i2 = i5;
                }
            } else {
                int i6 = 0 + 1;
                iArr[0] = i4 + 1;
                if (length > i4 + 6 && length < i4 + 9) {
                    i2 = i6 + 1;
                    iArr[i6] = i4 + 4;
                } else if (length >= i4 + 9) {
                    i2 = i6 + 1;
                    iArr[i6] = i4 + 5;
                } else {
                    i2 = i6;
                }
            }
        } else if (length > i3 + 4 && length < i3 + 8) {
            iArr[0] = i3 + 3;
            i2 = 0 + 1;
        } else if (length >= i3 + 8) {
            iArr[0] = i3 + 4;
            i2 = 0 + 1;
        }
        for (int i7 = 0; i7 < i2; i7++) {
            int i8 = iArr[i7];
            sb.replace(i8 + i7, i8 + i7, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatThailandNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            if (sb.charAt(i4) == '8') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 2;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 5;
                    i2++;
                }
            } else if (sb.charAt(i4) == '2') {
                if (length > i4 + 3) {
                    iArr[0] = i4 + 1;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 4;
                    i2++;
                }
            } else {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 2;
                    i2 = 0 + 1;
                }
                if (length > i4 + 6) {
                    iArr[i2] = i4 + 5;
                    i2++;
                }
            }
        }
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = iArr[i5];
            sb.replace(i6 + i5, i6 + i5, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatTurkeyNumber(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            if (length > i4 + 4) {
                iArr[0] = i4 + 3;
                i2 = 0 + 1;
            }
            if (length > i4 + 7) {
                iArr[i2] = i4 + 6;
                i2++;
            }
        } else if (length > i3 + 4) {
            iArr[0] = i3 + 3;
            i2 = 0 + 1;
        }
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = iArr[i5];
            sb.replace(i6 + i5, i6 + i5, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    private static String formatVietnamNubmer(StringBuilder sb, int i) {
        int length = sb.length();
        int[] iArr = new int[2];
        int i2 = 0;
        int i3 = i == -1 ? 0 : i + 1;
        if (i3 > 0 || sb.charAt(i3) == '0') {
            int i4 = i3;
            if (sb.charAt(i3) == '0') {
                i4++;
            }
            char cCharAt = sb.charAt(i4);
            char cCharAt2 = sb.charAt(i4 + 1);
            if (cCharAt == '4' || cCharAt == '8') {
                iArr[0] = i4 + 1;
                i2 = 0 + 1;
            } else if ((cCharAt == '2' && (cCharAt2 == '1' || cCharAt2 == '3' || cCharAt2 == '4' || cCharAt2 == '8')) || ((cCharAt == '3' && (cCharAt2 == '2' || cCharAt2 == '5')) || ((cCharAt == '6' && cCharAt2 == '5') || (cCharAt == '7' && (cCharAt2 == '1' || cCharAt2 == '8'))))) {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
            } else if (cCharAt == '9') {
                int i5 = 0 + 1;
                iArr[0] = i4 + 2;
                if (length > i4 + 6) {
                    i2 = i5 + 1;
                    iArr[i5] = i4 + 5;
                } else {
                    i2 = i5;
                }
            } else if (cCharAt == '1') {
                if (length > i4 + 4) {
                    iArr[0] = i4 + 3;
                    i2 = 0 + 1;
                }
                if (length > i4 + 7) {
                    iArr[i2] = i4 + 6;
                    i2++;
                }
            } else {
                iArr[0] = i4 + 2;
                i2 = 0 + 1;
            }
        }
        for (int i6 = 0; i6 < i2; i6++) {
            int i7 = iArr[i6];
            sb.replace(i7 + i6, i7 + i6, MtkContactsContract.Aas.ENCODE_SYMBOL);
        }
        return sb.toString();
    }

    static String getDefaultSimCountryIso() {
        int i = 0;
        if (TelephonyManager.getDefault().hasIccCard(0)) {
            i = 0;
        } else if (TelephonyManager.getDefault().hasIccCard(1)) {
            i = 1;
        } else if (TelephonyManager.getDefault().hasIccCard(2)) {
            i = 2;
        } else if (TelephonyManager.getDefault().hasIccCard(3)) {
            i = 3;
        }
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length <= 0) {
            return null;
        }
        TelephonyManager.getDefault();
        return TelephonyManager.getSimCountryIso(subId[0]);
    }

    private static int[] getFormatNumberBySpecialPrefix(String str, String[] strArr) {
        int i = 0;
        int i2 = 0;
        int length = 0;
        int[] iArr = new int[2];
        if (str.charAt(0) == '+') {
            length = 1;
        } else {
            for (String str2 : strArr) {
                if (str.startsWith(str2)) {
                    length = str2.length();
                    break;
                }
            }
        }
        if (length > 0) {
            for (String str3 : FORMAT_COUNTRY_CODES) {
                i2++;
                if (str.startsWith(str3, length)) {
                    i = i2;
                    length += str3.length();
                    break;
                }
            }
        }
        if (i == 0) {
            length = 0;
        }
        iArr[0] = length;
        iArr[1] = i;
        return iArr;
    }

    private static int[] getFormatTypeByCommonPrefix(String str) {
        int i = 0;
        int i2 = 0;
        int length = 0;
        int[] iArr = new int[2];
        if (str.length() > 0 && str.charAt(0) == '+') {
            length = 1;
        } else if (str.length() > 1 && str.charAt(0) == '0' && str.charAt(1) == '0') {
            length = 2;
        }
        if (length != 0) {
            for (String str2 : FORMAT_COUNTRY_CODES) {
                i2++;
                if (str.startsWith(str2, length)) {
                    i = i2;
                    length += str2.length();
                    break;
                }
            }
        }
        if (i == 0) {
            length = 0;
        }
        iArr[0] = length;
        iArr[1] = i;
        return iArr;
    }

    public static int getFormatTypeForLocale(Locale locale) {
        String defaultSimCountryIso = getDefaultSimCountryIso();
        log("getFormatTypeForLocale Get sim sio:" + defaultSimCountryIso);
        return getFormatTypeFromCountryCode(defaultSimCountryIso);
    }

    public static int getFormatTypeFromCountryCode(String str) {
        int formatTypeFromCountryCodeInternal = 0;
        if (str != null && str.length() != 0 && (formatTypeFromCountryCodeInternal = getFormatTypeFromCountryCodeInternal(str)) == 0) {
            int i = 0;
            for (String str2 : FORMAT_COUNTRY_NAMES) {
                i++;
                if (str2.compareToIgnoreCase(str) == 0) {
                    formatTypeFromCountryCodeInternal = i;
                    break;
                }
            }
            if (formatTypeFromCountryCodeInternal == 0 && "UK".compareToIgnoreCase(str) == 0) {
                formatTypeFromCountryCodeInternal = 7;
            }
        }
        log("Get Format Type:" + formatTypeFromCountryCodeInternal);
        return formatTypeFromCountryCodeInternal;
    }

    private static int getFormatTypeFromCountryCodeInternal(String str) {
        int length = NANP_COUNTRIES.length;
        for (int i = 0; i < length; i++) {
            if (NANP_COUNTRIES[i].compareToIgnoreCase(str) == 0) {
                return 1;
            }
        }
        return "jp".compareToIgnoreCase(str) == 0 ? 2 : 0;
    }

    private static int[] getFormatTypeFromNumber(String str, int i) {
        switch (i) {
            case 1:
                return getFormatNumberBySpecialPrefix(str, NANP_INTERNATIONAL_PREFIXS);
            case 2:
                return getFormatNumberBySpecialPrefix(str, JAPAN_INTERNATIONAL_PREFIXS);
            case 3:
            case 5:
            case 7:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case FORMAT_VIETNAM /* 18 */:
            case FORMAT_PORTUGAL /* 19 */:
            case FORMAT_POLAND /* 20 */:
            case FORMAT_NEW_ZEALAND /* 22 */:
            case 24:
                return getFormatTypeByCommonPrefix(str);
            case 4:
                return getFormatNumberBySpecialPrefix(str, HONGKONG_INTERNATIONAL_PREFIXS);
            case 6:
                return getFormatNumberBySpecialPrefix(str, TAIWAN_INTERNATIONAL_PREFIXS);
            case 8:
                return getFormatNumberBySpecialPrefix(str, FRANCE_INTERNATIONAL_PREFIXS);
            case 15:
                return getFormatNumberBySpecialPrefix(str, SINGAPORE_INTERNATIONAL_PREFIXS);
            case 16:
                return getFormatNumberBySpecialPrefix(str, INDONESIA_INTERNATIONAL_PREFIXS);
            case FORMAT_THAILAND /* 17 */:
                return getFormatNumberBySpecialPrefix(str, THAILAND_INTERNATIONAL_PREFIXS);
            case FORMAT_AUSTRALIA /* 21 */:
                return getFormatNumberBySpecialPrefix(str, AUSTRALIA_INTERNATIONAL_PREFIXS);
            case FORMAT_BRAZIL /* 23 */:
                return getFormatNumberBySpecialPrefix(str, BRAZIL_INTERNATIONAL_PREFIXS);
            default:
                return null;
        }
    }

    public static void log(String str) {
    }

    static String mtkFormatNumber(String str, int i) {
        log("MTK Format Number:" + str + " " + i);
        int length = str.length();
        if (length < 6) {
            return str;
        }
        if (str.contains("*") || str.contains("#") || str.contains("@")) {
            return removeAllDash(new StringBuilder(str));
        }
        int i2 = i;
        int[] formatTypeFromNumber = getFormatTypeFromNumber(str, i);
        int i3 = 0;
        if (formatTypeFromNumber != null && formatTypeFromNumber[1] != 0) {
            i2 = formatTypeFromNumber[1];
            i3 = formatTypeFromNumber[0];
        }
        if (length < i3 + 4 || length > i3 + 15) {
            return str;
        }
        StringBuilder sb = new StringBuilder(str);
        int iRemoveAllDashAndFormatBlank = removeAllDashAndFormatBlank(sb, i3);
        if (sb.length() < i3 + 4 || (sb.length() == i3 + 4 && sb.charAt(iRemoveAllDashAndFormatBlank + 1) == '0')) {
            return sb.toString();
        }
        switch (i2) {
            case 1:
                if (iRemoveAllDashAndFormatBlank >= 0) {
                    SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(sb.substring(i3 + 1));
                    PhoneNumberUtils.formatNanpNumber(spannableStringBuilder);
                    return sb.substring(0, i3 + 1).concat(spannableStringBuilder.toString());
                }
                SpannableStringBuilder spannableStringBuilder2 = new SpannableStringBuilder(sb);
                PhoneNumberUtils.formatNanpNumber(spannableStringBuilder2);
                return spannableStringBuilder2.toString();
            case 2:
                if (iRemoveAllDashAndFormatBlank >= 0) {
                    SpannableStringBuilder spannableStringBuilder3 = new SpannableStringBuilder(sb.substring(i3 + 1));
                    PhoneNumberUtils.formatJapaneseNumber(spannableStringBuilder3);
                    return sb.substring(0, i3 + 1).concat(spannableStringBuilder3.toString());
                }
                SpannableStringBuilder spannableStringBuilder4 = new SpannableStringBuilder(sb);
                PhoneNumberUtils.formatJapaneseNumber(spannableStringBuilder4);
                return spannableStringBuilder4.toString();
            case 3:
                return formatChinaNumber(sb, iRemoveAllDashAndFormatBlank);
            case 4:
            case 15:
                return formatHeightLengthWithoutRegionCodeNumber(sb, iRemoveAllDashAndFormatBlank);
            case 5:
                return formatMacauNumber(sb, iRemoveAllDashAndFormatBlank);
            case 6:
                return formatTaiwanNumber(sb, iRemoveAllDashAndFormatBlank);
            case 7:
                return formatEnglandNumber(sb, iRemoveAllDashAndFormatBlank);
            case 8:
                return formatFranceNumber(sb, iRemoveAllDashAndFormatBlank);
            case 9:
                return formatItalyNumber(sb, iRemoveAllDashAndFormatBlank);
            case 10:
                return formatGermanyNumber(sb, iRemoveAllDashAndFormatBlank);
            case 11:
                return formatRussianNumber(sb, iRemoveAllDashAndFormatBlank);
            case 12:
                return formatIndiaNumber(sb, iRemoveAllDashAndFormatBlank);
            case 13:
                return formatSpainNumber(sb, iRemoveAllDashAndFormatBlank);
            case 14:
                return formatMalaysiaNumber(sb, iRemoveAllDashAndFormatBlank);
            case 16:
                return formatIndonesiaNumber(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_THAILAND /* 17 */:
                return formatThailandNumber(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_VIETNAM /* 18 */:
                return formatVietnamNubmer(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_PORTUGAL /* 19 */:
                return formatPortugalNumber(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_POLAND /* 20 */:
                return formatPolandNumber(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_AUSTRALIA /* 21 */:
                return formatAustraliaNumber(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_NEW_ZEALAND /* 22 */:
                return formatNewZealandNumber(sb, iRemoveAllDashAndFormatBlank);
            case FORMAT_BRAZIL /* 23 */:
                return formatBrazilNumber(sb, iRemoveAllDashAndFormatBlank);
            case 24:
                return formatTurkeyNumber(sb, iRemoveAllDashAndFormatBlank);
            default:
                return removeAllDash(sb);
        }
    }

    private static String removeAllDash(StringBuilder sb) {
        int i = 0;
        while (i < sb.length()) {
            if (sb.charAt(i) == '-' || sb.charAt(i) == ' ') {
                sb.deleteCharAt(i);
            } else {
                i++;
            }
        }
        return sb.toString();
    }

    private static int removeAllDashAndFormatBlank(StringBuilder sb, int i) {
        int i2 = 0;
        while (i2 < sb.length()) {
            if (sb.charAt(i2) == '-' || sb.charAt(i2) == ' ') {
                sb.deleteCharAt(i2);
            } else {
                i2++;
            }
        }
        if (i <= 0) {
            return -1;
        }
        sb.replace(i, i, " ");
        return i;
    }

    private static String removeTrailingDashes(StringBuilder sb) {
        for (int length = sb.length(); length > 0 && sb.charAt(length - 1) == '-'; length--) {
            sb.delete(length - 1, length);
        }
        return sb.toString();
    }
}
