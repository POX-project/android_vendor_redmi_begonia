package com.mediatek.mdml;

import android.content.Context;
import android.util.Log;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
class JsonCmdEncoder {
    private static final int SID_ERR = 0;
    private static final String TAG = "MDML/JsonCmdEncoder";
    private Context mClientContext;
    private MCPTransmitter m_McpTransmitter;
    private HIDLMCPTransmitter m_hidlMcpTransmitter;

    public class ValueHolder<T> {
        public T value;

        public ValueHolder() {
        }
    }

    public JsonCmdEncoder(HIDLMCPTransmitter hIDLMCPTransmitter, Context context) {
        this.mClientContext = null;
        this.m_hidlMcpTransmitter = hIDLMCPTransmitter;
        if (context == null) {
            throw new Error("MDML/JsonCmdEncoder context should not be null!");
        }
        this.mClientContext = context;
        Log.d(TAG, "JsonCmdEncoder with HIDLMCPTransmitter  Constructor done!");
    }

    public JsonCmdEncoder(MCPTransmitter mCPTransmitter, Context context) {
        this.mClientContext = null;
        this.m_McpTransmitter = mCPTransmitter;
        if (context == null) {
            throw new Error("MDML/JsonCmdEncoder context should not be null!");
        }
        this.mClientContext = context;
        Log.d(TAG, "JsonCmdEncoder with MCPTransmitter Constructor done!");
    }

    /* JADX WARN: Type inference failed for: r13v5, types: [T, org.json.JSONObject] */
    private MONITOR_CMD_RESP ROUTINE_TASK(MONITOR_CMD_CODE monitor_cmd_code, JSONObject jSONObject, ValueHolder<JSONObject> valueHolder) {
        ApiInfo apiInfo = new ApiInfo(monitor_cmd_code);
        try {
            jSONObject.put(JsonCmd.STR_API_KEY, apiInfo.GetApi());
            jSONObject.put(JsonCmd.STR_METHOD_KEY, apiInfo.GetMethod());
            jSONObject.put(JsonCmd.STR_VERSION_KEY, apiInfo.GetVersion());
            MCPInfo mCPInfo = new MCPInfo();
            byte[] bytes = (jSONObject.toString() + (char) 0).getBytes();
            mCPInfo.SetData(MCP_TYPE.MCP_TYPE_JSON_CMD, bytes.length, bytes);
            MCPInfo mCPInfo2 = new MCPInfo();
            if (!Send(mCPInfo, mCPInfo2)) {
                Log.e(TAG, "Send command failed.");
                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_NO_CONNECTION;
            }
            if (MCP_TYPE.MCP_TYPE_UNDEFINED == mCPInfo2.GetType()) {
                Log.e(TAG, "No reply received.");
                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_NO_CONNECTION;
            }
            if (MCP_TYPE.MCP_TYPE_JSON_CMD_RESP != mCPInfo2.GetType()) {
                Log.e(TAG, "Reply type not in Json. [" + mCPInfo2.GetType().ordinal() + "]");
                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
            }
            ValueHolder<JSONObject> valueHolder2 = valueHolder == null ? new ValueHolder<>() : valueHolder;
            try {
                String str = new String(mCPInfo2.GetData(), "UTF-8");
                Log.d(TAG, "Receive reply [" + str + "]");
                valueHolder2.value = new JSONObject(str);
                try {
                    String string = valueHolder2.value.getString(JsonCmd.STR_API_KEY);
                    if (!string.equals(apiInfo.GetApi())) {
                        Log.e(TAG, "Reply API [" + string + "] != Command API [" + apiInfo.GetApi() + "]");
                        return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                    }
                    try {
                        String string2 = valueHolder2.value.getString(JsonCmd.STR_METHOD_KEY);
                        if (!string2.equals(apiInfo.GetMethod())) {
                            Log.e(TAG, "Reply Method [" + string2 + "] != Command Method [" + apiInfo.GetMethod() + "]");
                            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                        }
                        try {
                            int i = valueHolder2.value.getInt(JsonCmd.STR_VERSION_KEY);
                            if (i != apiInfo.GetVersion()) {
                                Log.e(TAG, "Reply Version [" + i + "] != Command Version [" + apiInfo.GetVersion() + "]");
                                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                            }
                            try {
                                int i2 = valueHolder2.value.getInt(JsonCmd.STR_RET_KEY);
                                if (i2 >= 0 && MONITOR_CMD_RESP.MONITOR_CMD_RESP_SIZE.ordinal() > i2) {
                                    return MONITOR_CMD_RESP.values()[i2];
                                }
                                Log.e(TAG, "ret is invalid. [" + i2 + "]");
                                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                            } catch (Exception e) {
                                Log.e(TAG, "No key: [ret] in JSON reply: " + valueHolder2.value.toString());
                                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                            }
                        } catch (Exception e2) {
                            Log.e(TAG, "No key: [version] in JSON reply: " + valueHolder2.value.toString());
                            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                        }
                    } catch (Exception e3) {
                        Log.e(TAG, "No key: [method] in JSON reply: " + valueHolder2.value.toString());
                        return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                    }
                } catch (Exception e4) {
                    Log.e(TAG, "No key: [api] in JSON reply: " + valueHolder2.value.toString());
                    return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
                }
            } catch (Exception e5) {
                Log.e(TAG, "Failed to parse reply string to Json.");
                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_REPLY;
            }
        } catch (Exception e6) {
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    boolean Send(MCPInfo mCPInfo, MCPInfo mCPInfo2) {
        HIDLMCPTransmitter hIDLMCPTransmitter = this.m_hidlMcpTransmitter;
        if (hIDLMCPTransmitter == null) {
            return false;
        }
        return hIDLMCPTransmitter.Send(mCPInfo, mCPInfo2);
    }

    public MONITOR_CMD_RESP closeSession(long j) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_SESSIONID_KEY, j);
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            return ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_SESSION_CLOSE, jSONObject, null);
        } catch (Exception e) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public long createSession() {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_CLIENTPACKAGE_KEY, this.mClientContext.getPackageName());
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            ValueHolder<JSONObject> valueHolder = new ValueHolder<>();
            MONITOR_CMD_RESP monitor_cmd_respROUTINE_TASK = ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_SESSION_CREATE, jSONObject, valueHolder);
            if (MONITOR_CMD_RESP.MONITOR_CMD_RESP_SUCCESS != monitor_cmd_respROUTINE_TASK) {
                if (MONITOR_CMD_RESP.MONITOR_CMD_RESP_UNAUTHORIZED != monitor_cmd_respROUTINE_TASK) {
                    return 0L;
                }
                throw new Error("Unauthorized to use MDML!");
            }
            try {
                return ((JSONObject) valueHolder.value).getJSONObject(JsonCmd.STR_DATA_KEY).getLong(JsonCmd.STR_SESSIONID_KEY);
            } catch (Exception e) {
                Log.e(TAG, "No key: [api] in JSON reply: " + ((JSONObject) valueHolder.value).toString());
                return 0L;
            }
        } catch (Exception e2) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return 0L;
        }
    }

    public MONITOR_CMD_RESP disableTrap(long j) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_SESSIONID_KEY, j);
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            return ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_DISABLE, jSONObject, null);
        } catch (Exception e) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    public MONITOR_CMD_RESP enableTrap(long j) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_SESSIONID_KEY, j);
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            return ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_ENABLE, jSONObject, null);
        } catch (Exception e) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    public MONITOR_CMD_RESP setTrapReceiver(long j, String str) {
        JSONObject jSONObject = new JSONObject();
        if (str == null) {
            Log.e(TAG, "server name is null.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_PARAMETERS;
        }
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_SESSIONID_KEY, j);
            jSONObject2.put(JsonCmd.STR_SERVERNAME_KEY, String.valueOf(j) + str);
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            return ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_RECEIVER_SET, jSONObject, null);
        } catch (Exception e) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    public MONITOR_CMD_RESP subscribeMultiTrap(long j, TRAP_TYPE trap_type, long[] jArr) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_SESSIONID_KEY, j);
            String strToTrapStr = TRAP_TYPE.ToTrapStr(trap_type);
            if (strToTrapStr == null) {
                Log.e(TAG, "TRAP_TYPE is invalid. type = " + trap_type.ordinal());
                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_PARAMETERS;
            }
            jSONObject2.put(JsonCmd.STR_TYPE_KEY, strToTrapStr);
            if (jArr.length == 1) {
                jSONObject2.put(JsonCmd.STR_MSGID_KEY, jArr[0]);
            } else {
                JSONArray jSONArray = new JSONArray();
                for (long j2 : jArr) {
                    jSONArray.put(j2);
                }
                jSONObject2.put(JsonCmd.STR_MSGID_KEY, jSONArray);
            }
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            return ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_SUBSCRIBE, jSONObject, null);
        } catch (Exception e) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    public MONITOR_CMD_RESP subscribeTrap(long j, TRAP_TYPE trap_type, long j2) {
        return subscribeMultiTrap(j, trap_type, new long[]{j2});
    }

    public MONITOR_CMD_RESP unsubscribeMultiTrap(long j, TRAP_TYPE trap_type, long[] jArr) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(JsonCmd.STR_SESSIONID_KEY, j);
            String strToTrapStr = TRAP_TYPE.ToTrapStr(trap_type);
            if (strToTrapStr == null) {
                Log.e(TAG, "TRAP_TYPE is invalid. type = " + trap_type.ordinal());
                return MONITOR_CMD_RESP.MONITOR_CMD_RESP_BAD_PARAMETERS;
            }
            jSONObject2.put(JsonCmd.STR_TYPE_KEY, strToTrapStr);
            if (jArr.length == 1) {
                jSONObject2.put(JsonCmd.STR_MSGID_KEY, jArr[0]);
            } else {
                JSONArray jSONArray = new JSONArray();
                for (long j2 : jArr) {
                    jSONArray.put(j2);
                }
                jSONObject2.put(JsonCmd.STR_MSGID_KEY, jSONArray);
            }
            jSONObject.put(JsonCmd.STR_ARG_KEY, jSONObject2);
            return ROUTINE_TASK(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE, jSONObject, null);
        } catch (Exception e) {
            Log.e(TAG, "Failed to insert data into Json cmd.");
            return MONITOR_CMD_RESP.MONITOR_CMD_RESP_INTERNAL_ERROR;
        }
    }

    public MONITOR_CMD_RESP unsubscribeTrap(long j, TRAP_TYPE trap_type, long j2) {
        return unsubscribeMultiTrap(j, trap_type, new long[]{j2});
    }
}
