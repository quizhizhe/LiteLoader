#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDefinitionInstance {
public:
    // prevent constructor by default
    IDefinitionInstance& operator=(IDefinitionInstance const&) = delete;
    IDefinitionInstance(IDefinitionInstance const&)            = delete;
    IDefinitionInstance()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7, symbol: ?getRuntimeTypeId@IDefinitionInstance@@UEBAGXZ
    virtual ushort getRuntimeTypeId() const;

    // symbol: ??1IDefinitionInstance@@UEAA@XZ
    MCVAPI ~IDefinitionInstance();

    // NOLINTEND
};
