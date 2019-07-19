// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "precomp.h"

#include "jsoncpp/json/json.h"

//#include "../cascadia/TerminalApp/Utils.h"

std::string GetStringFromJson(const Json::Value& json)
{
    return json.asString();
}

using namespace WEX::Logging;

class TerminalAppUtilsTests
{
    TEST_CLASS(TerminalAppUtilsTests);

    TEST_METHOD(Blah)
    {
        Json::Value jsonNull;
        Log::Comment(L"Hooray!");

        std::string str = GetStringFromJson(jsonNull);
        VERIFY_ARE_EQUAL(std::string{}, str, L"Double hooray!");
    }
};
