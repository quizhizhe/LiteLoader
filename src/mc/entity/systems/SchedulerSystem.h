#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class SchedulerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    SchedulerSystem& operator=(SchedulerSystem const&) = delete;
    SchedulerSystem(SchedulerSystem const&)            = delete;
    SchedulerSystem()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@SchedulerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
