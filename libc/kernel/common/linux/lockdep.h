/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_LOCKDEP_H
#define __LINUX_LOCKDEP_H
#include <linux/linkage.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/debug_locks.h>
#include <linux/stacktrace.h>
#define lock_acquire(l, s, t, r, c, i) do { } while (0)
#define lock_release(l, n, i) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define lockdep_init() do { } while (0)
#define lockdep_info() do { } while (0)
#define lockdep_init_map(lock, name, key) do { (void)(key); } while (0)
#define lockdep_set_class(lock, key) do { (void)(key); } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define lockdep_set_class_and_name(lock, key, name)   do { (void)(key); } while (0)
#define INIT_LOCKDEP
#define lockdep_reset() do { debug_locks = 1; } while (0)
#define lockdep_free_key_range(start, size) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct lock_class_key { };
#define early_init_irq_lock_class() do { } while (0)
#define early_boot_irqs_off() do { } while (0)
#define early_boot_irqs_on() do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SINGLE_DEPTH_NESTING 1
#define spin_acquire(l, s, t, i) do { } while (0)
#define spin_release(l, n, i) do { } while (0)
#define rwlock_acquire(l, s, t, i) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rwlock_acquire_read(l, s, t, i) do { } while (0)
#define rwlock_release(l, n, i) do { } while (0)
#define mutex_acquire(l, s, t, i) do { } while (0)
#define mutex_release(l, n, i) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rwsem_acquire(l, s, t, i) do { } while (0)
#define rwsem_acquire_read(l, s, t, i) do { } while (0)
#define rwsem_release(l, n, i) do { } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
