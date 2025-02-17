#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalLinkSettings {
public:
    std::string mUrl;
    std::string mDisplayName;

    // prevent constructor by default
    ExternalLinkSettings& operator=(ExternalLinkSettings const&) = delete;
    ExternalLinkSettings(ExternalLinkSettings const&)            = delete;
    ExternalLinkSettings()                                       = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ExternalLinkSettings@@QEAA@XZ
    MCAPI ~ExternalLinkSettings();

    // NOLINTEND
};
