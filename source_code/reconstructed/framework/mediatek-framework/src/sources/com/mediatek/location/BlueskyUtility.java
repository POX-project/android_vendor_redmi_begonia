package com.mediatek.location;

import android.content.Context;
import android.content.Intent;
import android.os.UserHandle;

/* JADX INFO: loaded from: classes.dex */
public class BlueskyUtility {
    public static void sendBlueskyBroadcast(Context context) {
        Intent intentPutExtra = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_on_foot_stickiness_sec").putExtra("values", "9999").putExtra("types", "long");
        intentPutExtra.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra, new UserHandle(-2));
        Intent intentPutExtra2 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_update_on_tiny_movement").putExtra("values", "true").putExtra("types", "boolean");
        intentPutExtra2.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra2, new UserHandle(-2));
        Intent intentPutExtra3 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_use_gnss_as_grid_center").putExtra("values", "true").putExtra("types", "boolean");
        intentPutExtra3.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra3, new UserHandle(-2));
        Intent intentPutExtra4 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_disable_when_screen_off").putExtra("values", "false").putExtra("types", "boolean");
        intentPutExtra4.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra4, new UserHandle(-2));
        Intent intentPutExtra5 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_use_raster_altitude_for_chipset_correction").putExtra("values", "true").putExtra("types", "boolean");
        intentPutExtra5.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra5, new UserHandle(-2));
        Intent intentPutExtra6 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_s2_geofence").putExtra("values", "CICAgIABCICAgIADCICAgIAFCICAgIAHCICAgIAJCICAgIAL").putExtra("types", "string");
        intentPutExtra6.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra6, new UserHandle(-2));
        Intent intentPutExtra7 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__enable_environment_bearing_for_chipset").putExtra("values", "true").putExtra("types", "boolean");
        intentPutExtra7.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra7, new UserHandle(-2));
        Intent intentPutExtra8 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_tile_version").putExtra("values", "40002").putExtra("types", "long");
        intentPutExtra8.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra8, new UserHandle(-2));
        Intent intentPutExtra9 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_max_allowed_age_for_updates_nanos").putExtra("values", "3000000000").putExtra("types", "long");
        intentPutExtra9.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra9, new UserHandle(-2));
        Intent intentPutExtra10 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_flp_location_request_fastest_interval_millis").putExtra("values", "300").putExtra("types", "long");
        intentPutExtra10.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra10, new UserHandle(-2));
        Intent intentPutExtra11 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__bluesky_sparse_updates_fix_and_log_staleness").putExtra("values", "true").putExtra("types", "boolean");
        intentPutExtra11.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra11, new UserHandle(-2));
        Intent intentPutExtra12 = new Intent("com.google.android.gms.phenotype.FLAG_OVERRIDE").putExtra("package", "com.google.android.location").putExtra("user", "*").putExtra("flags", "Bluesky__ebearing_shared_direction_min_pixel_pct").putExtra("values", "0.3").putExtra("types", "double");
        intentPutExtra12.setPackage("com.google.android.gms");
        context.sendBroadcastAsUser(intentPutExtra12, new UserHandle(-2));
    }
}
