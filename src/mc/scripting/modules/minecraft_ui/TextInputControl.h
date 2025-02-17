#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/IControl.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraftServerUI { class IControl; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class TextInputControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // prevent constructor by default
    TextInputControl& operator=(TextInputControl const&) = delete;
    TextInputControl(TextInputControl const&)            = delete;
    TextInputControl()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getJson@TextInputControl@ScriptModuleMinecraftServerUI@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value getJson() const;

    // symbol:
    // ??0TextInputControl@ScriptModuleMinecraftServerUI@@QEAA@VValue@Json@@0V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI TextInputControl(class Json::Value, class Json::Value, std::optional<std::string>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
