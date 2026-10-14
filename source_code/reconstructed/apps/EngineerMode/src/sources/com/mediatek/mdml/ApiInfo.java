package com.mediatek.mdml;

/* JADX INFO: loaded from: classes3.dex */
class ApiInfo {
    private CmdApiMap[] cmdTable;
    private String m_api;
    private MONITOR_CMD_CODE m_cmdCode;
    private String m_method;
    private int m_version;

    class CmdApiMap {
        public MONITOR_CMD_CODE m_cmdCode;
        public String m_szApi;
        public String m_szMethod;

        public CmdApiMap(MONITOR_CMD_CODE monitor_cmd_code, String str, String str2) {
            this.m_cmdCode = monitor_cmd_code;
            this.m_szApi = str;
            this.m_szMethod = str2;
        }
    }

    public ApiInfo(MONITOR_CMD_CODE monitor_cmd_code) {
        CmdApiMap[] cmdApiMapArr = {new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_SESSION_CREATE, "MDMonitor.Session", "create"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_SESSION_CLOSE, "MDMonitor.Session", "close"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_SUBSCRIBE, "MDMonitor.Trap", "subscribe"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE, "MDMonitor.Trap", "unsubscribe"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_ENABLE, "MDMonitor.Trap", "enable"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_DISABLE, "MDMonitor.Trap", "disable"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_RECEIVER_SET, "MDMonitor.Trap.Receiver", "set")};
        this.cmdTable = cmdApiMapArr;
        this.m_version = 0;
        this.m_api = null;
        this.m_method = null;
        this.m_cmdCode = monitor_cmd_code;
        for (CmdApiMap cmdApiMap : cmdApiMapArr) {
            if (monitor_cmd_code.equals(cmdApiMap.m_cmdCode)) {
                this.m_api = cmdApiMap.m_szApi;
                this.m_method = cmdApiMap.m_szMethod;
                this.m_version = 1;
                return;
            }
        }
    }

    public ApiInfo(String str, String str2) {
        this(str, str2, 1);
    }

    public ApiInfo(String str, String str2, int i) {
        this.cmdTable = new CmdApiMap[]{new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_SESSION_CREATE, "MDMonitor.Session", "create"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_SESSION_CLOSE, "MDMonitor.Session", "close"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_SUBSCRIBE, "MDMonitor.Trap", "subscribe"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE, "MDMonitor.Trap", "unsubscribe"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_ENABLE, "MDMonitor.Trap", "enable"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_DISABLE, "MDMonitor.Trap", "disable"), new CmdApiMap(MONITOR_CMD_CODE.MONITOR_CMD_CODE_TRAP_RECEIVER_SET, "MDMonitor.Trap.Receiver", "set")};
        this.m_version = i;
        this.m_api = str;
        this.m_method = str2;
        this.m_cmdCode = MONITOR_CMD_CODE.MONITOR_CMD_CODE_UNDEFINED;
        for (CmdApiMap cmdApiMap : this.cmdTable) {
            if (str.equals(cmdApiMap.m_szApi) && str2.equals(cmdApiMap.m_szMethod)) {
                this.m_cmdCode = cmdApiMap.m_cmdCode;
                return;
            }
        }
    }

    public String GetApi() {
        return this.m_api;
    }

    public MONITOR_CMD_CODE GetCmdCode() {
        return this.m_cmdCode;
    }

    public String GetMethod() {
        return this.m_method;
    }

    public int GetVersion() {
        return this.m_version;
    }
}
