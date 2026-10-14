package android.support.v4.media;

import android.os.Bundle;
import android.os.Parcelable;
import android.util.Log;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class SessionCommandGroup2 {
    private static final String KEY_COMMANDS = "android.media.mediasession2.commandgroup.commands";
    private static final String PREFIX_COMMAND_CODE = "COMMAND_CODE_";
    private static final String PREFIX_COMMAND_CODE_PLAYBACK = "COMMAND_CODE_PLAYBACK_";
    private static final String PREFIX_COMMAND_CODE_PLAYLIST = "COMMAND_CODE_PLAYLIST_";
    private static final String PREFIX_COMMAND_CODE_VOLUME = "COMMAND_CODE_VOLUME_";
    private static final String TAG = "SessionCommandGroup2";
    private Set<SessionCommand2> mCommands;

    public SessionCommandGroup2() {
        this.mCommands = new HashSet();
    }

    public SessionCommandGroup2(SessionCommandGroup2 sessionCommandGroup2) {
        HashSet hashSet = new HashSet();
        this.mCommands = hashSet;
        if (sessionCommandGroup2 != null) {
            hashSet.addAll(sessionCommandGroup2.mCommands);
        }
    }

    private void addCommandsWithPrefix(String str) {
        Field[] fields = SessionCommand2.class.getFields();
        if (fields != null) {
            for (int i = 0; i < fields.length; i++) {
                if (fields[i].getName().startsWith(str) && !fields[i].getName().equals("COMMAND_CODE_CUSTOM")) {
                    try {
                        this.mCommands.add(new SessionCommand2(fields[i].getInt(null)));
                    } catch (IllegalAccessException e) {
                        Log.w(TAG, "Unexpected " + fields[i] + " in MediaSession2");
                    }
                }
            }
        }
    }

    public static SessionCommandGroup2 fromBundle(Bundle bundle) {
        ArrayList parcelableArrayList;
        SessionCommand2 sessionCommand2FromBundle;
        if (bundle == null || (parcelableArrayList = bundle.getParcelableArrayList(KEY_COMMANDS)) == null) {
            return null;
        }
        SessionCommandGroup2 sessionCommandGroup2 = new SessionCommandGroup2();
        for (int i = 0; i < parcelableArrayList.size(); i++) {
            Parcelable parcelable = (Parcelable) parcelableArrayList.get(i);
            if ((parcelable instanceof Bundle) && (sessionCommand2FromBundle = SessionCommand2.fromBundle((Bundle) parcelable)) != null) {
                sessionCommandGroup2.addCommand(sessionCommand2FromBundle);
            }
        }
        return sessionCommandGroup2;
    }

    void addAllPlaybackCommands() {
        addCommandsWithPrefix(PREFIX_COMMAND_CODE_PLAYBACK);
    }

    void addAllPlaylistCommands() {
        addCommandsWithPrefix(PREFIX_COMMAND_CODE_PLAYLIST);
    }

    public void addAllPredefinedCommands() {
        addCommandsWithPrefix(PREFIX_COMMAND_CODE);
    }

    void addAllVolumeCommands() {
        addCommandsWithPrefix(PREFIX_COMMAND_CODE_VOLUME);
    }

    public void addCommand(int i) {
        if (i == 0) {
            throw new IllegalArgumentException("command shouldn't be null");
        }
        this.mCommands.add(new SessionCommand2(i));
    }

    public void addCommand(SessionCommand2 sessionCommand2) {
        if (sessionCommand2 == null) {
            throw new IllegalArgumentException("command shouldn't be null");
        }
        this.mCommands.add(sessionCommand2);
    }

    public Set<SessionCommand2> getCommands() {
        return new HashSet(this.mCommands);
    }

    public boolean hasCommand(int i) {
        if (i == 0) {
            throw new IllegalArgumentException("Use hasCommand(Command) for custom command");
        }
        Iterator<SessionCommand2> it = this.mCommands.iterator();
        while (it.hasNext()) {
            if (it.next().getCommandCode() == i) {
                return true;
            }
        }
        return false;
    }

    public boolean hasCommand(SessionCommand2 sessionCommand2) {
        if (sessionCommand2 != null) {
            return this.mCommands.contains(sessionCommand2);
        }
        throw new IllegalArgumentException("command shouldn't be null");
    }

    public void removeCommand(int i) {
        if (i == 0) {
            throw new IllegalArgumentException("commandCode shouldn't be COMMAND_CODE_CUSTOM");
        }
        this.mCommands.remove(new SessionCommand2(i));
    }

    public void removeCommand(SessionCommand2 sessionCommand2) {
        if (sessionCommand2 == null) {
            throw new IllegalArgumentException("command shouldn't be null");
        }
        this.mCommands.remove(sessionCommand2);
    }

    public Bundle toBundle() {
        ArrayList<? extends Parcelable> arrayList = new ArrayList<>();
        Iterator<SessionCommand2> it = this.mCommands.iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().toBundle());
        }
        Bundle bundle = new Bundle();
        bundle.putParcelableArrayList(KEY_COMMANDS, arrayList);
        return bundle;
    }
}
