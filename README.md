# LINUX-KERNEL-SCHEDULER
 Creating a Linux scheduler, by modifying the original Linux scheduler (changing some of its code and writing some of my own). the new scheduling policy is for normal (non-realtime) processes: SCHED_CHANGEABLE. This policy would go alongside the standard SCHED_OTHER policy in the Linux scheduler. that policy will be invoked using a system call that i implement.
