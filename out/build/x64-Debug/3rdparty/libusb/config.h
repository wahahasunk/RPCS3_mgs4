#ifndef LIBUSB_CONFIG_H
#define LIBUSB_CONFIG_H

#define PRINTF_FORMAT(a, b) __attribute__ ((__format__ (__printf__, a, b)))

#define DEFAULT_VISIBILITY 

/* #undef ENABLE_DEBUG_LOGGING */

#define ENABLE_LOGGING

#define LIBUSB_MAJOR 1

#define LIBUSB_MINOR 0

#define LIBUSB_MICRO 0

#define _GNU_SOURCE 1

#define PACKAGE libusb
#define PACKAGE_BUGREPORT libusb-devel@lists.sourceforge.net
#define PACKAGE_STRING libusb 1.0.26
#define PACKAGE_URL http://www.libusb.org
#define PACKAGE_VERSION 1.0.26
#define PACKAGE_TARNAME libusb

#define VERSION 1.0.26

/* #undef OS_LINUX */
/* #undef OS_DARWIN */
#define OS_WINDOWS
/* #undef THREADS_POSIX */
/* #undef USBI_TIMERFD_AVAILABLE */
/* #undef HAVE_STRUCT_TIMESPEC */
/* #undef HAVE_POLL_H */
/* #undef HAVE_SYS_TIME_H */
#define POLL_NFDS_TYPE unsigned int

#endif /* LIBUSB_CONFIG_H */
