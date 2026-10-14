#!/usr/bin/env bash
#
# push_to_pox_project.sh - Push Begonia Vendor Tree to POX-project Organization
# Maintainer: POX-project (https://github.com/POX-project)
#

set -euo pipefail

REPO_ORG="POX-project"
REPO_NAME="${1:-android_vendor_redmi_begonia}"
TARGET_REPO="${REPO_ORG}/${REPO_NAME}"
GH_BIN="/mnt/9f4d8733-a954-435d-b92f-f33c068c3b1e/Leafs/4/antigravity_env/home/.local/bin/gh"

echo "============================================================"
echo " Pushing Begonia Vendor Repository to ${TARGET_REPO}"
echo "============================================================"

# 1. Verify GitHub CLI authentication
if ! "$GH_BIN" auth status >/dev/null 2>&1; then
    echo "[-] Error: GitHub CLI is not authenticated. Please run 'gh auth login'."
    exit 1
fi
echo "[✓] GitHub CLI authentication verified."

# 2. Check if remote repo exists on POX-project org, create if missing
if ! "$GH_BIN" repo view "$TARGET_REPO" >/dev/null 2>&1; then
    echo "[*] Repository ${TARGET_REPO} does not exist. Creating under ${REPO_ORG}..."
    "$GH_BIN" repo create "$TARGET_REPO" --public \
        --description "Official Begonia (Redmi Note 8 Pro) Vendor Tree & HALs for POX Project"
    echo "[✓] Created ${TARGET_REPO} on GitHub."
else
    echo "[✓] Repository ${TARGET_REPO} already exists."
fi

# 3. Initialize local git repository if needed
if [ ! -d ".git" ]; then
    echo "[*] Initializing local git repository on branch 'main'..."
    git init -b main
fi

# 4. Configure .gitignore
cat << 'EOF' > .gitignore
# Build outputs and temporary caches
dist/*.zip
dist/ak3_stage/
dist/reconstructed_libs/
scratch/
__pycache__/
*.pyc
.vscode/
.idea/
*.official
*.orig
EOF
echo "[✓] Configured .gitignore"

# 5. Configure remote
REMOTE_URL="https://github.com/${TARGET_REPO}.git"
if git remote | grep -q "^origin$"; then
    git remote set-url origin "$REMOTE_URL"
else
    git remote add origin "$REMOTE_URL"
fi
echo "[✓] Set remote 'origin' -> ${REMOTE_URL}"

# 6. Stage files
echo "[*] Staging vendor tree files..."
git add Android.bp Android.mk BoardConfigVendor.mk begonia-vendor.mk
git add source_code/
git add scripts/
git add flash_blobs.sh README.md .gitignore

# Stage proprietary files if requested or prompt
echo "[*] Staging proprietary tree..."
git add proprietary/

# 7. Commit
COMMIT_MSG="begonia: vendor: import official LineageOS 17.0 vendor tree and handcrafted HALs

- Restore canonical makefile layout from begonia-MT6785/android_vendor_redmi_begonia
- Synchronize all 1,864 proprietary blobs declared in begonia-vendor.mk
- Add handcrafted native HALs (lights, thermal, power) with full sysfs hardware logic
- Add AnyKernel3 packaging and recovery deployment pipeline
- Maintained by POX Project (@txorav)"

if git diff --staged --quiet; then
    echo "[*] Working directory is clean, nothing new to commit."
else
    git commit -m "$COMMIT_MSG"
    echo "[✓] Committed vendor tree changes."
fi

# 8. Push to GitHub
echo "[*] Pushing to ${TARGET_REPO} (branch: main)..."
git push -u origin main

echo ""
echo "============================================================"
echo "[SUCCESS] Successfully pushed to https://github.com/${TARGET_REPO}!"
echo "============================================================"
