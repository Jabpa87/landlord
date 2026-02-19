# Why CoPlay / Unity MCP Might Not Be Working

Your project uses **two different** CoPlay-related integrations. Confusion between them is a common reason "CoPlay" appears broken.

---

## 1. Two Different Systems

| | **CoPlay plugin + CoPlay MCP** | **MCP for Unity** |
|---|-------------------------------|-------------------|
| **What you have** | ✅ `com.coplaydev.coplay` (coplay-unity-plugin) in Packages | ❌ Not installed by default |
| **Unity** | CoPlay window: `Window > Coplay > Toggle Window` (or Ctrl+G). Requires **login**. | `Window > MCP for Unity` → **Start Server** (HTTP on localhost:8080) |
| **Cursor MCP** | `coplay-mcp` with **stdio**: `uvx` + `coplay-mcp-server@latest` | `unityMCP` with **HTTP**: `"url": "http://localhost:8080/mcp"` |
| **Typical use** | CoPlay’s own tools (e.g. list editors, coplay_task) | Tools like capture UI, manage scene, execute_custom_tool (e.g. your `CoplayMcpPing`, `CoplayGameSimulationRunner`) |

The **font-size plan** referred to “CoPlay (Unity MCP)” and tools like `capture_ui_canvas` / `capture_scene_object` / `set_unity_project_root`. Those are from **MCP for Unity**, not from the CoPlay plugin’s MCP.

---

## 2. If You Want “CoPlay” as in the Plan (capture UI, set project root, custom tools)

You need **MCP for Unity** (the Unity-side server), not only the CoPlay plugin.

### Step 1: Install MCP for Unity in Unity

1. In Unity: **Window > Package Manager > + > Add package from git URL...**
2. Use:
   ```
   https://github.com/CoplayDev/unity-mcp.git?path=/MCPForUnity#main
   ```
   (Or `#beta` for beta.)
3. After import, open **Window > MCP for Unity**.
4. Click **Start Server** (starts HTTP server on `localhost:8080`).
5. In the dropdown, select **Cursor** and click **Configure**.
6. Confirm you see **Connected ✓**.

### Step 2: Configure Cursor for MCP for Unity

Cursor must talk to the Unity HTTP server. Add this to your MCP config (e.g. Cursor Settings > MCP, or the JSON file Cursor uses for MCP):

```json
{
  "mcpServers": {
    "unityMCP": {
      "url": "http://localhost:8080/mcp"
    }
  }
}
```

Restart Cursor (or reload MCP) after changing the config.

### Step 3: Checklist

- [ ] Unity is **running** and the project is open.
- [ ] **Window > MCP for Unity** is open and **Start Server** has been clicked (you see “Connected” or the server running).
- [ ] No other app is using port **8080**.
- [ ] Cursor MCP config has **unityMCP** with **url** `http://localhost:8080/mcp`.
- [ ] Firewall / antivirus is not blocking localhost.

If something still fails, see the official [Fix Unity MCP and Cursor, VSCode & Windsurf](https://github.com/CoplayDev/unity-mcp/wiki/1.-Fix-Unity-MCP-and-Cursor,-VSCode-&-Windsurf) guide (uv/Python, PATH, etc.).

---

## 3. If You Use the CoPlay Plugin MCP (coplay-mcp-server)

This is the **stdio**-based MCP that talks to the CoPlay plugin (your existing package).

- **Unity:** Open **Window > Coplay > Toggle Window**, then **log in**.
- **Cursor:** MCP config should have something like:
  ```json
  "coplay-mcp": {
    "command": "uvx",
    "args": ["--python", ">=3.11", "coplay-mcp-server@latest"]
  }
  ```
- **Requirements:** Python 3.11+ and `uv` installed; `uvx` must be on your PATH.

Test with: *“List all of the open unity editors using Coplay MCP”*. If that fails, CoPlay MCP is not connected (plugin not running, not logged in, or uv/Python/Cursor config issue).

---

## 4. Your Custom Tools (CoplayMcpPing, CoplayGameSimulationRunner)

`Assets/Editor/CoplayMcpPing.cs` and `CoplayGameSimulationRunner.cs` are **custom tools** that are intended to be run from an MCP client. With **MCP for Unity** installed and connected, they can be invoked via the **execute_custom_tool** (or equivalent) by passing the class/method name. They do not run automatically; something (e.g. Cursor via MCP for Unity) must call them.

---

## 5. Quick Summary

- **“CoPlay not working”** often means:
  - You want **MCP for Unity** (capture, set project root, custom tools) but only the **CoPlay plugin** is installed → install **MCP for Unity** and use **unityMCP** + `http://localhost:8080/mcp` in Cursor; or
  - **MCP for Unity** is installed but the server in Unity is not started or Cursor is not configured for **unityMCP**; or
  - You are using **CoPlay MCP** (coplay-mcp-server) but the CoPlay window is not open or you are not logged in.

Use this doc to decide which of the two systems you need and then follow the matching steps above.
