// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/kernel/kernel.h"

namespace Libraries::Kernel {

s32 PS4_SYSV_ABI __elf_phdr_match_addr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __error() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __freeze() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __inet_ntop() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __inet_pton() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __progname() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __pthread_cleanup_pop_imp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __pthread_cleanup_push_imp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __pthread_cxa_finalize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sceKernelGetGPI() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __stack_chk_fail() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __stack_chk_guard() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_debug_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dl_get_info() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dl_get_list() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dl_get_metadata() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dynlib_get_info_for_libdbg() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dynlib_get_info2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dynlib_get_list_for_libdbg() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dynlib_get_list2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_dynlib_load_prx() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_get_proc_type_info() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_is_development_mode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_kqueueex() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_namedobj_create() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_namedobj_delete() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_netabort() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_netcontrol() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_netgetiflist() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_netgetsockinfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_disable() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_enable() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_get_ctr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_get_hw() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_set_ctl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_set_ctr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_opmc_set_hw() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_osem_close() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_osem_open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_randomized_path() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_rdup() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_regmgr_call() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_set_uevt() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_socketclose() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_socketex() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_test_debug_rwmem() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __sys_workaround8849() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __tls_get_addr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI __Ux86_64_setcontext() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _accept() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _bind() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _close() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _connect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _dup2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _execve() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _execvpe() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _exit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _fcntl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _fpathconf() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _fstat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _fstatfs() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _getdirentries() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _getpeername() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _getsockname() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _getsockopt() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _ioctl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _is_signal_return() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _listen() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _nanosleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _openat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _read() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _readv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _recvfrom() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _recvmsg() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sceKernelRtldSetApplicationHeapAPI() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sceKernelRtldThreadAtexitDecrement() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sceKernelRtldThreadAtexitIncrement() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sceKernelSetThreadAtexitCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sceKernelSetThreadAtexitReport() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sceKernelSetThreadDtors() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sendmsg() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sendto() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _setsockopt() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sigaction() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sigintr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sigprocmask() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _sigsuspend() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _umtx_op() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _wait4() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _write() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI _writev() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI accept() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI access() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI amd64_set_fsbase() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI bind() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI blockpool_batch() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI blockpool_map() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI blockpool_open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI blockpool_unmap() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI chdir() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI chflags() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI chmod() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI clock_getres() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI clock_gettime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI clock_settime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI close() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI connect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI cpuset_getaffinity() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI cpuset_getid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI cpuset_setaffinity() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI creat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dlclose() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dlerror() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dlopen() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dlsym() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dup() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dup2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI dynlib_get_obj_member() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI environ() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI errno() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI execv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI execve() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI execvp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI fchflags() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI fchmod() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI fcntl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI fdatasync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI flock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI fstat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI fsync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ftruncate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI futimes() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI get_authinfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI get_module_info_list() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI get_page_table_stats() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI get_sdk_compiled_version() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI get_self_auth_info() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI get_vm_map_timestamp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getargc() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getargv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getcontext() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getdents() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getdirentries() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getdtablesize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getegid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI geteuid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getgid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getgroups() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getitimer() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getlogin() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getlogin_r() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getpagesize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getpeername() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getpid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getppid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getpriority() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getrlimit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getrusage() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getsid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getsockname() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getsockopt() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI gettimeofday() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI getuid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI htonl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI htons() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI inet_ntop() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI inet_pton() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ioctl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ipmimgr_call() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI is_in_sandbox() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI issetugid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI kevent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI kill() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI kqueue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_close() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_getvalue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_post() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_timedwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_trywait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_unlink() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ksem_wait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ktimer_create() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ktimer_delete() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ktimer_getoverrun() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ktimer_gettime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ktimer_settime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI listen() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI lseek() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI lstat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI madvise() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mdbg_service() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mincore() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mkdir() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mlockall() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mmap() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI mprotect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI msync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI munlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI munlockall() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI munmap() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI nanosleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ntohl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI ntohs() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pause() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI physhm_open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI physhm_unlink() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pipe() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI poll() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pread() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI preadv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI profil() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pselect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_atfork() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_get_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getaffinity_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getdetachstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getguardsize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getinheritsched() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getschedpolicy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getscope() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getstack() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getstackaddr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_getstacksize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setaffinity_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setcreatesuspend_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setdetachstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setguardsize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setinheritsched() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setschedpolicy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setscope() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setstack() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setstackaddr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_attr_setstacksize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrier_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrier_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrier_setname_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrier_wait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrierattr_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrierattr_getpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrierattr_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_barrierattr_setpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cancel() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cleanup_pop() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cleanup_push() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_broadcast() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_reltimedwait_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_setname_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_signal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_signalto_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_timedwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_cond_wait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_condattr_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_condattr_getclock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_condattr_getpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_condattr_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_condattr_setclock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_condattr_setpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_create() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_create_name_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_detach() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_equal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_exit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_get_specificarray_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_get_user_context_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getaffinity_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getconcurrency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getcpuclockid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getname_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getprio() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getspecific() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getstack_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_getthreadid_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_join() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_key_create() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_key_delete() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_kill() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_main_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_multi_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_getprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_getspinloops_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_getyieldloops_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_init_for_mono() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_isowned_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_lock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_reltimedlock_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_setname_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_setprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_setspinloops_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_setyieldloops_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_timedlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_trylock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutex_unlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_getkind_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_getprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_getprotocol() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_getpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_gettype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_setkind_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_setprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_setprotocol() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_setpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_mutexattr_settype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_once() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rename_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_resume_all_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_resume_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_resume_user_context_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_rdlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_reltimedrdlock_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_reltimedwrlock_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_setname_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_timedrdlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_timedwrlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_tryrdlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_trywrlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_unlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlock_wrlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlockattr_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlockattr_getpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlockattr_gettype_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlockattr_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlockattr_setpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_rwlockattr_settype_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_self() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_set_defaultstacksize_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_set_name_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_set_user_context_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setaffinity_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setcancelstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setcanceltype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setconcurrency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setprio() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_setspecific() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_sigmask() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_single_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_spin_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_spin_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_spin_lock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_spin_trylock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_spin_unlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_suspend_all_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_suspend_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_suspend_user_context_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_switch_add_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_switch_delete_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_testcancel() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_timedjoin_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pthread_yield() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pwrite() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI pwritev() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI raise() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI read() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI readv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI recv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI recvfrom() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI recvmsg() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI rename() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI rfork_thread() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI rmdir() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI rtld_printf() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI rtprio_thread() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddCpumodeEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddFileEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddGpuExceptionEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddHRTimerEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddReadEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddTimerEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddUserEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddUserEventEdge() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAddWriteEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioCancelRequest() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioCancelRequests() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioDeleteRequest() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioDeleteRequests() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioInitializeImpl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioInitializeParam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioPollRequest() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioPollRequests() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioSetParam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioSubmitReadCommands() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioSubmitReadCommandsMultiple() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioSubmitWriteCommands() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioSubmitWriteCommandsMultiple() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioWaitRequest() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAioWaitRequests() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAllocateDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAllocateDirectMemoryForMiniApp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAllocateMainDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAllocateTraceDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAvailableDirectMemorySize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelAvailableFlexibleMemorySize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelBacktraceSelf() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelBatchMap() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelBatchMap2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCancelEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCancelSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCheckedReleaseDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCheckReachability() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelChmod() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelClearBootReqNotifyCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelClearEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelClearGameDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelClockGetres() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelClockGettime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelClose() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCloseEport() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCloseEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCloseSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelConfiguredFlexibleMemorySize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelConvertLocaltimeToUtc() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelConvertUtcToLocaltime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCreateEport() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCreateEqueue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCreateEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelCreateSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugAcquireAndUpdateDebugRegister() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugGetAppStatus() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugGetPauseCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugGpuPaDebugIsInProgress() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugOutText() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugRaiseException() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugRaiseExceptionOnReleaseMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugRaiseExceptionWithContext() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugRaiseExceptionWithInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDebugReleaseDebugContext() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteCpumodeEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteEport() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteEqueue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteFileEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteGpuExceptionEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteHRTimerEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteReadEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteTimerEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteUserEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDeleteWriteEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDirectMemoryQuery() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDirectMemoryQueryForId() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelDlsym() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEnableDmemAliasing() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEnableDmemAliasing2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEnablePthreadObjectCheck() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelError() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEventLogInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEventLogPread() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEventLogRead() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelEventLogWrite() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFchmod() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFcntl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFdatasync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFstat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFsync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFtruncate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelFutimes() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetAllowedSdkVersionOnSystem() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetAppInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetAslrStatus() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetBackupRestoreMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetBackupRestoreModeOfNextBoot() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetBasicProductShape() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetBetaUpdateTestForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetBioUsageAll() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetBootReqNotifyCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCallRecord() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCompiledSdkVersion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCompiledSdkVersionByPath() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCompiledSdkVersionByPid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuFrequency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpumode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpumodeGame() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuTemperature() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuUsage() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuUsageAll() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuUsageProc() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuUsageProc2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCpuUsageThread() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetCurrentCpu() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetDataTransferMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetDebugMenuMiniModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetDebugMenuModeForPsmForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetDebugMenuModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetdents() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetDirectMemorySize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetDirectMemoryType() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetdirentries() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetEventData() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetEventError() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetEventFflags() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetEventFilter() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetEventId() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetEventUserData() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetExecutableModuleHandle() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetExtLibcHandle() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetFakeFinalizeMenuForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetFlagedUpdaterForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetForceUpdateModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetFsSandboxRandomWord() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetGPI() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetGPO() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetHwFeatureInfoForDecid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetIdPs() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetIdTableCurrentCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetIpcPath() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetLibkernelTextLocation() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetMainSocId() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleInfoForUnwind() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleInfoFromAddr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleInfoInternal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleList() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleListInternal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetOpenPsIdForSystem() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPageTableStats() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPagingStatsOfAllObjects() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPagingStatsOfAllThreads() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPhysPageSize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProcessName() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProcessTime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProcessTimeCounter() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProcessTimeCounterFrequency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProcessType() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProcParam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProductCode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetProductStr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPrtAperture() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPsmIntdevModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetPsnAccessTraceLogForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetQafExpirationTimeNotafterForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetQafExpirationTimeNotbeforeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetQafGenerationForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetQafNameForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetRenderingMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetResidentCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetResidentFmemCount() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSafemode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSanitizerMallocReplace() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSanitizerMallocReplaceExternal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSanitizerNewReplace() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSanitizerNewReplaceExternal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSocPowerConsumption() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSocSensorTemperature() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSpecialIForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSubsysId() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSystemExVersion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSystemLevelDebuggerModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSystemSwBeta() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetSystemSwVersion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetThreadName() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGettimeofday() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGettimezone() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetTraceMemoryStats() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetTscFrequency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenDataExecutionForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenExpirationTimeNotafterForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenExpirationTimeNotbeforeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenFakeSharefactoryForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenFlagedUpdaterForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenNpEnvSwitchingForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenSaveDataRepairForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenStoreModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenUseSoftwagnerForAcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenUseSoftwagnerForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetUtokenWeakenedPortRestrictionForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetVrCaptureSize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelHasNeoMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelHwHasOpticalOut() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelHwHasWlanBt() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccControlBDPowerState() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccControlUSBPowerState() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetBDPowerState() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetCountTime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetCPMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetCpuInfoBit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetErrLog() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetHwInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetPowerNumberOfBootShutdown() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetPowerOperatingTime() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetPowerUpCause() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetSysEventLog() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetThermalAlert() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccGetUSBPowerState() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccIndicatorBootDone() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccIndicatorShutdown() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccIndicatorStandby() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccIndicatorStandbyBoot() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccIndicatorStandbyShutdown() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccNotifyBootStatus() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccNvsFlush() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccReadPowerBootMessage() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccSetBuzzer() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccSetCPMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccSetCpuInfoBit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIccSetDownloadMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInstallExceptionHandler() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalGetKmemStatistics() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalGetMapStatistics() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalHeapPrintBacktraceWithModuleInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalMapDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalMapNamedDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalMemoryGetAvailableSize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalMemoryGetModuleSegmentInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalResumeDirectMemoryRelease() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelInternalSuspendDirectMemoryRelease() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsAddressSanitizerEnabled() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsAllowedToSelectDvdRegion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsAuthenticNeo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsCEX() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsDebuggerAttached() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsDevKit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsExperimentalBeta() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsGenuineCEX() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsGenuineDevKit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsGenuineKratosCex() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsGenuineN() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsGenuineTestKit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsInSandbox() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsKratos() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsMainOnStanbyMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsMainOnStandbyMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsNeoMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsStack() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsTestKit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelJitCreateAliasOfSharedMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelJitCreateSharedMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelJitGetSharedMemoryInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelJitMapSharedMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelKernelHeapUsage() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLoadStartModule() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLoadStartModuleForSysmodule() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLseek() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLwfsAllocateBlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLwfsLseek() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLwfsSetAttribute() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLwfsTrimBlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelLwfsWrite() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapDirectMemory2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapFlexibleMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapNamedDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapNamedFlexibleMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapNamedSystemFlexibleMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapSanitizerShadowMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMapTraceMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolBatch() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolCommit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolDecommit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolExpand() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolGetBlockStats() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolMove() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMemoryPoolReserve() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMkdir() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMlockall() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMmap() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMprotect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMsync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMtypeprotect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMunlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMunlockall() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelMunmap() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelNanosleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelNormalizePath() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelNotifyAppStateChanged() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelNotifySystemSuspendResumeProgress() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelNotifySystemSuspendStart() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelOpen() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelOpenEport() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelOpenEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelOpenSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPollEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPollSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPread() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPreadv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPrintBacktraceWithModuleInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelProtectDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelProtectDirectMemoryForPID() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPwrite() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelPwritev() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelQueryMemoryProtection() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelQueryTraceMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRaiseException() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRandomizedPath() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRdup() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRead() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReadTsc() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReadv() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReboot() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReleaseDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReleaseFlexibleMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReleaseTraceDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRemoveExceptionHandler() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRename() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReportUnpatchedFunctionCall() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReserve2mbPage() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReserveSystemDirectMemory() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelReserveVirtualRange() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelResumeDirectMemoryRelease() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRmdir() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelRtldControl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSandboxPath() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSendNotificationRequest() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetAppInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetBackupRestoreMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetBaseModeClock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetBesteffort() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetBootReqNotify() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetCallRecord() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetCompressionAttribute() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetCpumodeGame() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetDataTransferMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetFsstParam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetGameDirectMemoryLimit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetGPI() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetGPO() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetGpuCu() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetMemoryPstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetNeoModeClock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetPhysFmemLimit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetProcessName() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetProcessProperty() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetProcessPropertyString() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetPrtAperture() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetSafemode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSettimeofday() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetTimezoneInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetVirtualRangeName() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSetVmContainer() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSignalSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSlvNotifyError() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelStat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelStopUnloadModule() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSuspendDirectMemoryRelease() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSwitchToBaseMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSwitchToNeoMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelSync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTerminateSysCore() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTitleWorkaroundIsEnabled() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTitleWorkdaroundIsEnabled() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTraceMemoryTypeProtect() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTriggerEport() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTriggerUserEvent() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelTruncate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelUnlink() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelUsleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelUtimes() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelUuidCreate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelVirtualQuery() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelVirtualQueryAll() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelWaitEqueue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelWaitEventFlag() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelWaitSema() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelWrite() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelWriteSdkEventLog() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelWritev() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelYieldCpumode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceLibcMspaceCreateForMonoMutex() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAtfork() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGet() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetaffinity() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetdetachstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetguardsize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetinheritsched() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetschedpolicy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetscope() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetstack() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetstackaddr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrGetstacksize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetaffinity() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetcreatesuspend() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetdetachstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetguardsize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetinheritsched() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetschedpolicy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetscope() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetstack() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetstackaddr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadAttrSetstacksize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierattrDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierattrGetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierattrInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierattrSetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadBarrierWait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCancel() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondattrDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondattrGetclock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondattrGetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondattrInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondattrSetclock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondattrSetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondBroadcast() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondSignal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondSignalto() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondTimedwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCondWait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadCreate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadDetach() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadEqual() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadExit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetaffinity() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetconcurrency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetcpuclockid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetname() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetprio() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetspecific() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadGetthreadid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadJoin() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadKeyCreate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadKeyDelete() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMain() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMulti() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrGetkind() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrGetprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrGetprotocol() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrGetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrGettype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrInitForInternalLibc() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrSetkind() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrSetprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrSetprotocol() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrSetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexattrSettype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexGetprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexGetspinloops() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexGetyieldloops() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexInitForInternalLibc() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexIsowned() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexLock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexSetprioceiling() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexSetspinloops() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexSetyieldloops() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexTimedlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexTrylock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadMutexUnlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadOnce() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRename() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadResume() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadResumeAll() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockattrDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockattrGetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockattrGettype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockattrInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockattrSetpshared() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockattrSettype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockRdlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockTimedrdlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockTimedwrlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockTryrdlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockTrywrlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockUnlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadRwlockWrlock() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSelf() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemDestroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemGetvalue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemInit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemPost() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemTimedwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemTrywait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSemWait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetaffinity() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetBesteffort() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetcancelstate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetcanceltype() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetconcurrency() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetDefaultstacksize() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetName() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetprio() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetschedparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSetspecific() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSingle() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSuspend() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadSuspendAll() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadTestcancel() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadTimedjoin() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI scePthreadYield() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_get_priority_max() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_get_priority_min() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_getparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_getscheduler() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_rr_get_interval() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_setparam() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_setscheduler() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sched_yield() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI select() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_close() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_destroy() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_getvalue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_init() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_post() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_reltimedwait_np() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_setname() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_timedwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_trywait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_unlink() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sem_wait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI send() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sendfile() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sendmsg() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sendto() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI set_phys_fmem_limit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setcontext() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setegid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI seteuid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setgroups() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setitimer() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setpriority() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setregid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setreuid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setrlimit() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setsockopt() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI settimeofday() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI setuid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI shm_open() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI shm_unlink() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI shutdown() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigaction() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigaddset() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigaltstack() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigdelset() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigemptyset() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigfillset() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigismember() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI siglongjmp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI signal() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigpending() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigprocmask() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigqueue() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigreturn() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigsetjmp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigsuspend() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigtimedwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigwait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sigwaitinfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI socket() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI socketpair() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI stat() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI swapcontext() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sync() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysarch() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysconf() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysctl() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysctlbyname() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysctlnametomib() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysKernelGetIntdevModeForRcmgr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysKernelGetLowerLimitSysexVersion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysKernelGetLowerLimitUpdVersion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysKernelGetManufacturingMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysKernelGetUpdVersion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI system() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcdrain() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcflow() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcflush() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcgetattr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcgetpgrp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcgetsid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcsendbreak() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcsetattr() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcsetpgrp() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI tcsetsid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI truncate() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI unlink() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI usleep() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI utimes() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI uuidgen() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI wait() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI wait3() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI waitpid() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI write() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI writev() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_37DE1AD13E05E3E5() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_71A7C3C5AEB8B0EE() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_829822FC6C04D88B() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_866AB0F0694DFAD2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_8CCB8DA014423D48() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_AAD1CE2ED156ABB6() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_B95F988A5707A80B() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_BDF61AC64C672574() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_BFEA9394D8C5EA41() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_C740D02B44D70E4D() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_D6FDB7C3B4679227() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_DB02A3203D221953() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_DB1838257BDA27A9() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_FCF341DED7E70FC7() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_FEE3EAF3655B44C2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsProspero() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetOpenPsId() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_0A531D1EEBBE4750() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleInfo2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelGetModuleList2() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceKernelIsModuleLoaded() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysc_e00() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sysc_s00() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpAttachMemoryRegion() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpAttachMemoryRegionAsUserFile() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpAttachUserFile() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpAttachUserMemoryFile() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpConfigDumpMode() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpDebugTextOut() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpGetStopInfoCpu() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpGetStopInfoGpu() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpGetThreadContextInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpInternalGetThreadContextInfo() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpRegisterCoredumpHandler() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpSetUserDataType() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpUnregisterCoredumpHandler() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpWriteUserData() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI Func_9889095293F9BCAA() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpDebugForceCoredumpOnAppClose() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCoredumpDebugTriggerCoredump() {
    LOG_ERROR(Lib_Kernel, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterLib(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("Fjc4-n1+y2g", "libkernel", 1, "libkernel", __elf_phdr_match_addr);
    LIB_FUNCTION("9BcDykPmo1I", "libkernel", 1, "libkernel", __error);
    LIB_FUNCTION("nSSPVGJLMjE", "libkernel", 1, "libkernel", __freeze);
    LIB_FUNCTION("4pYihoPggn8", "libkernel", 1, "libkernel", __inet_ntop);
    LIB_FUNCTION("fyPeCKJ94Hg", "libkernel", 1, "libkernel", __inet_pton);
    LIB_FUNCTION("djxxOmW6-aw", "libkernel", 1, "libkernel", __progname);
    LIB_FUNCTION("iWsFlYMf3Kw", "libkernel", 1, "libkernel", __pthread_cleanup_pop_imp);
    LIB_FUNCTION("1xvtUVx1-Sg", "libkernel", 1, "libkernel", __pthread_cleanup_push_imp);
    LIB_FUNCTION("kbw4UHHSYy0", "libkernel", 1, "libkernel", __pthread_cxa_finalize);
    LIB_FUNCTION("3JYhkiIHkJc", "libkernel", 1, "libkernel", __sceKernelGetGPI);
    LIB_FUNCTION("Ou3iL1abvng", "libkernel", 1, "libkernel", __stack_chk_fail);
    LIB_FUNCTION("f7uOxY9mM1U", "libkernel", 1, "libkernel", __stack_chk_guard);
    LIB_FUNCTION("zdaF5N-Xe2M", "libkernel", 1, "libkernel", __sys_debug_init);
    LIB_FUNCTION("YbAunrti+54", "libkernel", 1, "libkernel", __sys_dl_get_info);
    LIB_FUNCTION("XujojypwYYc", "libkernel", 1, "libkernel", __sys_dl_get_list);
    LIB_FUNCTION("7OpNDDNMJyo", "libkernel", 1, "libkernel", __sys_dl_get_metadata);
    LIB_FUNCTION("K7xiuldOPKw", "libkernel", 1, "libkernel", __sys_dynlib_get_info_for_libdbg);
    LIB_FUNCTION("nTc+tFajGqQ", "libkernel", 1, "libkernel", __sys_dynlib_get_info2);
    LIB_FUNCTION("vpo3SbGFuEk", "libkernel", 1, "libkernel", __sys_dynlib_get_list_for_libdbg);
    LIB_FUNCTION("P0jjY6bxakI", "libkernel", 1, "libkernel", __sys_dynlib_get_list2);
    LIB_FUNCTION("nZHk+lpqwVQ", "libkernel", 1, "libkernel", __sys_dynlib_load_prx);
    LIB_FUNCTION("nG-FYqFutUo", "libkernel", 1, "libkernel", __sys_get_proc_type_info);
    LIB_FUNCTION("O-hEvSnv2o4", "libkernel", 1, "libkernel", __sys_is_development_mode);
    LIB_FUNCTION("2M+dFM8Wmq4", "libkernel", 1, "libkernel", __sys_kqueueex);
    LIB_FUNCTION("3CNY4Z0Luc8", "libkernel", 1, "libkernel", __sys_namedobj_create);
    LIB_FUNCTION("E7CmfLfeSuQ", "libkernel", 1, "libkernel", __sys_namedobj_delete);
    LIB_FUNCTION("UTR6wAkajxk", "libkernel", 1, "libkernel", __sys_netabort);
    LIB_FUNCTION("zsTvhCDrOjQ", "libkernel", 1, "libkernel", __sys_netcontrol);
    LIB_FUNCTION("X86Q0qQJ1m0", "libkernel", 1, "libkernel", __sys_netgetiflist);
    LIB_FUNCTION("Wx2+2t1mX1E", "libkernel", 1, "libkernel", __sys_netgetsockinfo);
    LIB_FUNCTION("iZFJYJJoZS8", "libkernel", 1, "libkernel", __sys_opmc_disable);
    LIB_FUNCTION("MGrj20+EK+U", "libkernel", 1, "libkernel", __sys_opmc_enable);
    LIB_FUNCTION("h+4DJpAXs4I", "libkernel", 1, "libkernel", __sys_opmc_get_ctr);
    LIB_FUNCTION("IglowNcOePQ", "libkernel", 1, "libkernel", __sys_opmc_get_hw);
    LIB_FUNCTION("vS-RnoD1BSY", "libkernel", 1, "libkernel", __sys_opmc_set_ctl);
    LIB_FUNCTION("ztNqqNCl1Tw", "libkernel", 1, "libkernel", __sys_opmc_set_ctr);
    LIB_FUNCTION("PIt9WYaoBqU", "libkernel", 1, "libkernel", __sys_opmc_set_hw);
    LIB_FUNCTION("raO+bB7q2cY", "libkernel", 1, "libkernel", __sys_osem_close);
    LIB_FUNCTION("kPGXeSQeoWc", "libkernel", 1, "libkernel", __sys_osem_open);
    LIB_FUNCTION("n0ErFZ2hmKs", "libkernel", 1, "libkernel", __sys_randomized_path);
    LIB_FUNCTION("9Iem9Wk07xU", "libkernel", 1, "libkernel", __sys_rdup);
    LIB_FUNCTION("7NwggrWJ5cA", "libkernel", 1, "libkernel", __sys_regmgr_call);
    LIB_FUNCTION("ByogDrS-Xw8", "libkernel", 1, "libkernel", __sys_set_uevt);
    LIB_FUNCTION("t+rTx5NW+qU", "libkernel", 1, "libkernel", __sys_socketclose);
    LIB_FUNCTION("pG70GT5yRo4", "libkernel", 1, "libkernel", __sys_socketex);
    LIB_FUNCTION("EeVthQocE3Y", "libkernel", 1, "libkernel", __sys_test_debug_rwmem);
    LIB_FUNCTION("jTPE1AS7uak", "libkernel", 1, "libkernel", __sys_workaround8849);
    LIB_FUNCTION("vNe1w4diLCs", "libkernel", 1, "libkernel", __tls_get_addr);
    LIB_FUNCTION("OjWstbIRPUo", "libkernel", 1, "libkernel", __Ux86_64_setcontext);
    LIB_FUNCTION("B+zfF7bMswI", "libkernel", 1, "libkernel", _accept);
    LIB_FUNCTION("4boImm4wxu0", "libkernel", 1, "libkernel", _bind);
    LIB_FUNCTION("NNtFaKJbPt0", "libkernel", 1, "libkernel", _close);
    LIB_FUNCTION("KFDGyLj80MY", "libkernel", 1, "libkernel", _connect);
    LIB_FUNCTION("W8f1adVl+48", "libkernel", 1, "libkernel", _dup2);
    LIB_FUNCTION("-3nj+K1elI0", "libkernel", 1, "libkernel", _execve);
    LIB_FUNCTION("ScfDTOqLOMw", "libkernel", 1, "libkernel", _execvpe);
    LIB_FUNCTION("6Z83sYWFlA8", "libkernel", 1, "libkernel", _exit);
    LIB_FUNCTION("t0fXUzq61Z4", "libkernel", 1, "libkernel", _fcntl);
    LIB_FUNCTION("cZq1zIzFN7s", "libkernel", 1, "libkernel", _fpathconf);
    LIB_FUNCTION("A0O5kF5x4LQ", "libkernel", 1, "libkernel", _fstat);
    LIB_FUNCTION("17Mfe1B3X6U", "libkernel", 1, "libkernel", _fstatfs);
    LIB_FUNCTION("sfKygSjIbI8", "libkernel", 1, "libkernel", _getdirentries);
    LIB_FUNCTION("rTNM7adVYog", "libkernel", 1, "libkernel", _getpeername);
    LIB_FUNCTION("6Gwl39KKUEI", "libkernel", 1, "libkernel", _getsockname);
    LIB_FUNCTION("cL2QUlo9Vnk", "libkernel", 1, "libkernel", _getsockopt);
    LIB_FUNCTION("wW+k21cmbwQ", "libkernel", 1, "libkernel", _ioctl);
    LIB_FUNCTION("crb5j7mkk1c", "libkernel", 1, "libkernel", _is_signal_return);
    LIB_FUNCTION("6EYF3tXjXbU", "libkernel", 1, "libkernel", _listen);
    LIB_FUNCTION("NhpspxdjEKU", "libkernel", 1, "libkernel", _nanosleep);
    LIB_FUNCTION("6c3rCVE-fTU", "libkernel", 1, "libkernel", _open);
    LIB_FUNCTION("bGVEgWXy6dg", "libkernel", 1, "libkernel", _openat);
    LIB_FUNCTION("DRuBt2pvICk", "libkernel", 1, "libkernel", _read);
    LIB_FUNCTION("+WRlkKjZvag", "libkernel", 1, "libkernel", _readv);
    LIB_FUNCTION("gPcQ3OrFBUA", "libkernel", 1, "libkernel", _recvfrom);
    LIB_FUNCTION("PcKApW9kVoQ", "libkernel", 1, "libkernel", _recvmsg);
    LIB_FUNCTION("p5EcQeEeJAE", "libkernel", 1, "libkernel", _sceKernelRtldSetApplicationHeapAPI);
    LIB_FUNCTION("8OnWXlgQlvo", "libkernel", 1, "libkernel", _sceKernelRtldThreadAtexitDecrement);
    LIB_FUNCTION("Tz4RNUCBbGI", "libkernel", 1, "libkernel", _sceKernelRtldThreadAtexitIncrement);
    LIB_FUNCTION("pB-yGZ2nQ9o", "libkernel", 1, "libkernel", _sceKernelSetThreadAtexitCount);
    LIB_FUNCTION("WhCc1w3EhSI", "libkernel", 1, "libkernel", _sceKernelSetThreadAtexitReport);
    LIB_FUNCTION("rNhWz+lvOMU", "libkernel", 1, "libkernel", _sceKernelSetThreadDtors);
    LIB_FUNCTION("+L22kkFiXok", "libkernel", 1, "libkernel", _sendmsg);
    LIB_FUNCTION("lvDhwhUC05E", "libkernel", 1, "libkernel", _sendto);
    LIB_FUNCTION("a4KKvF-ME4M", "libkernel", 1, "libkernel", _setsockopt);
    LIB_FUNCTION("UDCI-WazohQ", "libkernel", 1, "libkernel", _sigaction);
    LIB_FUNCTION("nQVWJEGHObc", "libkernel", 1, "libkernel", _sigintr);
    LIB_FUNCTION("6xVpy0Fdq+I", "libkernel", 1, "libkernel", _sigprocmask);
    LIB_FUNCTION("9zpLsLESzTs", "libkernel", 1, "libkernel", _sigsuspend);
    LIB_FUNCTION("04AjkP0jO9U", "libkernel", 1, "libkernel", _umtx_op);
    LIB_FUNCTION("RFlsu7nfopM", "libkernel", 1, "libkernel", _wait4);
    LIB_FUNCTION("FxVZqBAA7ks", "libkernel", 1, "libkernel", _write);
    LIB_FUNCTION("YSHRBRLn2pI", "libkernel", 1, "libkernel", _writev);
    LIB_FUNCTION("3e+4Iv7IJ8U", "libkernel", 1, "libkernel", accept);
    LIB_FUNCTION("8vE6Z6VEYyk", "libkernel", 1, "libkernel", access);
    LIB_FUNCTION("3SVaehJvYFk", "libkernel", 1, "libkernel", amd64_set_fsbase);
    LIB_FUNCTION("KuOmgKoqCdY", "libkernel", 1, "libkernel", bind);
    LIB_FUNCTION("-pOg5A6Yr6g", "libkernel", 1, "libkernel", blockpool_batch);
    LIB_FUNCTION("99XpfyBTg9c", "libkernel", 1, "libkernel", blockpool_map);
    LIB_FUNCTION("JVgZfJt3ZqQ", "libkernel", 1, "libkernel", blockpool_open);
    LIB_FUNCTION("KZchfealTT4", "libkernel", 1, "libkernel", blockpool_unmap);
    LIB_FUNCTION("6mMQ1MSPW-Q", "libkernel", 1, "libkernel", chdir);
    LIB_FUNCTION("ixrw0h2tWuI", "libkernel", 1, "libkernel", chflags);
    LIB_FUNCTION("z0dtnPxYgtg", "libkernel", 1, "libkernel", chmod);
    LIB_FUNCTION("smIj7eqzZE8", "libkernel", 1, "libkernel", clock_getres);
    LIB_FUNCTION("lLMT9vJAck0", "libkernel", 1, "libkernel", clock_gettime);
    LIB_FUNCTION("d7nUj1LOdDU", "libkernel", 1, "libkernel", clock_settime);
    LIB_FUNCTION("bY-PO6JhzhQ", "libkernel", 1, "libkernel", close);
    LIB_FUNCTION("XVL8So3QJUk", "libkernel", 1, "libkernel", connect);
    LIB_FUNCTION("Pdgml4rbxYk", "libkernel", 1, "libkernel", cpuset_getaffinity);
    LIB_FUNCTION("DGY7qWLcHGA", "libkernel", 1, "libkernel", cpuset_getid);
    LIB_FUNCTION("0Ma-LQjv6So", "libkernel", 1, "libkernel", cpuset_setaffinity);
    LIB_FUNCTION("5AMS0IntU8I", "libkernel", 1, "libkernel", creat);
    LIB_FUNCTION("oiT0vgzmW0M", "libkernel", 1, "libkernel", dlclose);
    LIB_FUNCTION("ucFJiTO1EUw", "libkernel", 1, "libkernel", dlerror);
    LIB_FUNCTION("UteVS6B1ZrU", "libkernel", 1, "libkernel", dlopen);
    LIB_FUNCTION("biY+kcVB5D4", "libkernel", 1, "libkernel", dlsym);
    LIB_FUNCTION("iiQjzvfWDq0", "libkernel", 1, "libkernel", dup);
    LIB_FUNCTION("wdUufa9g-D8", "libkernel", 1, "libkernel", dup2);
    LIB_FUNCTION("6eh9QGpaRWw", "libkernel", 1, "libkernel", dynlib_get_obj_member);
    LIB_FUNCTION("+2thxYZ4syk", "libkernel", 1, "libkernel", environ);
    LIB_FUNCTION("8KHh+VefZDM", "libkernel", 1, "libkernel", errno);
    LIB_FUNCTION("KaK52lYTBIs", "libkernel", 1, "libkernel", execv);
    LIB_FUNCTION("kdguLiAheLI", "libkernel", 1, "libkernel", execve);
    LIB_FUNCTION("0NJDcQ2B8vE", "libkernel", 1, "libkernel", execvp);
    LIB_FUNCTION("UJrQCyYpyic", "libkernel", 1, "libkernel", fchflags);
    LIB_FUNCTION("n01yNbQO5W4", "libkernel", 1, "libkernel", fchmod);
    LIB_FUNCTION("8nY19bKoiZk", "libkernel", 1, "libkernel", fcntl);
    LIB_FUNCTION("KIbJFQ0I1Cg", "libkernel", 1, "libkernel", fdatasync);
    LIB_FUNCTION("9eMlfusH4sU", "libkernel", 1, "libkernel", flock);
    LIB_FUNCTION("mqQMh1zPPT8", "libkernel", 1, "libkernel", fstat);
    LIB_FUNCTION("juWbTNM+8hw", "libkernel", 1, "libkernel", fsync);
    LIB_FUNCTION("ih4CD9-gghM", "libkernel", 1, "libkernel", ftruncate);
    LIB_FUNCTION("+0EDo7YzcoU", "libkernel", 1, "libkernel", futimes);
    LIB_FUNCTION("igMefp4SAv0", "libkernel", 1, "libkernel", get_authinfo);
    LIB_FUNCTION("wwyXc68wvnA", "libkernel", 1, "libkernel", get_module_info_list);
    LIB_FUNCTION("WtR7OVvUgSo", "libkernel", 1, "libkernel", get_page_table_stats);
    LIB_FUNCTION("fi+JX2wq2XU", "libkernel", 1, "libkernel", get_sdk_compiled_version);
    LIB_FUNCTION("p2xgfB-30g8", "libkernel", 1, "libkernel", get_self_auth_info);
    LIB_FUNCTION("Hx-KCms9n4s", "libkernel", 1, "libkernel", get_vm_map_timestamp);
    LIB_FUNCTION("iKJMWrAumPE", "libkernel", 1, "libkernel", getargc);
    LIB_FUNCTION("FJmglmTMdr4", "libkernel", 1, "libkernel", getargv);
    LIB_FUNCTION("dar03AOn+nM", "libkernel", 1, "libkernel", getcontext);
    LIB_FUNCTION("2G6i6hMIUUY", "libkernel", 1, "libkernel", getdents);
    LIB_FUNCTION("f09KvIPy-QY", "libkernel", 1, "libkernel", getdirentries);
    LIB_FUNCTION("sZuwaDPATKs", "libkernel", 1, "libkernel", getdtablesize);
    LIB_FUNCTION("72rYuYoDTWk", "libkernel", 1, "libkernel", getegid);
    LIB_FUNCTION("tvpHe5kBO4E", "libkernel", 1, "libkernel", geteuid);
    LIB_FUNCTION("AfuS23bX6kg", "libkernel", 1, "libkernel", getgid);
    LIB_FUNCTION("3yjZbSvan2g", "libkernel", 1, "libkernel", getgroups);
    LIB_FUNCTION("J1H1QRCJf2Q", "libkernel", 1, "libkernel", getitimer);
    LIB_FUNCTION("AfMxh2e9V3Q", "libkernel", 1, "libkernel", getlogin);
    LIB_FUNCTION("78FiHequa9U", "libkernel", 1, "libkernel", getlogin_r);
    LIB_FUNCTION("k+AXqu2-eBc", "libkernel", 1, "libkernel", getpagesize);
    LIB_FUNCTION("TXFFFiNldU8", "libkernel", 1, "libkernel", getpeername);
    LIB_FUNCTION("HoLVWNanBBc", "libkernel", 1, "libkernel", getpid);
    LIB_FUNCTION("e6ovBo9ZvJc", "libkernel", 1, "libkernel", getppid);
    LIB_FUNCTION("miQ1wVwSexE", "libkernel", 1, "libkernel", getpriority);
    LIB_FUNCTION("Wh7HbV7JFqc", "libkernel", 1, "libkernel", getrlimit);
    LIB_FUNCTION("hHlZQUnlxSM", "libkernel", 1, "libkernel", getrusage);
    LIB_FUNCTION("gokWod7GAH4", "libkernel", 1, "libkernel", getsid);
    LIB_FUNCTION("RenI1lL1WFk", "libkernel", 1, "libkernel", getsockname);
    LIB_FUNCTION("6O8EwYOgH9Y", "libkernel", 1, "libkernel", getsockopt);
    LIB_FUNCTION("n88vx3C5nW8", "libkernel", 1, "libkernel", gettimeofday);
    LIB_FUNCTION("kg4x8Prhfxw", "libkernel", 1, "libkernel", getuid);
    LIB_FUNCTION("K1S8oc61xiM", "libkernel", 1, "libkernel", htonl);
    LIB_FUNCTION("jogUIsOV3-U", "libkernel", 1, "libkernel", htons);
    LIB_FUNCTION("5jRCs2axtr4", "libkernel", 1, "libkernel", inet_ntop);
    LIB_FUNCTION("4n51s0zEf0c", "libkernel", 1, "libkernel", inet_pton);
    LIB_FUNCTION("PfccT7qURYE", "libkernel", 1, "libkernel", ioctl);
    LIB_FUNCTION("Hk7iHmGxB18", "libkernel", 1, "libkernel", ipmimgr_call);
    LIB_FUNCTION("WaThXSvAQNc", "libkernel", 1, "libkernel", is_in_sandbox);
    LIB_FUNCTION("AxUhC3zNrhk", "libkernel", 1, "libkernel", issetugid);
    LIB_FUNCTION("RW-GEfpnsqg", "libkernel", 1, "libkernel", kevent);
    LIB_FUNCTION("W0xkN0+ZkCE", "libkernel", 1, "libkernel", kill);
    LIB_FUNCTION("nh2IFMgKTv8", "libkernel", 1, "libkernel", kqueue);
    LIB_FUNCTION("pv9M2jHJ6iw", "libkernel", 1, "libkernel", ksem_close);
    LIB_FUNCTION("asSKL30+heA", "libkernel", 1, "libkernel", ksem_destroy);
    LIB_FUNCTION("rOT0UMvtCCA", "libkernel", 1, "libkernel", ksem_getvalue);
    LIB_FUNCTION("TEwqtzAmezo", "libkernel", 1, "libkernel", ksem_init);
    LIB_FUNCTION("k5QQrJEpRYY", "libkernel", 1, "libkernel", ksem_open);
    LIB_FUNCTION("s8gWJrY1W-k", "libkernel", 1, "libkernel", ksem_post);
    LIB_FUNCTION("vE+WlomLSh4", "libkernel", 1, "libkernel", ksem_timedwait);
    LIB_FUNCTION("gVaofuRvLdU", "libkernel", 1, "libkernel", ksem_trywait);
    LIB_FUNCTION("tvkQRDe6hNo", "libkernel", 1, "libkernel", ksem_unlink);
    LIB_FUNCTION("rQvMIxmFD6A", "libkernel", 1, "libkernel", ksem_wait);
    LIB_FUNCTION("SFjw4+HOVOQ", "libkernel", 1, "libkernel", ktimer_create);
    LIB_FUNCTION("Uyss1eAFtWo", "libkernel", 1, "libkernel", ktimer_delete);
    LIB_FUNCTION("tj-nUlJCp-8", "libkernel", 1, "libkernel", ktimer_getoverrun);
    LIB_FUNCTION("mZlElqorITk", "libkernel", 1, "libkernel", ktimer_gettime);
    LIB_FUNCTION("ZWNwgNgglzA", "libkernel", 1, "libkernel", ktimer_settime);
    LIB_FUNCTION("pxnCmagrtao", "libkernel", 1, "libkernel", listen);
    LIB_FUNCTION("Oy6IpwgtYOk", "libkernel", 1, "libkernel", lseek);
    LIB_FUNCTION("DRGXpDDh8Ng", "libkernel", 1, "libkernel", lstat);
    LIB_FUNCTION("Jahsnh4KKkg", "libkernel", 1, "libkernel", madvise);
    LIB_FUNCTION("LYbbZxXNAns", "libkernel", 1, "libkernel", mdbg_service);
    LIB_FUNCTION("+hFjyohmOU0", "libkernel", 1, "libkernel", mincore);
    LIB_FUNCTION("JGMio+21L4c", "libkernel", 1, "libkernel", mkdir);
    LIB_FUNCTION("mTBZfEal2Bw", "libkernel", 1, "libkernel", mlock);
    LIB_FUNCTION("x7g7Ebeo8-U", "libkernel", 1, "libkernel", mlockall);
    LIB_FUNCTION("BPE9s9vQQXo", "libkernel", 1, "libkernel", mmap);
    LIB_FUNCTION("YQOfxL4QfeU", "libkernel", 1, "libkernel", mprotect);
    LIB_FUNCTION("tZY4+SZNFhA", "libkernel", 1, "libkernel", msync);
    LIB_FUNCTION("OG4RsDwLguo", "libkernel", 1, "libkernel", munlock);
    LIB_FUNCTION("NpLBpgVV7PU", "libkernel", 1, "libkernel", munlockall);
    LIB_FUNCTION("UqDGjXA5yUM", "libkernel", 1, "libkernel", munmap);
    LIB_FUNCTION("yS8U2TGCe1A", "libkernel", 1, "libkernel", nanosleep);
    LIB_FUNCTION("jct5WjixLgk", "libkernel", 1, "libkernel", ntohl);
    LIB_FUNCTION("oLFi+HuZ7hY", "libkernel", 1, "libkernel", ntohs);
    LIB_FUNCTION("wuCroIGjt2g", "libkernel", 1, "libkernel", open);
    LIB_FUNCTION("EDyhWelj7UY", "libkernel", 1, "libkernel", pause);
    LIB_FUNCTION("n371J5cP+uo", "libkernel", 1, "libkernel", physhm_open);
    LIB_FUNCTION("AUqJNkobQ1c", "libkernel", 1, "libkernel", physhm_unlink);
    LIB_FUNCTION("-Jp7F+pXxNg", "libkernel", 1, "libkernel", pipe);
    LIB_FUNCTION("ku7D4q1Y9PI", "libkernel", 1, "libkernel", poll);
    LIB_FUNCTION("ezv-RSBNKqI", "libkernel", 1, "libkernel", pread);
    LIB_FUNCTION("ZaRzaapAZwM", "libkernel", 1, "libkernel", preadv);
    LIB_FUNCTION("CpF21FIEKVQ", "libkernel", 1, "libkernel", profil);
    LIB_FUNCTION("ZO2nWoTAv60", "libkernel", 1, "libkernel", pselect);
    LIB_FUNCTION("U9t5kJAWPnA", "libkernel", 1, "libkernel", pthread_atfork);
    LIB_FUNCTION("zHchY8ft5pk", "libkernel", 1, "libkernel", pthread_attr_destroy);
    LIB_FUNCTION("Ucsu-OK+els", "libkernel", 1, "libkernel", pthread_attr_get_np);
    LIB_FUNCTION("-wzZ7dvA7UU", "libkernel", 1, "libkernel", pthread_attr_getaffinity_np);
    LIB_FUNCTION("VUT1ZSrHT0I", "libkernel", 1, "libkernel", pthread_attr_getdetachstate);
    LIB_FUNCTION("JNkVVsVDmOk", "libkernel", 1, "libkernel", pthread_attr_getguardsize);
    LIB_FUNCTION("oLjPqUKhzes", "libkernel", 1, "libkernel", pthread_attr_getinheritsched);
    LIB_FUNCTION("qlk9pSLsUmM", "libkernel", 1, "libkernel", pthread_attr_getschedparam);
    LIB_FUNCTION("RtLRV-pBTTY", "libkernel", 1, "libkernel", pthread_attr_getschedpolicy);
    LIB_FUNCTION("e2G+cdEkOmU", "libkernel", 1, "libkernel", pthread_attr_getscope);
    LIB_FUNCTION("vQm4fDEsWi8", "libkernel", 1, "libkernel", pthread_attr_getstack);
    LIB_FUNCTION("DxmIMUQ-wXY", "libkernel", 1, "libkernel", pthread_attr_getstackaddr);
    LIB_FUNCTION("0qOtCR-ZHck", "libkernel", 1, "libkernel", pthread_attr_getstacksize);
    LIB_FUNCTION("wtkt-teR1so", "libkernel", 1, "libkernel", pthread_attr_init);
    LIB_FUNCTION("o8pd4juNbgc", "libkernel", 1, "libkernel", pthread_attr_setaffinity_np);
    LIB_FUNCTION("Q2y5IqSDZGs", "libkernel", 1, "libkernel", pthread_attr_setcreatesuspend_np);
    LIB_FUNCTION("E+tyo3lp5Lw", "libkernel", 1, "libkernel", pthread_attr_setdetachstate);
    LIB_FUNCTION("JKyG3SWyA10", "libkernel", 1, "libkernel", pthread_attr_setguardsize);
    LIB_FUNCTION("7ZlAakEf0Qg", "libkernel", 1, "libkernel", pthread_attr_setinheritsched);
    LIB_FUNCTION("euKRgm0Vn2M", "libkernel", 1, "libkernel", pthread_attr_setschedparam);
    LIB_FUNCTION("JarMIy8kKEY", "libkernel", 1, "libkernel", pthread_attr_setschedpolicy);
    LIB_FUNCTION("xesmlSI-KCI", "libkernel", 1, "libkernel", pthread_attr_setscope);
    LIB_FUNCTION("-SrbXpGR1f0", "libkernel", 1, "libkernel", pthread_attr_setstack);
    LIB_FUNCTION("suCrEbr0xIQ", "libkernel", 1, "libkernel", pthread_attr_setstackaddr);
    LIB_FUNCTION("2Q0z6rnBrTE", "libkernel", 1, "libkernel", pthread_attr_setstacksize);
    LIB_FUNCTION("+Pqub9HZCPo", "libkernel", 1, "libkernel", pthread_barrier_destroy);
    LIB_FUNCTION("ZsXLFtd2jqQ", "libkernel", 1, "libkernel", pthread_barrier_init);
    LIB_FUNCTION("WwRRAkhjARM", "libkernel", 1, "libkernel", pthread_barrier_setname_np);
    LIB_FUNCTION("CawZgCYqXWk", "libkernel", 1, "libkernel", pthread_barrier_wait);
    LIB_FUNCTION("AsCQCYTbe80", "libkernel", 1, "libkernel", pthread_barrierattr_destroy);
    LIB_FUNCTION("a5JZMyjFV68", "libkernel", 1, "libkernel", pthread_barrierattr_getpshared);
    LIB_FUNCTION("4nqCnLJSvck", "libkernel", 1, "libkernel", pthread_barrierattr_init);
    LIB_FUNCTION("jqrGJJxFhmU", "libkernel", 1, "libkernel", pthread_barrierattr_setpshared);
    LIB_FUNCTION("0D4-FVvEikw", "libkernel", 1, "libkernel", pthread_cancel);
    LIB_FUNCTION("RVxb0Ssa5t0", "libkernel", 1, "libkernel", pthread_cleanup_pop);
    LIB_FUNCTION("4ZeZWcMsAV0", "libkernel", 1, "libkernel", pthread_cleanup_push);
    LIB_FUNCTION("mkx2fVhNMsg", "libkernel", 1, "libkernel", pthread_cond_broadcast);
    LIB_FUNCTION("RXXqi4CtF8w", "libkernel", 1, "libkernel", pthread_cond_destroy);
    LIB_FUNCTION("0TyVk4MSLt0", "libkernel", 1, "libkernel", pthread_cond_init);
    LIB_FUNCTION("K953PF5u6Pc", "libkernel", 1, "libkernel", pthread_cond_reltimedwait_np);
    LIB_FUNCTION("EZ8h70dtFLg", "libkernel", 1, "libkernel", pthread_cond_setname_np);
    LIB_FUNCTION("2MOy+rUfuhQ", "libkernel", 1, "libkernel", pthread_cond_signal);
    LIB_FUNCTION("CI6Qy73ae10", "libkernel", 1, "libkernel", pthread_cond_signalto_np);
    LIB_FUNCTION("27bAgiJmOh0", "libkernel", 1, "libkernel", pthread_cond_timedwait);
    LIB_FUNCTION("Op8TBGY5KHg", "libkernel", 1, "libkernel", pthread_cond_wait);
    LIB_FUNCTION("dJcuQVn6-Iw", "libkernel", 1, "libkernel", pthread_condattr_destroy);
    LIB_FUNCTION("cTDYxTUNPhM", "libkernel", 1, "libkernel", pthread_condattr_getclock);
    LIB_FUNCTION("h0qUqSuOmC8", "libkernel", 1, "libkernel", pthread_condattr_getpshared);
    LIB_FUNCTION("mKoTx03HRWA", "libkernel", 1, "libkernel", pthread_condattr_init);
    LIB_FUNCTION("EjllaAqAPZo", "libkernel", 1, "libkernel", pthread_condattr_setclock);
    LIB_FUNCTION("3BpP850hBT4", "libkernel", 1, "libkernel", pthread_condattr_setpshared);
    LIB_FUNCTION("OxhIB8LB-PQ", "libkernel", 1, "libkernel", pthread_create);
    LIB_FUNCTION("Jmi+9w9u0E4", "libkernel", 1, "libkernel", pthread_create_name_np);
    LIB_FUNCTION("+U1R4WtXvoc", "libkernel", 1, "libkernel", pthread_detach);
    LIB_FUNCTION("7Xl257M4VNI", "libkernel", 1, "libkernel", pthread_equal);
    LIB_FUNCTION("FJrT5LuUBAU", "libkernel", 1, "libkernel", pthread_exit);
    LIB_FUNCTION("td+DYvbbDfk", "libkernel", 1, "libkernel", pthread_get_specificarray_np);
    LIB_FUNCTION("YkGOXpJEtO8", "libkernel", 1, "libkernel", pthread_get_user_context_np);
    LIB_FUNCTION("Jb2uGFMr688", "libkernel", 1, "libkernel", pthread_getaffinity_np);
    LIB_FUNCTION("s+QHU9RLHS4", "libkernel", 1, "libkernel", pthread_getconcurrency);
    LIB_FUNCTION("nnoxZUHK+SA", "libkernel", 1, "libkernel", pthread_getcpuclockid);
    LIB_FUNCTION("9HzfhdtESio", "libkernel", 1, "libkernel", pthread_getname_np);
    LIB_FUNCTION("aO+WS2xWuo4", "libkernel", 1, "libkernel", pthread_getprio);
    LIB_FUNCTION("FIs3-UQT9sg", "libkernel", 1, "libkernel", pthread_getschedparam);
    LIB_FUNCTION("0-KXaS70xy4", "libkernel", 1, "libkernel", pthread_getspecific);
    LIB_FUNCTION("ruZ9hhQ8oUk", "libkernel", 1, "libkernel", pthread_getstack_np);
    LIB_FUNCTION("3eqs37G74-s", "libkernel", 1, "libkernel", pthread_getthreadid_np);
    LIB_FUNCTION("h9CcP3J0oVM", "libkernel", 1, "libkernel", pthread_join);
    LIB_FUNCTION("mqULNdimTn0", "libkernel", 1, "libkernel", pthread_key_create);
    LIB_FUNCTION("6BpEZuDT7YI", "libkernel", 1, "libkernel", pthread_key_delete);
    LIB_FUNCTION("yH-uQW3LbX0", "libkernel", 1, "libkernel", pthread_kill);
    LIB_FUNCTION("D1D6GFIYYGs", "libkernel", 1, "libkernel", pthread_main_np);
    LIB_FUNCTION("vhcrecqZy-k", "libkernel", 1, "libkernel", pthread_multi_np);
    LIB_FUNCTION("ltCfaGr2JGE", "libkernel", 1, "libkernel", pthread_mutex_destroy);
    LIB_FUNCTION("itv-U5mFPso", "libkernel", 1, "libkernel", pthread_mutex_getprioceiling);
    LIB_FUNCTION("x4vQj3JKKmc", "libkernel", 1, "libkernel", pthread_mutex_getspinloops_np);
    LIB_FUNCTION("OxEIUqkByy4", "libkernel", 1, "libkernel", pthread_mutex_getyieldloops_np);
    LIB_FUNCTION("ttHNfU+qDBU", "libkernel", 1, "libkernel", pthread_mutex_init);
    LIB_FUNCTION("hLoEhSBhi84", "libkernel", 1, "libkernel", pthread_mutex_init_for_mono);
    LIB_FUNCTION("gKqzW-zWhvY", "libkernel", 1, "libkernel", pthread_mutex_isowned_np);
    LIB_FUNCTION("7H0iTOciTLo", "libkernel", 1, "libkernel", pthread_mutex_lock);
    LIB_FUNCTION("nbQ0bXMRlhk", "libkernel", 1, "libkernel", pthread_mutex_reltimedlock_np);
    LIB_FUNCTION("nTxZBp8YNGc", "libkernel", 1, "libkernel", pthread_mutex_setname_np);
    LIB_FUNCTION("XS3kGVt4q+4", "libkernel", 1, "libkernel", pthread_mutex_setprioceiling);
    LIB_FUNCTION("5-ncLMtL5+g", "libkernel", 1, "libkernel", pthread_mutex_setspinloops_np);
    LIB_FUNCTION("frFuGprJmPc", "libkernel", 1, "libkernel", pthread_mutex_setyieldloops_np);
    LIB_FUNCTION("Io9+nTKXZtA", "libkernel", 1, "libkernel", pthread_mutex_timedlock);
    LIB_FUNCTION("K-jXhbt2gn4", "libkernel", 1, "libkernel", pthread_mutex_trylock);
    LIB_FUNCTION("2Z+PpY6CaJg", "libkernel", 1, "libkernel", pthread_mutex_unlock);
    LIB_FUNCTION("HF7lK46xzjY", "libkernel", 1, "libkernel", pthread_mutexattr_destroy);
    LIB_FUNCTION("U6SNV+RnyLQ", "libkernel", 1, "libkernel", pthread_mutexattr_getkind_np);
    LIB_FUNCTION("+m8+quqOwhM", "libkernel", 1, "libkernel", pthread_mutexattr_getprioceiling);
    LIB_FUNCTION("yDaWxUE50s0", "libkernel", 1, "libkernel", pthread_mutexattr_getprotocol);
    LIB_FUNCTION("PmL-TwKUzXI", "libkernel", 1, "libkernel", pthread_mutexattr_getpshared);
    LIB_FUNCTION("GZFlI7RhuQo", "libkernel", 1, "libkernel", pthread_mutexattr_gettype);
    LIB_FUNCTION("dQHWEsJtoE4", "libkernel", 1, "libkernel", pthread_mutexattr_init);
    LIB_FUNCTION("J9rlRuQ8H5s", "libkernel", 1, "libkernel", pthread_mutexattr_setkind_np);
    LIB_FUNCTION("ZLvf6lVAc4M", "libkernel", 1, "libkernel", pthread_mutexattr_setprioceiling);
    LIB_FUNCTION("5txKfcMUAok", "libkernel", 1, "libkernel", pthread_mutexattr_setprotocol);
    LIB_FUNCTION("EXv3ztGqtDM", "libkernel", 1, "libkernel", pthread_mutexattr_setpshared);
    LIB_FUNCTION("mDmgMOGVUqg", "libkernel", 1, "libkernel", pthread_mutexattr_settype);
    LIB_FUNCTION("Z4QosVuAsA0", "libkernel", 1, "libkernel", pthread_once);
    LIB_FUNCTION("9vyP6Z7bqzc", "libkernel", 1, "libkernel", pthread_rename_np);
    LIB_FUNCTION("3gY5B0FCkNY", "libkernel", 1, "libkernel", pthread_resume_all_np);
    LIB_FUNCTION("BYM3L--ojzI", "libkernel", 1, "libkernel", pthread_resume_np);
    LIB_FUNCTION("QRdE7dBfNks", "libkernel", 1, "libkernel", pthread_resume_user_context_np);
    LIB_FUNCTION("1471ajPzxh0", "libkernel", 1, "libkernel", pthread_rwlock_destroy);
    LIB_FUNCTION("ytQULN-nhL4", "libkernel", 1, "libkernel", pthread_rwlock_init);
    LIB_FUNCTION("iGjsr1WAtI0", "libkernel", 1, "libkernel", pthread_rwlock_rdlock);
    LIB_FUNCTION("dYv-+If2GPk", "libkernel", 1, "libkernel", pthread_rwlock_reltimedrdlock_np);
    LIB_FUNCTION("RRnSj8h8VR4", "libkernel", 1, "libkernel", pthread_rwlock_reltimedwrlock_np);
    LIB_FUNCTION("Uwxgnsi3xeM", "libkernel", 1, "libkernel", pthread_rwlock_setname_np);
    LIB_FUNCTION("lb8lnYo-o7k", "libkernel", 1, "libkernel", pthread_rwlock_timedrdlock);
    LIB_FUNCTION("9zklzAl9CGM", "libkernel", 1, "libkernel", pthread_rwlock_timedwrlock);
    LIB_FUNCTION("SFxTMOfuCkE", "libkernel", 1, "libkernel", pthread_rwlock_tryrdlock);
    LIB_FUNCTION("XhWHn6P5R7U", "libkernel", 1, "libkernel", pthread_rwlock_trywrlock);
    LIB_FUNCTION("EgmLo6EWgso", "libkernel", 1, "libkernel", pthread_rwlock_unlock);
    LIB_FUNCTION("sIlRvQqsN2Y", "libkernel", 1, "libkernel", pthread_rwlock_wrlock);
    LIB_FUNCTION("qsdmgXjqSgk", "libkernel", 1, "libkernel", pthread_rwlockattr_destroy);
    LIB_FUNCTION("VqEMuCv-qHY", "libkernel", 1, "libkernel", pthread_rwlockattr_getpshared);
    LIB_FUNCTION("l+bG5fsYkhg", "libkernel", 1, "libkernel", pthread_rwlockattr_gettype_np);
    LIB_FUNCTION("xFebsA4YsFI", "libkernel", 1, "libkernel", pthread_rwlockattr_init);
    LIB_FUNCTION("OuKg+kRDD7U", "libkernel", 1, "libkernel", pthread_rwlockattr_setpshared);
    LIB_FUNCTION("8NuOHiTr1Vw", "libkernel", 1, "libkernel", pthread_rwlockattr_settype_np);
    LIB_FUNCTION("EotR8a3ASf4", "libkernel", 1, "libkernel", pthread_self);
    LIB_FUNCTION("tG+805b1Njk", "libkernel", 1, "libkernel", pthread_set_defaultstacksize_np);
    LIB_FUNCTION("oxMp8uPqa+U", "libkernel", 1, "libkernel", pthread_set_name_np);
    LIB_FUNCTION("el9stmu6290", "libkernel", 1, "libkernel", pthread_set_user_context_np);
    LIB_FUNCTION("5KWrg7-ZqvE", "libkernel", 1, "libkernel", pthread_setaffinity_np);
    LIB_FUNCTION("lZzFeSxPl08", "libkernel", 1, "libkernel", pthread_setcancelstate);
    LIB_FUNCTION("2dEhvvjlq30", "libkernel", 1, "libkernel", pthread_setcanceltype);
    LIB_FUNCTION("fBG1gHx1RlI", "libkernel", 1, "libkernel", pthread_setconcurrency);
    LIB_FUNCTION("a2P9wYGeZvc", "libkernel", 1, "libkernel", pthread_setprio);
    LIB_FUNCTION("Xs9hdiD7sAA", "libkernel", 1, "libkernel", pthread_setschedparam);
    LIB_FUNCTION("WrOLvHU0yQM", "libkernel", 1, "libkernel", pthread_setspecific);
    LIB_FUNCTION("JZKw5+Wrnaw", "libkernel", 1, "libkernel", pthread_sigmask);
    LIB_FUNCTION("4Q8db4pIRV0", "libkernel", 1, "libkernel", pthread_single_np);
    LIB_FUNCTION("IJIggoPZExk", "libkernel", 1, "libkernel", pthread_spin_destroy);
    LIB_FUNCTION("ZMn3clnAGBA", "libkernel", 1, "libkernel", pthread_spin_init);
    LIB_FUNCTION("pw+70ClLYlY", "libkernel", 1, "libkernel", pthread_spin_lock);
    LIB_FUNCTION("rCTGkBIHfPY", "libkernel", 1, "libkernel", pthread_spin_trylock);
    LIB_FUNCTION("LEfMMCT+SlM", "libkernel", 1, "libkernel", pthread_spin_unlock);
    LIB_FUNCTION("iWAnZ3ger+8", "libkernel", 1, "libkernel", pthread_suspend_all_np);
    LIB_FUNCTION("4e9dMKt+UYA", "libkernel", 1, "libkernel", pthread_suspend_np);
    LIB_FUNCTION("cfjAjVTFG6A", "libkernel", 1, "libkernel", pthread_suspend_user_context_np);
    LIB_FUNCTION("Q9DhUQxNCwI", "libkernel", 1, "libkernel", pthread_switch_add_np);
    LIB_FUNCTION("neZ60m-+Baw", "libkernel", 1, "libkernel", pthread_switch_delete_np);
    LIB_FUNCTION("nYBrkGDqxh8", "libkernel", 1, "libkernel", pthread_testcancel);
    LIB_FUNCTION("PkS44IGrDkM", "libkernel", 1, "libkernel", pthread_timedjoin_np);
    LIB_FUNCTION("B5GmVDKwpn0", "libkernel", 1, "libkernel", pthread_yield);
    LIB_FUNCTION("C2kJ-byS5rM", "libkernel", 1, "libkernel", pwrite);
    LIB_FUNCTION("FCcmRZhWtOk", "libkernel", 1, "libkernel", pwritev);
    LIB_FUNCTION("0t0-MxQNwK4", "libkernel", 1, "libkernel", raise);
    LIB_FUNCTION("AqBioC2vF3I", "libkernel", 1, "libkernel", read);
    LIB_FUNCTION("I7ImcLds-uU", "libkernel", 1, "libkernel", readv);
    LIB_FUNCTION("Ez8xjo9UF4E", "libkernel", 1, "libkernel", recv);
    LIB_FUNCTION("lUk6wrGXyMw", "libkernel", 1, "libkernel", recvfrom);
    LIB_FUNCTION("hI7oVeOluPM", "libkernel", 1, "libkernel", recvmsg);
    LIB_FUNCTION("NN01qLRhiqU", "libkernel", 1, "libkernel", rename);
    LIB_FUNCTION("bSDxEpGzmUE", "libkernel", 1, "libkernel", rfork_thread);
    LIB_FUNCTION("c7ZnT7V1B98", "libkernel", 1, "libkernel", rmdir);
    LIB_FUNCTION("u8M56qpqTtw", "libkernel", 1, "libkernel", rtld_printf);
    LIB_FUNCTION("2I2RV6LyNng", "libkernel", 1, "libkernel", rtprio_thread);
    LIB_FUNCTION("NhL5qID2iho", "libkernel", 1, "libkernel", sceKernelAddCpumodeEvent);
    LIB_FUNCTION("cG3t15OK4Ow", "libkernel", 1, "libkernel", sceKernelAddFileEvent);
    LIB_FUNCTION("YJ7JscWubcU", "libkernel", 1, "libkernel", sceKernelAddGpuExceptionEvent);
    LIB_FUNCTION("R74tt43xP6k", "libkernel", 1, "libkernel", sceKernelAddHRTimerEvent);
    LIB_FUNCTION("VHCS3rCd0PM", "libkernel", 1, "libkernel", sceKernelAddReadEvent);
    LIB_FUNCTION("57ZK+ODEXWY", "libkernel", 1, "libkernel", sceKernelAddTimerEvent);
    LIB_FUNCTION("4R6-OvI2cEA", "libkernel", 1, "libkernel", sceKernelAddUserEvent);
    LIB_FUNCTION("WDszmSbWuDk", "libkernel", 1, "libkernel", sceKernelAddUserEventEdge);
    LIB_FUNCTION("R-tyYMpYaxY", "libkernel", 1, "libkernel", sceKernelAddWriteEvent);
    LIB_FUNCTION("fR521KIGgb8", "libkernel", 1, "libkernel", sceKernelAioCancelRequest);
    LIB_FUNCTION("3Lca1XBrQdY", "libkernel", 1, "libkernel", sceKernelAioCancelRequests);
    LIB_FUNCTION("5TgME6AYty4", "libkernel", 1, "libkernel", sceKernelAioDeleteRequest);
    LIB_FUNCTION("Ft3EtsZzAoY", "libkernel", 1, "libkernel", sceKernelAioDeleteRequests);
    LIB_FUNCTION("vYU8P9Td2Zo", "libkernel", 1, "libkernel", sceKernelAioInitializeImpl);
    LIB_FUNCTION("nu4a0-arQis", "libkernel", 1, "libkernel", sceKernelAioInitializeParam);
    LIB_FUNCTION("2pOuoWoCxdk", "libkernel", 1, "libkernel", sceKernelAioPollRequest);
    LIB_FUNCTION("o7O4z3jwKzo", "libkernel", 1, "libkernel", sceKernelAioPollRequests);
    LIB_FUNCTION("9WK-vhNXimw", "libkernel", 1, "libkernel", sceKernelAioSetParam);
    LIB_FUNCTION("HgX7+AORI58", "libkernel", 1, "libkernel", sceKernelAioSubmitReadCommands);
    LIB_FUNCTION("lXT0m3P-vs4", "libkernel", 1, "libkernel",
                 sceKernelAioSubmitReadCommandsMultiple);
    LIB_FUNCTION("XQ8C8y+de+E", "libkernel", 1, "libkernel", sceKernelAioSubmitWriteCommands);
    LIB_FUNCTION("xT3Cpz0yh6Y", "libkernel", 1, "libkernel",
                 sceKernelAioSubmitWriteCommandsMultiple);
    LIB_FUNCTION("KOF-oJbQVvc", "libkernel", 1, "libkernel", sceKernelAioWaitRequest);
    LIB_FUNCTION("lgK+oIWkJyA", "libkernel", 1, "libkernel", sceKernelAioWaitRequests);
    LIB_FUNCTION("rTXw65xmLIA", "libkernel", 1, "libkernel", sceKernelAllocateDirectMemory);
    LIB_FUNCTION("ll8I9K4RtUM", "libkernel", 1, "libkernel",
                 sceKernelAllocateDirectMemoryForMiniApp);
    LIB_FUNCTION("B+vc2AO2Zrc", "libkernel", 1, "libkernel", sceKernelAllocateMainDirectMemory);
    LIB_FUNCTION("g6fhW-+NuuU", "libkernel", 1, "libkernel", sceKernelAllocateTraceDirectMemory);
    LIB_FUNCTION("C0f7TJcbfac", "libkernel", 1, "libkernel", sceKernelAvailableDirectMemorySize);
    LIB_FUNCTION("aNz11fnnzi4", "libkernel", 1, "libkernel", sceKernelAvailableFlexibleMemorySize);
    LIB_FUNCTION("xRwvvcfZfHM", "libkernel", 1, "libkernel", sceKernelBacktraceSelf);
    LIB_FUNCTION("2SKEx6bSq-4", "libkernel", 1, "libkernel", sceKernelBatchMap);
    LIB_FUNCTION("kBJzF8x4SyE", "libkernel", 1, "libkernel", sceKernelBatchMap2);
    LIB_FUNCTION("PZku4ZrXJqg", "libkernel", 1, "libkernel", sceKernelCancelEventFlag);
    LIB_FUNCTION("4DM06U2BNEY", "libkernel", 1, "libkernel", sceKernelCancelSema);
    LIB_FUNCTION("hwVSPCmp5tM", "libkernel", 1, "libkernel", sceKernelCheckedReleaseDirectMemory);
    LIB_FUNCTION("uWyW3v98sU4", "libkernel", 1, "libkernel", sceKernelCheckReachability);
    LIB_FUNCTION("fgIsQ10xYVA", "libkernel", 1, "libkernel", sceKernelChmod);
    LIB_FUNCTION("N9SrpMINuLw", "libkernel", 1, "libkernel", sceKernelClearBootReqNotifyCount);
    LIB_FUNCTION("7uhBFWRAS60", "libkernel", 1, "libkernel", sceKernelClearEventFlag);
    LIB_FUNCTION("EgJqC+9VmvM", "libkernel", 1, "libkernel", sceKernelClearGameDirectMemory);
    LIB_FUNCTION("wRYVA5Zolso", "libkernel", 1, "libkernel", sceKernelClockGetres);
    LIB_FUNCTION("QBi7HCK03hw", "libkernel", 1, "libkernel", sceKernelClockGettime);
    LIB_FUNCTION("UK2Tl2DWUns", "libkernel", 1, "libkernel", sceKernelClose);
    LIB_FUNCTION("J5RqzZ7nMVc", "libkernel", 1, "libkernel", sceKernelCloseEport);
    LIB_FUNCTION("s9-RaxukuzQ", "libkernel", 1, "libkernel", sceKernelCloseEventFlag);
    LIB_FUNCTION("HBkUky2PZPA", "libkernel", 1, "libkernel", sceKernelCloseSema);
    LIB_FUNCTION("n1-v6FgU7MQ", "libkernel", 1, "libkernel",
                 sceKernelConfiguredFlexibleMemorySize);
    LIB_FUNCTION("0NTHN1NKONI", "libkernel", 1, "libkernel", sceKernelConvertLocaltimeToUtc);
    LIB_FUNCTION("-o5uEDpN+oY", "libkernel", 1, "libkernel", sceKernelConvertUtcToLocaltime);
    LIB_FUNCTION("KF25CDxFn48", "libkernel", 1, "libkernel", sceKernelCreateEport);
    LIB_FUNCTION("D0OdFMjp46I", "libkernel", 1, "libkernel", sceKernelCreateEqueue);
    LIB_FUNCTION("BpFoboUJoZU", "libkernel", 1, "libkernel", sceKernelCreateEventFlag);
    LIB_FUNCTION("188x57JYp0g", "libkernel", 1, "libkernel", sceKernelCreateSema);
    LIB_FUNCTION("FMvo0UFMf-o", "libkernel", 1, "libkernel",
                 sceKernelDebugAcquireAndUpdateDebugRegister);
    LIB_FUNCTION("XECwgo2nbek", "libkernel", 1, "libkernel", sceKernelDebugGetAppStatus);
    LIB_FUNCTION("CgfvQDFAtYU", "libkernel", 1, "libkernel", sceKernelDebugGetPauseCount);
    LIB_FUNCTION("+iVwFsjXaFQ", "libkernel", 1, "libkernel", sceKernelDebugGpuPaDebugIsInProgress);
    LIB_FUNCTION("9JYNqN6jAKI", "libkernel", 1, "libkernel", sceKernelDebugOutText);
    LIB_FUNCTION("OMDRKKAZ8I4", "libkernel", 1, "libkernel", sceKernelDebugRaiseException);
    LIB_FUNCTION("zE-wXIZjLoM", "libkernel", 1, "libkernel",
                 sceKernelDebugRaiseExceptionOnReleaseMode);
    LIB_FUNCTION("DKWTYfo-jMY", "libkernel", 1, "libkernel",
                 sceKernelDebugRaiseExceptionWithContext);
    LIB_FUNCTION("HbRSpVkdVF0", "libkernel", 1, "libkernel", sceKernelDebugRaiseExceptionWithInfo);
    LIB_FUNCTION("8rHK-6bbvqM", "libkernel", 1, "libkernel", sceKernelDebugReleaseDebugContext);
    LIB_FUNCTION("OwjivtyfODU", "libkernel", 1, "libkernel", sceKernelDeleteCpumodeEvent);
    LIB_FUNCTION("HhGAQ+ffliw", "libkernel", 1, "libkernel", sceKernelDeleteEport);
    LIB_FUNCTION("jpFjmgAC5AE", "libkernel", 1, "libkernel", sceKernelDeleteEqueue);
    LIB_FUNCTION("8mql9OcQnd4", "libkernel", 1, "libkernel", sceKernelDeleteEventFlag);
    LIB_FUNCTION("UmXngHKB6is", "libkernel", 1, "libkernel", sceKernelDeleteFileEvent);
    LIB_FUNCTION("8skggWXlSqM", "libkernel", 1, "libkernel", sceKernelDeleteGpuExceptionEvent);
    LIB_FUNCTION("J+LF6LwObXU", "libkernel", 1, "libkernel", sceKernelDeleteHRTimerEvent);
    LIB_FUNCTION("JxJ4tfgKlXA", "libkernel", 1, "libkernel", sceKernelDeleteReadEvent);
    LIB_FUNCTION("R1Jvn8bSCW8", "libkernel", 1, "libkernel", sceKernelDeleteSema);
    LIB_FUNCTION("YWQFUyXIVdU", "libkernel", 1, "libkernel", sceKernelDeleteTimerEvent);
    LIB_FUNCTION("LJDwdSNTnDg", "libkernel", 1, "libkernel", sceKernelDeleteUserEvent);
    LIB_FUNCTION("cBGTk8S92XM", "libkernel", 1, "libkernel", sceKernelDeleteWriteEvent);
    LIB_FUNCTION("BHouLQzh0X0", "libkernel", 1, "libkernel", sceKernelDirectMemoryQuery);
    LIB_FUNCTION("ZB9HZnouJrc", "libkernel", 1, "libkernel", sceKernelDirectMemoryQueryForId);
    LIB_FUNCTION("LwG8g3niqwA", "libkernel", 1, "libkernel", sceKernelDlsym);
    LIB_FUNCTION("usHTMoFoBTM", "libkernel", 1, "libkernel", sceKernelEnableDmemAliasing);
    LIB_FUNCTION("v4V7yvdU9zo", "libkernel", 1, "libkernel", sceKernelEnableDmemAliasing2);
    LIB_FUNCTION("vhlQXKkQFe0", "libkernel", 1, "libkernel", sceKernelEnablePthreadObjectCheck);
    LIB_FUNCTION("D4yla3vx4tY", "libkernel", 1, "libkernel", sceKernelError);
    LIB_FUNCTION("c7noapHDHWU", "libkernel", 1, "libkernel", sceKernelEventLogInit);
    LIB_FUNCTION("H6bIN2qvlxY", "libkernel", 1, "libkernel", sceKernelEventLogPread);
    LIB_FUNCTION("L6WLBSYfL6k", "libkernel", 1, "libkernel", sceKernelEventLogRead);
    LIB_FUNCTION("TmkVz5YgHg8", "libkernel", 1, "libkernel", sceKernelEventLogWrite);
    LIB_FUNCTION("UtszJWHrDcA", "libkernel", 1, "libkernel", sceKernelFchmod);
    LIB_FUNCTION("SoZkxZkCHaw", "libkernel", 1, "libkernel", sceKernelFcntl);
    LIB_FUNCTION("30Rh4ixbKy4", "libkernel", 1, "libkernel", sceKernelFdatasync);
    LIB_FUNCTION("YDg-SQj66AQ", "libkernel", 1, "libkernel", sceKernelFlock);
    LIB_FUNCTION("kBwCPsYX-m4", "libkernel", 1, "libkernel", sceKernelFstat);
    LIB_FUNCTION("fTx66l5iWIA", "libkernel", 1, "libkernel", sceKernelFsync);
    LIB_FUNCTION("VW3TVZiM4-E", "libkernel", 1, "libkernel", sceKernelFtruncate);
    LIB_FUNCTION("NLq2b1jOaN0", "libkernel", 1, "libkernel", sceKernelFutimes);
    LIB_FUNCTION("YeU23Szo3BM", "libkernel", 1, "libkernel",
                 sceKernelGetAllowedSdkVersionOnSystem);
    LIB_FUNCTION("G-MYv5erXaU", "libkernel", 1, "libkernel", sceKernelGetAppInfo);
    LIB_FUNCTION("1UOnecNlNW0", "libkernel", 1, "libkernel", sceKernelGetAslrStatus);
    LIB_FUNCTION("QtLhuYZf9jg", "libkernel", 1, "libkernel", sceKernelGetBackupRestoreMode);
    LIB_FUNCTION("CQ1bzp1ba0k", "libkernel", 1, "libkernel",
                 sceKernelGetBackupRestoreModeOfNextBoot);
    LIB_FUNCTION("wSxRrFKzKXk", "libkernel", 1, "libkernel", sceKernelGetBasicProductShape);
    LIB_FUNCTION("tFD04DtJY+g", "libkernel", 1, "libkernel", sceKernelGetBetaUpdateTestForRcmgr);
    LIB_FUNCTION("n0FvTzIPodM", "libkernel", 1, "libkernel", sceKernelGetBioUsageAll);
    LIB_FUNCTION("oYr9L7WSCww", "libkernel", 1, "libkernel", sceKernelGetBootReqNotifyCount);
    LIB_FUNCTION("ikkTGg4Cshw", "libkernel", 1, "libkernel", sceKernelGetCallRecord);
    LIB_FUNCTION("WB66evu8bsU", "libkernel", 1, "libkernel", sceKernelGetCompiledSdkVersion);
    LIB_FUNCTION("jgYD8N1DILg", "libkernel", 1, "libkernel", sceKernelGetCompiledSdkVersionByPath);
    LIB_FUNCTION("8BrtU9maWG4", "libkernel", 1, "libkernel", sceKernelGetCompiledSdkVersionByPid);
    LIB_FUNCTION("iUohlUDiGac", "libkernel", 1, "libkernel", sceKernelGetCpuFrequency);
    LIB_FUNCTION("VOx8NGmHXTs", "libkernel", 1, "libkernel", sceKernelGetCpumode);
    LIB_FUNCTION("F9LZ1EbJnfo", "libkernel", 1, "libkernel", sceKernelGetCpumodeGame);
    LIB_FUNCTION("qiL4fFObAxM", "libkernel", 1, "libkernel", sceKernelGetCpuTemperature);
    LIB_FUNCTION("ssmH9nMYO4o", "libkernel", 1, "libkernel", sceKernelGetCpuUsage);
    LIB_FUNCTION("ToISj0q68Qg", "libkernel", 1, "libkernel", sceKernelGetCpuUsageAll);
    LIB_FUNCTION("VS45LnNqyCo", "libkernel", 1, "libkernel", sceKernelGetCpuUsageProc);
    LIB_FUNCTION("QbdkmhQQfIM", "libkernel", 1, "libkernel", sceKernelGetCpuUsageProc2);
    LIB_FUNCTION("XkEs5rH1bSk", "libkernel", 1, "libkernel", sceKernelGetCpuUsageThread);
    LIB_FUNCTION("g0VTBxfJyu0", "libkernel", 1, "libkernel", sceKernelGetCurrentCpu);
    LIB_FUNCTION("i-H8tE6wTqI", "libkernel", 1, "libkernel", sceKernelGetDataTransferMode);
    LIB_FUNCTION("JVYt1hlHSvo", "libkernel", 1, "libkernel",
                 sceKernelGetDebugMenuMiniModeForRcmgr);
    LIB_FUNCTION("qYwuXe0hTHs", "libkernel", 1, "libkernel",
                 sceKernelGetDebugMenuModeForPsmForRcmgr);
    LIB_FUNCTION("opMiSfTJyJo", "libkernel", 1, "libkernel", sceKernelGetDebugMenuModeForRcmgr);
    LIB_FUNCTION("j2AIqSqJP0w", "libkernel", 1, "libkernel", sceKernelGetdents);
    LIB_FUNCTION("pO96TwzOm5E", "libkernel", 1, "libkernel", sceKernelGetDirectMemorySize);
    LIB_FUNCTION("BC+OG5m9+bw", "libkernel", 1, "libkernel", sceKernelGetDirectMemoryType);
    LIB_FUNCTION("taRWhTJFTgE", "libkernel", 1, "libkernel", sceKernelGetdirentries);
    LIB_FUNCTION("kwGyyjohI50", "libkernel", 1, "libkernel", sceKernelGetEventData);
    LIB_FUNCTION("Uu-iDFC9aUc", "libkernel", 1, "libkernel", sceKernelGetEventError);
    LIB_FUNCTION("Q0qr9AyqJSk", "libkernel", 1, "libkernel", sceKernelGetEventFflags);
    LIB_FUNCTION("23CPPI1tyBY", "libkernel", 1, "libkernel", sceKernelGetEventFilter);
    LIB_FUNCTION("mJ7aghmgvfc", "libkernel", 1, "libkernel", sceKernelGetEventId);
    LIB_FUNCTION("vz+pg2zdopI", "libkernel", 1, "libkernel", sceKernelGetEventUserData);
    LIB_FUNCTION("wJABa1X4+ec", "libkernel", 1, "libkernel", sceKernelGetExecutableModuleHandle);
    LIB_FUNCTION("OA7xpGDL8sY", "libkernel", 1, "libkernel", sceKernelGetExtLibcHandle);
    LIB_FUNCTION("cVC4JXxpb-s", "libkernel", 1, "libkernel", sceKernelGetFakeFinalizeMenuForRcmgr);
    LIB_FUNCTION("LJVcP+0wRIk", "libkernel", 1, "libkernel", sceKernelGetFlagedUpdaterForRcmgr);
    LIB_FUNCTION("we5t5V4Fc70", "libkernel", 1, "libkernel", sceKernelGetForceUpdateModeForRcmgr);
    LIB_FUNCTION("JGfTMBOdUJo", "libkernel", 1, "libkernel", sceKernelGetFsSandboxRandomWord);
    LIB_FUNCTION("4oXYe9Xmk0Q", "libkernel", 1, "libkernel", sceKernelGetGPI);
    LIB_FUNCTION("6sy3Y9QjOJw", "libkernel", 1, "libkernel", sceKernelGetGPO);
    LIB_FUNCTION("ZTJiZPZvNk4", "libkernel", 1, "libkernel", sceKernelGetHwFeatureInfoForDecid);
    LIB_FUNCTION("lZG-WlKxRqQ", "libkernel", 1, "libkernel", sceKernelGetIdPs);
    LIB_FUNCTION("2YsHtbvCrgs", "libkernel", 1, "libkernel", sceKernelGetIdTableCurrentCount);
    LIB_FUNCTION("ePRSOZsroIQ", "libkernel", 1, "libkernel", sceKernelGetIpcPath);
    LIB_FUNCTION("AmJ0mn2l4lM", "libkernel", 1, "libkernel", sceKernelGetLibkernelTextLocation);
    LIB_FUNCTION("0vTn5IDMU9A", "libkernel", 1, "libkernel", sceKernelGetMainSocId);
    LIB_FUNCTION("kUpgrXIrz7Q", "libkernel", 1, "libkernel", sceKernelGetModuleInfo);
    LIB_FUNCTION("RpQJJVKTiFM", "libkernel", 1, "libkernel", sceKernelGetModuleInfoForUnwind);
    LIB_FUNCTION("f7KBOafysXo", "libkernel", 1, "libkernel", sceKernelGetModuleInfoFromAddr);
    LIB_FUNCTION("HZO7xOos4xc", "libkernel", 1, "libkernel", sceKernelGetModuleInfoInternal);
    LIB_FUNCTION("IuxnUuXk6Bg", "libkernel", 1, "libkernel", sceKernelGetModuleList);
    LIB_FUNCTION("u+mlUkWpU3Y", "libkernel", 1, "libkernel", sceKernelGetModuleListInternal);
    LIB_FUNCTION("ul57hvm6mBc", "libkernel", 1, "libkernel", sceKernelGetOpenPsIdForSystem);
    LIB_FUNCTION("tZ2yplY8MBY", "libkernel", 1, "libkernel", sceKernelGetPageTableStats);
    LIB_FUNCTION("NSw6bEcrtWo", "libkernel", 1, "libkernel", sceKernelGetPagingStatsOfAllObjects);
    LIB_FUNCTION("7hsMq4oz0Sc", "libkernel", 1, "libkernel", sceKernelGetPagingStatsOfAllThreads);
    LIB_FUNCTION("Zzxstsom9-w", "libkernel", 1, "libkernel", sceKernelGetPhysPageSize);
    LIB_FUNCTION("fUJRLEbJOuQ", "libkernel", 1, "libkernel", sceKernelGetProcessName);
    LIB_FUNCTION("4J2sUJmuHZQ", "libkernel", 1, "libkernel", sceKernelGetProcessTime);
    LIB_FUNCTION("fgxnMeTNUtY", "libkernel", 1, "libkernel", sceKernelGetProcessTimeCounter);
    LIB_FUNCTION("BNowx2l588E", "libkernel", 1, "libkernel",
                 sceKernelGetProcessTimeCounterFrequency);
    LIB_FUNCTION("+g+UP8Pyfmo", "libkernel", 1, "libkernel", sceKernelGetProcessType);
    LIB_FUNCTION("959qrazPIrg", "libkernel", 1, "libkernel", sceKernelGetProcParam);
    LIB_FUNCTION("pyAyDVpDOhw", "libkernel", 1, "libkernel", sceKernelGetProductCode);
    LIB_FUNCTION("tlLu+KqzgDY", "libkernel", 1, "libkernel", sceKernelGetProductStr);
    LIB_FUNCTION("L0v2Go5jOuM", "libkernel", 1, "libkernel", sceKernelGetPrtAperture);
    LIB_FUNCTION("C2ltEJILIGE", "libkernel", 1, "libkernel", sceKernelGetPsmIntdevModeForRcmgr);
    LIB_FUNCTION("ZotSeVujZaU", "libkernel", 1, "libkernel",
                 sceKernelGetPsnAccessTraceLogForRcmgr);
    LIB_FUNCTION("58GfHBfwpOY", "libkernel", 1, "libkernel",
                 sceKernelGetQafExpirationTimeNotafterForRcmgr);
    LIB_FUNCTION("QZ3WWIhtNbE", "libkernel", 1, "libkernel",
                 sceKernelGetQafExpirationTimeNotbeforeForRcmgr);
    LIB_FUNCTION("H0hj8V6fJwk", "libkernel", 1, "libkernel", sceKernelGetQafGenerationForRcmgr);
    LIB_FUNCTION("qJnZcaDrZvI", "libkernel", 1, "libkernel", sceKernelGetQafNameForRcmgr);
    LIB_FUNCTION("9thKyBzyAR4", "libkernel", 1, "libkernel", sceKernelGetRenderingMode);
    LIB_FUNCTION("Q30w46WtYQw", "libkernel", 1, "libkernel", sceKernelGetResidentCount);
    LIB_FUNCTION("a7DM+5cDkAg", "libkernel", 1, "libkernel", sceKernelGetResidentFmemCount);
    LIB_FUNCTION("bmQaivctXo4", "libkernel", 1, "libkernel", sceKernelGetSafemode);
    LIB_FUNCTION("bt0POEUZddE", "libkernel", 1, "libkernel", sceKernelGetSanitizerMallocReplace);
    LIB_FUNCTION("py6L8jiVAN8", "libkernel", 1, "libkernel",
                 sceKernelGetSanitizerMallocReplaceExternal);
    LIB_FUNCTION("F4Kib3Mb0wI", "libkernel", 1, "libkernel", sceKernelGetSanitizerNewReplace);
    LIB_FUNCTION("bnZxYgAFeA0", "libkernel", 1, "libkernel",
                 sceKernelGetSanitizerNewReplaceExternal);
    LIB_FUNCTION("CA5jcDb2vYI", "libkernel", 1, "libkernel", sceKernelGetSocPowerConsumption);
    LIB_FUNCTION("zzKyvoELf4I", "libkernel", 1, "libkernel", sceKernelGetSocSensorTemperature);
    LIB_FUNCTION("3KIbxxVQv84", "libkernel", 1, "libkernel", sceKernelGetSpecialIForRcmgr);
    LIB_FUNCTION("ou2GyAJwJ+Q", "libkernel", 1, "libkernel", sceKernelGetSubsysId);
    LIB_FUNCTION("mpbGISNJ6go", "libkernel", 1, "libkernel", sceKernelGetSystemExVersion);
    LIB_FUNCTION("fFMg-cBHBBY", "libkernel", 1, "libkernel",
                 sceKernelGetSystemLevelDebuggerModeForRcmgr);
    LIB_FUNCTION("3EDFoWECKOg", "libkernel", 1, "libkernel", sceKernelGetSystemSwBeta);
    LIB_FUNCTION("Mv1zUObHvXI", "libkernel", 1, "libkernel", sceKernelGetSystemSwVersion);
    LIB_FUNCTION("4vkZwDJbMx0", "libkernel", 1, "libkernel", sceKernelGetThreadName);
    LIB_FUNCTION("ejekcaNQNq0", "libkernel", 1, "libkernel", sceKernelGettimeofday);
    LIB_FUNCTION("kOcnerypnQA", "libkernel", 1, "libkernel", sceKernelGettimezone);
    LIB_FUNCTION("Od0uMJZoVWg", "libkernel", 1, "libkernel", sceKernelGetTraceMemoryStats);
    LIB_FUNCTION("1j3S3n-tTW4", "libkernel", 1, "libkernel", sceKernelGetTscFrequency);
    LIB_FUNCTION("ToKKfC8tKIk", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenDataExecutionForRcmgr);
    LIB_FUNCTION("8PGQdZFioFQ", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenExpirationTimeNotafterForRcmgr);
    LIB_FUNCTION("Htwoe5tvNYg", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenExpirationTimeNotbeforeForRcmgr);
    LIB_FUNCTION("MaCKSOQDtyU", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenFakeSharefactoryForRcmgr);
    LIB_FUNCTION("0yVJNcMqyXk", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenFlagedUpdaterForRcmgr);
    LIB_FUNCTION("+XuZD9HV0p4", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenNpEnvSwitchingForRcmgr);
    LIB_FUNCTION("VbrTamW6dJs", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenSaveDataRepairForRcmgr);
    LIB_FUNCTION("0NyJTCJWuuk", "libkernel", 1, "libkernel", sceKernelGetUtokenStoreModeForRcmgr);
    LIB_FUNCTION("b0cryxaTM4k", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenUseSoftwagnerForAcmgr);
    LIB_FUNCTION("Vo1qeT4JY6I", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenUseSoftwagnerForRcmgr);
    LIB_FUNCTION("T1t68JwPqME", "libkernel", 1, "libkernel",
                 sceKernelGetUtokenWeakenedPortRestrictionForRcmgr);
    LIB_FUNCTION("heiOpxS1Zio", "libkernel", 1, "libkernel", sceKernelGetVrCaptureSize);
    LIB_FUNCTION("rNRtm1uioyY", "libkernel", 1, "libkernel", sceKernelHasNeoMode);
    LIB_FUNCTION("l-zbaxNzruE", "libkernel", 1, "libkernel", sceKernelHwHasOpticalOut);
    LIB_FUNCTION("+ofrEv1aAU0", "libkernel", 1, "libkernel", sceKernelHwHasWlanBt);
    LIB_FUNCTION("1wxFFk3xIhA", "libkernel", 1, "libkernel", sceKernelIccControlBDPowerState);
    LIB_FUNCTION("ZqxPUMisNkY", "libkernel", 1, "libkernel", sceKernelIccControlUSBPowerState);
    LIB_FUNCTION("zLEuSU+hl-w", "libkernel", 1, "libkernel", sceKernelIccGetBDPowerState);
    LIB_FUNCTION("U0NKl-rjhYA", "libkernel", 1, "libkernel", sceKernelIccGetCountTime);
    LIB_FUNCTION("1NlbNxWzn7U", "libkernel", 1, "libkernel", sceKernelIccGetCPMode);
    LIB_FUNCTION("Z7NoR9m5SVo", "libkernel", 1, "libkernel", sceKernelIccGetCpuInfoBit);
    LIB_FUNCTION("8TqMzIggthc", "libkernel", 1, "libkernel", sceKernelIccGetErrLog);
    LIB_FUNCTION("C+i9gJY4A1I", "libkernel", 1, "libkernel", sceKernelIccGetHwInfo);
    LIB_FUNCTION("tCQzG0iC8zw", "libkernel", 1, "libkernel",
                 sceKernelIccGetPowerNumberOfBootShutdown);
    LIB_FUNCTION("PA6ZwQM5tNQ", "libkernel", 1, "libkernel", sceKernelIccGetPowerOperatingTime);
    LIB_FUNCTION("wXmx+vN8puE", "libkernel", 1, "libkernel", sceKernelIccGetPowerUpCause);
    LIB_FUNCTION("L21PBFwqIiM", "libkernel", 1, "libkernel", sceKernelIccGetSysEventLog);
    LIB_FUNCTION("zEmi6zvei2k", "libkernel", 1, "libkernel", sceKernelIccGetThermalAlert);
    LIB_FUNCTION("NtOA+0RApBg", "libkernel", 1, "libkernel", sceKernelIccGetUSBPowerState);
    LIB_FUNCTION("qWoGe2XqwVw", "libkernel", 1, "libkernel", sceKernelIccIndicatorBootDone);
    LIB_FUNCTION("gQXxz1IoL5U", "libkernel", 1, "libkernel", sceKernelIccIndicatorShutdown);
    LIB_FUNCTION("98LV9dS2Fvw", "libkernel", 1, "libkernel", sceKernelIccIndicatorStandby);
    LIB_FUNCTION("7Q-U-8yN1Hk", "libkernel", 1, "libkernel", sceKernelIccIndicatorStandbyBoot);
    LIB_FUNCTION("Eye1lgCj9yo", "libkernel", 1, "libkernel", sceKernelIccIndicatorStandbyShutdown);
    LIB_FUNCTION("wNeGsNes5ck", "libkernel", 1, "libkernel", sceKernelIccNotifyBootStatus);
    LIB_FUNCTION("xXj0rnNUYIk", "libkernel", 1, "libkernel", sceKernelIccNvsFlush);
    LIB_FUNCTION("0gkGdPk8dXw", "libkernel", 1, "libkernel", sceKernelIccReadPowerBootMessage);
    LIB_FUNCTION("iBQ2omlTuls", "libkernel", 1, "libkernel", sceKernelIccSetBuzzer);
    LIB_FUNCTION("hc0GFWwSrR4", "libkernel", 1, "libkernel", sceKernelIccSetCPMode);
    LIB_FUNCTION("RP9ImTNDfP8", "libkernel", 1, "libkernel", sceKernelIccSetCpuInfoBit);
    LIB_FUNCTION("o4NI2wpFhbI", "libkernel", 1, "libkernel", sceKernelIccSetDownloadMode);
    LIB_FUNCTION("WkwEd3N7w0Y", "libkernel", 1, "libkernel", sceKernelInstallExceptionHandler);
    LIB_FUNCTION("L7aj7caj8+s", "libkernel", 1, "libkernel", sceKernelInternalGetKmemStatistics);
    LIB_FUNCTION("n2nyhRL5uUg", "libkernel", 1, "libkernel", sceKernelInternalGetMapStatistics);
    LIB_FUNCTION("rb8JKArrzc0", "libkernel", 1, "libkernel",
                 sceKernelInternalHeapPrintBacktraceWithModuleInfo);
    LIB_FUNCTION("xAKAe6kFk90", "libkernel", 1, "libkernel", sceKernelInternalMapDirectMemory);
    LIB_FUNCTION("0ttVHjPWLsE", "libkernel", 1, "libkernel",
                 sceKernelInternalMapNamedDirectMemory);
    LIB_FUNCTION("rjEuM0nb8xg", "libkernel", 1, "libkernel",
                 sceKernelInternalMemoryGetAvailableSize);
    LIB_FUNCTION("-YTW+qXc3CQ", "libkernel", 1, "libkernel",
                 sceKernelInternalMemoryGetModuleSegmentInfo);
    LIB_FUNCTION("1vCEy8EP+gc", "libkernel", 1, "libkernel",
                 sceKernelInternalResumeDirectMemoryRelease);
    LIB_FUNCTION("3+E-5EFZxDo", "libkernel", 1, "libkernel",
                 sceKernelInternalSuspendDirectMemoryRelease);
    LIB_FUNCTION("jh+8XiK4LeE", "libkernel", 1, "libkernel", sceKernelIsAddressSanitizerEnabled);
    LIB_FUNCTION("oU4h4oBe2l0", "libkernel", 1, "libkernel", sceKernelIsAllowedToSelectDvdRegion);
    LIB_FUNCTION("cbn9Di01j0k", "libkernel", 1, "libkernel", sceKernelIsAuthenticNeo);
    LIB_FUNCTION("8aCOCGoRkUI", "libkernel", 1, "libkernel", sceKernelIsCEX);
    LIB_FUNCTION("K0ZTCJ-wFrM", "libkernel", 1, "libkernel", sceKernelIsDebuggerAttached);
    LIB_FUNCTION("QNjGUdj1HPM", "libkernel", 1, "libkernel", sceKernelIsDevKit);
    LIB_FUNCTION("B1K98ubk6V8", "libkernel", 1, "libkernel", sceKernelIsExperimentalBeta);
    LIB_FUNCTION("ts25M0mp2uY", "libkernel", 1, "libkernel", sceKernelIsGenuineCEX);
    LIB_FUNCTION("lFf3UU811v4", "libkernel", 1, "libkernel", sceKernelIsGenuineDevKit);
    LIB_FUNCTION("H54cSDvjryI", "libkernel", 1, "libkernel", sceKernelIsGenuineKratosCex);
    LIB_FUNCTION("u3h77G+tFVc", "libkernel", 1, "libkernel", sceKernelIsGenuineN);
    LIB_FUNCTION("S4XWKGFp+bc", "libkernel", 1, "libkernel", sceKernelIsGenuineTestKit);
    LIB_FUNCTION("xeu-pV8wkKs", "libkernel", 1, "libkernel", sceKernelIsInSandbox);
    LIB_FUNCTION("miPa6vSAqos", "libkernel", 1, "libkernel", sceKernelIsKratos);
    LIB_FUNCTION("Jp76d0USJeM", "libkernel", 1, "libkernel", sceKernelIsMainOnStanbyMode);
    LIB_FUNCTION("vZser6ysSbM", "libkernel", 1, "libkernel", sceKernelIsMainOnStandbyMode);
    LIB_FUNCTION("WslcK1FQcGI", "libkernel", 1, "libkernel", sceKernelIsNeoMode);
    LIB_FUNCTION("yDBwVAolDgg", "libkernel", 1, "libkernel", sceKernelIsStack);
    LIB_FUNCTION("1CVP7E-WFKk", "libkernel", 1, "libkernel", sceKernelIsTestKit);
    LIB_FUNCTION("MR221Mwo0Pc", "libkernel", 1, "libkernel",
                 sceKernelJitCreateAliasOfSharedMemory);
    LIB_FUNCTION("avvJ3J0H0EY", "libkernel", 1, "libkernel", sceKernelJitCreateSharedMemory);
    LIB_FUNCTION("9yxlvURJU6U", "libkernel", 1, "libkernel", sceKernelJitGetSharedMemoryInfo);
    LIB_FUNCTION("YKT49TOLQWs", "libkernel", 1, "libkernel", sceKernelJitMapSharedMemory);
    LIB_FUNCTION("m5zDvD-LLjo", "libkernel", 1, "libkernel", sceKernelKernelHeapUsage);
    LIB_FUNCTION("wzvqT4UqKX8", "libkernel", 1, "libkernel", sceKernelLoadStartModule);
    LIB_FUNCTION("Gg3+yWL6DWU", "libkernel", 1, "libkernel", sceKernelLoadStartModuleForSysmodule);
    LIB_FUNCTION("oib76F-12fk", "libkernel", 1, "libkernel", sceKernelLseek);
    LIB_FUNCTION("LFbwY8r50o8", "libkernel", 1, "libkernel", sceKernelLwfsAllocateBlock);
    LIB_FUNCTION("s2PjRq4By9U", "libkernel", 1, "libkernel", sceKernelLwfsLseek);
    LIB_FUNCTION("T4osaR3EDkI", "libkernel", 1, "libkernel", sceKernelLwfsSetAttribute);
    LIB_FUNCTION("kHOS+St2y7M", "libkernel", 1, "libkernel", sceKernelLwfsTrimBlock);
    LIB_FUNCTION("FNigDX9ue0g", "libkernel", 1, "libkernel", sceKernelLwfsWrite);
    LIB_FUNCTION("L-Q3LEjIbgA", "libkernel", 1, "libkernel", sceKernelMapDirectMemory);
    LIB_FUNCTION("BQQniolj9tQ", "libkernel", 1, "libkernel", sceKernelMapDirectMemory2);
    LIB_FUNCTION("IWIBBdTHit4", "libkernel", 1, "libkernel", sceKernelMapFlexibleMemory);
    LIB_FUNCTION("NcaWUxfMNIQ", "libkernel", 1, "libkernel", sceKernelMapNamedDirectMemory);
    LIB_FUNCTION("mL8NDH86iQI", "libkernel", 1, "libkernel", sceKernelMapNamedFlexibleMemory);
    LIB_FUNCTION("kc+LEEIYakc", "libkernel", 1, "libkernel",
                 sceKernelMapNamedSystemFlexibleMemory);
    LIB_FUNCTION("8cAlCzoOiic", "libkernel", 1, "libkernel", sceKernelMapSanitizerShadowMemory);
    LIB_FUNCTION("DpDnfM6StzA", "libkernel", 1, "libkernel", sceKernelMapTraceMemory);
    LIB_FUNCTION("YN878uKRBbE", "libkernel", 1, "libkernel", sceKernelMemoryPoolBatch);
    LIB_FUNCTION("Vzl66WmfLvk", "libkernel", 1, "libkernel", sceKernelMemoryPoolCommit);
    LIB_FUNCTION("LXo1tpFqJGs", "libkernel", 1, "libkernel", sceKernelMemoryPoolDecommit);
    LIB_FUNCTION("qCSfqDILlns", "libkernel", 1, "libkernel", sceKernelMemoryPoolExpand);
    LIB_FUNCTION("bvD+95Q6asU", "libkernel", 1, "libkernel", sceKernelMemoryPoolGetBlockStats);
    LIB_FUNCTION("e1GIcX4AlY4", "libkernel", 1, "libkernel", sceKernelMemoryPoolMove);
    LIB_FUNCTION("pU-QydtGcGY", "libkernel", 1, "libkernel", sceKernelMemoryPoolReserve);
    LIB_FUNCTION("1-LFLmRFxxM", "libkernel", 1, "libkernel", sceKernelMkdir);
    LIB_FUNCTION("3k6kx-zOOSQ", "libkernel", 1, "libkernel", sceKernelMlock);
    LIB_FUNCTION("EfqmKkirJF0", "libkernel", 1, "libkernel", sceKernelMlockall);
    LIB_FUNCTION("PGhQHd-dzv8", "libkernel", 1, "libkernel", sceKernelMmap);
    LIB_FUNCTION("vSMAm3cxYTY", "libkernel", 1, "libkernel", sceKernelMprotect);
    LIB_FUNCTION("DkNebxmJyVI", "libkernel", 1, "libkernel", sceKernelMsync);
    LIB_FUNCTION("9bfdLIyuwCY", "libkernel", 1, "libkernel", sceKernelMtypeprotect);
    LIB_FUNCTION("xQIIfJ860sk", "libkernel", 1, "libkernel", sceKernelMunlock);
    LIB_FUNCTION("lvD71jP2Mnk", "libkernel", 1, "libkernel", sceKernelMunlockall);
    LIB_FUNCTION("cQke9UuBQOk", "libkernel", 1, "libkernel", sceKernelMunmap);
    LIB_FUNCTION("QvsZxomvUHs", "libkernel", 1, "libkernel", sceKernelNanosleep);
    LIB_FUNCTION("KB7Vc2+5S54", "libkernel", 1, "libkernel", sceKernelNormalizePath);
    LIB_FUNCTION("2z1Tkrqh8jE", "libkernel", 1, "libkernel", sceKernelNotifyAppStateChanged);
    LIB_FUNCTION("hjErHT1CwJM", "libkernel", 1, "libkernel",
                 sceKernelNotifySystemSuspendResumeProgress);
    LIB_FUNCTION("da6-yq0GbLg", "libkernel", 1, "libkernel", sceKernelNotifySystemSuspendStart);
    LIB_FUNCTION("1G3lF1Gg1k8", "libkernel", 1, "libkernel", sceKernelOpen);
    LIB_FUNCTION("wibWed78GyY", "libkernel", 1, "libkernel", sceKernelOpenEport);
    LIB_FUNCTION("1vDaenmJtyA", "libkernel", 1, "libkernel", sceKernelOpenEventFlag);
    LIB_FUNCTION("MwhHNKdBXq8", "libkernel", 1, "libkernel", sceKernelOpenSema);
    LIB_FUNCTION("9lvj5DjHZiA", "libkernel", 1, "libkernel", sceKernelPollEventFlag);
    LIB_FUNCTION("12wOHk8ywb0", "libkernel", 1, "libkernel", sceKernelPollSema);
    LIB_FUNCTION("+r3rMFwItV4", "libkernel", 1, "libkernel", sceKernelPread);
    LIB_FUNCTION("yTj62I7kw4s", "libkernel", 1, "libkernel", sceKernelPreadv);
    LIB_FUNCTION("Wl2o5hOVZdw", "libkernel", 1, "libkernel",
                 sceKernelPrintBacktraceWithModuleInfo);
    LIB_FUNCTION("k1jIkFHa9OU", "libkernel", 1, "libkernel", sceKernelProtectDirectMemory);
    LIB_FUNCTION("cBp0Ad-24LA", "libkernel", 1, "libkernel", sceKernelProtectDirectMemoryForPID);
    LIB_FUNCTION("nKWi-N2HBV4", "libkernel", 1, "libkernel", sceKernelPwrite);
    LIB_FUNCTION("mBd4AfLP+u8", "libkernel", 1, "libkernel", sceKernelPwritev);
    LIB_FUNCTION("WFcfL2lzido", "libkernel", 1, "libkernel", sceKernelQueryMemoryProtection);
    LIB_FUNCTION("+8GCeq43o7c", "libkernel", 1, "libkernel", sceKernelQueryTraceMemory);
    LIB_FUNCTION("il03nluKfMk", "libkernel", 1, "libkernel", sceKernelRaiseException);
    LIB_FUNCTION("p2suRCR4KqE", "libkernel", 1, "libkernel", sceKernelRandomizedPath);
    LIB_FUNCTION("LxIacrWiJ3w", "libkernel", 1, "libkernel", sceKernelRdup);
    LIB_FUNCTION("Cg4srZ6TKbU", "libkernel", 1, "libkernel", sceKernelRead);
    LIB_FUNCTION("-2IRUCO--PM", "libkernel", 1, "libkernel", sceKernelReadTsc);
    LIB_FUNCTION("QqxBetgJH+g", "libkernel", 1, "libkernel", sceKernelReadv);
    LIB_FUNCTION("bXxVDD3VuWc", "libkernel", 1, "libkernel", sceKernelReboot);
    LIB_FUNCTION("MBuItvba6z8", "libkernel", 1, "libkernel", sceKernelReleaseDirectMemory);
    LIB_FUNCTION("teiItL2boFw", "libkernel", 1, "libkernel", sceKernelReleaseFlexibleMemory);
    LIB_FUNCTION("Alqa9RE0Y5k", "libkernel", 1, "libkernel", sceKernelReleaseTraceDirectMemory);
    LIB_FUNCTION("Qhv5ARAoOEc", "libkernel", 1, "libkernel", sceKernelRemoveExceptionHandler);
    LIB_FUNCTION("52NcYU9+lEo", "libkernel", 1, "libkernel", sceKernelRename);
    LIB_FUNCTION("M0z6Dr6TNnM", "libkernel", 1, "libkernel", sceKernelReportUnpatchedFunctionCall);
    LIB_FUNCTION("VjWR6g9qL2k", "libkernel", 1, "libkernel", sceKernelReserve2mbPage);
    LIB_FUNCTION("4zUh1kGuaiw", "libkernel", 1, "libkernel", sceKernelReserveSystemDirectMemory);
    LIB_FUNCTION("7oxv3PPCumo", "libkernel", 1, "libkernel", sceKernelReserveVirtualRange);
    LIB_FUNCTION("PS5hxxGEVB8", "libkernel", 1, "libkernel", sceKernelResumeDirectMemoryRelease);
    LIB_FUNCTION("naInUjYt3so", "libkernel", 1, "libkernel", sceKernelRmdir);
    LIB_FUNCTION("Kf10sqhOoRY", "libkernel", 1, "libkernel", sceKernelRtldControl);
    LIB_FUNCTION("ASVb7Y-pR4Y", "libkernel", 1, "libkernel", sceKernelSandboxPath);
    LIB_FUNCTION("zl7hupSO0C0", "libkernel", 1, "libkernel", sceKernelSendNotificationRequest);
    LIB_FUNCTION("CkomU+GYCQ8", "libkernel", 1, "libkernel", sceKernelSetAppInfo);
    LIB_FUNCTION("9xRIkqnNibE", "libkernel", 1, "libkernel", sceKernelSetBackupRestoreMode);
    LIB_FUNCTION("V0ey5Vz5F7k", "libkernel", 1, "libkernel", sceKernelSetBaseModeClock);
    LIB_FUNCTION("WS7uPTZ0WCs", "libkernel", 1, "libkernel", sceKernelSetBesteffort);
    LIB_FUNCTION("c8J3uxxQTl4", "libkernel", 1, "libkernel", sceKernelSetBootReqNotify);
    LIB_FUNCTION("P6dUEXUHXjo", "libkernel", 1, "libkernel", sceKernelSetCallRecord);
    LIB_FUNCTION("FeBOnMEm0SY", "libkernel", 1, "libkernel", sceKernelSetCompressionAttribute);
    LIB_FUNCTION("KCwXUKT269I", "libkernel", 1, "libkernel", sceKernelSetCpumodeGame);
    LIB_FUNCTION("+rSNKzU+aNQ", "libkernel", 1, "libkernel", sceKernelSetDataTransferMode);
    LIB_FUNCTION("IOnSvHzqu6A", "libkernel", 1, "libkernel", sceKernelSetEventFlag);
    LIB_FUNCTION("VjBtg5Btl94", "libkernel", 1, "libkernel", sceKernelSetFsstParam);
    LIB_FUNCTION("ej7DGZDhuAk", "libkernel", 1, "libkernel", sceKernelSetGameDirectMemoryLimit);
    LIB_FUNCTION("rzEsC81gurc", "libkernel", 1, "libkernel", sceKernelSetGPI);
    LIB_FUNCTION("ca7v6Cxulzs", "libkernel", 1, "libkernel", sceKernelSetGPO);
    LIB_FUNCTION("4nAp4pZgV1A", "libkernel", 1, "libkernel", sceKernelSetGpuCu);
    LIB_FUNCTION("A1zOC17L80g", "libkernel", 1, "libkernel", sceKernelSetMemoryPstate);
    LIB_FUNCTION("EA4bmgm02o8", "libkernel", 1, "libkernel", sceKernelSetNeoModeClock);
    LIB_FUNCTION("BDLSyH7y6Mo", "libkernel", 1, "libkernel", sceKernelSetPhysFmemLimit);
    LIB_FUNCTION("8UVYwy0F2Hk", "libkernel", 1, "libkernel", sceKernelSetProcessName);
    LIB_FUNCTION("-W4xI5aVI8w", "libkernel", 1, "libkernel", sceKernelSetProcessProperty);
    LIB_FUNCTION("U5HG6wD4smU", "libkernel", 1, "libkernel", sceKernelSetProcessPropertyString);
    LIB_FUNCTION("BohYr-F7-is", "libkernel", 1, "libkernel", sceKernelSetPrtAperture);
    LIB_FUNCTION("As-JdqyUuMs", "libkernel", 1, "libkernel", sceKernelSetSafemode);
    LIB_FUNCTION("ChCOChPU-YM", "libkernel", 1, "libkernel", sceKernelSettimeofday);
    LIB_FUNCTION("cxdklXtQcqA", "libkernel", 1, "libkernel", sceKernelSetTimezoneInfo);
    LIB_FUNCTION("DGMG3JshrZU", "libkernel", 1, "libkernel", sceKernelSetVirtualRangeName);
    LIB_FUNCTION("R7Xj-th93gs", "libkernel", 1, "libkernel", sceKernelSetVmContainer);
    LIB_FUNCTION("4czppHBiriw", "libkernel", 1, "libkernel", sceKernelSignalSema);
    LIB_FUNCTION("-ZR+hG7aDHw", "libkernel", 1, "libkernel", sceKernelSleep);
    LIB_FUNCTION("8KDMful7g1Y", "libkernel", 1, "libkernel", sceKernelSlvNotifyError);
    LIB_FUNCTION("eV9wAD2riIA", "libkernel", 1, "libkernel", sceKernelStat);
    LIB_FUNCTION("QKd0qM58Qes", "libkernel", 1, "libkernel", sceKernelStopUnloadModule);
    LIB_FUNCTION("C8wi8QOUQQk", "libkernel", 1, "libkernel", sceKernelSuspendDirectMemoryRelease);
    LIB_FUNCTION("KK6B72YC-js", "libkernel", 1, "libkernel", sceKernelSwitchToBaseMode);
    LIB_FUNCTION("+DVcq4YF6Xg", "libkernel", 1, "libkernel", sceKernelSwitchToNeoMode);
    LIB_FUNCTION("uvT2iYBBnkY", "libkernel", 1, "libkernel", sceKernelSync);
    LIB_FUNCTION("hUN72ocX6gM", "libkernel", 1, "libkernel", sceKernelTerminateSysCore);
    LIB_FUNCTION("1yca4VvfcNA", "libkernel", 1, "libkernel", sceKernelTitleWorkaroundIsEnabled);
    LIB_FUNCTION("GST42pfUfMc", "libkernel", 1, "libkernel", sceKernelTitleWorkdaroundIsEnabled);
    LIB_FUNCTION("eESTogkCMPE", "libkernel", 1, "libkernel", sceKernelTraceMemoryTypeProtect);
    LIB_FUNCTION("is-XQhYPRaQ", "libkernel", 1, "libkernel", sceKernelTriggerEport);
    LIB_FUNCTION("F6e0kwo4cnk", "libkernel", 1, "libkernel", sceKernelTriggerUserEvent);
    LIB_FUNCTION("WlyEA-sLDf0", "libkernel", 1, "libkernel", sceKernelTruncate);
    LIB_FUNCTION("AUXVxWeJU-A", "libkernel", 1, "libkernel", sceKernelUnlink);
    LIB_FUNCTION("1jfXLRVzisc", "libkernel", 1, "libkernel", sceKernelUsleep);
    LIB_FUNCTION("0Cq8ipKr9n0", "libkernel", 1, "libkernel", sceKernelUtimes);
    LIB_FUNCTION("Xjoosiw+XPI", "libkernel", 1, "libkernel", sceKernelUuidCreate);
    LIB_FUNCTION("rVjRvHJ0X6c", "libkernel", 1, "libkernel", sceKernelVirtualQuery);
    LIB_FUNCTION("f77qlxIbqu0", "libkernel", 1, "libkernel", sceKernelVirtualQueryAll);
    LIB_FUNCTION("fzyMKs9kim0", "libkernel", 1, "libkernel", sceKernelWaitEqueue);
    LIB_FUNCTION("JTvBflhYazQ", "libkernel", 1, "libkernel", sceKernelWaitEventFlag);
    LIB_FUNCTION("Zxa0VhQVTsk", "libkernel", 1, "libkernel", sceKernelWaitSema);
    LIB_FUNCTION("4wSze92BhLI", "libkernel", 1, "libkernel", sceKernelWrite);
    LIB_FUNCTION("I111PPn2g18", "libkernel", 1, "libkernel", sceKernelWriteSdkEventLog);
    LIB_FUNCTION("kAt6VDbHmro", "libkernel", 1, "libkernel", sceKernelWritev);
    LIB_FUNCTION("BtJ3gH33xss", "libkernel", 1, "libkernel", sceKernelYieldCpumode);
    LIB_FUNCTION("pi90NsG3zPA", "libkernel", 1, "libkernel", sceLibcMspaceCreateForMonoMutex);
    LIB_FUNCTION("i1kREW2pchs", "libkernel", 1, "libkernel", scePthreadAtfork);
    LIB_FUNCTION("62KCwEMmzcM", "libkernel", 1, "libkernel", scePthreadAttrDestroy);
    LIB_FUNCTION("x1X76arYMxU", "libkernel", 1, "libkernel", scePthreadAttrGet);
    LIB_FUNCTION("8+s5BzZjxSg", "libkernel", 1, "libkernel", scePthreadAttrGetaffinity);
    LIB_FUNCTION("JaRMy+QcpeU", "libkernel", 1, "libkernel", scePthreadAttrGetdetachstate);
    LIB_FUNCTION("txHtngJ+eyc", "libkernel", 1, "libkernel", scePthreadAttrGetguardsize);
    LIB_FUNCTION("lpMP8HhkBbg", "libkernel", 1, "libkernel", scePthreadAttrGetinheritsched);
    LIB_FUNCTION("FXPWHNk8Of0", "libkernel", 1, "libkernel", scePthreadAttrGetschedparam);
    LIB_FUNCTION("NMyIQ9WgWbU", "libkernel", 1, "libkernel", scePthreadAttrGetschedpolicy);
    LIB_FUNCTION("+7B2AEKKns8", "libkernel", 1, "libkernel", scePthreadAttrGetscope);
    LIB_FUNCTION("-quPa4SEJUw", "libkernel", 1, "libkernel", scePthreadAttrGetstack);
    LIB_FUNCTION("Ru36fiTtJzA", "libkernel", 1, "libkernel", scePthreadAttrGetstackaddr);
    LIB_FUNCTION("-fA+7ZlGDQs", "libkernel", 1, "libkernel", scePthreadAttrGetstacksize);
    LIB_FUNCTION("nsYoNRywwNg", "libkernel", 1, "libkernel", scePthreadAttrInit);
    LIB_FUNCTION("3qxgM4ezETA", "libkernel", 1, "libkernel", scePthreadAttrSetaffinity);
    LIB_FUNCTION("GZSR0Ooae9Q", "libkernel", 1, "libkernel", scePthreadAttrSetcreatesuspend);
    LIB_FUNCTION("-Wreprtu0Qs", "libkernel", 1, "libkernel", scePthreadAttrSetdetachstate);
    LIB_FUNCTION("El+cQ20DynU", "libkernel", 1, "libkernel", scePthreadAttrSetguardsize);
    LIB_FUNCTION("eXbUSpEaTsA", "libkernel", 1, "libkernel", scePthreadAttrSetinheritsched);
    LIB_FUNCTION("DzES9hQF4f4", "libkernel", 1, "libkernel", scePthreadAttrSetschedparam);
    LIB_FUNCTION("4+h9EzwKF4I", "libkernel", 1, "libkernel", scePthreadAttrSetschedpolicy);
    LIB_FUNCTION("YdZfEZfRnPk", "libkernel", 1, "libkernel", scePthreadAttrSetscope);
    LIB_FUNCTION("Bvn74vj6oLo", "libkernel", 1, "libkernel", scePthreadAttrSetstack);
    LIB_FUNCTION("F+yfmduIBB8", "libkernel", 1, "libkernel", scePthreadAttrSetstackaddr);
    LIB_FUNCTION("UTXzJbWhhTE", "libkernel", 1, "libkernel", scePthreadAttrSetstacksize);
    LIB_FUNCTION("oT-j4DqJHY8", "libkernel", 1, "libkernel", scePthreadBarrierattrDestroy);
    LIB_FUNCTION("SkutDtgqJ9g", "libkernel", 1, "libkernel", scePthreadBarrierattrGetpshared);
    LIB_FUNCTION("SDkV9xhINKI", "libkernel", 1, "libkernel", scePthreadBarrierattrInit);
    LIB_FUNCTION("NpfpcLf5PYM", "libkernel", 1, "libkernel", scePthreadBarrierattrSetpshared);
    LIB_FUNCTION("HudB2Jv2MPY", "libkernel", 1, "libkernel", scePthreadBarrierDestroy);
    LIB_FUNCTION("5dgOEPsEGqw", "libkernel", 1, "libkernel", scePthreadBarrierInit);
    LIB_FUNCTION("t9vVyTglqHQ", "libkernel", 1, "libkernel", scePthreadBarrierWait);
    LIB_FUNCTION("qBDmpCyGssE", "libkernel", 1, "libkernel", scePthreadCancel);
    LIB_FUNCTION("waPcxYiR3WA", "libkernel", 1, "libkernel", scePthreadCondattrDestroy);
    LIB_FUNCTION("6qM3kO5S3Oo", "libkernel", 1, "libkernel", scePthreadCondattrGetclock);
    LIB_FUNCTION("Dn-DRWi9t54", "libkernel", 1, "libkernel", scePthreadCondattrGetpshared);
    LIB_FUNCTION("m5-2bsNfv7s", "libkernel", 1, "libkernel", scePthreadCondattrInit);
    LIB_FUNCTION("c-bxj027czs", "libkernel", 1, "libkernel", scePthreadCondattrSetclock);
    LIB_FUNCTION("6xMew9+rZwI", "libkernel", 1, "libkernel", scePthreadCondattrSetpshared);
    LIB_FUNCTION("JGgj7Uvrl+A", "libkernel", 1, "libkernel", scePthreadCondBroadcast);
    LIB_FUNCTION("g+PZd2hiacg", "libkernel", 1, "libkernel", scePthreadCondDestroy);
    LIB_FUNCTION("2Tb92quprl0", "libkernel", 1, "libkernel", scePthreadCondInit);
    LIB_FUNCTION("kDh-NfxgMtE", "libkernel", 1, "libkernel", scePthreadCondSignal);
    LIB_FUNCTION("o69RpYO-Mu0", "libkernel", 1, "libkernel", scePthreadCondSignalto);
    LIB_FUNCTION("BmMjYxmew1w", "libkernel", 1, "libkernel", scePthreadCondTimedwait);
    LIB_FUNCTION("WKAXJ4XBPQ4", "libkernel", 1, "libkernel", scePthreadCondWait);
    LIB_FUNCTION("6UgtwV+0zb4", "libkernel", 1, "libkernel", scePthreadCreate);
    LIB_FUNCTION("4qGrR6eoP9Y", "libkernel", 1, "libkernel", scePthreadDetach);
    LIB_FUNCTION("3PtV6p3QNX4", "libkernel", 1, "libkernel", scePthreadEqual);
    LIB_FUNCTION("3kg7rT0NQIs", "libkernel", 1, "libkernel", scePthreadExit);
    LIB_FUNCTION("rcrVFJsQWRY", "libkernel", 1, "libkernel", scePthreadGetaffinity);
    LIB_FUNCTION("zLlLc3h2Prk", "libkernel", 1, "libkernel", scePthreadGetconcurrency);
    LIB_FUNCTION("tWFPPuAJxks", "libkernel", 1, "libkernel", scePthreadGetcpuclockid);
    LIB_FUNCTION("How7B8Oet6k", "libkernel", 1, "libkernel", scePthreadGetname);
    LIB_FUNCTION("1tKyG7RlMJo", "libkernel", 1, "libkernel", scePthreadGetprio);
    LIB_FUNCTION("P41kTWUS3EI", "libkernel", 1, "libkernel", scePthreadGetschedparam);
    LIB_FUNCTION("eoht7mQOCmo", "libkernel", 1, "libkernel", scePthreadGetspecific);
    LIB_FUNCTION("EI-5-jlq2dE", "libkernel", 1, "libkernel", scePthreadGetthreadid);
    LIB_FUNCTION("onNY9Byn-W8", "libkernel", 1, "libkernel", scePthreadJoin);
    LIB_FUNCTION("geDaqgH9lTg", "libkernel", 1, "libkernel", scePthreadKeyCreate);
    LIB_FUNCTION("PrdHuuDekhY", "libkernel", 1, "libkernel", scePthreadKeyDelete);
    LIB_FUNCTION("55aShElDfY4", "libkernel", 1, "libkernel", scePthreadMain);
    LIB_FUNCTION("JVc71p0lpFs", "libkernel", 1, "libkernel", scePthreadMulti);
    LIB_FUNCTION("smWEktiyyG0", "libkernel", 1, "libkernel", scePthreadMutexattrDestroy);
    LIB_FUNCTION("rH2mWEndluc", "libkernel", 1, "libkernel", scePthreadMutexattrGetkind);
    LIB_FUNCTION("SgjMpyH9Z9I", "libkernel", 1, "libkernel", scePthreadMutexattrGetprioceiling);
    LIB_FUNCTION("GoTmFeui+hQ", "libkernel", 1, "libkernel", scePthreadMutexattrGetprotocol);
    LIB_FUNCTION("losEubHc64c", "libkernel", 1, "libkernel", scePthreadMutexattrGetpshared);
    LIB_FUNCTION("gquEhBrS2iw", "libkernel", 1, "libkernel", scePthreadMutexattrGettype);
    LIB_FUNCTION("F8bUHwAG284", "libkernel", 1, "libkernel", scePthreadMutexattrInit);
    LIB_FUNCTION("n2MMpvU8igI", "libkernel", 1, "libkernel",
                 scePthreadMutexattrInitForInternalLibc);
    LIB_FUNCTION("UWZbVSFze24", "libkernel", 1, "libkernel", scePthreadMutexattrSetkind);
    LIB_FUNCTION("532IaQguwMg", "libkernel", 1, "libkernel", scePthreadMutexattrSetprioceiling);
    LIB_FUNCTION("1FGvU0i9saQ", "libkernel", 1, "libkernel", scePthreadMutexattrSetprotocol);
    LIB_FUNCTION("mxKx9bxXF2I", "libkernel", 1, "libkernel", scePthreadMutexattrSetpshared);
    LIB_FUNCTION("iMp8QpE+XO4", "libkernel", 1, "libkernel", scePthreadMutexattrSettype);
    LIB_FUNCTION("2Of0f+3mhhE", "libkernel", 1, "libkernel", scePthreadMutexDestroy);
    LIB_FUNCTION("5mO+cXIAaRI", "libkernel", 1, "libkernel", scePthreadMutexGetprioceiling);
    LIB_FUNCTION("pOmNmyRKlIE", "libkernel", 1, "libkernel", scePthreadMutexGetspinloops);
    LIB_FUNCTION("AWS3NyViL9o", "libkernel", 1, "libkernel", scePthreadMutexGetyieldloops);
    LIB_FUNCTION("cmo1RIYva9o", "libkernel", 1, "libkernel", scePthreadMutexInit);
    LIB_FUNCTION("qH1gXoq71RY", "libkernel", 1, "libkernel", scePthreadMutexInitForInternalLibc);
    LIB_FUNCTION("W6OrTBO95UY", "libkernel", 1, "libkernel", scePthreadMutexIsowned);
    LIB_FUNCTION("9UK1vLZQft4", "libkernel", 1, "libkernel", scePthreadMutexLock);
    LIB_FUNCTION("XAzZo12sbN8", "libkernel", 1, "libkernel", scePthreadMutexSetprioceiling);
    LIB_FUNCTION("42YkUouoMI0", "libkernel", 1, "libkernel", scePthreadMutexSetspinloops);
    LIB_FUNCTION("bP+cqFmBW+A", "libkernel", 1, "libkernel", scePthreadMutexSetyieldloops);
    LIB_FUNCTION("IafI2PxcPnQ", "libkernel", 1, "libkernel", scePthreadMutexTimedlock);
    LIB_FUNCTION("upoVrzMHFeE", "libkernel", 1, "libkernel", scePthreadMutexTrylock);
    LIB_FUNCTION("tn3VlD0hG60", "libkernel", 1, "libkernel", scePthreadMutexUnlock);
    LIB_FUNCTION("14bOACANTBo", "libkernel", 1, "libkernel", scePthreadOnce);
    LIB_FUNCTION("GBUY7ywdULE", "libkernel", 1, "libkernel", scePthreadRename);
    LIB_FUNCTION("DB7Mkm+Pqzw", "libkernel", 1, "libkernel", scePthreadResume);
    LIB_FUNCTION("te+MBYMzDhY", "libkernel", 1, "libkernel", scePthreadResumeAll);
    LIB_FUNCTION("i2ifZ3fS2fo", "libkernel", 1, "libkernel", scePthreadRwlockattrDestroy);
    LIB_FUNCTION("LcOZBHGqbFk", "libkernel", 1, "libkernel", scePthreadRwlockattrGetpshared);
    LIB_FUNCTION("Kyls1ChFyrc", "libkernel", 1, "libkernel", scePthreadRwlockattrGettype);
    LIB_FUNCTION("yOfGg-I1ZII", "libkernel", 1, "libkernel", scePthreadRwlockattrInit);
    LIB_FUNCTION("-ZvQH18j10c", "libkernel", 1, "libkernel", scePthreadRwlockattrSetpshared);
    LIB_FUNCTION("h-OifiouBd8", "libkernel", 1, "libkernel", scePthreadRwlockattrSettype);
    LIB_FUNCTION("BB+kb08Tl9A", "libkernel", 1, "libkernel", scePthreadRwlockDestroy);
    LIB_FUNCTION("6ULAa0fq4jA", "libkernel", 1, "libkernel", scePthreadRwlockInit);
    LIB_FUNCTION("Ox9i0c7L5w0", "libkernel", 1, "libkernel", scePthreadRwlockRdlock);
    LIB_FUNCTION("iPtZRWICjrM", "libkernel", 1, "libkernel", scePthreadRwlockTimedrdlock);
    LIB_FUNCTION("adh--6nIqTk", "libkernel", 1, "libkernel", scePthreadRwlockTimedwrlock);
    LIB_FUNCTION("XD3mDeybCnk", "libkernel", 1, "libkernel", scePthreadRwlockTryrdlock);
    LIB_FUNCTION("bIHoZCTomsI", "libkernel", 1, "libkernel", scePthreadRwlockTrywrlock);
    LIB_FUNCTION("+L98PIbGttk", "libkernel", 1, "libkernel", scePthreadRwlockUnlock);
    LIB_FUNCTION("mqdNorrB+gI", "libkernel", 1, "libkernel", scePthreadRwlockWrlock);
    LIB_FUNCTION("aI+OeCz8xrQ", "libkernel", 1, "libkernel", scePthreadSelf);
    LIB_FUNCTION("Vwc+L05e6oE", "libkernel", 1, "libkernel", scePthreadSemDestroy);
    LIB_FUNCTION("DjpBvGlaWbQ", "libkernel", 1, "libkernel", scePthreadSemGetvalue);
    LIB_FUNCTION("GEnUkDZoUwY", "libkernel", 1, "libkernel", scePthreadSemInit);
    LIB_FUNCTION("aishVAiFaYM", "libkernel", 1, "libkernel", scePthreadSemPost);
    LIB_FUNCTION("fjN6NQHhK8k", "libkernel", 1, "libkernel", scePthreadSemTimedwait);
    LIB_FUNCTION("H2a+IN9TP0E", "libkernel", 1, "libkernel", scePthreadSemTrywait);
    LIB_FUNCTION("C36iRE0F5sE", "libkernel", 1, "libkernel", scePthreadSemWait);
    LIB_FUNCTION("bt3CTBKmGyI", "libkernel", 1, "libkernel", scePthreadSetaffinity);
    LIB_FUNCTION("i3tB6CuvHb4", "libkernel", 1, "libkernel", scePthreadSetBesteffort);
    LIB_FUNCTION("OAmWq+OHSjw", "libkernel", 1, "libkernel", scePthreadSetcancelstate);
    LIB_FUNCTION("sCJd99Phct0", "libkernel", 1, "libkernel", scePthreadSetcanceltype);
    LIB_FUNCTION("gdnv6wF6hwI", "libkernel", 1, "libkernel", scePthreadSetconcurrency);
    LIB_FUNCTION("oVZ+-KgZJGo", "libkernel", 1, "libkernel", scePthreadSetDefaultstacksize);
    LIB_FUNCTION("XeTqw+0Zl10", "libkernel", 1, "libkernel", scePthreadSetName);
    LIB_FUNCTION("W0Hpm2X0uPE", "libkernel", 1, "libkernel", scePthreadSetprio);
    LIB_FUNCTION("oIRFTjoILbg", "libkernel", 1, "libkernel", scePthreadSetschedparam);
    LIB_FUNCTION("+BzXYkqYeLE", "libkernel", 1, "libkernel", scePthreadSetspecific);
    LIB_FUNCTION("OTb0kHrf1pE", "libkernel", 1, "libkernel", scePthreadSingle);
    LIB_FUNCTION("ywmONkF81ok", "libkernel", 1, "libkernel", scePthreadSuspend);
    LIB_FUNCTION("HlzHlgqiBo8", "libkernel", 1, "libkernel", scePthreadSuspendAll);
    LIB_FUNCTION("LapIb799SSE", "libkernel", 1, "libkernel", scePthreadTestcancel);
    LIB_FUNCTION("HLUSF4Oi7Pc", "libkernel", 1, "libkernel", scePthreadTimedjoin);
    LIB_FUNCTION("T72hz6ffq08", "libkernel", 1, "libkernel", scePthreadYield);
    LIB_FUNCTION("CBNtXOoef-E", "libkernel", 1, "libkernel", sched_get_priority_max);
    LIB_FUNCTION("m0iS6jNsXds", "libkernel", 1, "libkernel", sched_get_priority_min);
    LIB_FUNCTION("O6gKl8uvGyE", "libkernel", 1, "libkernel", sched_getparam);
    LIB_FUNCTION("SD7oNCIQWvE", "libkernel", 1, "libkernel", sched_getscheduler);
    LIB_FUNCTION("PrsRaaSO-X0", "libkernel", 1, "libkernel", sched_rr_get_interval);
    LIB_FUNCTION("yawdym+zDvw", "libkernel", 1, "libkernel", sched_setparam);
    LIB_FUNCTION("puT82CSQzDE", "libkernel", 1, "libkernel", sched_setscheduler);
    LIB_FUNCTION("6XG4B33N09g", "libkernel", 1, "libkernel", sched_yield);
    LIB_FUNCTION("T8fER+tIGgk", "libkernel", 1, "libkernel", select);
    LIB_FUNCTION("5gXnxR+pdUo", "libkernel", 1, "libkernel", sem_close);
    LIB_FUNCTION("cDW233RAwWo", "libkernel", 1, "libkernel", sem_destroy);
    LIB_FUNCTION("Bq+LRV-N6Hk", "libkernel", 1, "libkernel", sem_getvalue);
    LIB_FUNCTION("pDuPEf3m4fI", "libkernel", 1, "libkernel", sem_init);
    LIB_FUNCTION("+P6FRnQJc1E", "libkernel", 1, "libkernel", sem_open);
    LIB_FUNCTION("IKP8typ0QUk", "libkernel", 1, "libkernel", sem_post);
    LIB_FUNCTION("4SbrhCozqQU", "libkernel", 1, "libkernel", sem_reltimedwait_np);
    LIB_FUNCTION("-wUggz2S5yk", "libkernel", 1, "libkernel", sem_setname);
    LIB_FUNCTION("w5IHyvahg-o", "libkernel", 1, "libkernel", sem_timedwait);
    LIB_FUNCTION("WBWzsRifCEA", "libkernel", 1, "libkernel", sem_trywait);
    LIB_FUNCTION("OiunYlyJUvc", "libkernel", 1, "libkernel", sem_unlink);
    LIB_FUNCTION("YCV5dGGBcCo", "libkernel", 1, "libkernel", sem_wait);
    LIB_FUNCTION("fZOeZIOEmLw", "libkernel", 1, "libkernel", send);
    LIB_FUNCTION("YA0r4LCkfeY", "libkernel", 1, "libkernel", sendfile);
    LIB_FUNCTION("aNeavPDNKzA", "libkernel", 1, "libkernel", sendmsg);
    LIB_FUNCTION("oBr313PppNE", "libkernel", 1, "libkernel", sendto);
    LIB_FUNCTION("mm0znr-xjqI", "libkernel", 1, "libkernel", set_phys_fmem_limit);
    LIB_FUNCTION("2VRU7xiqLO8", "libkernel", 1, "libkernel", setcontext);
    LIB_FUNCTION("4oKwKmeOKjM", "libkernel", 1, "libkernel", setegid);
    LIB_FUNCTION("HTxb6gmexa0", "libkernel", 1, "libkernel", seteuid);
    LIB_FUNCTION("M8VZ3iIlmyg", "libkernel", 1, "libkernel", setgroups);
    LIB_FUNCTION("hPWDGx8ioXQ", "libkernel", 1, "libkernel", setitimer);
    LIB_FUNCTION("TUC9xC1YQjs", "libkernel", 1, "libkernel", setpriority);
    LIB_FUNCTION("ROILLZdYZPc", "libkernel", 1, "libkernel", setregid);
    LIB_FUNCTION("6w8tPp+Yk6E", "libkernel", 1, "libkernel", setreuid);
    LIB_FUNCTION("4X0QwvuCfjc", "libkernel", 1, "libkernel", setrlimit);
    LIB_FUNCTION("fFxGkxF2bVo", "libkernel", 1, "libkernel", setsockopt);
    LIB_FUNCTION("VdXIDAbJ3tQ", "libkernel", 1, "libkernel", settimeofday);
    LIB_FUNCTION("JVmUZwK-HJU", "libkernel", 1, "libkernel", setuid);
    LIB_FUNCTION("QuJYZ2KVGGQ", "libkernel", 1, "libkernel", shm_open);
    LIB_FUNCTION("tPWsbOUGO8k", "libkernel", 1, "libkernel", shm_unlink);
    LIB_FUNCTION("TUuiYS2kE8s", "libkernel", 1, "libkernel", shutdown);
    LIB_FUNCTION("KiJEPEWRyUY", "libkernel", 1, "libkernel", sigaction);
    LIB_FUNCTION("JUimFtKe0Kc", "libkernel", 1, "libkernel", sigaddset);
    LIB_FUNCTION("sHziAegVp74", "libkernel", 1, "libkernel", sigaltstack);
    LIB_FUNCTION("Nd-u09VFSCA", "libkernel", 1, "libkernel", sigdelset);
    LIB_FUNCTION("+F7C-hdk7+E", "libkernel", 1, "libkernel", sigemptyset);
    LIB_FUNCTION("VkTAsrZDcJ0", "libkernel", 1, "libkernel", sigfillset);
    LIB_FUNCTION("JnNl8Xr-z4Y", "libkernel", 1, "libkernel", sigismember);
    LIB_FUNCTION("pebqbE5ws8s", "libkernel", 1, "libkernel", siglongjmp);
    LIB_FUNCTION("VADc3MNQ3cM", "libkernel", 1, "libkernel", signal);
    LIB_FUNCTION("hpoDTzy9Yy0", "libkernel", 1, "libkernel", sigpending);
    LIB_FUNCTION("aPcyptbOiZs", "libkernel", 1, "libkernel", sigprocmask);
    LIB_FUNCTION("TJG6tf+yJlY", "libkernel", 1, "libkernel", sigqueue);
    LIB_FUNCTION("mo0bFmWppIw", "libkernel", 1, "libkernel", sigreturn);
    LIB_FUNCTION("aRo9AhFUXcM", "libkernel", 1, "libkernel", sigsetjmp);
    LIB_FUNCTION("KZ-4qlqlpmo", "libkernel", 1, "libkernel", sigsuspend);
    LIB_FUNCTION("D2-dIoJ0ZtE", "libkernel", 1, "libkernel", sigtimedwait);
    LIB_FUNCTION("mrbHXqK8wkg", "libkernel", 1, "libkernel", sigwait);
    LIB_FUNCTION("Uq5BGthgbl4", "libkernel", 1, "libkernel", sigwaitinfo);
    LIB_FUNCTION("0wu33hunNdE", "libkernel", 1, "libkernel", sleep);
    LIB_FUNCTION("TU-d9PfIHPM", "libkernel", 1, "libkernel", socket);
    LIB_FUNCTION("MZb0GKT3mo8", "libkernel", 1, "libkernel", socketpair);
    LIB_FUNCTION("E6ao34wPw+U", "libkernel", 1, "libkernel", stat);
    LIB_FUNCTION("EXH1U-UBywI", "libkernel", 1, "libkernel", swapcontext);
    LIB_FUNCTION("Y2OqwJQ3lr8", "libkernel", 1, "libkernel", sync);
    LIB_FUNCTION("b7uXQmnfB2s", "libkernel", 1, "libkernel", sysarch);
    LIB_FUNCTION("mkawd0NA9ts", "libkernel", 1, "libkernel", sysconf);
    LIB_FUNCTION("DFmMT80xcNI", "libkernel", 1, "libkernel", sysctl);
    LIB_FUNCTION("MhC53TKmjVA", "libkernel", 1, "libkernel", sysctlbyname);
    LIB_FUNCTION("UkEV4hvMo1E", "libkernel", 1, "libkernel", sysctlnametomib);
    LIB_FUNCTION("EIZbVQs381s", "libkernel", 1, "libkernel", sysKernelGetIntdevModeForRcmgr);
    LIB_FUNCTION("7dulKcLcwHI", "libkernel", 1, "libkernel", sysKernelGetLowerLimitSysexVersion);
    LIB_FUNCTION("MMSo+k+Wp0Y", "libkernel", 1, "libkernel", sysKernelGetLowerLimitUpdVersion);
    LIB_FUNCTION("6jj29MbyzuI", "libkernel", 1, "libkernel", sysKernelGetManufacturingMode);
    LIB_FUNCTION("1U-s6o8XOcE", "libkernel", 1, "libkernel", sysKernelGetUpdVersion);
    LIB_FUNCTION("Jc6E7N+dHz0", "libkernel", 1, "libkernel", system);
    LIB_FUNCTION("brGGJWsZauw", "libkernel", 1, "libkernel", tcdrain);
    LIB_FUNCTION("OG8xRaGIpqk", "libkernel", 1, "libkernel", tcflow);
    LIB_FUNCTION("FxHW5NuEXsY", "libkernel", 1, "libkernel", tcflush);
    LIB_FUNCTION("5kBfZ40bAuk", "libkernel", 1, "libkernel", tcgetattr);
    LIB_FUNCTION("5OEl1mRhUm0", "libkernel", 1, "libkernel", tcgetpgrp);
    LIB_FUNCTION("7ga3x+36xrU", "libkernel", 1, "libkernel", tcgetsid);
    LIB_FUNCTION("vXE-dIUIZlE", "libkernel", 1, "libkernel", tcsendbreak);
    LIB_FUNCTION("La7xW-jcZwQ", "libkernel", 1, "libkernel", tcsetattr);
    LIB_FUNCTION("YMuesZTyTl4", "libkernel", 1, "libkernel", tcsetpgrp);
    LIB_FUNCTION("S76vfDNu6eI", "libkernel", 1, "libkernel", tcsetsid);
    LIB_FUNCTION("ayrtszI7GBg", "libkernel", 1, "libkernel", truncate);
    LIB_FUNCTION("VAzswvTOCzI", "libkernel", 1, "libkernel", unlink);
    LIB_FUNCTION("QcteRwbsnV0", "libkernel", 1, "libkernel", usleep);
    LIB_FUNCTION("GDuV00CHrUg", "libkernel", 1, "libkernel", utimes);
    LIB_FUNCTION("PlmVIwQdarI", "libkernel", 1, "libkernel", uuidgen);
    LIB_FUNCTION("ldVb3lc75PE", "libkernel", 1, "libkernel", wait);
    LIB_FUNCTION("NKF4F8SQyx4", "libkernel", 1, "libkernel", wait3);
    LIB_FUNCTION("dTnYqqLIQ6c", "libkernel", 1, "libkernel", waitpid);
    LIB_FUNCTION("FN4gaPmuFV8", "libkernel", 1, "libkernel", write);
    LIB_FUNCTION("Z2aKdxzS4KE", "libkernel", 1, "libkernel", writev);
    LIB_FUNCTION("N94a0T4F4+U", "libkernel", 1, "libkernel", Func_37DE1AD13E05E3E5);
    LIB_FUNCTION("cafDxa64sO4", "libkernel", 1, "libkernel", Func_71A7C3C5AEB8B0EE);
    LIB_FUNCTION("gpgi-GwE2Is", "libkernel", 1, "libkernel", Func_829822FC6C04D88B);
    LIB_FUNCTION("hmqw8GlN+tI", "libkernel", 1, "libkernel", Func_866AB0F0694DFAD2);
    LIB_FUNCTION("jMuNoBRCPUg", "libkernel", 1, "libkernel", Func_8CCB8DA014423D48);
    LIB_FUNCTION("qtHOLtFWq7Y", "libkernel", 1, "libkernel", Func_AAD1CE2ED156ABB6);
    LIB_FUNCTION("uV+YilcHqAs", "libkernel", 1, "libkernel", Func_B95F988A5707A80B);
    LIB_FUNCTION("vfYaxkxnJXQ", "libkernel", 1, "libkernel", Func_BDF61AC64C672574);
    LIB_FUNCTION("v+qTlNjF6kE", "libkernel", 1, "libkernel", Func_BFEA9394D8C5EA41);
    LIB_FUNCTION("x0DQK0TXDk0", "libkernel", 1, "libkernel", Func_C740D02B44D70E4D);
    LIB_FUNCTION("1v23w7Rnkic", "libkernel", 1, "libkernel", Func_D6FDB7C3B4679227);
    LIB_FUNCTION("2wKjID0iGVM", "libkernel", 1, "libkernel", Func_DB02A3203D221953);
    LIB_FUNCTION("2xg4JXvaJ6k", "libkernel", 1, "libkernel", Func_DB1838257BDA27A9);
    LIB_FUNCTION("-PNB3tfnD8c", "libkernel", 1, "libkernel", Func_FCF341DED7E70FC7);
    LIB_FUNCTION("-uPq82VbRMI", "libkernel", 1, "libkernel", Func_FEE3EAF3655B44C2);
    LIB_FUNCTION("usHTMoFoBTM", "libkernel_dmem_aliasing", 1, "libkernel",
                 sceKernelEnableDmemAliasing);
    LIB_FUNCTION("MR221Mwo0Pc", "libkernel_ps2emu", 1, "libkernel",
                 sceKernelJitCreateAliasOfSharedMemory);
    LIB_FUNCTION("avvJ3J0H0EY", "libkernel_ps2emu", 1, "libkernel",
                 sceKernelJitCreateSharedMemory);
    LIB_FUNCTION("9yxlvURJU6U", "libkernel_ps2emu", 1, "libkernel",
                 sceKernelJitGetSharedMemoryInfo);
    LIB_FUNCTION("YKT49TOLQWs", "libkernel_ps2emu", 1, "libkernel", sceKernelJitMapSharedMemory);
    LIB_FUNCTION("MZb0GKT3mo8", "libkernel_ps2emu", 1, "libkernel", socketpair);
    LIB_FUNCTION("aNz11fnnzi4", "libkernel_avlfmem", 1, "libkernel",
                 sceKernelAvailableFlexibleMemorySize);
    LIB_FUNCTION("NhL5qID2iho", "libkernel_cpumode", 1, "libkernel", sceKernelAddCpumodeEvent);
    LIB_FUNCTION("OwjivtyfODU", "libkernel_cpumode", 1, "libkernel", sceKernelDeleteCpumodeEvent);
    LIB_FUNCTION("VOx8NGmHXTs", "libkernel_cpumode", 1, "libkernel", sceKernelGetCpumode);
    LIB_FUNCTION("VjBtg5Btl94", "libkernel_cpumode", 1, "libkernel", sceKernelSetFsstParam);
    LIB_FUNCTION("BtJ3gH33xss", "libkernel_cpumode", 1, "libkernel", sceKernelYieldCpumode);
    LIB_FUNCTION("YJ7JscWubcU", "libkernel_exception", 1, "libkernel",
                 sceKernelAddGpuExceptionEvent);
    LIB_FUNCTION("xRwvvcfZfHM", "libkernel_exception", 1, "libkernel", sceKernelBacktraceSelf);
    LIB_FUNCTION("8skggWXlSqM", "libkernel_exception", 1, "libkernel",
                 sceKernelDeleteGpuExceptionEvent);
    LIB_FUNCTION("WkwEd3N7w0Y", "libkernel_exception", 1, "libkernel",
                 sceKernelInstallExceptionHandler);
    LIB_FUNCTION("Qhv5ARAoOEc", "libkernel_exception", 1, "libkernel",
                 sceKernelRemoveExceptionHandler);
    LIB_FUNCTION("mpxAdqW7dKY", "libkernel_cpumode_platform", 1, "libkernel", sceKernelIsProspero);
    LIB_FUNCTION("usHTMoFoBTM", "libkernel_dmem_aliasing2", 1, "libkernel",
                 sceKernelEnableDmemAliasing);
    LIB_FUNCTION("usHTMoFoBTM", "libkernel_dmem_aliasing2_for_dev", 1, "libkernel",
                 sceKernelEnableDmemAliasing);
    LIB_FUNCTION("DLORcroUqbc", "libSceOpenPsId", 1, "libkernel", sceKernelGetOpenPsId);
    LIB_FUNCTION("wdUufa9g-D8", "libkernel_jvm", 1, "libkernel", dup2);
    LIB_FUNCTION("Wh7HbV7JFqc", "libkernel_jvm", 1, "libkernel", getrlimit);
    LIB_FUNCTION("PfccT7qURYE", "libkernel_jvm", 1, "libkernel", ioctl);
    LIB_FUNCTION("W0xkN0+ZkCE", "libkernel_jvm", 1, "libkernel", kill);
    LIB_FUNCTION("ku7D4q1Y9PI", "libkernel_jvm", 1, "libkernel", poll);
    LIB_FUNCTION("yH-uQW3LbX0", "libkernel_jvm", 1, "libkernel", pthread_kill);
    LIB_FUNCTION("wJABa1X4+ec", "libkernel_jvm", 1, "libkernel",
                 sceKernelGetExecutableModuleHandle);
    LIB_FUNCTION("MR221Mwo0Pc", "libkernel_jvm", 1, "libkernel",
                 sceKernelJitCreateAliasOfSharedMemory);
    LIB_FUNCTION("avvJ3J0H0EY", "libkernel_jvm", 1, "libkernel", sceKernelJitCreateSharedMemory);
    LIB_FUNCTION("9yxlvURJU6U", "libkernel_jvm", 1, "libkernel", sceKernelJitGetSharedMemoryInfo);
    LIB_FUNCTION("YKT49TOLQWs", "libkernel_jvm", 1, "libkernel", sceKernelJitMapSharedMemory);
    LIB_FUNCTION("4X0QwvuCfjc", "libkernel_jvm", 1, "libkernel", setrlimit);
    LIB_FUNCTION("KiJEPEWRyUY", "libkernel_jvm", 1, "libkernel", sigaction);
    LIB_FUNCTION("JUimFtKe0Kc", "libkernel_jvm", 1, "libkernel", sigaddset);
    LIB_FUNCTION("Nd-u09VFSCA", "libkernel_jvm", 1, "libkernel", sigdelset);
    LIB_FUNCTION("+F7C-hdk7+E", "libkernel_jvm", 1, "libkernel", sigemptyset);
    LIB_FUNCTION("VkTAsrZDcJ0", "libkernel_jvm", 1, "libkernel", sigfillset);
    LIB_FUNCTION("JnNl8Xr-z4Y", "libkernel_jvm", 1, "libkernel", sigismember);
    LIB_FUNCTION("aPcyptbOiZs", "libkernel_jvm", 1, "libkernel", sigprocmask);
    LIB_FUNCTION("KZ-4qlqlpmo", "libkernel_jvm", 1, "libkernel", sigsuspend);
    LIB_FUNCTION("MZb0GKT3mo8", "libkernel_jvm", 1, "libkernel", socketpair);
    LIB_FUNCTION("mkawd0NA9ts", "libkernel_jvm", 1, "libkernel", sysconf);
    LIB_FUNCTION("DFmMT80xcNI", "libkernel_jvm", 1, "libkernel", sysctl);
    LIB_FUNCTION("ClMdHuu+R1A", "libkernel_module_extension", 1, "libkernel",
                 Func_0A531D1EEBBE4750);
    LIB_FUNCTION("WkwEd3N7w0Y", "libkernel_unity", 1, "libkernel",
                 sceKernelInstallExceptionHandler);
    LIB_FUNCTION("il03nluKfMk", "libkernel_unity", 1, "libkernel", sceKernelRaiseException);
    LIB_FUNCTION("Qhv5ARAoOEc", "libkernel_unity", 1, "libkernel",
                 sceKernelRemoveExceptionHandler);
    LIB_FUNCTION("QgsKEUfkqMA", "libkernel_module_info", 1, "libkernel", sceKernelGetModuleInfo2);
    LIB_FUNCTION("ZzzC3ZGVAkc", "libkernel_module_info", 1, "libkernel", sceKernelGetModuleList2);
    LIB_FUNCTION("21+rb7xOlJk", "libkernel_module_load_check", 1, "libkernel",
                 sceKernelIsModuleLoaded);
    LIB_FUNCTION("2SKEx6bSq-4", "libkernel_pre250mmap", 1, "libkernel", sceKernelBatchMap);
    LIB_FUNCTION("L-Q3LEjIbgA", "libkernel_pre250mmap", 1, "libkernel", sceKernelMapDirectMemory);
    LIB_FUNCTION("NcaWUxfMNIQ", "libkernel_pre250mmap", 1, "libkernel",
                 sceKernelMapNamedDirectMemory);
    LIB_FUNCTION("8vE6Z6VEYyk", "libkernel_psmkit", 1, "libkernel", access);
    LIB_FUNCTION("6mMQ1MSPW-Q", "libkernel_psmkit", 1, "libkernel", chdir);
    LIB_FUNCTION("iiQjzvfWDq0", "libkernel_psmkit", 1, "libkernel", dup);
    LIB_FUNCTION("wdUufa9g-D8", "libkernel_psmkit", 1, "libkernel", dup2);
    LIB_FUNCTION("PfccT7qURYE", "libkernel_psmkit", 1, "libkernel", ioctl);
    LIB_FUNCTION("DRGXpDDh8Ng", "libkernel_psmkit", 1, "libkernel", lstat);
    LIB_FUNCTION("-Jp7F+pXxNg", "libkernel_psmkit", 1, "libkernel", pipe);
    LIB_FUNCTION("ku7D4q1Y9PI", "libkernel_psmkit", 1, "libkernel", poll);
    LIB_FUNCTION("EZ8h70dtFLg", "libkernel_psmkit", 1, "libkernel", pthread_cond_setname_np);
    LIB_FUNCTION("YkGOXpJEtO8", "libkernel_psmkit", 1, "libkernel", pthread_get_user_context_np);
    LIB_FUNCTION("yH-uQW3LbX0", "libkernel_psmkit", 1, "libkernel", pthread_kill);
    LIB_FUNCTION("nbQ0bXMRlhk", "libkernel_psmkit", 1, "libkernel", pthread_mutex_reltimedlock_np);
    LIB_FUNCTION("nTxZBp8YNGc", "libkernel_psmkit", 1, "libkernel", pthread_mutex_setname_np);
    LIB_FUNCTION("QRdE7dBfNks", "libkernel_psmkit", 1, "libkernel",
                 pthread_resume_user_context_np);
    LIB_FUNCTION("cfjAjVTFG6A", "libkernel_psmkit", 1, "libkernel",
                 pthread_suspend_user_context_np);
    LIB_FUNCTION("OMDRKKAZ8I4", "libkernel_psmkit", 1, "libkernel", sceKernelDebugRaiseException);
    LIB_FUNCTION("DKWTYfo-jMY", "libkernel_psmkit", 1, "libkernel",
                 sceKernelDebugRaiseExceptionWithContext);
    LIB_FUNCTION("JGfTMBOdUJo", "libkernel_psmkit", 1, "libkernel",
                 sceKernelGetFsSandboxRandomWord);
    LIB_FUNCTION("f7KBOafysXo", "libkernel_psmkit", 1, "libkernel",
                 sceKernelGetModuleInfoFromAddr);
    LIB_FUNCTION("MR221Mwo0Pc", "libkernel_psmkit", 1, "libkernel",
                 sceKernelJitCreateAliasOfSharedMemory);
    LIB_FUNCTION("avvJ3J0H0EY", "libkernel_psmkit", 1, "libkernel",
                 sceKernelJitCreateSharedMemory);
    LIB_FUNCTION("YKT49TOLQWs", "libkernel_psmkit", 1, "libkernel", sceKernelJitMapSharedMemory);
    LIB_FUNCTION("MwhHNKdBXq8", "libkernel_psmkit", 1, "libkernel", sceKernelOpenSema);
    LIB_FUNCTION("-W4xI5aVI8w", "libkernel_psmkit", 1, "libkernel", sceKernelSetProcessProperty);
    LIB_FUNCTION("-wUggz2S5yk", "libkernel_psmkit", 1, "libkernel", sem_setname);
    LIB_FUNCTION("KiJEPEWRyUY", "libkernel_psmkit", 1, "libkernel", sigaction);
    LIB_FUNCTION("JUimFtKe0Kc", "libkernel_psmkit", 1, "libkernel", sigaddset);
    LIB_FUNCTION("sHziAegVp74", "libkernel_psmkit", 1, "libkernel", sigaltstack);
    LIB_FUNCTION("Nd-u09VFSCA", "libkernel_psmkit", 1, "libkernel", sigdelset);
    LIB_FUNCTION("+F7C-hdk7+E", "libkernel_psmkit", 1, "libkernel", sigemptyset);
    LIB_FUNCTION("VkTAsrZDcJ0", "libkernel_psmkit", 1, "libkernel", sigfillset);
    LIB_FUNCTION("JnNl8Xr-z4Y", "libkernel_psmkit", 1, "libkernel", sigismember);
    LIB_FUNCTION("VADc3MNQ3cM", "libkernel_psmkit", 1, "libkernel", signal);
    LIB_FUNCTION("aPcyptbOiZs", "libkernel_psmkit", 1, "libkernel", sigprocmask);
    LIB_FUNCTION("KZ-4qlqlpmo", "libkernel_psmkit", 1, "libkernel", sigsuspend);
    LIB_FUNCTION("MZb0GKT3mo8", "libkernel_psmkit", 1, "libkernel", socketpair);
    LIB_FUNCTION("mkawd0NA9ts", "libkernel_psmkit", 1, "libkernel", sysconf);
    LIB_FUNCTION("PfccT7qURYE", "libkernel_qadisc", 1, "libkernel", ioctl);
    LIB_FUNCTION("CA5jcDb2vYI", "libkernel_qadisc", 1, "libkernel",
                 sceKernelGetSocPowerConsumption);
    LIB_FUNCTION("U0NKl-rjhYA", "libkernel_qadisc", 1, "libkernel", sceKernelIccGetCountTime);
    LIB_FUNCTION("8TqMzIggthc", "libkernel_qadisc", 1, "libkernel", sceKernelIccGetErrLog);
    LIB_FUNCTION("C+i9gJY4A1I", "libkernel_qadisc", 1, "libkernel", sceKernelIccGetHwInfo);
    LIB_FUNCTION("L21PBFwqIiM", "libkernel_qadisc", 1, "libkernel", sceKernelIccGetSysEventLog);
    LIB_FUNCTION("gpgi-GwE2Is", "libkernel_qadisc", 1, "libkernel", Func_829822FC6C04D88B);
    LIB_FUNCTION("uV+YilcHqAs", "libkernel_qadisc", 1, "libkernel", Func_B95F988A5707A80B);
    LIB_FUNCTION("nSSPVGJLMjE", "libkernel_sysc_se", 1, "libkernel", __freeze);
    LIB_FUNCTION("eaiyhIBmf34", "libkernel_sysc_se", 1, "libkernel", sysc_e00);
    LIB_FUNCTION("XPlTYt2TOg0", "libkernel_sysc_se", 1, "libkernel", sysc_s00);
    LIB_FUNCTION("+YX0z-GUSNw", "libSceCoredump", 1, "libkernel", sceCoredumpAttachMemoryRegion);
    LIB_FUNCTION("MEJ7tc7ThwM", "libSceCoredump", 1, "libkernel",
                 sceCoredumpAttachMemoryRegionAsUserFile);
    LIB_FUNCTION("5nc2gdLNsok", "libSceCoredump", 1, "libkernel", sceCoredumpAttachUserFile);
    LIB_FUNCTION("DoKHmUw1yiQ", "libSceCoredump", 1, "libkernel", sceCoredumpAttachUserMemoryFile);
    LIB_FUNCTION("gzLt9Qrauk0", "libSceCoredump", 1, "libkernel", sceCoredumpConfigDumpMode);
    LIB_FUNCTION("dei8oUx6DbU", "libSceCoredump", 1, "libkernel", sceCoredumpDebugTextOut);
    LIB_FUNCTION("kK0DUW1Ukgc", "libSceCoredump", 1, "libkernel", sceCoredumpGetStopInfoCpu);
    LIB_FUNCTION("nsyWCTsI3MY", "libSceCoredump", 1, "libkernel", sceCoredumpGetStopInfoGpu);
    LIB_FUNCTION("ShChva57wIM", "libSceCoredump", 1, "libkernel", sceCoredumpGetThreadContextInfo);
    LIB_FUNCTION("qCDIxJL+IN8", "libSceCoredump", 1, "libkernel",
                 sceCoredumpInternalGetThreadContextInfo);
    LIB_FUNCTION("8zLSfEfW5AU", "libSceCoredump", 1, "libkernel",
                 sceCoredumpRegisterCoredumpHandler);
    LIB_FUNCTION("Uxqkdta7wEg", "libSceCoredump", 1, "libkernel", sceCoredumpSetUserDataType);
    LIB_FUNCTION("fFkhOgztiCA", "libSceCoredump", 1, "libkernel",
                 sceCoredumpUnregisterCoredumpHandler);
    LIB_FUNCTION("Dbbkj6YHWdo", "libSceCoredump", 1, "libkernel", sceCoredumpWriteUserData);
    LIB_FUNCTION("mIkJUpP5vKo", "libSceCoredump", 1, "libkernel", Func_9889095293F9BCAA);
    LIB_FUNCTION("1Pw5n31Ayxc", "libSceCoredump_debug", 1, "libkernel",
                 sceCoredumpDebugForceCoredumpOnAppClose);
    LIB_FUNCTION("G420P25pN5Y", "libSceCoredump_debug", 1, "libkernel",
                 sceCoredumpDebugTriggerCoredump);
    LIB_FUNCTION("3e+4Iv7IJ8U", "libScePosix", 1, "libkernel", accept);
    LIB_FUNCTION("KuOmgKoqCdY", "libScePosix", 1, "libkernel", bind);
    LIB_FUNCTION("ixrw0h2tWuI", "libScePosix", 1, "libkernel", chflags);
    LIB_FUNCTION("z0dtnPxYgtg", "libScePosix", 1, "libkernel", chmod);
    LIB_FUNCTION("smIj7eqzZE8", "libScePosix", 1, "libkernel", clock_getres);
    LIB_FUNCTION("lLMT9vJAck0", "libScePosix", 1, "libkernel", clock_gettime);
    LIB_FUNCTION("bY-PO6JhzhQ", "libScePosix", 1, "libkernel", close);
    LIB_FUNCTION("XVL8So3QJUk", "libScePosix", 1, "libkernel", connect);
    LIB_FUNCTION("5AMS0IntU8I", "libScePosix", 1, "libkernel", creat);
    LIB_FUNCTION("UJrQCyYpyic", "libScePosix", 1, "libkernel", fchflags);
    LIB_FUNCTION("n01yNbQO5W4", "libScePosix", 1, "libkernel", fchmod);
    LIB_FUNCTION("8nY19bKoiZk", "libScePosix", 1, "libkernel", fcntl);
    LIB_FUNCTION("9eMlfusH4sU", "libScePosix", 1, "libkernel", flock);
    LIB_FUNCTION("mqQMh1zPPT8", "libScePosix", 1, "libkernel", fstat);
    LIB_FUNCTION("juWbTNM+8hw", "libScePosix", 1, "libkernel", fsync);
    LIB_FUNCTION("ih4CD9-gghM", "libScePosix", 1, "libkernel", ftruncate);
    LIB_FUNCTION("+0EDo7YzcoU", "libScePosix", 1, "libkernel", futimes);
    LIB_FUNCTION("dar03AOn+nM", "libScePosix", 1, "libkernel", getcontext);
    LIB_FUNCTION("2G6i6hMIUUY", "libScePosix", 1, "libkernel", getdents);
    LIB_FUNCTION("f09KvIPy-QY", "libScePosix", 1, "libkernel", getdirentries);
    LIB_FUNCTION("sZuwaDPATKs", "libScePosix", 1, "libkernel", getdtablesize);
    LIB_FUNCTION("k+AXqu2-eBc", "libScePosix", 1, "libkernel", getpagesize);
    LIB_FUNCTION("TXFFFiNldU8", "libScePosix", 1, "libkernel", getpeername);
    LIB_FUNCTION("HoLVWNanBBc", "libScePosix", 1, "libkernel", getpid);
    LIB_FUNCTION("RenI1lL1WFk", "libScePosix", 1, "libkernel", getsockname);
    LIB_FUNCTION("6O8EwYOgH9Y", "libScePosix", 1, "libkernel", getsockopt);
    LIB_FUNCTION("n88vx3C5nW8", "libScePosix", 1, "libkernel", gettimeofday);
    LIB_FUNCTION("K1S8oc61xiM", "libScePosix", 1, "libkernel", htonl);
    LIB_FUNCTION("jogUIsOV3-U", "libScePosix", 1, "libkernel", htons);
    LIB_FUNCTION("5jRCs2axtr4", "libScePosix", 1, "libkernel", inet_ntop);
    LIB_FUNCTION("4n51s0zEf0c", "libScePosix", 1, "libkernel", inet_pton);
    LIB_FUNCTION("RW-GEfpnsqg", "libScePosix", 1, "libkernel", kevent);
    LIB_FUNCTION("nh2IFMgKTv8", "libScePosix", 1, "libkernel", kqueue);
    LIB_FUNCTION("pxnCmagrtao", "libScePosix", 1, "libkernel", listen);
    LIB_FUNCTION("Oy6IpwgtYOk", "libScePosix", 1, "libkernel", lseek);
    LIB_FUNCTION("Jahsnh4KKkg", "libScePosix", 1, "libkernel", madvise);
    LIB_FUNCTION("JGMio+21L4c", "libScePosix", 1, "libkernel", mkdir);
    LIB_FUNCTION("mTBZfEal2Bw", "libScePosix", 1, "libkernel", mlock);
    LIB_FUNCTION("x7g7Ebeo8-U", "libScePosix", 1, "libkernel", mlockall);
    LIB_FUNCTION("BPE9s9vQQXo", "libScePosix", 1, "libkernel", mmap);
    LIB_FUNCTION("YQOfxL4QfeU", "libScePosix", 1, "libkernel", mprotect);
    LIB_FUNCTION("tZY4+SZNFhA", "libScePosix", 1, "libkernel", msync);
    LIB_FUNCTION("OG4RsDwLguo", "libScePosix", 1, "libkernel", munlock);
    LIB_FUNCTION("NpLBpgVV7PU", "libScePosix", 1, "libkernel", munlockall);
    LIB_FUNCTION("UqDGjXA5yUM", "libScePosix", 1, "libkernel", munmap);
    LIB_FUNCTION("yS8U2TGCe1A", "libScePosix", 1, "libkernel", nanosleep);
    LIB_FUNCTION("jct5WjixLgk", "libScePosix", 1, "libkernel", ntohl);
    LIB_FUNCTION("oLFi+HuZ7hY", "libScePosix", 1, "libkernel", ntohs);
    LIB_FUNCTION("wuCroIGjt2g", "libScePosix", 1, "libkernel", open);
    LIB_FUNCTION("ezv-RSBNKqI", "libScePosix", 1, "libkernel", pread);
    LIB_FUNCTION("ZaRzaapAZwM", "libScePosix", 1, "libkernel", preadv);
    LIB_FUNCTION("zHchY8ft5pk", "libScePosix", 1, "libkernel", pthread_attr_destroy);
    LIB_FUNCTION("Ucsu-OK+els", "libScePosix", 1, "libkernel", pthread_attr_get_np);
    LIB_FUNCTION("VUT1ZSrHT0I", "libScePosix", 1, "libkernel", pthread_attr_getdetachstate);
    LIB_FUNCTION("JNkVVsVDmOk", "libScePosix", 1, "libkernel", pthread_attr_getguardsize);
    LIB_FUNCTION("oLjPqUKhzes", "libScePosix", 1, "libkernel", pthread_attr_getinheritsched);
    LIB_FUNCTION("qlk9pSLsUmM", "libScePosix", 1, "libkernel", pthread_attr_getschedparam);
    LIB_FUNCTION("RtLRV-pBTTY", "libScePosix", 1, "libkernel", pthread_attr_getschedpolicy);
    LIB_FUNCTION("e2G+cdEkOmU", "libScePosix", 1, "libkernel", pthread_attr_getscope);
    LIB_FUNCTION("vQm4fDEsWi8", "libScePosix", 1, "libkernel", pthread_attr_getstack);
    LIB_FUNCTION("DxmIMUQ-wXY", "libScePosix", 1, "libkernel", pthread_attr_getstackaddr);
    LIB_FUNCTION("0qOtCR-ZHck", "libScePosix", 1, "libkernel", pthread_attr_getstacksize);
    LIB_FUNCTION("wtkt-teR1so", "libScePosix", 1, "libkernel", pthread_attr_init);
    LIB_FUNCTION("E+tyo3lp5Lw", "libScePosix", 1, "libkernel", pthread_attr_setdetachstate);
    LIB_FUNCTION("JKyG3SWyA10", "libScePosix", 1, "libkernel", pthread_attr_setguardsize);
    LIB_FUNCTION("7ZlAakEf0Qg", "libScePosix", 1, "libkernel", pthread_attr_setinheritsched);
    LIB_FUNCTION("euKRgm0Vn2M", "libScePosix", 1, "libkernel", pthread_attr_setschedparam);
    LIB_FUNCTION("JarMIy8kKEY", "libScePosix", 1, "libkernel", pthread_attr_setschedpolicy);
    LIB_FUNCTION("xesmlSI-KCI", "libScePosix", 1, "libkernel", pthread_attr_setscope);
    LIB_FUNCTION("-SrbXpGR1f0", "libScePosix", 1, "libkernel", pthread_attr_setstack);
    LIB_FUNCTION("suCrEbr0xIQ", "libScePosix", 1, "libkernel", pthread_attr_setstackaddr);
    LIB_FUNCTION("2Q0z6rnBrTE", "libScePosix", 1, "libkernel", pthread_attr_setstacksize);
    LIB_FUNCTION("+Pqub9HZCPo", "libScePosix", 1, "libkernel", pthread_barrier_destroy);
    LIB_FUNCTION("ZsXLFtd2jqQ", "libScePosix", 1, "libkernel", pthread_barrier_init);
    LIB_FUNCTION("CawZgCYqXWk", "libScePosix", 1, "libkernel", pthread_barrier_wait);
    LIB_FUNCTION("AsCQCYTbe80", "libScePosix", 1, "libkernel", pthread_barrierattr_destroy);
    LIB_FUNCTION("a5JZMyjFV68", "libScePosix", 1, "libkernel", pthread_barrierattr_getpshared);
    LIB_FUNCTION("4nqCnLJSvck", "libScePosix", 1, "libkernel", pthread_barrierattr_init);
    LIB_FUNCTION("jqrGJJxFhmU", "libScePosix", 1, "libkernel", pthread_barrierattr_setpshared);
    LIB_FUNCTION("0D4-FVvEikw", "libScePosix", 1, "libkernel", pthread_cancel);
    LIB_FUNCTION("RVxb0Ssa5t0", "libScePosix", 1, "libkernel", pthread_cleanup_pop);
    LIB_FUNCTION("4ZeZWcMsAV0", "libScePosix", 1, "libkernel", pthread_cleanup_push);
    LIB_FUNCTION("mkx2fVhNMsg", "libScePosix", 1, "libkernel", pthread_cond_broadcast);
    LIB_FUNCTION("RXXqi4CtF8w", "libScePosix", 1, "libkernel", pthread_cond_destroy);
    LIB_FUNCTION("0TyVk4MSLt0", "libScePosix", 1, "libkernel", pthread_cond_init);
    LIB_FUNCTION("2MOy+rUfuhQ", "libScePosix", 1, "libkernel", pthread_cond_signal);
    LIB_FUNCTION("CI6Qy73ae10", "libScePosix", 1, "libkernel", pthread_cond_signalto_np);
    LIB_FUNCTION("27bAgiJmOh0", "libScePosix", 1, "libkernel", pthread_cond_timedwait);
    LIB_FUNCTION("Op8TBGY5KHg", "libScePosix", 1, "libkernel", pthread_cond_wait);
    LIB_FUNCTION("dJcuQVn6-Iw", "libScePosix", 1, "libkernel", pthread_condattr_destroy);
    LIB_FUNCTION("cTDYxTUNPhM", "libScePosix", 1, "libkernel", pthread_condattr_getclock);
    LIB_FUNCTION("h0qUqSuOmC8", "libScePosix", 1, "libkernel", pthread_condattr_getpshared);
    LIB_FUNCTION("mKoTx03HRWA", "libScePosix", 1, "libkernel", pthread_condattr_init);
    LIB_FUNCTION("EjllaAqAPZo", "libScePosix", 1, "libkernel", pthread_condattr_setclock);
    LIB_FUNCTION("3BpP850hBT4", "libScePosix", 1, "libkernel", pthread_condattr_setpshared);
    LIB_FUNCTION("OxhIB8LB-PQ", "libScePosix", 1, "libkernel", pthread_create);
    LIB_FUNCTION("Jmi+9w9u0E4", "libScePosix", 1, "libkernel", pthread_create_name_np);
    LIB_FUNCTION("+U1R4WtXvoc", "libScePosix", 1, "libkernel", pthread_detach);
    LIB_FUNCTION("7Xl257M4VNI", "libScePosix", 1, "libkernel", pthread_equal);
    LIB_FUNCTION("FJrT5LuUBAU", "libScePosix", 1, "libkernel", pthread_exit);
    LIB_FUNCTION("s+QHU9RLHS4", "libScePosix", 1, "libkernel", pthread_getconcurrency);
    LIB_FUNCTION("nnoxZUHK+SA", "libScePosix", 1, "libkernel", pthread_getcpuclockid);
    LIB_FUNCTION("9HzfhdtESio", "libScePosix", 1, "libkernel", pthread_getname_np);
    LIB_FUNCTION("aO+WS2xWuo4", "libScePosix", 1, "libkernel", pthread_getprio);
    LIB_FUNCTION("FIs3-UQT9sg", "libScePosix", 1, "libkernel", pthread_getschedparam);
    LIB_FUNCTION("0-KXaS70xy4", "libScePosix", 1, "libkernel", pthread_getspecific);
    LIB_FUNCTION("h9CcP3J0oVM", "libScePosix", 1, "libkernel", pthread_join);
    LIB_FUNCTION("mqULNdimTn0", "libScePosix", 1, "libkernel", pthread_key_create);
    LIB_FUNCTION("6BpEZuDT7YI", "libScePosix", 1, "libkernel", pthread_key_delete);
    LIB_FUNCTION("ltCfaGr2JGE", "libScePosix", 1, "libkernel", pthread_mutex_destroy);
    LIB_FUNCTION("itv-U5mFPso", "libScePosix", 1, "libkernel", pthread_mutex_getprioceiling);
    LIB_FUNCTION("ttHNfU+qDBU", "libScePosix", 1, "libkernel", pthread_mutex_init);
    LIB_FUNCTION("7H0iTOciTLo", "libScePosix", 1, "libkernel", pthread_mutex_lock);
    LIB_FUNCTION("XS3kGVt4q+4", "libScePosix", 1, "libkernel", pthread_mutex_setprioceiling);
    LIB_FUNCTION("Io9+nTKXZtA", "libScePosix", 1, "libkernel", pthread_mutex_timedlock);
    LIB_FUNCTION("K-jXhbt2gn4", "libScePosix", 1, "libkernel", pthread_mutex_trylock);
    LIB_FUNCTION("2Z+PpY6CaJg", "libScePosix", 1, "libkernel", pthread_mutex_unlock);
    LIB_FUNCTION("HF7lK46xzjY", "libScePosix", 1, "libkernel", pthread_mutexattr_destroy);
    LIB_FUNCTION("+m8+quqOwhM", "libScePosix", 1, "libkernel", pthread_mutexattr_getprioceiling);
    LIB_FUNCTION("yDaWxUE50s0", "libScePosix", 1, "libkernel", pthread_mutexattr_getprotocol);
    LIB_FUNCTION("PmL-TwKUzXI", "libScePosix", 1, "libkernel", pthread_mutexattr_getpshared);
    LIB_FUNCTION("GZFlI7RhuQo", "libScePosix", 1, "libkernel", pthread_mutexattr_gettype);
    LIB_FUNCTION("dQHWEsJtoE4", "libScePosix", 1, "libkernel", pthread_mutexattr_init);
    LIB_FUNCTION("ZLvf6lVAc4M", "libScePosix", 1, "libkernel", pthread_mutexattr_setprioceiling);
    LIB_FUNCTION("5txKfcMUAok", "libScePosix", 1, "libkernel", pthread_mutexattr_setprotocol);
    LIB_FUNCTION("EXv3ztGqtDM", "libScePosix", 1, "libkernel", pthread_mutexattr_setpshared);
    LIB_FUNCTION("mDmgMOGVUqg", "libScePosix", 1, "libkernel", pthread_mutexattr_settype);
    LIB_FUNCTION("Z4QosVuAsA0", "libScePosix", 1, "libkernel", pthread_once);
    LIB_FUNCTION("9vyP6Z7bqzc", "libScePosix", 1, "libkernel", pthread_rename_np);
    LIB_FUNCTION("1471ajPzxh0", "libScePosix", 1, "libkernel", pthread_rwlock_destroy);
    LIB_FUNCTION("ytQULN-nhL4", "libScePosix", 1, "libkernel", pthread_rwlock_init);
    LIB_FUNCTION("iGjsr1WAtI0", "libScePosix", 1, "libkernel", pthread_rwlock_rdlock);
    LIB_FUNCTION("lb8lnYo-o7k", "libScePosix", 1, "libkernel", pthread_rwlock_timedrdlock);
    LIB_FUNCTION("9zklzAl9CGM", "libScePosix", 1, "libkernel", pthread_rwlock_timedwrlock);
    LIB_FUNCTION("SFxTMOfuCkE", "libScePosix", 1, "libkernel", pthread_rwlock_tryrdlock);
    LIB_FUNCTION("XhWHn6P5R7U", "libScePosix", 1, "libkernel", pthread_rwlock_trywrlock);
    LIB_FUNCTION("EgmLo6EWgso", "libScePosix", 1, "libkernel", pthread_rwlock_unlock);
    LIB_FUNCTION("sIlRvQqsN2Y", "libScePosix", 1, "libkernel", pthread_rwlock_wrlock);
    LIB_FUNCTION("qsdmgXjqSgk", "libScePosix", 1, "libkernel", pthread_rwlockattr_destroy);
    LIB_FUNCTION("VqEMuCv-qHY", "libScePosix", 1, "libkernel", pthread_rwlockattr_getpshared);
    LIB_FUNCTION("l+bG5fsYkhg", "libScePosix", 1, "libkernel", pthread_rwlockattr_gettype_np);
    LIB_FUNCTION("xFebsA4YsFI", "libScePosix", 1, "libkernel", pthread_rwlockattr_init);
    LIB_FUNCTION("OuKg+kRDD7U", "libScePosix", 1, "libkernel", pthread_rwlockattr_setpshared);
    LIB_FUNCTION("8NuOHiTr1Vw", "libScePosix", 1, "libkernel", pthread_rwlockattr_settype_np);
    LIB_FUNCTION("EotR8a3ASf4", "libScePosix", 1, "libkernel", pthread_self);
    LIB_FUNCTION("lZzFeSxPl08", "libScePosix", 1, "libkernel", pthread_setcancelstate);
    LIB_FUNCTION("2dEhvvjlq30", "libScePosix", 1, "libkernel", pthread_setcanceltype);
    LIB_FUNCTION("fBG1gHx1RlI", "libScePosix", 1, "libkernel", pthread_setconcurrency);
    LIB_FUNCTION("a2P9wYGeZvc", "libScePosix", 1, "libkernel", pthread_setprio);
    LIB_FUNCTION("Xs9hdiD7sAA", "libScePosix", 1, "libkernel", pthread_setschedparam);
    LIB_FUNCTION("WrOLvHU0yQM", "libScePosix", 1, "libkernel", pthread_setspecific);
    LIB_FUNCTION("JZKw5+Wrnaw", "libScePosix", 1, "libkernel", pthread_sigmask);
    LIB_FUNCTION("nYBrkGDqxh8", "libScePosix", 1, "libkernel", pthread_testcancel);
    LIB_FUNCTION("B5GmVDKwpn0", "libScePosix", 1, "libkernel", pthread_yield);
    LIB_FUNCTION("C2kJ-byS5rM", "libScePosix", 1, "libkernel", pwrite);
    LIB_FUNCTION("FCcmRZhWtOk", "libScePosix", 1, "libkernel", pwritev);
    LIB_FUNCTION("AqBioC2vF3I", "libScePosix", 1, "libkernel", read);
    LIB_FUNCTION("I7ImcLds-uU", "libScePosix", 1, "libkernel", readv);
    LIB_FUNCTION("Ez8xjo9UF4E", "libScePosix", 1, "libkernel", recv);
    LIB_FUNCTION("lUk6wrGXyMw", "libScePosix", 1, "libkernel", recvfrom);
    LIB_FUNCTION("hI7oVeOluPM", "libScePosix", 1, "libkernel", recvmsg);
    LIB_FUNCTION("NN01qLRhiqU", "libScePosix", 1, "libkernel", rename);
    LIB_FUNCTION("c7ZnT7V1B98", "libScePosix", 1, "libkernel", rmdir);
    LIB_FUNCTION("CBNtXOoef-E", "libScePosix", 1, "libkernel", sched_get_priority_max);
    LIB_FUNCTION("m0iS6jNsXds", "libScePosix", 1, "libkernel", sched_get_priority_min);
    LIB_FUNCTION("O6gKl8uvGyE", "libScePosix", 1, "libkernel", sched_getparam);
    LIB_FUNCTION("yawdym+zDvw", "libScePosix", 1, "libkernel", sched_setparam);
    LIB_FUNCTION("6XG4B33N09g", "libScePosix", 1, "libkernel", sched_yield);
    LIB_FUNCTION("T8fER+tIGgk", "libScePosix", 1, "libkernel", select);
    LIB_FUNCTION("cDW233RAwWo", "libScePosix", 1, "libkernel", sem_destroy);
    LIB_FUNCTION("Bq+LRV-N6Hk", "libScePosix", 1, "libkernel", sem_getvalue);
    LIB_FUNCTION("pDuPEf3m4fI", "libScePosix", 1, "libkernel", sem_init);
    LIB_FUNCTION("IKP8typ0QUk", "libScePosix", 1, "libkernel", sem_post);
    LIB_FUNCTION("4SbrhCozqQU", "libScePosix", 1, "libkernel", sem_reltimedwait_np);
    LIB_FUNCTION("w5IHyvahg-o", "libScePosix", 1, "libkernel", sem_timedwait);
    LIB_FUNCTION("WBWzsRifCEA", "libScePosix", 1, "libkernel", sem_trywait);
    LIB_FUNCTION("OiunYlyJUvc", "libScePosix", 1, "libkernel", sem_unlink);
    LIB_FUNCTION("YCV5dGGBcCo", "libScePosix", 1, "libkernel", sem_wait);
    LIB_FUNCTION("fZOeZIOEmLw", "libScePosix", 1, "libkernel", send);
    LIB_FUNCTION("aNeavPDNKzA", "libScePosix", 1, "libkernel", sendmsg);
    LIB_FUNCTION("oBr313PppNE", "libScePosix", 1, "libkernel", sendto);
    LIB_FUNCTION("2VRU7xiqLO8", "libScePosix", 1, "libkernel", setcontext);
    LIB_FUNCTION("fFxGkxF2bVo", "libScePosix", 1, "libkernel", setsockopt);
    LIB_FUNCTION("TUuiYS2kE8s", "libScePosix", 1, "libkernel", shutdown);
    LIB_FUNCTION("0wu33hunNdE", "libScePosix", 1, "libkernel", sleep);
    LIB_FUNCTION("TU-d9PfIHPM", "libScePosix", 1, "libkernel", socket);
    LIB_FUNCTION("E6ao34wPw+U", "libScePosix", 1, "libkernel", stat);
    LIB_FUNCTION("EXH1U-UBywI", "libScePosix", 1, "libkernel", swapcontext);
    LIB_FUNCTION("Y2OqwJQ3lr8", "libScePosix", 1, "libkernel", sync);
    LIB_FUNCTION("ayrtszI7GBg", "libScePosix", 1, "libkernel", truncate);
    LIB_FUNCTION("VAzswvTOCzI", "libScePosix", 1, "libkernel", unlink);
    LIB_FUNCTION("QcteRwbsnV0", "libScePosix", 1, "libkernel", usleep);
    LIB_FUNCTION("GDuV00CHrUg", "libScePosix", 1, "libkernel", utimes);
    LIB_FUNCTION("FN4gaPmuFV8", "libScePosix", 1, "libkernel", write);
    LIB_FUNCTION("Z2aKdxzS4KE", "libScePosix", 1, "libkernel", writev);
};

} // namespace Libraries::Kernel