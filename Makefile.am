AM_CPPFLAGS = -iquote $(top_builddir) -iquote $(srcdir)/.. -iquote $(top_srcdir) -iquote $(top_srcdir)/cwds

noinst_LTLIBRARIES =
if CW_NON_THREADED
noinst_LTLIBRARIES += libxml.la
bin_PROGRAMS = catalog_test example_test
endif
if CW_THREADED
noinst_LTLIBRARIES += libxml_r.la
endif

SOURCES = \
	Bridge.cxx \
	Bridge.h \
	escape.cxx \
	escape.h \
	Writer.cxx \
	Writer.h \
	ReadBridge.cxx \
	ReadBridge.h \
	WriteBridge.cxx \
	WriteBridge.h \
	Reader.cxx \
	Reader.h \
	read_from_string.cxx \
	read_from_string.h \
	read_from_stream.cxx \
	read_from_stream.h \
	write_to_stream.cxx \
	write_to_stream.h \
	SetLocale.cxx \
	SetLocale.h \
	set_locale_for.h \
	write_to_string.h

catalog_test_SOURCES = \
	catalog_test.cxx

example_test_SOURCES = \
	example_test.cxx

libxml_la_SOURCES = ${SOURCES}
libxml_la_CXXFLAGS = @LIBXML_CFLAGS@ @LIBCWD_FLAGS@
# We can compile libxml.la without this, but this way these libraries are added
# automatically when linking with libxml.la later on
# (see https://www.gnu.org/software/libtool/manual/html_node/Inter_002dlibrary-dependencies.html).
libxml_la_LIBADD = @BOOST_FILESYSTEM_LIB@ @BOOST_SYSTEM_LIB@ @LIBXML_LIBS@

libxml_r_la_SOURCES = ${SOURCES}
libxml_r_la_CXXFLAGS = @LIBXML_CFLAGS@ @LIBCWD_R_FLAGS@
libxml_r_la_LIBADD = @BOOST_FILESYSTEM_LIB@ @BOOST_SYSTEM_LIB@ @LIBXML_LIBS@

catalog_test_CXXFLAGS = @LIBXML_CFLAGS@ @LIBCWD_FLAGS@
catalog_test_LDADD = libxml.la ../utils/libutils.la $(top_builddir)/cwds/libcwds.la

example_test_CXXFLAGS = @LIBXML_CFLAGS@ @LIBCWD_FLAGS@
example_test_LDADD = libxml.la ../utils/libutils.la $(top_builddir)/cwds/libcwds.la

# --------------- Maintainer's Section

if MAINTAINER_MODE
distclean-local:
	rm -f *.s *.ii

clean-local:
endif

MAINTAINERCLEANFILES = $(srcdir)/Makefile.in
