#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class SelectorBehaviorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    SelectorBehaviorNode& operator=(SelectorBehaviorNode const&) = delete;
    SelectorBehaviorNode(SelectorBehaviorNode const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@SelectorBehaviorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // vIndex: 2, symbol: ?initializeFromDefinition@SelectorBehaviorNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // symbol: ??0SelectorBehaviorNode@@QEAA@XZ
    MCAPI SelectorBehaviorNode();

    // NOLINTEND
};
