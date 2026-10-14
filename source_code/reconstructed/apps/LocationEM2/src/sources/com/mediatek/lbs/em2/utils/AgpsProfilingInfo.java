package com.mediatek.lbs.em2.utils;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class AgpsProfilingInfo {
    protected ArrayList<ProfileElement> elements = new ArrayList<>();

    public static class ProfileElement {
        protected String message;
        protected long timestamp;
        protected int type;

        public ProfileElement(int i, long j, String str) {
            this.type = i;
            this.timestamp = j;
            this.message = str;
        }

        public String getMessage() {
            return this.message;
        }

        public long getTimestamp() {
            return this.timestamp;
        }

        public int getType() {
            return this.type;
        }

        public String toString() {
            return (("type=[" + this.type + "] ") + "timestamp=[" + this.timestamp + "] ") + "message=[" + this.message + "] ";
        }
    }

    public void addElement(int i, long j, String str) {
        this.elements.add(new ProfileElement(i, j, str));
    }

    public ArrayList<ProfileElement> getElements() {
        return this.elements;
    }

    public String toString() {
        String str = "size=[" + this.elements.size() + "]\n";
        for (int i = 0; i < this.elements.size(); i++) {
            str = str + "i=" + i + " " + this.elements.get(i) + "\n";
        }
        return str;
    }
}
