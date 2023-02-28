#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/ItemActor.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player pickup item event.
 * @details This event is called when a player picks up an item.
 */
class PlayerPickupItemEvent : public Event<PlayerPickupItemEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(Actor*, itemEntity, getItemEntity);
    LL_RO_MEMBER(ItemStack*, itemStack, getItemStack);

    explicit PlayerPickupItemEvent(Player* player, Actor* itemEntity, ItemStack* itemStack);

    LL_DELETE_COPY(PlayerPickupItemEvent);
    LL_DELETE_MOVE(PlayerPickupItemEvent);
};

} // namespace ll::event::player
