#!/bin/sh
# Based on Scripts/generate-derived-sources.sh

set -e

ARGS=("$@")

export SRCROOT=$(cd ../.. && pwd)
export BUILT_PRODUCTS_DIR=$SRCROOT

mkdir -p "${BUILT_PRODUCTS_DIR}/DerivedSources/JavaScriptCore"
cd "${BUILT_PRODUCTS_DIR}/DerivedSources/JavaScriptCore"

if [[ -d JavaScriptCore ]]; then
    rm -d JavaScriptCore
fi
/bin/ln -sf "${SRCROOT}" JavaScriptCore

export JavaScriptCore="JavaScriptCore"

if [ ! $CC ]; then
    export CC="clang"
fi


make --no-builtin-rules -f "JavaScriptCore/DerivedSources.make" -j `grep -c ^processor /proc/cpuinfo` "${ARGS[@]}"
