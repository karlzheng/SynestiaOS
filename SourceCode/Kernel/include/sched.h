//
// Created by XingfengYang on 2020/6/29.
//

#ifndef __KERNEL_SCHED_H__
#define __KERNEL_SCHED_H__


#include <stdint.h>
#include <thread.h>

KernelStatus schd_init();

KernelStatus schd_init_thread(Thread *thread, uint32_t priority);

KernelStatus schd_block(void);

KernelStatus schd_yield(void);

KernelStatus schd_preempt(void);

KernelStatus sche_insert_into_percpu_rq(CpuNum cpuNum, Thread *thread);

#endif //__KERNEL_SCHED_H__
