#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

class HumanoidMonster : public ::Monster {
public:
    // prevent constructor by default
    HumanoidMonster& operator=(HumanoidMonster const&) = delete;
    HumanoidMonster(HumanoidMonster const&)            = delete;
    HumanoidMonster()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@HumanoidMonster@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 243, symbol: ?readAdditionalSaveData@HumanoidMonster@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@HumanoidMonster@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 271, symbol: ?getItemUseDuration@HumanoidMonster@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 279, symbol: ?doHurtTarget@HumanoidMonster@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor*, ::ActorDamageCause const&);

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // symbol: ??1HumanoidMonster@@UEAA@XZ
    MCVAPI ~HumanoidMonster();

    // symbol: ??0HumanoidMonster@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI HumanoidMonster(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_ENCHANTED_ARMOR_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_ENCHANTED_ARMOR_CHANCE;

    // symbol: ?MAX_ENCHANTED_WEAPON_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_ENCHANTED_WEAPON_CHANCE;

    // symbol: ?MAX_PICKUP_LOOT_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_PICKUP_LOOT_CHANCE;

    // symbol: ?MAX_WEARING_ARMOR_CHANCE@HumanoidMonster@@0MB
    MCAPI static float const MAX_WEARING_ARMOR_CHANCE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $MAX_ENCHANTED_ARMOR_CHANCE() { return MAX_ENCHANTED_ARMOR_CHANCE; }

    inline auto& $MAX_ENCHANTED_WEAPON_CHANCE() { return MAX_ENCHANTED_WEAPON_CHANCE; }

    inline auto& $MAX_PICKUP_LOOT_CHANCE() { return MAX_PICKUP_LOOT_CHANCE; }

    inline auto& $MAX_WEARING_ARMOR_CHANCE() { return MAX_WEARING_ARMOR_CHANCE; }

    // NOLINTEND
};
