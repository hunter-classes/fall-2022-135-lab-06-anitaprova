#include <iostream>
#include "test-ascii.h"
#include "caesar.h"

int main()
{
  	test_ascii("Cat :3 Dog");
	std::cout << shiftChar('W', 10) << std::endl;
	std::cout << encryptCaesar("Hello, World!", 10) << std::endl;	
	
	return 0;
}
