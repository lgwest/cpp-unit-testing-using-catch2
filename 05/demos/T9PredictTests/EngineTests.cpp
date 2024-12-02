#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "Engine.h"

TEST_CASE("Called with word encoding and word is known return word")
{
	Engine t9engine;

	Digits digits;

	auto result = t9engine.GetWordsByDigits(digits);

	SECTION("Called with empty digit list --> returns no results")
	{
		REQUIRE(result.size() == 0);
	}

	SECTION("When called with 43556 and known word then return hello", "[Search][End2End]")
	{
		Engine t9engine;
		t9engine.LearnNewWords({ "hello" });

		Digits digits = { 4,3,5,5,6 };

		auto result = t9engine.GetWordsByDigits(digits);

		REQUIRE(result.size() == 1);
		REQUIRE(result[0] == "hello");
	}

	SECTION("When called with 4663 and known words then return these words", "[Search][multiple words][End2End]")
	{
		Engine t9engine;
		t9engine.LearnNewWords({ "good", "gone", "home" });

		Digits digits = { 4, 6, 6, 3 };

		auto result = t9engine.GetWordsByDigits(digits);

		REQUIRE(result.size() == 3);
		REQUIRE(std::find(result.begin(), result.end(), "good") != result.end());
		REQUIRE(std::find(result.begin(), result.end(), "gone") != result.end());
		REQUIRE(std::find(result.begin(), result.end(), "home") != result.end());
	}

	SECTION("When called with 4663 and known words but other words exist then return only these words", "[Search][multiple words][End2End]")
	{
		Engine t9engine;
		t9engine.LearnNewWords({ "good", "gone", "home", "hello", "bug", "trail" });

		Digits digits = { 4, 6, 6, 3 };

		auto result = t9engine.GetWordsByDigits(digits);

		REQUIRE(result.size() == 3);
		REQUIRE(std::find(result.begin(), result.end(), "good") != result.end());
		REQUIRE(std::find(result.begin(), result.end(), "gone") != result.end());
		REQUIRE(std::find(result.begin(), result.end(), "home") != result.end());
	}
}
