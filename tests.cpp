#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Tests for shiftChar function")
{
  CHECK(shiftChar('A', 10) == 'K');
  CHECK(shiftChar('b', 3) == 'e');
  CHECK(shiftChar('C', 5) == 'H');
}

TEST_CASE("Tests for encryptCaesar function")
{
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
  CHECK(encryptCaesar("123 Happy Spring!", 2) == "123 Jcrra Urtkpi!");
}

TEST_CASE("Tests for encryptVigenere function")
{
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("I love coding!", "cool") == "K zcgg qcokbu!");
}

TEST_CASE("Tests for decryptCaesar function")
{
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptCaesar("123 Jcrra Urtkpi!", 2) == "123 Happy Spring!");
}

TEST_CASE("Tests for decryptVigenere function")
{
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
  CHECK(decryptVigenere("K zcgg qcokbu!", "cool") == "I love coding!");
}