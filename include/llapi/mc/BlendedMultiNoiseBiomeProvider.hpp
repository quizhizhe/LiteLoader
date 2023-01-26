/**
 * @file  BlendedMultiNoiseBiomeProvider.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkLocalNoiseCache.hpp"
#include "RTree.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlendedMultiNoiseBiomeProvider.
 *
 */
class BlendedMultiNoiseBiomeProvider {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLENDEDMULTINOISEBIOMEPROVIDER
public:
    class BlendedMultiNoiseBiomeProvider& operator=(class BlendedMultiNoiseBiomeProvider const &) = delete;
    BlendedMultiNoiseBiomeProvider(class BlendedMultiNoiseBiomeProvider const &) = delete;
    BlendedMultiNoiseBiomeProvider() = delete;
#endif

public:
    /**
     * @symbol ??0BlendedMultiNoiseBiomeProvider@@QEAA@AEBUOverworldNoises3d@@VParameterList@@AEAVSeamlessChunkBlendingAttenuatorFactory@@AEBVBiomeRegistry@@@Z
     * @hash   -4204938
     */
    MCAPI BlendedMultiNoiseBiomeProvider(struct OverworldNoises3d const &, class ParameterList, class SeamlessChunkBlendingAttenuatorFactory &, class BiomeRegistry const &);
    /**
     * @symbol ?tryGetBiome@BlendedMultiNoiseBiomeProvider@@QEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
     * @hash   845087200
     */
    MCAPI class Biome const * tryGetBiome(struct GetBiomeOptions const &) const;
    /**
     * @symbol ?tryGetBiome@BlendedMultiNoiseBiomeProvider@@QEBAPEBVBiome@@AEBUGetBiomeOptions@@AEBUCacheEntry@ChunkLocalNoiseCache@@PEAUHint@RTree@@@Z
     * @hash   -264406517
     */
    MCAPI class Biome const * tryGetBiome(struct GetBiomeOptions const &, struct ChunkLocalNoiseCache::CacheEntry const &, struct RTree::Hint *) const;
    /**
     * @symbol ??1BlendedMultiNoiseBiomeProvider@@QEAA@XZ
     * @hash   -221372758
     */
    MCAPI ~BlendedMultiNoiseBiomeProvider();

};