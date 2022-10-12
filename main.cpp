#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
	std::cout << shiftChar('W', 10) << std::endl;
	
	std::cout << encryptCaesar("Hello, World!", 10) << std::endl;	
	
	std::cout << encryptVigenere("Hello, World!", "cake") << std::endl;
	
	std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
	
	std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;

	return 0;
}
