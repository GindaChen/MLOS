//*********************************************************************
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See License.txt in the project root
// for license information.
//
// @File: Main.cpp
//
// Purpose:
//      <description>
//
// Notes:
//      <special-instructions>
//
//*********************************************************************

#include "stdafx.h"

// Since they are not inlined, include the MlosPlatform.Std definitions only
// once in the project to prevent duplicate definition warnings.
//
#include "MlosPlatform.Std.inl"

#pragma warning(push)
#pragma warning(disable: 4996 4251 4275 4244)
#include "gtest/gtest.h"
#pragma warning(pop)
using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

int
__cdecl
main(
    _In_ int argc,
    _In_ char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
