// SPDX-License-Identifier: MIT
//
// Go 1.19's iOS arm64 cgo runtime expects these helpers when building with
// the `lldb` tag. They are not linked for the iOS Simulator, so provide the
// same no-op behavior used by Go's gcc_signal_ios_nolldb.c implementation.

#if TARGET_OS_SIMULATOR && defined(__arm64__)
void darwin_arm_init_thread_exception_port(void) {}
void darwin_arm_init_mach_exception_handler(void) {}
#endif
