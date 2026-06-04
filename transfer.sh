#!/bin/bash

# Usage:
# ./copy.sh <source_folder> <destination_path>

# Paths
SRC="/home/pranav/luckfox-pico/output/image"
DEST="/mnt/e/LuckFoxPico/BuildRoot/NewBuild"

# Step 1: Check if source directory exists
if [ ! -d "$SRC" ]; then
    echo "Source directory does not exist!"
    exit 1
fi

# Step 2: Copy all files and folders recursively
cp -rf "$SRC"/* "$DEST"

if [ $? -eq 0 ]; then
    echo "All files copied successfully."
else
    echo "Copy failed."
    exit 1
fi

