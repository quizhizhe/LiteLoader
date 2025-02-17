#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/IConstBlockSource.h"

class IBlockSource : public IConstBlockSource {
public:
    // prevent constructor by default
    IBlockSource& operator=(IBlockSource const&) = delete;
    IBlockSource(IBlockSource const&)            = delete;
    IBlockSource()                               = delete;
};
