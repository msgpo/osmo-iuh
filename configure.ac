AC_INIT([osmo-iuh], [0.0],
dnl	m4_esyscmd([./git-version-gen .tarball-version]),
	[openbsc@lists.osmocom.org])

AM_INIT_AUTOMAKE([foreign dist-bzip2 no-dist-gzip 1.6 subdir-objects])
AC_CONFIG_TESTDIR(src/tests)

dnl kernel style compile messages
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

dnl checks for programs
AC_PROG_MAKE_SET
AC_PROG_MKDIR_P
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_RANLIB

PKG_CHECK_MODULES(OSMOCORE, libosmocore)
PKG_CHECK_MODULES(OSMOGSM, libosmogsm)
PKG_CHECK_MODULES(OSMOVTY, libosmovty)
PKG_CHECK_MODULES(ASN1C, libasn1c)

AC_CONFIG_MACRO_DIR([m4])

dnl checks for header files
AC_HEADER_STDC

AC_OUTPUT(
	src/Makefile
	src/hnbap/Makefile
	src/ranap/Makefile
	src/rua/Makefile
	src/tests/Makefile
	Makefile)