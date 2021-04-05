#ifndef _ANTI_ROOTKIT_CONFIG
#define _ANTI_ROOTKIT_CONFIG

#define pr_fmt(fmt) "antirootkit: " fmt

#define DETECT_SYSCALL_TABLE 1
#define DETECT_MSR_LSTAR 1
#define DETECT_WP 1
#define DETECT_MODULE_LIST 1
#define DETECT_FOPS 1
#define DETECT_IDT 1

#define RECOVER_SYSCALL_TABLE 1
#define RECOVER_MSR_LSTAR 1
#define RECOVER_WP 1
#define RECOVER_MODULE_LIST 1
#define RECOVER_FOPS 1
#define RECOVER_IDT 1

#define UNLOAD_SUSPECT_MODULE 1

#define CHECK_INTERVAL 60

#endif