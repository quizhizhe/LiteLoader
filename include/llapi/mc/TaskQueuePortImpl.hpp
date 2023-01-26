/**
 * @file  TaskQueuePortImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskQueuePortImpl.
 *
 */
class TaskQueuePortImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL
public:
    class TaskQueuePortImpl& operator=(class TaskQueuePortImpl const &) = delete;
    TaskQueuePortImpl(class TaskQueuePortImpl const &) = delete;
#endif

public:
    /**
     * @vftbl  3
     * @symbol ?GetHandle@TaskQueuePortImpl@@UEAAPEAUXTaskQueuePortObject@@XZ
     * @hash   -1089225769
     */
    virtual struct XTaskQueuePortObject * GetHandle();
    /**
     * @vftbl  4
     * @symbol ?QueueItem@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@IPEAXP6AX1_N@Z@Z
     * @hash   1499915262
     */
    virtual long QueueItem(struct ITaskQueuePortContext *, unsigned int, void *, void ( *)(void *, bool));
    /**
     * @vftbl  5
     * @symbol ?RegisterWaitHandle@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAX1P6AX1_N@ZPEAUXTaskQueueRegistrationToken@@@Z
     * @hash   545269043
     */
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /**
     * @vftbl  6
     * @symbol ?UnregisterWaitHandle@TaskQueuePortImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
     * @hash   -1768932321
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl  7
     * @symbol ?PrepareTerminate@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAXP6AX1@ZPEAPEAX@Z
     * @hash   1893366314
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void ( *)(void *), void **);
    /**
     * @vftbl  8
     * @symbol ?CancelTermination@TaskQueuePortImpl@@UEAAXPEAX@Z
     * @hash   366976208
     */
    virtual void CancelTermination(void *);
    /**
     * @vftbl  9
     * @symbol ?Terminate@TaskQueuePortImpl@@UEAAXPEAX@Z
     * @hash   1996603369
     */
    virtual void Terminate(void *);
    /**
     * @vftbl  10
     * @symbol ?Attach@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     * @hash   427361529
     */
    virtual long Attach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  11
     * @symbol ?Detach@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     * @hash   1833850291
     */
    virtual void Detach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  12
     * @symbol ?DrainOneItem@TaskQueuePortImpl@@UEAA_NXZ
     * @hash   -1905626275
     */
    virtual bool DrainOneItem();
    /**
     * @vftbl  13
     * @symbol ?Wait@TaskQueuePortImpl@@UEAA_NPEAUITaskQueuePortContext@@I@Z
     * @hash   -72246789
     */
    virtual bool Wait(struct ITaskQueuePortContext *, unsigned int);
    /**
     * @vftbl  14
     * @symbol ?IsEmpty@TaskQueuePortImpl@@UEAA_NXZ
     * @hash   -1406983825
     */
    virtual bool IsEmpty();
    /**
     * @vftbl  15
     * @symbol ?SuspendTermination@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     * @hash   -842508762
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  16
     * @symbol ?ResumeTermination@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     * @hash   1232872543
     */
    virtual void ResumeTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  17
     * @hash   -2132124101
     */
    virtual ~TaskQueuePortImpl();
    /**
     * @symbol ?Initialize@TaskQueuePortImpl@@QEAAJW4XTaskQueueDispatchMode@@@Z
     * @hash   1634780676
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode);
    /**
     * @symbol ??0TaskQueuePortImpl@@QEAA@XZ
     * @hash   -32590423
     */
    MCAPI TaskQueuePortImpl();

//private:
    /**
     * @symbol ?AppendEntry@TaskQueuePortImpl@@AEAA_NAEBUQueueEntry@1@_K_N@Z
     * @hash   -503713563
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, unsigned __int64, bool);
    /**
     * @symbol ?AppendWaitRegistrationEntry@TaskQueuePortImpl@@AEAA_NPEAUWaitRegistration@1@_N@Z
     * @hash   -1395964361
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *, bool);
    /**
     * @symbol ?CancelPendingEntries@TaskQueuePortImpl@@AEAAXPEAUITaskQueuePortContext@@_N@Z
     * @hash   -166014842
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);
    /**
     * @symbol ?InitializeWaitRegistration@TaskQueuePortImpl@@AEAAJPEAUWaitRegistration@1@@Z
     * @hash   2137913099
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);
    /**
     * @symbol ?ScheduleTermination@TaskQueuePortImpl@@AEAAXPEAUTerminationEntry@1@@Z
     * @hash   -523910972
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);
    /**
     * @symbol ?SubmitPendingCallback@TaskQueuePortImpl@@AEAAXXZ
     * @hash   -804036253
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @symbol ?EraseQueue@TaskQueuePortImpl@@CAXPEAV?$LocklessQueue@UQueueEntry@TaskQueuePortImpl@@@@@Z
     * @hash   1856345362
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);
    /**
     * @symbol ?WaitCallback@TaskQueuePortImpl@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
     * @hash   -2047415324
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

private:

};