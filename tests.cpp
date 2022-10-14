#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("shift character"){
	CHECK(shiftChar('a', 1) ==  'b');
	CHECK(shiftChar('a', 15) ==  'p');
	CHECK(shiftChar('z', 11) ==  'k');
	CHECK(shiftChar('q', 8) ==  'y');
}

TEST_CASE("caesar"){
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("abcdefghijklmnopqrstuvwxyz", 18) == "stuvwxyzabcdefghijklmnopqr");
	CHECK(encryptCaesar("Sometimes all I think about is you", 13) == "Fbzrgvzrf nyy V guvax nobhg vf lbh");
}

TEST_CASE("vigenere"){
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("yee-haw partner", "cowboy") == "asa-iou ronubct");
	CHECK(encryptVigenere("abcdefghijklmnopqrstuvwxyz", "christmas") == "citlwyshalrcufhbqjualdoqkz");
	CHECK(encryptVigenere("Late nights in the middle of June", "glass") == "Rltw forhlk oy tzw stdvdk zf Bmtp");
}

TEST_CASE("decrypt"){
	CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
	CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
	CHECK(decryptCaesar("stuvwxyzabcdefghijklmnopqr", 18) == "abcdefghijklmnopqrstuvwxyz");
	CHECK(decryptCaesar("Fbzrgvzrf nyy V guvax nobhg vf lbh", 13) == "Sometimes all I think about is you");

	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
	CHECK(decryptVigenere("asa-iou ronubct", "cowboy") == "yee-haw partner");
	CHECK(decryptVigenere("citlwyshalrcufhbqjualdoqkz", "christmas") == "abcdefghijklmnopqrstuvwxyz");
	CHECK(decryptVigenere("Rltw forhlk oy tzw stdvdk zf Bmtp", "glass") == "Late nights in the middle of June");

}

