#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class OpenSSLHashInterface {
public:
    // prevent constructor by default
    OpenSSLHashInterface& operator=(OpenSSLHashInterface const&) = delete;
    OpenSSLHashInterface(OpenSSLHashInterface const&)            = delete;
    OpenSSLHashInterface()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?reset@OpenSSLHashInterface@Hash@Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@OpenSSLHashInterface@Hash@Crypto@@UEAAXPEBXI@Z
    virtual void update(void const*, uint);

    // vIndex: 3, symbol: ?final@OpenSSLHashInterface@Hash@Crypto@@UEAAXPEAE@Z
    virtual void final(uchar*);

    // vIndex: 4, symbol: ?resultSize@OpenSSLHashInterface@Hash@Crypto@@UEBA_KXZ
    virtual uint64 resultSize() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initHashContextPointer@OpenSSLHashInterface@Hash@Crypto@@AEAAXXZ
    MCAPI void _initHashContextPointer();

    // NOLINTEND
};

}; // namespace Crypto::Hash
