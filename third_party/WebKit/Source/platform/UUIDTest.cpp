// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "platform/UUID.h"

#include <gtest/gtest.h>

namespace blink {

TEST(UUIDTest, BaseUUID)
{
    EXPECT_TRUE(isValidUUID("00000000-0000-0000-0000-000000000000"));
}

TEST(UUIDTest, ComplexUUID)
{
    EXPECT_TRUE(isValidUUID("01234567-89ab-cdef-0123-456789abcdef"));
    EXPECT_TRUE(isValidUUID("7ad025e0-1e86-11e5-b5f7-727283247c7f"));
}

TEST(UUIDTest, WrongCharacter)
{
    EXPECT_FALSE(isValidUUID("g0000000-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("0000000g-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-g000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-000g-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-g000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-000g-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-g000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-000g-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-g00000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-00000000000g"));
}

TEST(UUIDTest, UpperCaseCharacter)
{
    EXPECT_FALSE(isValidUUID("A0000000-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("0000000A-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-A000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-000A-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-A000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-000A-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-A000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-000A-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-A00000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-00000000000A"));
}

TEST(UUIDTest, LongUUID)
{
    EXPECT_FALSE(isValidUUID("a00000000-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000a-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-a0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000a-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-a0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000a-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-a0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000a-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-a000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-000000000000a"));
}

TEST(UUIDTest, ShortUUID)
{
    EXPECT_FALSE(isValidUUID("0000000-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("0000000-0000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-000-0000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-000-0000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-000-000000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-00000000000"));
    EXPECT_FALSE(isValidUUID("00000000-0000-0000-0000-00000000000"));
}

TEST(UUIDTest, NoHyphen)
{
    EXPECT_FALSE(isValidUUID("00000000 0000 0000 0000 000000000000"));
}

} // namespace blink
