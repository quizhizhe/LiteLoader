#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomBreachingGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    RandomBreachingGoal& operator=(RandomBreachingGoal const&) = delete;
    RandomBreachingGoal(RandomBreachingGoal const&)            = delete;
    RandomBreachingGoal()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@RandomBreachingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomBreachingGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@RandomBreachingGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@RandomBreachingGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RandomBreachingGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomBreachingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 10, symbol: ?_setWantedPosition@RandomBreachingGoal@@MEAA_NXZ
    virtual bool _setWantedPosition();

    // symbol: ??0RandomBreachingGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI RandomBreachingGoal(class Mob&, float, int, int, int, float);

    // NOLINTEND
};
