#!/bin/sh

# Break the shell process if there are any errors
set -e

# Import common variables and functions
. ../../common.sh


# By convention, the overlay bundles have "source" folder, where the source
# code is downloaded. If the source is downloaded from internet, this allows
# the download to proceed if the process has been interrupted. In our simple
# use case we will copy the file "migration.c" and in this way we will simulate
# (kind of) that it has been downloaded.
#
# The main overlay source folder is "minimal/src/source/overlay" and the bundle
# source artifact will be "minimal/src/source/overlay/migration.c".
mkdir $OVERLAY_WORK_DIR/$BUNDLE_NAME
mkdir $DEST_DIR

cp -r $SRC_DIR/* \
  $DEST_DIR/

# No matter what you do with your bundles, no matter how you compile and/or
# prepare them, in the end all your bundle artifacts must be present in the
# "$OVERLAY_ROOTFS" folder. This special folder represents the final directory
# structure where all overlay bundles put their final artifacts. In our simple
# use case we have already prepared appropriate folder structure in "$DEST_DIR",
# so we will simply copy it in "$OVERLAY_ROOTFS".
#
# The overlay root filesystem folder is "minimal/src/work/overlay_rootfs".

# We use the special function "install_to_overlay" which works in three modes:
#
# Mode 1 - install everything from "$DEST_DIR" in "OVERLAY_ROOTFS":
#
#  install_to_overlay (no arguments provided)
#
# Mode 2 - install specific file/folder from "$DEST_DIR", e.g. "$DEST_DIR/bin"
# directly in "$OVERLAY_ROOTFS":
#
#  install_to_overlay bin
#
# Mode 3 - install specific file/folder from "$DEST_DIR", e.g. "$DEST_DIR/bin"
# as specific file/folder in "$OVERLAY_ROOTFS", e.g. "$OVERLAY_ROOTFS/bin"
#
#  install_to_overlay bin bin
#
# All of the above examples have the same final effect. In our simple use case
# we use the first mode (i.e. we provide no arguments).
install_to_overlay

# In the end we print message that our bundle has been installed and we return
# to the overlay source folder.
echo "Bundle '$BUNDLE_NAME' has been installed."

cd $SRC_DIR

# That's it. Add the overlay bundle in the main ".config" file, rebuild MLL
# (i.e. run "repackage.sh") and when the OS starts, type "migration".

