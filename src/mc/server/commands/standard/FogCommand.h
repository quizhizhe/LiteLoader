#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FogCommand : public ::Command {
public:
    // prevent constructor by default
    FogCommand& operator=(FogCommand const&) = delete;
    FogCommand(FogCommand const&)            = delete;
    FogCommand()                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@FogCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@FogCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
