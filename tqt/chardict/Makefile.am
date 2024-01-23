EXTRA_DIST = bushu.t

if TQT
INCLUDES += -I$(top_srcdir) -I$(top_builddir) -I..

HEADER_FILES = \
	bushuviewwidget.h \
	unicodeviewwidget.h \
	chargridview.h \
	kseparator.h \
	qt.h
MOC_FILES = \
	bushuviewwidget.moc \
	unicodeviewwidget.moc \
	chargridview.moc \
	kseparator.moc \
	qt.moc

noinst_HEADERS = $(HEADER_FILES)

bin_PROGRAMS = uim-chardict-tqt

uim_chardict_tqt_SOURCES = \
	qt.cpp qt.h \
	bushuviewwidget.cpp bushuviewwidget.h \
	chargridview.cpp chargridview.h \
	kseparator.cpp kseparator.h \
	unicodeviewwidget.cpp unicodeviewwidget.h
uim_chardict_tqt_CXXFLAGS = @UIM_TQT_CXXFLAGS@ -DBUSHUDICT=\"$(datadir)/uim/helperdata/bushu.t\"

uim_chardict_tqt_LDFLAGS  = @UIM_TQT_LDFLAGS@
uim_chardict_tqt_LDADD    = $(top_builddir)/uim/libuim.la @LTLIBINTL@

qt.cpp: qt.moc

bushuviewwidget.cpp: bushuviewwidget.moc
unicodeviewwidget.cpp: unicodeviewwidget.moc
chargridview.cpp: chargridview.moc
kseparator.cpp: kseparator.moc
helperdatadir = $(datadir)/uim/helperdata
helperdata_DATA = bushu.t

CLEANFILES = \
	$(MOC_FILES)

.h.moc:
	$(TQMOC) $< -o $*.moc
.ui.h:
	$(TQUIC) $< -o $*.h
endif

