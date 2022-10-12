#include <iostream>
#include "test-ascii.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  	test_ascii("Cat :3 Dog");
	
	std::cout << shiftChar('W', 10) << std::endl;
	
	std::cout << encryptCaesar("Hello, World!", 10) << std::endl;	
	
	std::cout << encryptVigenere("Hello, World!", "cake") << std::endl;
	
	std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
	
	std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;

	return 0;
}
