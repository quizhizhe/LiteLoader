/**
 * @file  LevelEventPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelEventPacket.
 *
 */
class LevelEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTPACKET
public:
    class LevelEventPacket& operator=(class LevelEventPacket const &) = delete;
    LevelEventPacket(class LevelEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   27509224
     */
    virtual ~LevelEventPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@LevelEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   2070709296
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@LevelEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1631421213
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@LevelEventPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1259273030
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@LevelEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   12874266
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0LevelEventPacket@@QEAA@XZ
     * @hash   -658041558
     */
    MCAPI LevelEventPacket();
    /**
     * @symbol ??0LevelEventPacket@@QEAA@W4LevelEvent@@MMMH@Z
     * @hash   -732626701
     */
    MCAPI LevelEventPacket(enum class LevelEvent, float, float, float, int);
    /**
     * @symbol ??0LevelEventPacket@@QEAA@W4LevelEvent@@AEBVVec3@@H@Z
     * @hash   839401399
     */
    MCAPI LevelEventPacket(enum class LevelEvent, class Vec3 const &, int);

};