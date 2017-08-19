#ifndef TPL_FABRIC_DEFINITIONS_H
#define TPL_FABRIC_DEFINITIONS_H


#define BIT(n)                            (1 << (n))

/*********************************************************************************************************************************************/
#define AD_REG_OS_INSTRU_SERVICE          0x1A108020
#define NO_SERVICE                        0xFF

/*********************************************************************************************************************************************/
#define AD_REG_OS_INSTRU_KERNEL_FUNCTIONS       0x1A108024
#define AD_REG_OS_INSTRU_KERNEL_SCALL_FUNCTIONS 0x1A108028

/**********************************************************************************
*  Instrumention of system call handler
***********************************************************************************/
#define ID_CALL_HANDLER_ENTER BIT(0)
#define ID_CALL_HANDLER_EXIT  BIT(1)
#define ID_CALL_SERVICE_ENTER BIT(2)
#define ID_CALL_SERVICE_EXIT  BIT(3)
#define ID_CALL_CONTEXT_ENTER BIT(4)
#define ID_CALL_CONTEXT_EXIT  BIT(5)
#define ID_CALL_SAVE_ENTER    BIT(6)
#define ID_CALL_SAVE_EXIT     BIT(7)
/********************************************************************************/

/**********************************************************************************
*  Instrumentation of OS Kernel functions
***********************************************************************************/

/*tpl_os_task_kernel*/
#define HW_FUNC_COMPARE_ENTRIES           BIT(0)
#define HW_FUNC_BUBBLE_UP                 BIT(1)
#define HW_FUNC_BUBBLE_DOWN               BIT(2)
#define HW_FUNC_PUT_NEW_PROC              BIT(3)
#define HW_FUNC_PUT_PREEMPTED_PROC        BIT(4)
#define HW_FUNC_REMOVE_FRONT_PROC         BIT(5)
#define HW_FUNC_GET_INTERNAL_RESOURCE     BIT(6)
#define HW_FUNC_RELEASE_INTERNAL_RESOURCE BIT(7)
#define HW_FUNC_PREEMPT                   BIT(8)
#define HW_FUNC_RUN_ELECTED               BIT(9)
#define HW_FUNC_START                     BIT(10)
#define HW_FUNC_SCHEDULE_FROM_RUNNING     BIT(11)
#define HW_FUNC_TERMINATE                 BIT(12)
#define HW_FUNC_BLOCK                     BIT(13)
#define HW_FUNC_ACTIVATE_TASK             BIT(14)
#define HW_FUNC_RELEASE                   BIT(15)
#define HW_FUNC_SET_EVENT                 BIT(16)
#define HW_FUNC_INIT_PROC                 BIT(17)
#define HW_FUNC_INIT_OS                   BIT(18)
#define HW_FUNC_REMOVE_PROC               BIT(19)
#define HW_FUNC_START_SCHEDULING          BIT(20)

/*tpl_os_action*/
#define HW_FUNC_ACTION_ACTIVATE_TASK      BIT(21)
#define HW_FUNC_ACTION_SETEVENT           BIT(22)

/*tpl_os_interrupt_kernel*/
#define HW_FUNC_CENTRAL_INTERRUPT_HANDLER BIT(23)
#define HW_FUNC_ACTIVATE_ISR2             BIT(24)

/*counter call*/
#define HW_FUNC_COUNTER_TICK              BIT(25)

/*tpl_com_notification*/
#define HW_FUNC_NOTIFY_RECEIVING_MOS      BIT(26)
/*********************************************************************************************************************************************/


/**********************************************************************************
*  Instrumention of IRQ SystemCounter
***********************************************************************************/
#endif /* TPL_FABRIC_DEFINITIONS_H */
