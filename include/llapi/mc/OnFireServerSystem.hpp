/**
 * @file  OnFireServerSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnFireServerSystem.
 *
 */
class OnFireServerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRESERVERSYSTEM
public:
    class OnFireServerSystem& operator=(class OnFireServerSystem const &) = delete;
    OnFireServerSystem(class OnFireServerSystem const &) = delete;
    OnFireServerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   667619569
     */
    virtual ~OnFireServerSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@OnFireServerSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -2100734265
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_tickServer@OnFireServerSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@UOnFireComponent@@@@@Z
     * @hash   -1821949061
     */
    MCAPI static void _tickServer(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, struct OnFireComponent> &);

private:

};