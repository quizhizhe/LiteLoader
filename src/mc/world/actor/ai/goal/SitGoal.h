#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SitGoal : public ::Goal {
public:
    // prevent constructor by default
    SitGoal& operator=(SitGoal const&) = delete;
    SitGoal(SitGoal const&)            = delete;
    SitGoal()                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SitGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@SitGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SitGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0SitGoal@@QEAA@AEAVMob@@@Z
    MCAPI SitGoal(class Mob&);

    // NOLINTEND
};
