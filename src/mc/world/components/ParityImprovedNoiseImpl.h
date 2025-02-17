#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0>
class ParityImprovedNoiseImpl {
public:
    // prevent constructor by default
    ParityImprovedNoiseImpl& operator=(ParityImprovedNoiseImpl const&) = delete;
    ParityImprovedNoiseImpl(ParityImprovedNoiseImpl const&)            = delete;
    ParityImprovedNoiseImpl()                                          = delete;
};
