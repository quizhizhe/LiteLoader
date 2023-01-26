/**
 * @file  NewUniqueIdsDataLoadHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "InternalComponentRegistry.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NewUniqueIdsDataLoadHelper.
 *
 */
class NewUniqueIdsDataLoadHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWUNIQUEIDSDATALOADHELPER
public:
    class NewUniqueIdsDataLoadHelper& operator=(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2072662513
     */
    virtual ~NewUniqueIdsDataLoadHelper();
    /**
     * @vftbl  1
     * @hash   1297431425
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   1298354946
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   1299247715
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   1300201988
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   1301125509
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   1302064406
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   1302987927
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   1303911448
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   1304834969
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -1974078077
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -1973154556
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -1972231035
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?loadActorUniqueID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     * @hash   -1811635979
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @vftbl  14
     * @symbol ?loadOwnerID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     * @hash   -1052734488
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @vftbl  15
     * @symbol ?loadActorInternalComponentInfo@NewUniqueIdsDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
     * @hash   301711647
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @vftbl  16
     * @symbol ?getType@NewUniqueIdsDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
     * @hash   -1364163181
     */
    virtual enum class DataLoadHelperType getType() const;
    /**
     * @vftbl  17
     * @symbol ?shouldResetTime@NewUniqueIdsDataLoadHelper@@UEAA_NXZ
     * @hash   -1552490883
     */
    virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEWUNIQUEIDSDATALOADHELPER
    /**
     * @symbol ?loadBlockPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     * @hash   1407665510
     */
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @symbol ?loadBlockPositionOffset@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     * @hash   1949945587
     */
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @symbol ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     * @hash   -1014930307
     */
    MCVAPI class Vec3 loadDirection(class Vec3 const &);
    /**
     * @symbol ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
     * @hash   898345479
     */
    MCVAPI enum class Direction::Type loadDirection(enum class Direction::Type);
    /**
     * @symbol ?loadFacingID@NewUniqueIdsDataLoadHelper@@UEAAEE@Z
     * @hash   -1788286323
     */
    MCVAPI unsigned char loadFacingID(unsigned char);
    /**
     * @symbol ?loadMirror@NewUniqueIdsDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
     * @hash   64300259
     */
    MCVAPI enum class Mirror loadMirror(enum class Mirror);
    /**
     * @symbol ?loadPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     * @hash   -1891104313
     */
    MCVAPI class Vec3 loadPosition(class Vec3 const &);
    /**
     * @symbol ?loadRotation@NewUniqueIdsDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
     * @hash   -1651509916
     */
    MCVAPI enum class Rotation loadRotation(enum class Rotation);
    /**
     * @symbol ?loadRotationDegreesX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   -711741885
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @symbol ?loadRotationDegreesY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   27007682
     */
    MCVAPI float loadRotationDegreesY(float);
    /**
     * @symbol ?loadRotationRadiansX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   1289820846
     */
    MCVAPI float loadRotationRadiansX(float);
    /**
     * @symbol ?loadRotationRadiansY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   2028570413
     */
    MCVAPI float loadRotationRadiansY(float);
#endif
    /**
     * @symbol ??0NewUniqueIdsDataLoadHelper@@QEAA@AEAVILevel@@@Z
     * @hash   -434773150
     */
    MCAPI NewUniqueIdsDataLoadHelper(class ILevel &);

};