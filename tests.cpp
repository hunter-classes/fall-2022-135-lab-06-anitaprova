#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("caesar"){
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("abcdefghijklmnopqrstuvwxyz", 18) == "stuvwxyzabcdefghijklmnopqr");
}

TEST_CASE("vigenere"){
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("yee-haw partner", "cowboy") == "asa-iou ronubct");
	CHECK(encryptVigenere("abcdefghijklmnopqrstuvwxyz", "christmas") == "citlwyshalrcufhbqjualdoqkz");
}

TEST_CASE("decrypt"){
	CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
	CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");

	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
	CHECK(decryptVigenere("asa-iou ronubct", "cowboy") == "yee-haw partner");
}

