#include "../include/linux/sched.h"
#include "../include/linux/errno.h"
#include "../include/asm/errno.h"
#include "../include/linux/slab.h"
#include "../include/asm/uaccess.h"


int sys_is_changeable(pid_t pid){
	if (pid<0) {
		return -ESRCH;
	}
	task_t* task_p=find_task_by_pid(pid);
	if (!task_p) {
		return -ESRCH;
	}
	if(task_p->policy!=SCHED_CHANGEABLE)
		return 0;
	return 1;
}

int sys_get_policy(pid_t pid){
    if (pid<0) {
        return -ESRCH;
    }
    task_t* task_p=find_task_by_pid(pid);
    if (task_p->policy!=SCHED_CHANGEABLE){
        return -EINVAL;
    }
	return is_regime_on();
}
