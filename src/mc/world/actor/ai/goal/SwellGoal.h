#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwellGoal : public ::Goal {
public:
    // prevent constructor by default
    SwellGoal& operator=(SwellGoal const&) = delete;
    SwellGoal(SwellGoal const&)            = delete;
    SwellGoal()                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SwellGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@SwellGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SwellGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SwellGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SwellGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // NOLINTEND
};
