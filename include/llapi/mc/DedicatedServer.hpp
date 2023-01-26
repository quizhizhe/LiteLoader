/**
 * @file  DedicatedServer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DedicatedServer.
 *
 */
class DedicatedServer {

#define AFTER_EXTRA
// Add Member There
public:
enum class StartResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVER
public:
    class DedicatedServer& operator=(class DedicatedServer const &) = delete;
    DedicatedServer(class DedicatedServer const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDSERVER
    /**
     * @symbol ?getAutomationClient@DedicatedServer@@EEBA?AV?$not_null@V?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@gsl@@XZ
     * @hash   988767084
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Automation::AutomationClient>> getAutomationClient() const;
    /**
     * @symbol ?getGameModule@DedicatedServer@@EEAAAEAVIGameModuleShared@@XZ
     * @hash   -591852319
     */
    MCVAPI class IGameModuleShared & getGameModule();
    /**
     * @symbol ?getPrimaryMinecraft@DedicatedServer@@EEAA?AV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@XZ
     * @hash   1741013014
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> getPrimaryMinecraft();
    /**
     * @symbol ?isDedicatedServer@DedicatedServer@@EEBA_NXZ
     * @hash   916024112
     */
    MCVAPI bool isDedicatedServer() const;
    /**
     * @symbol ?isEduMode@DedicatedServer@@EEBA_NXZ
     * @hash   -1887788809
     */
    MCVAPI bool isEduMode() const;
    /**
     * @symbol ?onNetworkMaxPlayersChanged@DedicatedServer@@EEAAXI@Z
     * @hash   1632096220
     */
    MCVAPI void onNetworkMaxPlayersChanged(unsigned int);
    /**
     * @symbol ?requestServerShutdown@DedicatedServer@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1060479971
     */
    MCVAPI void requestServerShutdown(std::string const &);
    /**
     * @symbol ?stop@DedicatedServer@@UEAA_NXZ
     * @hash   2106009497
     */
    MCVAPI bool stop();
    /**
     * @symbol ??1DedicatedServer@@UEAA@XZ
     * @hash   2117234680
     */
    MCVAPI ~DedicatedServer();
#endif
    /**
     * @symbol ??0DedicatedServer@@QEAA@XZ
     * @hash   1381643070
     */
    MCAPI DedicatedServer();
    /**
     * @symbol ?runDedicatedServerLoop@DedicatedServer@@QEAA?AW4StartResult@1@AEAVFilePathManager@Core@@AEAVPropertiesSettings@@AEAVLevelSettings@@AEAVAllowListFile@@AEAV?$unique_ptr@VPermissionsFile@@U?$default_delete@VPermissionsFile@@@std@@@std@@@Z
     * @hash   288897964
     */
    MCAPI enum class DedicatedServer::StartResult runDedicatedServerLoop(class Core::FilePathManager &, class PropertiesSettings &, class LevelSettings &, class AllowListFile &, std::unique_ptr<class PermissionsFile> &);
    /**
     * @symbol ?start@DedicatedServer@@QEAA?AW4StartResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActivationArguments@Bedrock@@@Z
     * @hash   1138644241
     */
    MCAPI enum class DedicatedServer::StartResult start(std::string const &, class Bedrock::ActivationArguments const &);

//private:
    /**
     * @symbol ?_generateCommandDocumentation@DedicatedServer@@AEAAXAEAVCommandRegistry@@@Z
     * @hash   -2136351385
     */
    MCAPI void _generateCommandDocumentation(class CommandRegistry &);
    /**
     * @symbol ?_generateScriptingDocumentation@DedicatedServer@@AEAAXAEAVServerInstance@@@Z
     * @hash   2141927747
     */
    MCAPI void _generateScriptingDocumentation(class ServerInstance &);
    /**
     * @symbol ?_writeJsonMetadataToFile@DedicatedServer@@AEBA_NAEBVValue@Json@@AEBVPath@Core@@@Z
     * @hash   -63793722
     */
    MCAPI bool _writeJsonMetadataToFile(class Json::Value const &, class Core::Path const &) const;
    /**
     * @symbol ?initializeHttp@DedicatedServer@@AEAAXW4Implementation@Http@Bedrock@@@Z
     * @hash   -77035464
     */
    MCAPI void initializeHttp(enum class Bedrock::Http::Implementation);
    /**
     * @symbol ?initializeLogging@DedicatedServer@@AEAAXXZ
     * @hash   -531712247
     */
    MCAPI void initializeLogging();

private:

};