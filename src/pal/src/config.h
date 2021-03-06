//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 
//

/* config.h.  Generated from config.h.in by configure.  */
/*++



Module Name:

    include/pal/config.h.in

    process this file with configure to create the PAL's configuration header

--*/

#ifndef _PAL_CONFIG_H_INCLUDED
#define _PAL_CONFIG_H_INCLUDED 1

/*++
_NO_DEBUG_MESSAGES_ : configure option --disable-dbgmsg

This turns off compilation of TRACE, WARN, ERROR and ENTRY debug messages
--*/

#define _NO_DEBUG_MESSAGES_ 0


/*++
CHECK_TRACE_SPECIFIERS : configure option --enable-tracechecks

Ask gcc to check the format specifiers used in trace macros. Not on by default, 
because gcc will complain about %I64d and %S
--*/

#define CHECK_TRACE_SPECIFIERS 0

/* Define as 1 if you have wchar.h. */
#define HAVE_WCHAR_H 1

/* Define as 1 if you have ieeefp.h. */
#define HAVE_IEEEFP_H 0

/* Define as 1 if you have alloca.h. */
#define HAVE_ALLOCA_H 1

/* Define as 1 if you have stdint.h. */
#define HAVE_STDINT_H 1

/* Define as 1 if you have netdb.h. */
#define HAVE_NETDB_H 1

/* Define as 1 if you have inttypes.h. */
#define HAVE_INTTYPES_H 1

/* Define as 1 if you have sys/vmparam.h. */
#define HAVE_SYS_VMPARAM_H 0

/* Define as 1 if you have mach/vm_types.h. */
#define HAVE_MACH_VM_TYPES_H 0

/* Define as 1 if you have mach/vm_param.h. */
#define HAVE_MACH_VM_PARAM_H 0

/* Define as 1 if you have sys/param.h. */
#define HAVE_SYS_PARAM_H 1

/* Define as 1 if you have sys/filio.h. */
#define HAVE_SYS_FILIO_H 0

/* Define as 1 if you have sys/sockio.h. */
#define HAVE_SYS_SOCKIO_H 0

/* Define as 1 if you have procfs.h. */
#define HAVE_PROCFS_H 0

/* Define as 1 if you have sys/event.h. */
#define HAVE_KQUEUE 0

// Define as 1 if you are using dylibs and need dlcompat.
#define NEED_DLCOMPAT 0

/* Define as 1 if you have crt_externs.h. */
#define HAVE_CRT_EXTERNS_H 0

// Define as 1 if you have sys/time.h.
#define HAVE_SYS_TIME_H 1

/* Define as 1 if you have pthread_np.h */
#define HAVE_PTHREAD_NP_H 0

/* Define as 1 if you have sys/lwp.h */
#define HAVE_SYS_LWP_H 0

/* Define as 1 if you have towlower. */
#define HAVE_TOWLOWER 0

/* Define as 1 if struct stat contains st_atimespec, etc. */
#define HAVE_STAT_TIMESPEC 0

/* Define as 1 if struct stat contains st_atimensec, etc. */
#define HAVE_STAT_NSEC 0

/* Define as 1 if struct sockaddr contains sa_len. */
#define HAVE_SOCKADDR_SA_LEN 0

/* Define as 1 if getpwuid_r function exists. */
#define HAVE_GETPWUID_R 1

/* Define as 1 if you have extern char *tzname. */
#define HAVE_TZNAME 1

/* Define as 1 if you have extern long int timezone. */
#define HAVE_TIMEZONE_VAR 0

/* Define as 1 if struct tm has tm_gmtoff. */
#define HAVE_TM_GMTOFF 1

// Define as 1 if the BSD struct reg is supported.
#define HAVE_BSD_REGS_T 0

// Define as 1 if ptrace's struct pt_regs is supported.
#define HAVE_PT_REGS 1

// Define as 1 if mcontext_t contains a gregset_t.
#define HAVE_GREGSET_T 1

// Define as 1 if realpath() does not require that the last path component
// be a file.
#define REALPATH_SUPPORTS_NONEXISTENT_FILES 0

// Define as 1 if sscanf supports the "%ll" format.
#define SSCANF_SUPPORT_ll 0

// Define as 1 if sscanf has trouble parsing a float from
// something like "12.34e" (e.g. AIX)
#define SSCANF_CANNOT_HANDLE_MISSING_EXPONENT 0

// Define as 1 if snprintf works correctly for large values of n.
#define HAVE_LARGE_SNPRINTF_SUPPORT 1

/* Define as 1 if select() on a fifo that has not had any data
   written to it returns that data is available for reading. */
#define HAVE_BROKEN_FIFO_SELECT 0

/* Define as 1 if kevent() on a fifo returns EV_ERROR. */
#define HAVE_BROKEN_FIFO_KEVENT 1

// Define as 1 if ftruncate correctly returns failure on large lengths.
#define HAVE_FTRUNCATE_LARGE_LENGTH_SUPPORT 0

// Define as 1 if ftruncate returns failure but extends the file anyway.
#define HAS_FTRUNCATE_LENGTH_ISSUE 0

/* Define as 1 if SYS_yield is a supported syscall. */
#define HAVE_YIELD_SYSCALL 0

// Define as 1 if pthreads are Mach threads.
#define HAVE_MACH_THREADS 0

// Define as 1 if pthreads are Solaris threads.
#define HAVE_SOLARIS_THREADS 0

// Define as 1 if pthreads has pthread_suspend
#define HAVE_PTHREAD_SUSPEND 0

// Define as 1 if pthreads has pthread_suspend_np
#define HAVE_PTHREAD_SUSPEND_NP 0

// Define as 1 if pthreads has pthread_continue
#define HAVE_PTHREAD_CONTINUE 0

// Define as 1 if pthreads has pthread_resume_np
#define HAVE_PTHREAD_RESUME_NP 0

// Define as 1 if pthreads has pthread_continue_np
#define HAVE_PTHREAD_CONTINUE_NP 0

// Define as 1 if mkstemp64 is used instead of mkstemp
#define MKSTEMP64_IS_USED_INSTEAD_OF_MKSTEMP 0

// Define as 1 if open64 is used instead of open
#define OPEN64_IS_USED_INSTEAD_OF_OPEN 0

// Define as 1 if pthread has thread_self
#define HAVE_THREAD_SELF 0

// Define as 1 if pthread has _lwp_self
#define HAVE__LWP_SELF 0

// Define as 1 if sched_get_priority_[min|max] is supported
#define HAVE_SCHED_GET_PRIORITY 1

// Define as the hardcoded min and max thread priority (for platforms where 
// sched_get_priority_[min|max] does not exist
#define PAL_THREAD_PRIORITY_MIN 0
#define PAL_THREAD_PRIORITY_MAX 0

// Define as 1 if pthread_setschedparam requires special privileges
#define SET_SCHEDPARAM_NEEDS_PRIVS 0

/* Define as 1 if Mach exceptions are supported. */
#define HAVE_MACH_EXCEPTIONS 0

// Define as 1 if Mach's vm_read and vm_write are supported.
#define HAVE_VM_READ 0

/* Define as 1 if sigreturn is supported. */
#define HAVE_SIGRETURN 0

/* Define as 1 if _thread_sys_sigreturn is supported. */
#define HAVE__THREAD_SYS_SIGRETURN 0

// Define as 1 if setcontext is supported.
#define HAVE_SETCONTEXT 1

// Define as 1 if getcontext is supported.
#define HAVE_GETCONTEXT 1

// Define as 1 if copysign is supported.
#define HAVE_COPYSIGN 1

// Define as 1 if gethrtime (Solaris/HPUX) is supported.
#define HAVE_GETHRTIME 0

// Define as 1 if read_real_time (AIX) is supported.
#define HAVE_READ_REAL_TIME 0

// Define as 1 if fsync is supported.
#define HAVE_FSYNC 1

// Define as 1 if current platform has a working gettimeofday
#define HAVE_WORKING_GETTIMEOFDAY 1

// Define as 1 if current platform has a working clock_gettime
#define HAVE_WORKING_CLOCK_GETTIME 1

// Define as 1 if clock_gettime supports CLOCK_MONOTONIC.
#define HAVE_CLOCK_MONOTONIC 1

/* Define as 1 if futimes is supported. */
#define HAVE_FUTIMES 1

/* Define as 1 if utimes is supported. */
#define HAVE_UTIMES 1

/* Define as 1 if sysctl is supported. */
#define HAVE_SYSCTL 1

/* Define as 1 if sysconf is supported. */
#define HAVE_SYSCONF 1

/* Define as 1 if strtok_r is supported. */
#define HAVE_STRTOK_R 1

/* Define as 1 if localtime_r is supported. */
#define HAVE_LOCALTIME_R 1

/* Define as 1 if ctime_r is supported. */
#define HAVE_CTIME_R 1

/* Defined as 1 if gmtime_r is supported. */
#define HAVE_GMTIME_R 1

/* Define as 1 if timegm is supported. */
#define HAVE_TIMEGM 1

/* Define as 1 if _snwprintf is supported. */
#define HAVE__SNWPRINTF 0

// Define as 1 if poll is supported.
#define HAVE_POLL 1

// Define as 1 if INFTIM is defined.
#define HAVE_INFTIM 0

// Define as 1 if CHAR_BIT is defined
#define HAVE_CHAR_BIT 0

/* Define as 1 if directio is supported. */
#define HAVE_DIRECTIO 0

/* Define as 1 if use of directio is disabled, 
   even if HAVE_DIRECTIO is defined. */
#define DIRECTIO_DISABLED 0

/* Define as 1 if vm_allocate is supported. */
#define HAVE_VM_ALLOCATE 0

/* Define as 1 if statfs is supported. */
#define HAVE_STATFS 0

/* Define as 1 if statvfs is supported. */
#define HAVE_STATVFS 1

/* Define as 1 if statvfs64 prototype is broken. */
#define STATVFS64_PROTOTYPE_BROKEN 0

/* Define as 1 if siginfo_t is supported. */
#define HAVE_SIGINFO_T 1

/* Define as 1 if ucontext_t is supported. */
#define HAVE_UCONTEXT_T 1

/* Defined to sizeof(off_t). */
#define SIZEOF_OFF_T 8

/* Define as 1 if in_addr_t is supported. */
#define HAVE_IN_ADDR_T 0

// Define as 1 if caddr_t is supported.
#define HAVE_CADDR_T 0

/* Define as 1 if socklen_t is supported. */
#define HAVE_SOCKLEN_T 1

/* Define as 1 if sockaddr_ext is supported. */
#define HAVE_SOCKADDR_EXT 0

/* Define as 1 if pthread_rwlock_t is supported. */
#define HAVE_PTHREAD_RWLOCK_T 1

/* Define as 1 if Core Foundation is supported (Darwin/Mac OS X only). */
#define HAVE_COREFOUNDATION 0

/* Define as 1 if _NSGetEnviron is supported (Darwin/Mac OS X only). */
#define HAVE__NSGETENVIRON 0

/* Define this if debug channel output should be appended to existing files 
   instead of overwriting */
/* #undef _PAL_APPEND_DBG_OUTPUT_ */

/* Define as 1 if mmap() can map a file descriptor for /dev/zero */
#define HAVE_MMAP_DEV_ZERO 1

// Define as 1 if mmap() ignores its hint parameter.
#define MMAP_IGNORES_HINT 0

// Define as 1 if mmap() ignores its protection parameter when
// mapping anonymous pages.
#define MMAP_ANON_IGNORES_PROTECTION 0

// Define as 1 if mmap() allows remapping previously mapped pages
#define MMAP_DOESNOT_ALLOW_REMAP 0

// Define as 1 if there cannot be more than one shared mapping of a file
// region per process at the same time
#define ONE_SHARED_MAPPING_PER_FILEREGION_PER_PROCESS 0

// Define as 1 if pthread_create() modifies errno when it succeeds.
#define PTHREAD_CREATE_MODIFIES_ERRNO 0

// Define as 1 if sem_init() modifies errno when it succeeds.
#define SEM_INIT_MODIFIES_ERRNO 0

// Define as 1 if prwatch_t is supported
#define HAVE_PRWATCH_T 0

// Define as 1 if /proc/<pid>/ctl is supported.
#define HAVE_PROCFS_CTL 0

// Define as the name of the memory file in /proc/<pid>
#define PROCFS_MEM_NAME ""

// Define as 1 if including sys/user.h will result in
// _DEBUG being defined
#define USER_H_DEFINES_DEBUG 0

// Define as 1 if close(fd) blocks until there is any outstanding
// syscall using fd (e.g. AIX)
#define CLOSE_BLOCKS_ON_OUTSTANDING_SYSCALLS 0

// Define as 1 if sendto returns EHOSTUNREACH when sendto'ing using a
// "to" sockaddr which does not match the socket address family
// (e.g. AIX)
#define SENDTO_RETURNS_UNREACH_ON_WRONG_AF 0

// Define as 1 if shutdown fails on connectionless sockets
// (e.g. AIX)
#define SHUTDOWN_FAILS_ON_CONNECTIONLESS_SOCKETS 1

// Define as 1 if it is possible to broadcast on a socket regardless of SO_BROADCAST
// (e.g. Solaris)
#define BROADCAST_ALLOWED_WITHOUT_SO_BROADCAST 0

// Define as 1 if SO_RCVTIMEO and SO_SNDTIMEO are not supported
// or are ignored
#define SO_TIMEO_NOT_SUPPORTED 0

// Define as 1 if write of 0 bytes to the console hangs.
#define WRITE_0_BYTES_HANGS_TTY 0

// Define as 1 if acos is compatible with Windows.
#define HAVE_COMPATIBLE_ACOS 1

// Define as 1 if asin is compatible with Windows.
#define HAVE_COMPATIBLE_ASIN 1

// Define as 1 if pow is compatible with Windows.
#define HAVE_COMPATIBLE_POW 0

// Define as 1 if pow returns -Inf when given a negative base and a
// large magnitude odd exponent.
#define HAVE_VALID_NEGATIVE_INF_POW 1

// Define as 1 if pow returns +Inf when given a negative base and a
// large magnitude even exponent.
#define HAVE_VALID_POSITIVE_INF_POW 1

// Define as 1 if atan2 is compatible with Windows.
#define HAVE_COMPATIBLE_ATAN2 1

// Define as 1 if exp is compatible with Windows.
#define HAVE_COMPATIBLE_EXP 1

// Define as 1 if log is compatible with Windows.
#define HAVE_COMPATIBLE_LOG 1

// Define as 1 if log10 is compatible with Windows.
#define HAVE_COMPATIBLE_LOG10 1

// Define as 1 if ttrace is supported
#define HAVE_TTRACE 0

// Define as 1 if calling dlopen() on a library which is already
// opened returns a different handle
#define RETURNS_NEW_HANDLES_ON_REPEAT_DLOPEN 0

// If 1, SetThreadPriority() will not actually modify the pthread priority
// for threads which aren't critical or idle
#define PAL_IGNORE_NORMAL_THREAD_PRIORITY 0

// Define as a macro that correctly calls ptrace for the platform, e.g.:
// #define PAL_PTRACE(cmd, pid, addr, data) ptrace((cmd), (pid), (void*)(addr), (data), 0)
// Note that for autconfig substitution to properly occur the argument list
// must not be present in this file -- it should only be in the appropriate
// AC_DEFINE statement
#define PAL_PTRACE(cmd, pid, addr, data) ptrace((cmd), (pid), (void*)(addr), (data))

// Define as the ptrace cmd value to attach to a process
#define PAL_PT_ATTACH PTRACE_ATTACH

// Define as the ptrace cmd value to detach from a process
#define PAL_PT_DETACH PTRACE_DETACH

// Define as the ptrace cmd value to read a word from a process's data space
#define PAL_PT_READ_D PTRACE_PEEKDATA

// Define as the ptrace cmd value to write a word to a process's data space
#define PAL_PT_WRITE_D PTRACE_POKEDATA

// Define as 1 if ISO locale names needs to be in lowercase
#define HAVE_LOWERCASE_ISO_NAME 0

// Define as 1 if ISO locale names need an underscore after
// the "ISO" in the name.
#define HAVE_UNDERSCORE_ISO_NAME 0

// Define as 1 if we have per-thread locales as defined in xlocale.h
#define HAVE_XLOCALE 0

// Define as 1 if ungetc dose not return EOF on write-only file
#define UNGETC_NOT_RETURN_EOF 1

// Define as 1 if malloc(0) returns null
#define MALLOC_ZERO_RETURNS_NULL 0

// Define as 1 if error function for glob takes specific parameters
#define ERROR_FUNC_FOR_GLOB_HAS_FIXED_PARAMS 1

// Define the ja_JP locale name
#define JA_JP_LOCALE_NAME "ja_JP_LOCALE_NOT_FOUND"

// Define the ko_KR locale name
#define KO_KR_LOCALE_NAME "ko_KR_LOCALE_NOT_FOUND"

// Define the zh_TW locale name
#define ZH_TW_LOCALE_NAME "zh_TW_LOCALE_NOT_FOUND"

// Define as 1 if thread suspension uses signals
#define USE_SIGNALS_FOR_THREAD_SUSPENSION 1

// Define as 1 if platform has POSIX semaphores
#define HAS_POSIX_SEMAPHORES 1

// Define as 1 if suspending a thread while blocked on a lock can cause a hang 
#define DEADLOCK_WHEN_THREAD_IS_SUSPENDED_WHILE_BLOCKED_ON_MUTEX 0

// Define as 1 if sigwait cannot take a full sigset as a valid parameter
#define SIGWAIT_FAILS_WHEN_PASSED_FULL_SIGSET 0

// Define as 1 if a thread cannot suspend itself using the native suspension function
#define SELF_SUSPEND_FAILS_WITH_NATIVE_SUSPENSION 0

// Define as 1 if netdb.h defines MAXHOSTNAMELEN
#define NETDB_DEFINES_MAXHOSTNAMELEN 0

// Define as 1 if sys/param.h defines MAXHOSTNAMELEN
#define SYS_PARAM_DEFINES_MAXHOSTNAMELEN 0

// Define as 1 if getpwuid_r sets errno to ERANGE instead of returning ERANGE error
#define GETPWUID_R_SETS_ERRNO 1

// Define as 1 in order to use pipes as native support for thread blocking in the
// Synchronization Manager
#define SYNCHMGR_PIPE_BASED_THREAD_BLOCKING 0

// Define as 1 in order to signal conditions from a thread suspension safe area
#define SYNCHMGR_SUSPENSION_SAFE_CONDITION_SIGNALING 1

// Define as 1 if C-runtime file functions (e.g. fwrite) use the ferror() 
// value set by a previous file operation.
#define FILE_OPS_CHECK_FERROR_OF_PREVIOUS_CALL 0

// Define as 1 if platform has SYSV semaphores
#define HAS_SYSV_SEMAPHORES 1

// Define as 1 if platform has pthread mutexes
#define HAS_PTHREAD_MUTEXES 1

// Define as 1 if using stack protection, but need implementation
#define NEED_STACK_PROTECTOR_IMPL 0

#endif // _PAL_CONFIG_H_INCLUDED


