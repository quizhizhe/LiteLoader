/**
 * @file  CommandItem.hpp
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
 * @brief MC class CommandItem.
 *
 */
class CommandItem {

#define AFTER_EXTRA
// Add Member There
    short mVersion; // 0
    bool mOverrideAux;           // 2
    int mId;           // 4

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
public:
    class CommandItem& operator=(class CommandItem const &) = delete;
    CommandItem(class CommandItem const &) = delete;
#endif

public:
    /**
     * @symbol ??0CommandItem@@QEAA@XZ
     * @hash   238259898
     */
    MCAPI CommandItem();
    /**
     * @symbol ??0CommandItem@@QEAA@HF_N@Z
     * @hash   -2110650606
     */
    MCAPI CommandItem(int, short, bool);
    /**
     * @symbol ??0CommandItem@@QEAA@_K@Z
     * @hash   403882414
     */
    MCAPI CommandItem(unsigned __int64);
    /**
     * @symbol ?createInstance@CommandItem@@QEBA?AV?$optional@VItemInstance@@@std@@HHPEAVCommandOutput@@_N@Z
     * @hash   480476230
     */
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput *, bool) const;
    /**
     * @symbol ?getId@CommandItem@@QEBAHXZ
     * @hash   -442538534
     */
    MCAPI int getId() const;
    /**
     * @symbol ??BCommandItem@@QEBA_NXZ
     * @hash   -141968696
     */
    MCAPI operator bool() const;
    /**
     * @symbol ??BCommandItem@@QEBA_KXZ
     * @hash   -368628597
     */
    MCAPI operator unsigned __int64() const;

};