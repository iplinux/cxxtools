noinst_PROGRAMS = arg arg-set cgi dir dlloader dynbuffer getini hd \
	httprequest iconv log logbench logsh md5sum mime multifstream netcat netio \
	netmsg pipestream pool signals thread uuencode cxxlog

arg_SOURCES = arg.cpp
arg_set_SOURCES = arg-set.cpp
cgi_SOURCES = cgi.cpp
dir_SOURCES = dir.cpp
dlloader_SOURCES = dlloader.cpp
dynbuffer_SOURCES = dynbuffer.cpp
getini_SOURCES = getini.cpp
hd_SOURCES = hd.cpp
httprequest_SOURCES = httprequest.cpp
iconv_SOURCES = iconv.cpp
log_SOURCES = log.cpp
logbench_SOURCES = logbench.cpp
logsh_SOURCES = logsh.cpp
md5sum_SOURCES = md5sum.cpp
mime_SOURCES = mime.cpp
multifstream_SOURCES = multifstream.cpp
netcat_SOURCES = netcat.cpp
netio_SOURCES = netio.cpp
netmsg_SOURCES = netmsg.cpp
pipestream_SOURCES = pipestream.cpp
pool_SOURCES = pool.cpp
signals_SOURCES = signals.cpp
thread_SOURCES = thread.cpp
uuencode_SOURCES = uuencode.cpp
cxxlog_SOURCES = cxxlog.cpp

INCLUDES = -I$(top_builddir)/include
LDADD = $(top_builddir)/src/libcxxtools.la
AM_CXXFLAGS = $(PTHREAD_CFLAGS)
AM_LDFLAGS = -L$(top_builddir)/src $(PTHREAD_LIBS)
log_LDFLAGS = @CXXTOOLS_LOG_LDFLAGS@ $(PTHREAD_LIBS)
logbench_LDFLAGS = @CXXTOOLS_LOG_LDFLAGS@ $(PTHREAD_LIBS)
logsh_LDFLAGS = @CXXTOOLS_LOG_LDFLAGS@ $(PTHREAD_LIBS)

log.properties:
	/bin/sh $(top_builddir)/cxxtools-config --properties cxxtools >$@

noinst_DATA = log.properties
CLEANFILES = log.properties
EXTRA_DIST = README
