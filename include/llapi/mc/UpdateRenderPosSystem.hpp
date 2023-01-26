/**
 * @file  UpdateRenderPosSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateRenderPosSystem.
 *
 */
class UpdateRenderPosSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATERENDERPOSSYSTEM
public:
    class UpdateRenderPosSystem& operator=(class UpdateRenderPosSystem const &) = delete;
    UpdateRenderPosSystem(class UpdateRenderPosSystem const &) = delete;
    UpdateRenderPosSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@UpdateRenderPosSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   172395302
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doUpdateRenderPosSystem@UpdateRenderPosSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAURenderPositionComponent@@@Z
     * @hash   186588408
     */
    MCAPI static void _doUpdateRenderPosSystem(class StrictEntityContext const &, struct StateVectorComponent const &, struct RenderPositionComponent &);

private:

};