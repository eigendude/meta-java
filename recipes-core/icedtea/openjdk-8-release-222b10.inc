require icedtea8-native.inc

LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552"

FILESPATH =. "${FILE_DIRNAME}/openjdk-8-222b10:"

# Force arm mode for now
ARM_INSTRUCTION_SET_armv4t = "ARM"

ICEDTEA_URI = "http://icedtea.wildebeest.org/download/source/${ICEDTEA}.tar.gz;name=iced"

ICEDTEA_PREFIX = "icedtea8-forest-3.0"
ICEDTEA_HG_URL = "http://icedtea.classpath.org/hg/release/${ICEDTEA_PREFIX}"

OPENJDK_FILE = "${OPENJDK_CHANGESET}.tar.bz2"
OPENJDK_URI = "${ICEDTEA_HG_URL}/archive/${OPENJDK_FILE};name=openjdk;unpack=false"

HOTSPOT_FILE = "${HOTSPOT_CHANGESET}.tar.gz"
HOTSPOT_URI = "${ICEDTEA_HG_URL}/hotspot/archive/${HOTSPOT_FILE};name=hotspot;unpack=false"

CORBA_FILE = "${CORBA_CHANGESET}.tar.gz"
CORBA_URI = "${ICEDTEA_HG_URL}/corba/archive/${CORBA_FILE};name=corba;unpack=false"

JAXP_FILE = "${JAXP_CHANGESET}.tar.gz"
JAXP_URI = "${ICEDTEA_HG_URL}/jaxp/archive/${JAXP_FILE};name=jaxp;unpack=false"

JAXWS_FILE = "${JAXWS_CHANGESET}.tar.gz"
JAXWS_URI = "${ICEDTEA_HG_URL}/jaxws/archive/${JAXWS_FILE};name=jaxws;unpack=false"

JDK_FILE = "${JDK_CHANGESET}.tar.gz"
JDK_URI = "${ICEDTEA_HG_URL}/jdk/archive/${JDK_FILE};name=jdk;unpack=false"

LANGTOOLS_FILE = "${LANGTOOLS_CHANGESET}.tar.gz"
LANGTOOLS_URI = "${ICEDTEA_HG_URL}/langtools/archive/${LANGTOOLS_FILE};name=langtools;unpack=false"

NASHORN_FILE = "${NASHORN_CHANGESET}.tar.gz"
NASHORN_URI = "${ICEDTEA_HG_URL}/nashorn/archive/${NASHORN_FILE};name=nashorn;unpack=false"

CACAO_FILE = "${CACAO_VERSION}.tar.gz"
CACAO_URI = "http://icedtea.wildebeest.org/download/drops/cacao/${CACAO_FILE};name=cacao;unpack=false"

JAMVM_FILE = "jamvm-${JAMVM_VERSION}.tar.gz"
JAMVM_URI = "http://icedtea.wildebeest.org/download/drops/jamvm/${JAMVM_FILE};name=jamvm;unpack=false"

#ICEDTEA_PATCHES = " \
#        file://disable-library-checks.patch \
#        file://build-hacks-native.patch \
#        file://icedtea-sane-x86-arch-name.patch \
#	file://fix-checksums.patch \
#	file://icedtea-makefile-unzip.patch \
#        "

#OPENJDK_PATCHES = " \
#        file://icedtea-ecj-disable-compilation.patch;apply=no \
#	file://icedtea-unbreak-float.patch;apply=no \
#	file://icedtea-corba-parallel-make.patch;apply=no \
#        file://icedtea-hotspot-make-arch-sane-for-x86.patch;apply=no \
#        file://icedtea-jdk-sane-x86-arch.patch;apply=no \
#	file://icedtea-flags.patch;apply=no \
#	file://icedtea-openjdk-remove-currency-data-generation-expi.patch;apply=no \
#	file://icedtea-change-to-gdb-debug-format.patch;apply=no \
#	file://icedtea-disable-x11-in-headless.patch;apply=no \
#	file://icedtea-disable-sun.applet-for-tools-in-headless.patch;apply=no \
#	file://icedtea-hotspot-fix-undefined-behaviour.patch;apply=no \
#	file://icedtea-x11_extension_cleanup.patch;apply=no \
#	file://icedtea-CVE-2014-1876-unpack.patch;apply=no \
#	file://icedtea-jdk-unzip.patch;apply=no \
#	file://icedtea-hotspot-handle-gcc7-format-overflow.patch;apply=no \
#        "

#OPENJDK_HEADLESS_PATCHES = " \
#	patches/icedtea-disable-x11-in-headless.patch \
#	patches/icedtea-disable-sun.applet-for-tools-in-headless.patch \
#	"

#CLEAN_X11_DISTRIBUTION_PATCH = "${@bb.utils.contains('PACKAGECONFIG', 'x11', '', '${OPENJDK_HEADLESS_PATCHES}', d)}"

#export DISTRIBUTION_PATCHES = " \
#        patches/icedtea-ecj-disable-compilation.patch \
#	patches/icedtea-unbreak-float.patch \
#	patches/icedtea-corba-parallel-make.patch \
#        patches/icedtea-hotspot-make-arch-sane-for-x86.patch \
#        patches/icedtea-jdk-sane-x86-arch.patch \
#	patches/icedtea-flags.patch \
#	patches/icedtea-openjdk-remove-currency-data-generation-expi.patch \
#	patches/icedtea-change-to-gdb-debug-format.patch \
#	patches/icedtea-hotspot-fix-undefined-behaviour.patch \
#	patches/icedtea-x11_extension_cleanup.patch \
#	patches/icedtea-CVE-2014-1876-unpack.patch \
#	patches/icedtea-jdk-unzip.patch \
#	patches/icedtea-hotspot-handle-gcc7-format-overflow.patch \
#	${CLEAN_X11_DISTRIBUTION_PATCH} \
#        "

# readdir_r was deprecated in glibc-2.24. Ignore the error for now
# NOTE: When updating the recipe, please check if this is still needed
CFLAGS_append = " -Wno-error=deprecated-declarations"
