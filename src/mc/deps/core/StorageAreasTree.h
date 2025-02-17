#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class StorageAreasTree {
public:
    // StorageAreasTree inner types declare
    // clang-format off
    struct TreeChild;
    // clang-format on

    // StorageAreasTree inner types define
    struct TreeChild {
    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&) = delete;
        TreeChild(TreeChild const&)            = delete;
        TreeChild()                            = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??4TreeChild@StorageAreasTree@Core@@QEAAAEAU012@$$QEAU012@@Z
        MCAPI struct Core::StorageAreasTree::TreeChild& operator=(struct Core::StorageAreasTree::TreeChild&&);

        // symbol: ??1TreeChild@StorageAreasTree@Core@@QEAA@XZ
        MCAPI ~TreeChild();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StorageAreasTree& operator=(StorageAreasTree const&) = delete;
    StorageAreasTree(StorageAreasTree const&)            = delete;
    StorageAreasTree()                                   = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getStorageArea@StorageAreasTree@Core@@QEBAPEAVFileStorageArea@2@AEBVPath@2@@Z
    MCAPI class Core::FileStorageArea* getStorageArea(class Core::Path const&) const;

    // symbol: ?insertStorageArea@StorageAreasTree@Core@@QEAAXAEAVFileStorageArea@2@@Z
    MCAPI void insertStorageArea(class Core::FileStorageArea&);

    // symbol: ?removeStorageArea@StorageAreasTree@Core@@QEAAXAEAVFileStorageArea@2@@Z
    MCAPI void removeStorageArea(class Core::FileStorageArea&);

    // symbol: ?teardown@StorageAreasTree@Core@@QEAAX$$QEAV?$function@$$A6AXAEAVFileStorageArea@Core@@@Z@std@@@Z
    MCAPI void teardown(std::function<void(class Core::FileStorageArea&)>&&);

    // NOLINTEND
};

}; // namespace Core
