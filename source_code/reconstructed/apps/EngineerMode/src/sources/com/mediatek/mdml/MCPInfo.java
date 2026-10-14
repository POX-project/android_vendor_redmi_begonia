package com.mediatek.mdml;

/* JADX INFO: loaded from: classes3.dex */
class MCPInfo {
    private static final String TAG = "MDML/MCPInfo";
    private MCP_TYPE m_type = MCP_TYPE.MCP_TYPE_UNDEFINED;
    private int m_len = 0;
    private byte[] m_data = null;

    public byte[] GetData() {
        return this.m_data;
    }

    public int GetLen() {
        return this.m_len;
    }

    public MCP_TYPE GetType() {
        return this.m_type;
    }

    public void Reset() {
        this.m_type = MCP_TYPE.MCP_TYPE_UNDEFINED;
        this.m_len = 0;
        this.m_data = null;
    }

    public void SetData(MCP_TYPE mcp_type, int i, byte[] bArr) {
        SetData(mcp_type, i, bArr, false);
    }

    public void SetData(MCP_TYPE mcp_type, int i, byte[] bArr, boolean z) {
        if (i > 131072) {
            i = 131072;
        }
        Reset();
        if (mcp_type != null) {
            this.m_type = mcp_type;
        }
        if (i > 0) {
            this.m_len = i;
        }
        if (bArr == null) {
            this.m_data = null;
            return;
        }
        if (!z) {
            this.m_data = bArr;
            return;
        }
        if (i == 0) {
            this.m_data = bArr;
            return;
        }
        int i2 = this.m_len;
        byte[] bArr2 = new byte[i2];
        this.m_data = bArr2;
        System.arraycopy(bArr, 0, bArr2, 0, i2);
    }

    public void finalize() {
        Reset();
    }
}
