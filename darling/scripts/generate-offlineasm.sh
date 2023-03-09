#!/bin/bash

if [ "$(uname -s)" == "Darwin" ]; then
	echo "Error: this script is meant to be run on Linux system with most of Darling already compiled."
	echo "This is the case because Apple has dropped 32-bit compilation support in their toolchain."
	exit 1
fi

export SRCROOT=$(cd ../.. && pwd)
SCRIPT_DIR=$(pwd)
DARLING_ROOT=$(cd ${SRCROOT}/../../.. && pwd)

if [[ -z "$DARLING_BUILD_ROOT" ]]; then
	DARLING_BUILD_ROOT="$DARLING_ROOT/build"
fi

if [[ -z "$DARLING_SDK_ROOT" ]]; then
	DARLING_SDK_ROOT="${DARLING_ROOT}/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk"
fi

FRAMEWORK_HEADER_ROOT="${DARLING_ROOT}/framework-include"
DERIVED_DIR="${SRCROOT}/DerivedSources/JavaScriptCore"

export ARCHS=(X86_64 C_LOOP)
export CONFIGS=(debug release)
BUILD_VARIANTS=normal
DEFINITIONS=(
	# IMPORTANT! keep this in sync with the definitions in CMakeLists.txt
	ENABLE_3D_TRANSFORMS
	ENABLE_APPLE_PAY
	ENABLE_APPLE_PAY_SESSION_V3
	ENABLE_APPLE_PAY_SESSION_V4
	ENABLE_APPLICATION_MANIFEST
	ENABLE_ATTACHMENT_ELEMENT
	ENABLE_AVF_CAPTIONS
	ENABLE_CACHE_PARTITIONING
	ENABLE_CHANNEL_MESSAGING
	ENABLE_CONTENT_FILTERING
	ENABLE_CSS_BOX_DECORATION_BREAK
	ENABLE_CSS_COMPOSITING
	ENABLE_CSS_CONIC_GRADIENTS
	ENABLE_CSS_PAINTING_API
	ENABLE_CSS_SCROLL_SNAP
	ENABLE_CSS_SELECTORS_LEVEL4
	ENABLE_CSS_TRAILING_WORD
	ENABLE_CSS_TYPED_OM
	ENABLE_CURSOR_VISIBILITY
	ENABLE_DARK_MODE_CSS
	ENABLE_DATACUE_VALUE
	ENABLE_DATALIST_ELEMENT
	ENABLE_ENCRYPTED_MEDIA
	ENABLE_FILTERS_LEVEL_2
	ENABLE_FTL_JIT
	ENABLE_FULLSCREEN_API
	ENABLE_GAMEPAD
	ENABLE_GEOLOCATION
	ENABLE_INDEXED_DATABASE
	ENABLE_INDEXED_DATABASE_IN_WORKERS
	ENABLE_INPUT_TYPE_COLOR
	ENABLE_INSPECTOR_ALTERNATE_DISPATCHERS
	ENABLE_INTERSECTION_OBSERVER
	ENABLE_INTL
	ENABLE_KEYBOARD_CODE_ATTRIBUTE
	ENABLE_KEYBOARD_KEY_ATTRIBUTE
	ENABLE_LEGACY_CSS_VENDOR_PREFIXES
	ENABLE_LEGACY_CUSTOM_PROTOCOL_MANAGER
	ENABLE_LEGACY_ENCRYPTED_MEDIA
	ENABLE_MAC_GESTURE_EVENTS
	ENABLE_MAC_VIDEO_TOOLBOX
	ENABLE_MATHML
	ENABLE_MEDIA_CONTROLS_SCRIPT
	ENABLE_MEDIA_SOURCE
	ENABLE_MEDIA_STREAM
	ENABLE_MEMORY_SAMPLER
	ENABLE_METER_ELEMENT
	ENABLE_MOUSE_CURSOR_SCALE
	ENABLE_NETWORK_CACHE_SPECULATIVE_REVALIDATION
	ENABLE_NOTIFICATIONS
	ENABLE_PAYMENT_REQUEST
	ENABLE_PDFKIT_PLUGIN
	ENABLE_POINTER_EVENTS
	ENABLE_POINTER_LOCK
	ENABLE_PUBLIC_SUFFIX_LIST
	ENABLE_REMOTE_INSPECTOR
	ENABLE_RESIZE_OBSERVER
	ENABLE_RESOURCE_LOAD_STATISTICS
	ENABLE_RESOURCE_USAGE
	ENABLE_RUBBER_BANDING
	ENABLE_SANDBOX_EXTENSIONS
	ENABLE_SERVER_PRECONNECT
	ENABLE_SERVICE_CONTROLS
	ENABLE_SERVICE_WORKER
	ENABLE_SHAREABLE_RESOURCE
	ENABLE_SPEECH_SYNTHESIS
	ENABLE_STREAMS_API
	ENABLE_SVG_FONTS
	ENABLE_TELEPHONE_NUMBER_DETECTION
	ENABLE_TEXT_AUTOSIZING
	ENABLE_USERSELECT_ALL
	ENABLE_USER_MESSAGE_HANDLERS
	ENABLE_VARIATION_FONTS
	ENABLE_VIDEO
	ENABLE_VIDEO_PRESENTATION_MODE
	ENABLE_VIDEO_TRACK
	ENABLE_VIDEO_USES_ELEMENT_FULLSCREEN
	ENABLE_WEBDRIVER_MOUSE_INTERACTIONS
	ENABLE_WEBDRIVER_KEYBOARD_INTERACTIONS
	ENABLE_WEBGL
	ENABLE_WEBGL2
	ENABLE_WEBGPU
	ENABLE_WEB_AUDIO
	ENABLE_WEB_AUTHN
	ENABLE_WEB_CRYPTO
	ENABLE_WEB_PROCESS_SANDBOX
	ENABLE_WEB_RTC
	ENABLE_WIRELESS_PLAYBACK_TARGET
	ENABLE_XSLT
	U_HIDE_DEPRECATED_API
	U_DISABLE_RENAMING=1
	U_SHOW_CPLUSPLUS_API=0

	PRIVATE # For kdebug

	DARLING=1
	__APPLE__
	__DYNAMIC__
	__MACH__
	_DARWIN_C_SOURCE
	_POSIX_C_SOURCE
	DARWIN
	TARGET_OS_MAC=1
)
INCLUDES=(
	"${SRCROOT}"

	"${SRCROOT}/DerivedSources/JavaScriptCore"
	"${SRCROOT}/DerivedSources/JavaScriptCore/inspector"

	"${SRCROOT}/API"
	"${SRCROOT}/assembler"
	"${SRCROOT}/b3"
	"${SRCROOT}/b3/air"
	"${SRCROOT}/bindings"
	"${SRCROOT}/builtins"
	"${SRCROOT}/bytecode"
	"${SRCROOT}/bytecompiler"
	"${SRCROOT}/debugger"
	"${SRCROOT}/dfg"
	"${SRCROOT}/disassembler"
	"${SRCROOT}/disassembler/ARM64"
	"${SRCROOT}/disassembler/udis86"
	"${SRCROOT}/domjit"
	"${SRCROOT}/ftl"
	"${SRCROOT}/heap"
	"${SRCROOT}/inspector"
	"${SRCROOT}/inspector/agents"
	"${SRCROOT}/inspector/augmentable"
	"${SRCROOT}/inspector/remote"
	"${SRCROOT}/inspector/remote/cocoa"
	"${SRCROOT}/inspector/remote/glib"
	"${SRCROOT}/inspector/remote/socket"
	"${SRCROOT}/interpreter"
	"${SRCROOT}/jit"
	"${SRCROOT}/llint"
	"${SRCROOT}/parser"
	"${SRCROOT}/profiler"
	"${SRCROOT}/runtime"
	"${SRCROOT}/tools"
	"${SRCROOT}/wasm"
	"${SRCROOT}/wasm/js"
	"${SRCROOT}/yarr"

	"${SRCROOT}/darling/include"
)
CFLAGS=(
	-std=gnu++17
	-mmacosx-version-min=10.15
	"-isysroot${DARLING_SDK_ROOT}"
	"-isystem${DARLING_ROOT}/src/external/libcxx/include"
	-B "${DARLING_BUILD_ROOT}/src/external/cctools-port/cctools/ld64/src/"
	-B "${DARLING_BUILD_ROOT}/src/external/cctools-port/cctools/misc/"
	"-fuse-ld=${DARLING_BUILD_ROOT}/src/external/cctools-port/cctools/ld64/src/x86_64-apple-darwin19-ld"
)

DEFINITIONS_release=(
	NDEBUG
)
CFLAGS_release=(
	-O1
)

CFLAGS_X86_64=(
	-target x86_64-apple-darwin19
)

DEFINITIONS_C_LOOP=(
	ENABLE_C_LOOP=1
	ENABLE_JIT=0
)
CFLAGS_C_LOOP=(
	-target i386-apple-darwin19
)

die() {
	echo "Command failed"
	exit 1
}

for DEFINITION in "${DEFINITIONS[@]}"; do
	CFLAGS+=("-D${DEFINITION}")
done

for INCLUDE in "${INCLUDES[@]}"; do
	CFLAGS+=("-I${INCLUDE}")
done

for ARCH in "${ARCHS[@]}"; do
	CFLAGS_ARCH=("${CFLAGS[@]}")
	DEFINITIONS_ARCH_NAME="DEFINITIONS_${ARCH}[@]"
	INCLUDES_ARCH_NAME="INCLUDES_${ARCH}[@]"
	CFLAGS_ARCH_NAME="CFLAGS_${ARCH}[@]"

	for DEFINITION in "${!DEFINITIONS_ARCH_NAME}"; do
		CFLAGS_ARCH+=("-D${DEFINITION}")
	done

	for INCLUDE in "${!INCLUDES_ARCH_NAME}"; do
		CFLAGS_ARCH+=("-I${INCLUDE}")
	done

	for CFLAG in "${!CFLAGS_ARCH_NAME}"; do
		CFLAGS_ARCH+=("${CFLAG}")
	done

	for CONFIG in "${CONFIGS[@]}"; do
		CFLAGS_ARCH_CONFIG=("${CFLAGS_ARCH[@]}")
		DEFINITIONS_CONFIG_NAME="DEFINITIONS_${CONFIG}[@]"
		INCLUDES_CONFIG_NAME="INCLUDES_${CONFIG}[@]"
		CFLAGS_CONFIG_NAME="CFLAGS_${CONFIG}[@]"
		DEFINITIONS_ARCH_CONFIG_NAME="DEFINITIONS_${ARCH}_${CONFIG}[@]"
		INCLUDES_ARCH_CONFIG_NAME="INCLUDES_${ARCH}_${CONFIG}[@]"
		CFLAGS_ARCH_CONFIG_NAME="CFLAGS_${ARCH}_${CONFIG}[@]"

		echo "Processing ${ARCH}/${CONFIG}"

		for DEFINITION in "${!DEFINITIONS_CONFIG_NAME}"; do
			CFLAGS_ARCH_CONFIG+=("-D${DEFINITION}")
		done

		for INCLUDE in "${!INCLUDES_CONFIG_NAME}"; do
			CFLAGS_ARCH_CONFIG+=("-I${INCLUDE}")
		done

		for CFLAG in "${!CFLAGS_CONFIG_NAME}"; do
			CFLAGS_ARCH_CONFIG+=("${CFLAG}")
		done

		for DEFINITION in "${!DEFINITIONS_ARCH_CONFIG_NAME}"; do
			CFLAGS_ARCH_CONFIG+=("-D${DEFINITION}")
		done

		for INCLUDE in "${!INCLUDES_ARCH_CONFIG_NAME}"; do
			CFLAGS_ARCH_CONFIG+=("-I${INCLUDE}")
		done

		for CFLAG in "${!CFLAGS_ARCH_CONFIG_NAME}"; do
			CFLAGS_ARCH_CONFIG+=("${CFLAG}")
		done

		LLINT_DIR="${SRCROOT}/LLIntOffsets/${ARCH}/${CONFIG}"

		mkdir -p "${LLINT_DIR}"

		echo "  Generating ${ARCH}/${CONFIG}/LLIntDesiredSettings.h"
		/usr/bin/env ruby "${SRCROOT}/offlineasm/generate_settings_extractor.rb" "-I${DERIVED_DIR}" "${SRCROOT}/llint/LowLevelInterpreter.asm" "${LLINT_DIR}/LLIntDesiredSettings.h" "${ARCH}" || die

		echo "  Compiling ${ARCH}/${CONFIG}/JSCLLIntSettingsExtractor"
		clang "${CFLAGS_ARCH_CONFIG[@]}" "-I${LLINT_DIR}" "${SRCROOT}/llint/LLIntSettingsExtractor.cpp" -o "${LLINT_DIR}/JSCLLIntSettingsExtractor" || die

		echo "  Generating ${ARCH}/${CONFIG}/LLIntDesiredOffsets.h"
		/usr/bin/env ruby "${SRCROOT}/offlineasm/generate_offset_extractor.rb" "-I${DERIVED_DIR}" "${SRCROOT}/llint/LowLevelInterpreter.asm" "${LLINT_DIR}/JSCLLIntSettingsExtractor" "${LLINT_DIR}/LLIntDesiredOffsets.h" "${ARCH}" "${BUILD_VARIANTS}" || die

		echo "  Compiling ${ARCH}/${CONFIG}/JSCLLIntOffsetsExtractor"
		clang "${CFLAGS_ARCH_CONFIG[@]}" "-I${LLINT_DIR}" "${SRCROOT}/llint/LLIntOffsetsExtractor.cpp" -o "${LLINT_DIR}/JSCLLIntOffsetsExtractor" || die

		echo "  Generating ${ARCH}/${CONFIG}/LLIntAssembly.h"
		/usr/bin/env ruby "${SRCROOT}/offlineasm/asm.rb" "-I${DERIVED_DIR}" "${SRCROOT}/llint/LowLevelInterpreter.asm" "${LLINT_DIR}/JSCLLIntOffsetsExtractor" "${LLINT_DIR}/LLIntAssembly.h" "${BUILD_VARIANTS}" || die
	done
done

for ARCH in "${ARCHS[@]}"; do
	for CONFIG in "${CONFIGS[@]}"; do
		TMP_PATH="${DERIVED_DIR}/LLIntOffsets/${ARCH}/${CONFIG}"
		rm -rf $TMP_PATH
		mkdir -p "$TMP_PATH"

		echo "// offlineasm code for ${ARCH}-${CONFIG}" >> "${TMP_PATH}/LLIntAssembly.h"
		cat "${SRCROOT}/LLIntOffsets/${ARCH}/${CONFIG}/LLIntAssembly.h" >> "${TMP_PATH}/LLIntAssembly.h"

		# The really weird thing about C_LOOP is that the script above implies that C_LOOP is only 
		# required for i386, however, LowLevelInterpreter.cpp will fail to link on X86_64 without 
		# the C_LOOP header
		if [[ "$ARCH" = "X86_64" ]]; then
			echo "// offlineasm code for C_LOOP-${CONFIG}" >> "${TMP_PATH}/LLIntAssembly.h"
			cat "${SRCROOT}/LLIntOffsets/C_LOOP/${CONFIG}/LLIntAssembly.h" >> "${TMP_PATH}/LLIntAssembly.h"
		fi
	done
done
