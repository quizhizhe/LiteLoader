#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeightedChoices {
public:
    // prevent constructor by default
    WeightedChoices& operator=(WeightedChoices const&) = delete;
    WeightedChoices(WeightedChoices const&)            = delete;
    WeightedChoices()                                  = delete;
};
