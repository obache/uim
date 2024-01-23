if TQT
INCLUDES += -I$(top_srcdir) -I$(top_builddir) -I..

HEADER_FILES = qt.h
MOC_FILES = qt.moc

libexec_PROGRAMS = uim-candwin-tqt

# Candidate Window
uim_candwin_tqt_SOURCES  = qt.cpp qt.h ../qtgettext.h
uim_candwin_tqt_CXXFLAGS = $(UIM_TQT_CXXFLAGS)
uim_candwin_tqt_LDFLAGS  = $(UIM_TQT_LDFLAGS)
uim_candwin_tqt_LDADD = $(top_builddir)/uim/libuim-scm.la \
		        $(top_builddir)/uim/libuim.la
qt.cpp: qt.moc

CLEANFILES = \
	$(MOC_FILES) \
	$(UI_TMP_FILES)

.h.moc:
	$(TQMOC) $< -o $*.moc
.ui.h:
	$(TQUIC) $< -o $*.h

endif
