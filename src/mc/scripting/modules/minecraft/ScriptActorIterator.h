#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator {
public:
    // prevent constructor by default
    ScriptActorIterator& operator=(ScriptActorIterator const&) = delete;
    ScriptActorIterator(ScriptActorIterator const&)            = delete;
    ScriptActorIterator()                                      = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptActorIterator@ScriptModuleMinecraft@@QEAA@$$QEAV?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@Z
    MCAPI ScriptActorIterator(std::vector<
                              class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>&&);

    // symbol: ??1ScriptActorIterator@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorIterator();

    // symbol:
    // ?bind@ScriptActorIterator@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptActorIterator@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
