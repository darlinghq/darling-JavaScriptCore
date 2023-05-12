export SRCROOT="$(cd ../.. && pwd)"
export BUILT_PRODUCTS_DIR="$SRCROOT"
export BUILD_SCRIPTS_DIR="$SRCROOT/darling/submodules/WTF/Scripts"

$SRCROOT/Scripts/generate-unified-sources.sh
