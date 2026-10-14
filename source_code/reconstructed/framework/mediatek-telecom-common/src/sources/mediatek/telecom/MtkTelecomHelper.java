package mediatek.telecom;

import android.os.Bundle;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkTelecomHelper {

    public static class MtkInCallAdapterHelper {

        public interface ICommandProcessor {
            void hangupAll();

            void hangupHold();

            void inviteConferenceParticipants(String str, ArrayList<String> arrayList);

            void setSortedIncomingCallList(ArrayList<String> arrayList);

            void startVoiceRecording();

            void stopVoiceRecording();
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Code duplicated, block: B:23:0x0051  */
        public static void handleExtCommand(Bundle bundle, ICommandProcessor iCommandProcessor) {
            byte b;
            switch (bundle.getString("key_action", "")) {
                case "setSortedIncomingCallList":
                    b = 3;
                    break;
                case "hangupAll":
                    b = 0;
                    break;
                case "stopVoiceRecording":
                    b = 5;
                    break;
                case "inviteConferenceParticipants":
                    b = 1;
                    break;
                case "startVoiceRecording":
                    b = 4;
                    break;
                case "hangupAllHold":
                    b = 2;
                    break;
                default:
                    b = -1;
                    break;
            }
            if (b == 0) {
                iCommandProcessor.hangupAll();
                return;
            }
            if (b == 1) {
                iCommandProcessor.inviteConferenceParticipants(bundle.getString("param_string_call_id"), bundle.getStringArrayList("param_string_array_list_numbers"));
                return;
            }
            if (b == 2) {
                iCommandProcessor.hangupHold();
                return;
            }
            if (b == 3) {
                iCommandProcessor.setSortedIncomingCallList(bundle.getStringArrayList("param_string_array_call_ids"));
            } else if (b == 4) {
                iCommandProcessor.startVoiceRecording();
            } else {
                if (b != 5) {
                    return;
                }
                iCommandProcessor.stopVoiceRecording();
            }
        }
    }

    public static class MtkInCallServiceHelper {
        private static final String ACTION_HANGUP_ALL = "hangupAll";
        private static final String ACTION_HANGUP_HOLD = "hangupAllHold";
        private static final String ACTION_INVITE_CONFERENCE_PARTICIPANTS = "inviteConferenceParticipants";
        private static final String ACTION_SET_SORTED_INCOMING_CALL_LIST = "setSortedIncomingCallList";
        private static final String ACTION_START_VOICE_RECORDING = "startVoiceRecording";
        private static final String ACTION_STOP_VOICE_RECORDING = "stopVoiceRecording";
        private static final String KEY_ACTION = "key_action";
        private static final String PARAM_INT_TYPE = "param_int_type";
        private static final String PARAM_STRING_ARRAY_CALL_IDS = "param_string_array_call_ids";
        private static final String PARAM_STRING_ARRAY_LIST_NUMBERS = "param_string_array_list_numbers";
        private static final String PARAM_STRING_CALL_ID = "param_string_call_id";
        private static final String PARAM_STRING_PHONE_NUMBER = "param_string_phone_number";

        private static class Builder {
            Bundle mBundle;

            Builder(String str) {
                Bundle bundle = new Bundle();
                this.mBundle = bundle;
                bundle.putString(MtkInCallServiceHelper.KEY_ACTION, str);
            }

            Bundle build() {
                return this.mBundle;
            }

            Builder putIntParam(String str, int i) {
                this.mBundle.putInt(str, i);
                return this;
            }

            Builder putStringArrayListParam(String str, ArrayList<String> arrayList) {
                this.mBundle.putStringArrayList(str, arrayList);
                return this;
            }

            Builder putStringParam(String str, String str2) {
                this.mBundle.putString(str, str2);
                return this;
            }
        }

        public static Bundle buildParamsForHangupAll() {
            return obtainBuilder(ACTION_HANGUP_ALL).build();
        }

        public static Bundle buildParamsForHangupHold() {
            return obtainBuilder(ACTION_HANGUP_HOLD).build();
        }

        public static Bundle buildParamsForInviteConferenceParticipants(String str, ArrayList<String> arrayList) {
            return obtainBuilder(ACTION_INVITE_CONFERENCE_PARTICIPANTS).putStringParam(PARAM_STRING_CALL_ID, str).putStringArrayListParam(PARAM_STRING_ARRAY_LIST_NUMBERS, arrayList).build();
        }

        public static Bundle buildParamsForSetSortedIncomingCallList(ArrayList<String> arrayList) {
            return obtainBuilder(ACTION_SET_SORTED_INCOMING_CALL_LIST).putStringArrayListParam(PARAM_STRING_ARRAY_CALL_IDS, arrayList).build();
        }

        public static Bundle buildParamsForStartVoiceRecording() {
            return obtainBuilder(ACTION_START_VOICE_RECORDING).build();
        }

        public static Bundle buildParamsForStopVoiceRecording() {
            return obtainBuilder(ACTION_STOP_VOICE_RECORDING).build();
        }

        private static Builder obtainBuilder(String str) {
            return new Builder(str);
        }
    }
}
