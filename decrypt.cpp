#include <iostream>
#include <string>
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
	std::string decrypt_text;
	for(int i = 0; i < ciphertext.size(); i++)
	{
		decrypt_text += shiftChar(ciphertext[i], 26-rshift);
	}

	return decrypt_text;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
	std::string decrypt_text;
	int i = 0; 
	int j = 0;
	while (i < ciphertext.size()) {
		if ( (ciphertext[i] >= 65 && ciphertext[i] <= 90) || (ciphertext[i] >= 97 && ciphertext[i] <= 122) ) {
			decrypt_text += shiftChar(ciphertext[i], 26 - (keyword[j]-97)); 
			
			if(j == keyword.size() - 1) {
				j = 0;
			}
			else {
				j++;
			}
		}
		else {
			decrypt_text += ciphertext[i];
		}
		i++;
	}

	return decrypt_text;
}
