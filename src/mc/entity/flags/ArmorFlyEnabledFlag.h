#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ArmorFlyEnabledFlag {
public:
    // prevent constructor by default
    ArmorFlyEnabledFlag& operator=(ArmorFlyEnabledFlag const&) = delete;
    ArmorFlyEnabledFlag(ArmorFlyEnabledFlag const&)            = delete;
    ArmorFlyEnabledFlag()                                      = delete;
};
