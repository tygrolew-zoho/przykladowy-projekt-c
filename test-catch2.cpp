#define CATCH_CONFIG_MAIN
#include "catch2.9.2/catch.hpp"
#include "fun.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

TEST_CASE("Dobry test funkcji hello()", "[hello]") {
    char tekst[10];
    hello(tekst);
    REQUIRE(strlen(tekst)==5);
    REQUIRE(strcmp(tekst,"Hello")==0);
}

TEST_CASE("Niedobry test funkcji hello()", "[hello]") {
    char tekst[10];
    hello(tekst);
    REQUIRE(strlen(tekst)==6);
    REQUIRE(strcmp(tekst,"Hello")!=0);
}
