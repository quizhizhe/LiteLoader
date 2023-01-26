/**
 * @file  StonecutterContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StonecutterContainerManagerModel.
 *
 */
class StonecutterContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STONECUTTERCONTAINERMANAGERMODEL
public:
    class StonecutterContainerManagerModel& operator=(class StonecutterContainerManagerModel const &) = delete;
    StonecutterContainerManagerModel(class StonecutterContainerManagerModel const &) = delete;
    StonecutterContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -812674941
     */
    virtual ~StonecutterContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@StonecutterContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -1206036474
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@StonecutterContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1961761335
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@StonecutterContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   -1219882238
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@StonecutterContainerManagerModel@@UEAAXHH@Z
     * @hash   -386601510
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@StonecutterContainerManagerModel@@UEAAXXZ
     * @hash   1572583056
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@StonecutterContainerManagerModel@@UEAA_NM@Z
     * @hash   1280216480
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@StonecutterContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   1532589197
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0StonecutterContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   796611196
     */
    MCAPI StonecutterContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};