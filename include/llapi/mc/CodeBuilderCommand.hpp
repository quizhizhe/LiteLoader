/**
 * @file  CodeBuilderCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CodeBuilderCommand.
 *
 */
class CodeBuilderCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERCOMMAND
public:
    class CodeBuilderCommand& operator=(class CodeBuilderCommand const &) = delete;
    CodeBuilderCommand(class CodeBuilderCommand const &) = delete;
    CodeBuilderCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   801108935
     */
    virtual ~CodeBuilderCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@CodeBuilderCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -656713674
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@CodeBuilderCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1960506148
     */
    MCAPI static void setup(class CommandRegistry &);

};