#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "zadanie.hpp"

TEST_CASE("Test dodawania") {
  CHECK(dodaj(2, 2) == 4);
  CHECK(dodaj(-2, 2) == 0);
  CHECK(dodaj(42, 0) == 42);
}
