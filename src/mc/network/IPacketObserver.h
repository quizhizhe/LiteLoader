#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IPacketObserver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IPacketObserver& operator=(IPacketObserver const&) = delete;
    IPacketObserver(IPacketObserver const&)            = delete;
    IPacketObserver()                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IPacketObserver@@UEAA@XZ
    MCVAPI ~IPacketObserver();

    // NOLINTEND
};
