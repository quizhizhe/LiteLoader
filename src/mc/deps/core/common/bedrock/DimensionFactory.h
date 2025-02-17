#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/deps/core/common/bedrock/IDimensionFactory.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class DimensionFactory : public ::IDimensionFactory {
public:
    // prevent constructor by default
    DimensionFactory& operator=(DimensionFactory const&) = delete;
    DimensionFactory(DimensionFactory const&)            = delete;
    DimensionFactory()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?create@DimensionFactory@@UEBA?AV?$OwnerPtrT@U?$SharePtrRefTraits@VDimension@@@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class OwnerPtrT<struct SharePtrRefTraits<class Dimension>> create(std::string const&) const;

    // vIndex: 2, symbol: ?initializeDimension@DimensionFactory@@UEBAXAEAVDimension@@@Z
    virtual void initializeDimension(class Dimension&) const;

    // symbol: ??1DimensionFactory@@UEAA@XZ
    MCVAPI ~DimensionFactory();

    // symbol:
    // ??0DimensionFactory@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@V?$not_null@V?$NonOwnerPointer@VScheduler@@@Bedrock@@@2@@Z
    MCAPI
    DimensionFactory(gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>, gsl::not_null<class Bedrock::NonOwnerPointer<class Scheduler>>);

    // symbol:
    // ?getDimensionOwnerPtrFactory@DimensionFactory@@QEAAAEAV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionOwnerPtrFactory();

    // symbol:
    // ?getDimensionOwnerPtrFactory@DimensionFactory@@QEBAAEBV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&> const&
    getDimensionOwnerPtrFactory() const;

    // NOLINTEND
};
