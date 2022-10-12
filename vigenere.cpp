#include <iostream>
#include <string>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
	std::string newstring;
	int i = 0; 
	int j = 0; 
	while (i < plaintext.size()){
		if( (plaintext[i] >= 65 && plaintext[i] <= 90) || (plaintext[i] >= 97 && plaintext[i] <= 122) ) {
			newstring += shiftChar(plaintext[i], keyword[j]-97); 
			if(j == keyword.size() - 1) {
				j = 0;
			}
			else{
				j++;
			}
		}
		else {
			newstring += plaintext[i];
		}
		i++;
	}
	return newstring;
}


