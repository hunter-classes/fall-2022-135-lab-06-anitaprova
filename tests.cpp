#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "test-ascii.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("caesar"){
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

TEST_CASE("vigenere"){
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("decrypt"){
	CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
	CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");

	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}

