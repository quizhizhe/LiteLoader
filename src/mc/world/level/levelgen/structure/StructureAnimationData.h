#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class StructureAnimationData {
public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&) = delete;
    StructureAnimationData(StructureAnimationData const&)            = delete;
    StructureAnimationData()                                         = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ??0StructureAnimationData@@QEAA@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVStructureSettings@@EAEBVBlockPos@@@Z
    MCAPI
    StructureAnimationData(std::unique_ptr<class CommandArea>, uint64, std::string const&, class StructureSettings const&, uchar, class BlockPos const&);

    // symbol: ?allBlocksPlaced@StructureAnimationData@@QEBA_NXZ
    MCAPI bool allBlocksPlaced() const;

    // symbol: ?getBlocksExpectedToPlace@StructureAnimationData@@QEBAI_K@Z
    MCAPI uint getBlocksExpectedToPlace(uint64) const;

    // symbol: ?getBlocksPlaced@StructureAnimationData@@QEBAIXZ
    MCAPI uint getBlocksPlaced() const;

    // symbol: ?getDimensionBlockSource@StructureAnimationData@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getDimensionBlockSource() const;

    // symbol: ?getPosition@StructureAnimationData@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getPosition() const;

    // symbol: ?getQueueID@StructureAnimationData@@QEBAIXZ
    MCAPI uint getQueueID() const;

    // symbol:
    // ?getStructureName@StructureAnimationData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getStructureName() const;

    // symbol: ?getStructureSettings@StructureAnimationData@@QEBAAEBVStructureSettings@@XZ
    MCAPI class StructureSettings const& getStructureSettings() const;

    // symbol: ?getStructureVersion@StructureAnimationData@@QEBAEXZ
    MCAPI uchar getStructureVersion() const;

    // symbol: ?getTargetDimension@StructureAnimationData@@QEBAAEBV?$AutomaticID@VDimension@@H@@XZ
    MCAPI class AutomaticID<class Dimension, int> const& getTargetDimension() const;

    // symbol: ?getTotalBlocks@StructureAnimationData@@QEBAIXZ
    MCAPI uint getTotalBlocks() const;

    // symbol: ?serialize@StructureAnimationData@@QEAAAEAVCompoundTag@@AEAV2@@Z
    MCAPI class CompoundTag& serialize(class CompoundTag&);

    // symbol: ?setBlocksPlaced@StructureAnimationData@@QEAAXI@Z
    MCAPI void setBlocksPlaced(uint);

    // symbol:
    // ?setCmdArea@StructureAnimationData@@QEAAXV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@@Z
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);

    // symbol: ?setQueueID@StructureAnimationData@@QEAAXI@Z
    MCAPI void setQueueID(uint);

    // symbol: ?setTargetDimension@StructureAnimationData@@QEAAXAEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setTargetDimension(class AutomaticID<class Dimension, int> const&);

    // symbol: ??1StructureAnimationData@@QEAA@XZ
    MCAPI ~StructureAnimationData();

    // symbol:
    // ?load@StructureAnimationData@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
    MCAPI static class StructureAnimationData load(std::string const&, class CompoundTag const&);

    // NOLINTEND
};
