define compiler-include-path
$(shell echo | @CC@ -v -x c -E - 2>&1 | grep -A 1 "^#include" | tail -n 1)
endef

common_ldflags = @COMMON_LDFLAGS@
my_ldflags = $(common_ldflags:-Wl,-no-undefined=)

lib_LTLIBRARIES = libthread_db.la
libthread_db_la_SOURCES = libthread_db.c
libthread_db_la_CFLAGS = -nostdinc -include $(top_srcdir)/libc/arch-@TARGET_ARCH@/AndroidConfig.h
libthread_db_la_CFLAGS += -I$(call compiler-include-path)
libthread_db_la_LDFLAGS = $(my_ldflags) -L$(top_builddir)/libdl/.libs -L$(top_builddir)/libc/.libs
libthread_db_la_LIBADD = -ldl -lc

if TARGET_ARCH_IS_X86
libthread_db_la_CFLAGS += -march=i686 -m32
libthread_db_la_CFLAGS += -I$(top_srcdir)/libc/arch-x86/include
libthread_db_la_CFLAGS += -I$(top_srcdir)/libc/kernel/arch-x86
endif

libthread_db_la_CFLAGS += -I$(top_srcdir)/libm/include
libthread_db_la_CFLAGS += -I$(top_srcdir)/libc/include
libthread_db_la_CFLAGS += -I$(top_srcdir)/libc/kernel/common/linux -I$(top_srcdir)/libc/kernel/common
libthread_db_la_CFLAGS += -I$(top_srcdir)/libthread_db/include
