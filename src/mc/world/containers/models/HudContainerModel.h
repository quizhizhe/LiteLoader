#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class HudContainerModel : public ::ContainerModel {
public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&) = delete;
    HudContainerModel(HudContainerModel const&)            = delete;
    HudContainerModel()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@HudContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int);

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getContainerWeakRef@HudContainerModel@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 14, symbol: ?isValid@HudContainerModel@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: ?_getContainer@HudContainerModel@@EEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_refreshContainer@HudContainerModel@@AEAAXXZ
    MCAPI void _refreshContainer();

    // NOLINTEND
};
