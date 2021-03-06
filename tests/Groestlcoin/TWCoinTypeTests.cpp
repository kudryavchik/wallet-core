// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWGroestlcoinCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeGroestlcoin));
    auto txId = TWStringCreateWithUTF8Bytes("123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeGroestlcoin, txId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeGroestlcoin));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeGroestlcoin));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeGroestlcoin), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypeGroestlcoin));
    ASSERT_EQ(0x5, TWCoinTypeP2shPrefix(TWCoinTypeGroestlcoin));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeGroestlcoin));
    assertStringsEqual(symbol, "GRS");
    assertStringsEqual(txUrl, "https://blockchair.com/groestlcoin/transaction/123");
    assertStringsEqual(id, "groestlcoin");
    assertStringsEqual(name, "Groestlcoin");
}
