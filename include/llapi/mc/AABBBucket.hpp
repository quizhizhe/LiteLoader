/**
 * @file  AABBBucket.hpp
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
 * @brief MC structure AABBBucket.
 *
 */
struct AABBBucket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBBUCKET
public:
    struct AABBBucket& operator=(struct AABBBucket const &) = delete;
    AABBBucket(struct AABBBucket const &) = delete;
#endif

public:
    /**
     * @symbol ??0AABBBucket@@QEAA@XZ
     * @hash   1138259590
     */
    MCAPI AABBBucket();
    /**
     * @symbol ?clearDirty@AABBBucket@@QEAAXXZ
     * @hash   756476261
     */
    MCAPI void clearDirty();
    /**
     * @symbol ?clearNeedsFinalize@AABBBucket@@QEAAXXZ
     * @hash   239138709
     */
    MCAPI void clearNeedsFinalize();
    /**
     * @symbol ?isDirty@AABBBucket@@QEAA_NXZ
     * @hash   476310988
     */
    MCAPI bool isDirty();
    /**
     * @symbol ?markDirty@AABBBucket@@QEAAXXZ
     * @hash   -856740541
     */
    MCAPI void markDirty();
    /**
     * @symbol ?mergeAABBs@AABBBucket@@QEAAXXZ
     * @hash   -904834203
     */
    MCAPI void mergeAABBs();
    /**
     * @symbol ?needsFinalize@AABBBucket@@QEBA_NXZ
     * @hash   -1004901294
     */
    MCAPI bool needsFinalize() const;

};