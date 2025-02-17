#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

template <typename T0, typename T1>
class WorkingData {
public:
    // prevent constructor by default
    WorkingData& operator=(WorkingData const&) = delete;
    WorkingData(WorkingData const&)            = delete;
    WorkingData()                              = delete;
};

}; // namespace OperationNodeDetails
