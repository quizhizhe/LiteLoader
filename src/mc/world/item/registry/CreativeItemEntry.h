#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class CreativeItemEntry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CreativeItemEntry& operator=(CreativeItemEntry const&) = delete;
    CreativeItemEntry(CreativeItemEntry const&)            = delete;
    CreativeItemEntry()                                    = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CreativeItemEntry@@QEAA@$$QEAV0@@Z
    MCAPI CreativeItemEntry(class CreativeItemEntry&&);

    // symbol: ?getCreativeNetId@CreativeItemEntry@@QEBAAEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@XZ
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, uint, 0> const& getCreativeNetId() const;

    // symbol: ?getGroup@CreativeItemEntry@@QEBAPEAVCreativeGroupInfo@@XZ
    MCAPI class CreativeGroupInfo* getGroup() const;

    // symbol: ?getIndex@CreativeItemEntry@@QEBAIXZ
    MCAPI uint getIndex() const;

    // symbol: ?getItemInstance@CreativeItemEntry@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getItemInstance() const;

    // NOLINTEND
};
