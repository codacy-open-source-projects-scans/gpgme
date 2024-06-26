# Makefile.am for QGpgME.
# Copyright (C) 2016 Bundesamt für Sicherheit in der Informationstechnik
# Software engineering by Intevation GmbH
#
# This file is part of QGpgME, the Qt API binding for GpgME.
#
# QGpgME is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# QGpgME is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA

if WANT_QT5
lib_LTLIBRARIES = libqgpgme.la
endif
if WANT_QT6
lib_LTLIBRARIES = libqgpgmeqt6.la
endif

EXTRA_DIST = QGpgmeConfig.cmake.in.in QGpgmeConfigVersion.cmake.in \
             qgpgme_debug.h qgpgme_version.h.in \
             QGpgmeConfig-w32.cmake.in.in QGpgmeQt6Config.cmake.in.in \
             QGpgmeQt6Config-w32.cmake.in.in QGpgmeQt6ConfigVersion.cmake.in

qgpgme_sources = \
    cleaner.cpp \
    dataprovider.cpp \
    debug.cpp \
    decryptverifyarchivejob.cpp \
    decryptverifyjob.cpp \
    encryptarchivejob.cpp \
    filelistdataprovider.cpp \
    job.cpp multideletejob.cpp qgpgmeadduseridjob.cpp \
    qgpgmeaddexistingsubkeyjob.cpp \
    qgpgmebackend.cpp qgpgmechangeexpiryjob.cpp qgpgmechangeownertrustjob.cpp \
    qgpgmechangepasswdjob.cpp qgpgmedecryptjob.cpp \
    qgpgmedecryptverifyarchivejob.cpp \
    qgpgmedecryptverifyjob.cpp qgpgmedeletejob.cpp qgpgmedownloadjob.cpp \
    qgpgmeencryptarchivejob.cpp \
    qgpgmeencryptjob.cpp qgpgmeexportjob.cpp qgpgmeimportfromkeyserverjob.cpp \
    qgpgmeimportjob.cpp qgpgmekeygenerationjob.cpp qgpgmekeylistjob.cpp \
    listallkeysjob.cpp qgpgmelistallkeysjob.cpp qgpgmenewcryptoconfig.cpp \
    qgpgmereceivekeysjob.cpp \
    qgpgmerefreshsmimekeysjob.cpp \
    qgpgmerevokekeyjob.cpp \
    qgpgmesetprimaryuseridjob.cpp \
    qgpgmesignarchivejob.cpp \
    qgpgmesignencryptjob.cpp \
    qgpgmesignencryptarchivejob.cpp \
    qgpgmesignjob.cpp qgpgmesignkeyjob.cpp qgpgmeverifydetachedjob.cpp \
    qgpgmeverifyopaquejob.cpp qgpgmewkdlookupjob.cpp threadedjobmixin.cpp \
    qgpgmewkdrefreshjob.cpp \
    qgpgmekeyformailboxjob.cpp qgpgme_debug.cpp \
    qgpgmetofupolicyjob.cpp qgpgmequickjob.cpp \
    defaultkeygenerationjob.cpp qgpgmewkspublishjob.cpp \
    qgpgmegpgcardjob.cpp changeexpiryjob.cpp encryptjob.cpp importjob.cpp \
    signarchivejob.cpp \
    signencryptjob.cpp \
    signencryptarchivejob.cpp \
    signjob.cpp \
    dn.cpp cryptoconfig.cpp wkdlookupresult.cpp \
    util.cpp \
    verifydetachedjob.cpp \
    verifyopaquejob.cpp \
    wkdrefreshjob.cpp

# If you add one here make sure that you also add one in camelcase
qgpgme_headers= \
    abstractimportjob.h \
    addexistingsubkeyjob.h \
    adduseridjob.h \
    changeexpiryjob.h \
    changeownertrustjob.h \
    changepasswdjob.h \
    dataprovider.h \
    debug.h \
    decryptjob.h \
    decryptverifyarchivejob.h \
    decryptverifyjob.h \
    downloadjob.h \
    encryptarchivejob.h \
    encryptjob.h \
    exportjob.h \
    filelistdataprovider.h \
    hierarchicalkeylistjob.h \
    job.h \
    keyformailboxjob.h \
    multideletejob.h \
    protocol.h \
    qgpgme_export.h \
    qgpgmenewcryptoconfig.h \
    quickjob.h \
    receivekeysjob.h \
    revokekeyjob.h \
    setprimaryuseridjob.h \
    specialjob.h \
    signarchivejob.h \
    signjob.h \
    signkeyjob.h \
    signencryptjob.h \
    signencryptarchivejob.h \
    verifyopaquejob.h \
    refreshkeysjob.h \
    cryptoconfig.h \
    deletejob.h \
    importfromkeyserverjob.h \
    importjob.h \
    keygenerationjob.h \
    keylistjob.h \
    listallkeysjob.h \
    verifydetachedjob.h \
    defaultkeygenerationjob.h \
    tofupolicyjob.h \
    wkdlookupjob.h \
    wkdlookupresult.h \
    wkdrefreshjob.h \
    wkspublishjob.h \
    gpgcardjob.h \
    dn.h

camelcase_headers= \
    AddExistingSubkeyJob \
    AddUserIDJob \
    AbstractImportJob \
    ChangeExpiryJob \
    ChangeOwnerTrustJob \
    ChangePasswdJob \
    DataProvider \
    Debug \
    DecryptJob \
    DecryptVerifyArchiveJob \
    DecryptVerifyJob \
    DN \
    DownloadJob \
    EncryptArchiveJob \
    EncryptJob \
    ExportJob \
    FileListDataProvider \
    HierarchicalKeyKistJob \
    Job \
    MultiDeleteJob \
    Protocol \
    QGpgMENewCryptoConfig \
    QuickJob \
    ReceiveKeysJob \
    RevokeKeyJob \
    SetPrimaryUserIDJob \
    SpecialJob \
    SignArchiveJob \
    SignJob \
    SignKeyJob \
    SignEncryptArchiveJob \
    SignEncryptJob \
    VerifyOpaqueJob \
    RefreshKeysJob \
    CryptoConfig \
    DeleteJob \
    ImportFromKeyserverJob \
    ImportJob \
    KeyGenerationJob \
    KeyListJob \
    ListAllKeysJob \
    VerifyDetachedJob \
    KeyForMailboxJob \
    DefaultKeyGenerationJob \
    WKDLookupJob \
    WKDLookupResult \
    WKDRefreshJob \
    WKSPublishJob \
    TofuPolicyJob \
    GpgCardJob

private_qgpgme_headers = \
    changeexpiryjob_p.h \
    cleaner.h \
    decryptverifyarchivejob_p.h \
    decryptverifyjob_p.h \
    encryptarchivejob_p.h \
    encryptjob_p.h \
    importjob_p.h \
    listallkeysjob_p.h \
    qgpgme_export.h \
    protocol_p.h \
    job_p.h \
    qgpgmeaddexistingsubkeyjob.h \
    qgpgmeadduseridjob.h \
    qgpgmebackend.h \
    qgpgmechangeexpiryjob.h \
    qgpgmechangeownertrustjob.h \
    qgpgmechangepasswdjob.h \
    qgpgmedecryptjob.h \
    qgpgmedecryptverifyarchivejob.h \
    qgpgmedecryptverifyjob.h \
    qgpgmedeletejob.h \
    qgpgmedownloadjob.h \
    qgpgmeencryptarchivejob.h \
    qgpgmeencryptjob.h \
    qgpgmeexportjob.h \
    qgpgmeimportfromkeyserverjob.h \
    qgpgmeimportjob.h \
    qgpgmekeygenerationjob.h \
    qgpgmekeylistjob.h \
    qgpgmelistallkeysjob.h \
    qgpgmereceivekeysjob.h \
    qgpgmerefreshsmimekeysjob.h \
    qgpgmerevokekeyjob.h \
    qgpgmesetprimaryuseridjob.h \
    qgpgmesignarchivejob.h \
    qgpgmesignencryptjob.h \
    qgpgmesignencryptarchivejob.h \
    qgpgmesignjob.h \
    qgpgmesignkeyjob.h \
    qgpgmeverifydetachedjob.h \
    qgpgmeverifyopaquejob.h \
    qgpgmewkdlookupjob.h \
    qgpgmewkdrefreshjob.h \
    qgpgmekeyformailboxjob.h \
    qgpgmewkspublishjob.h \
    qgpgmetofupolicyjob.h \
    qgpgmegpgcardjob.h \
    qgpgmequickjob.h \
    signarchivejob_p.h \
    signencryptjob_p.h \
    signencryptarchivejob_p.h \
    signjob_p.h \
    threadedjobmixin.h \
    util.h \
    verifydetachedjob_p.h \
    verifyopaquejob_p.h \
    wkdrefreshjob_p.h

qgpgme_moc_sources = \
    abstractimportjob.moc \
    addexistingsubkeyjob.moc \
    adduseridjob.moc \
    changeexpiryjob.moc \
    changeownertrustjob.moc \
    changepasswdjob.moc \
    cleaner.moc \
    decryptjob.moc \
    decryptverifyarchivejob.moc \
    decryptverifyjob.moc \
    deletejob.moc \
    downloadjob.moc \
    encryptarchivejob.moc \
    encryptjob.moc \
    exportjob.moc \
    hierarchicalkeylistjob.moc \
    importfromkeyserverjob.moc \
    importjob.moc \
    job.moc \
    keygenerationjob.moc \
    keylistjob.moc \
    listallkeysjob.moc \
    multideletejob.moc \
    qgpgmeaddexistingsubkeyjob.moc \
    qgpgmeadduseridjob.moc \
    qgpgmechangeexpiryjob.moc \
    qgpgmechangeownertrustjob.moc \
    qgpgmechangepasswdjob.moc \
    qgpgmedecryptjob.moc \
    qgpgmedecryptverifyarchivejob.moc \
    qgpgmedecryptverifyjob.moc \
    qgpgmedeletejob.moc \
    qgpgmedownloadjob.moc \
    qgpgmeencryptarchivejob.moc \
    qgpgmeencryptjob.moc \
    qgpgmeexportjob.moc \
    qgpgmeimportfromkeyserverjob.moc \
    qgpgmeimportjob.moc \
    qgpgmekeygenerationjob.moc \
    qgpgmekeylistjob.moc \
    qgpgmelistallkeysjob.moc \
    qgpgmereceivekeysjob.moc \
    qgpgmerefreshsmimekeysjob.moc \
    qgpgmerevokekeyjob.moc \
    qgpgmesetprimaryuseridjob.moc \
    qgpgmesignarchivejob.moc \
    qgpgmesignencryptjob.moc \
    qgpgmesignencryptarchivejob.moc \
    qgpgmesignjob.moc \
    qgpgmesignkeyjob.moc \
    qgpgmeverifydetachedjob.moc \
    qgpgmeverifyopaquejob.moc \
    qgpgmewkdlookupjob.moc \
    qgpgmewkdrefreshjob.moc \
    qgpgmewkspublishjob.moc \
    tofupolicyjob.moc \
    qgpgmetofupolicyjob.moc \
    receivekeysjob.moc \
    refreshkeysjob.moc \
    revokekeyjob.moc \
    setprimaryuseridjob.moc \
    signarchivejob.moc \
    signencryptjob.moc \
    signencryptarchivejob.moc \
    signjob.moc \
    signkeyjob.moc \
    specialjob.moc \
    verifydetachedjob.moc \
    verifyopaquejob.moc \
    wkdlookupjob.moc \
    wkdrefreshjob.moc \
    keyformailboxjob.moc \
    wkspublishjob.moc \
    qgpgmekeyformailboxjob.moc \
    defaultkeygenerationjob.moc \
    quickjob.moc \
    qgpgmequickjob.moc \
    gpgcardjob.moc \
    qgpgmegpgcardjob.moc

if WANT_QT5
includeprefix = qgpgme-qt5
endif
if WANT_QT6
includeprefix = qgpgme-qt6
endif
qgpgmeincludedir = $(includedir)/$(includeprefix)/qgpgme
qgpgmeinclude_HEADERS = $(qgpgme_headers)
camelcaseincludedir = $(includedir)/$(includeprefix)/QGpgME
camelcaseinclude_HEADERS = $(camelcase_headers)
nodist_qgpgmeinclude_HEADERS = qgpgme_version.h

if WANT_QT5
AM_CPPFLAGS = -I$(top_srcdir)/lang/cpp/src -I$(top_builddir)/src \
              @GPGME_QT5_CFLAGS@ @GPG_ERROR_CFLAGS@ @LIBASSUAN_CFLAGS@ \
              -DBUILDING_QGPGME -Wsuggest-override \
              -Wzero-as-null-pointer-constant

libqgpgme_la_SOURCES = $(qgpgme_sources) $(qgpgme_headers) $(private_qgpgme_headers)

libqgpgme_la_LIBADD = ../../cpp/src/libgpgmepp.la ../../../src/libgpgme.la \
                      @LIBASSUAN_LIBS@ @GPG_ERROR_LIBS@ @GPGME_QT5_LIBS@
libqgpgme_la_LDFLAGS = -no-undefined -version-info \
                       @LIBQGPGME_LT_CURRENT@:@LIBQGPGME_LT_REVISION@:@LIBQGPGME_LT_AGE@
endif
if WANT_QT6
AM_CPPFLAGS = -I$(top_srcdir)/lang/cpp/src -I$(top_builddir)/src \
              @GPGME_QT6_CFLAGS@ @GPG_ERROR_CFLAGS@ @LIBASSUAN_CFLAGS@ \
              -DBUILDING_QGPGME -Wsuggest-override \
              -Wzero-as-null-pointer-constant

libqgpgmeqt6_la_SOURCES = $(qgpgme_sources) $(qgpgme_headers) $(private_qgpgme_headers)

libqgpgmeqt6_la_LIBADD = ../../cpp/src/libgpgmepp.la ../../../src/libgpgme.la \
                         @LIBASSUAN_LIBS@ @GPG_ERROR_LIBS@ @GPGME_QT6_LIBS@
libqgpgmeqt6_la_LDFLAGS = -no-undefined -version-info \
                          @LIBQGPGME_LT_CURRENT@:@LIBQGPGME_LT_REVISION@:@LIBQGPGME_LT_AGE@
endif

if HAVE_MACOS_SYSTEM
libsuffix=.dylib
else
libsuffix=.so
endif

if WANT_QT5
if HAVE_W32_SYSTEM
QGpgmeConfig.cmake: QGpgmeConfig-w32.cmake.in
	sed -e 's|[@]resolved_bindir@|$(bindir)|g' < "$<" | \
	sed -e 's|[@]resolved_libdir@|$(libdir)|g' | \
	sed -e 's|[@]resolved_includedir@|$(includedir)/$(includeprefix)|g' > $@
else
QGpgmeConfig.cmake: QGpgmeConfig.cmake.in
	sed -e 's|[@]resolved_libdir@|$(libdir)|g' < "$<" | \
	sed -e 's|[@]libsuffix@|$(libsuffix)|g' | \
	sed -e 's|[@]resolved_includedir@|$(includedir)/$(includeprefix)|g' > $@
endif
endif
if WANT_QT6
if HAVE_W32_SYSTEM
QGpgmeQt6Config.cmake: QGpgmeQt6Config-w32.cmake.in
	sed -e 's|[@]resolved_bindir@|$(bindir)|g' < "$<" | \
	sed -e 's|[@]resolved_libdir@|$(libdir)|g' | \
	sed -e 's|[@]resolved_includedir@|$(includedir)/$(includeprefix)|g' > $@
else
QGpgmeQt6Config.cmake: QGpgmeQt6Config.cmake.in
	sed -e 's|[@]resolved_libdir@|$(libdir)|g' < "$<" | \
	sed -e 's|[@]libsuffix@|$(libsuffix)|g' | \
	sed -e 's|[@]resolved_includedir@|$(includedir)/$(includeprefix)|g' > $@
endif
endif

$(camelcase_headers): Makefile.am
	echo -n "#include \"qgpgme/" > "$@"
	echo -n "$@" | tr '[:upper:]' '[:lower:]' >> "$@"
	echo ".h\"" >> "$@"

if WANT_QT5
install-cmake-files: QGpgmeConfig.cmake QGpgmeConfigVersion.cmake
	-$(INSTALL) -d $(DESTDIR)$(libdir)/cmake/QGpgme
	$(INSTALL) -m 644 QGpgmeConfig.cmake \
	$(DESTDIR)$(libdir)/cmake/QGpgme/QGpgmeConfig.cmake
	$(INSTALL) -m 644 QGpgmeConfigVersion.cmake \
	$(DESTDIR)$(libdir)/cmake/QGpgme/QGpgmeConfigVersion.cmake

uninstall-cmake-files:
	-rm $(DESTDIR)$(libdir)/cmake/QGpgme/QGpgmeConfigVersion.cmake
	-rm $(DESTDIR)$(libdir)/cmake/QGpgme/QGpgmeConfig.cmake
	-rmdir $(DESTDIR)$(libdir)/cmake/QGpgme/
endif
if WANT_QT6
install-cmake-files: QGpgmeQt6Config.cmake QGpgmeQt6ConfigVersion.cmake
	-$(INSTALL) -d $(DESTDIR)$(libdir)/cmake/QGpgmeQt6
	$(INSTALL) -m 644 QGpgmeQt6Config.cmake \
	$(DESTDIR)$(libdir)/cmake/QGpgmeQt6/QGpgmeQt6Config.cmake
	$(INSTALL) -m 644 QGpgmeQt6ConfigVersion.cmake \
	$(DESTDIR)$(libdir)/cmake/QGpgmeQt6/QGpgmeQt6ConfigVersion.cmake

uninstall-cmake-files:
	-rm $(DESTDIR)$(libdir)/cmake/QGpgmeQt6/QGpgmeQt6ConfigVersion.cmake
	-rm $(DESTDIR)$(libdir)/cmake/QGpgmeQt6/QGpgmeQt6Config.cmake
	-rmdir $(DESTDIR)$(libdir)/cmake/QGpgmeQt6/
endif

install-data-local: install-cmake-files

uninstall-local: uninstall-cmake-files

BUILT_SOURCES = $(qgpgme_moc_sources) $(camelcase_headers)

CLEANFILES = $(qgpgme_moc_sources) $(camelcase_headers) QGpgmeConfig.cmake \
             qgpgme_version.h QGpgmeConfig.cmake.in \
             QGpgmeConfig-w32.cmake.in QGpgmeConfigVersion.cmake \
             QGpgmeQt6Config.cmake.in QGpgmeQt6Config-w32.cmake.in \
             QGpgmeQt6Config.cmake QGpgmeQt6ConfigVersion.cmake

if WANT_QT5
nodist_libqgpgme_la_SOURCES = $(qgpgme_moc_sources)
endif
if WANT_QT6
nodist_libqgpgmeqt6_la_SOURCES = $(qgpgme_moc_sources)
endif

.h.moc:
	$(MOC) `test -f '$<' || echo '$(srcdir)/'`$< -o $@
