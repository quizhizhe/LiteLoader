/**
 * @file  AutomationClientConnectPacket.hpp
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
 * @brief MC class AutomationClientConnectPacket.
 *
 */
class AutomationClientConnectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONCLIENTCONNECTPACKET
public:
    class AutomationClientConnectPacket& operator=(class AutomationClientConnectPacket const &) = delete;
    AutomationClientConnectPacket(class AutomationClientConnectPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1704857026
     */
    virtual ~AutomationClientConnectPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AutomationClientConnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   290339134
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AutomationClientConnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   758658027
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AutomationClientConnectPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -11936004
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AutomationClientConnectPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1202602796
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AutomationClientConnectPacket@@QEAA@XZ
     * @hash   997957116
     */
    MCAPI AutomationClientConnectPacket();
    /**
     * @symbol ??0AutomationClientConnectPacket@@QEAA@UWebSocketPacketData@@@Z
     * @hash   -1518873047
     */
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData);

};