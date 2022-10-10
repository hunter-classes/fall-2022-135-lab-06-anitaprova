#include <iostream>
#include <string>
#include <cctype>

char shiftChar(char c, int rshift){
	if(isspace(c) != true) {	
		for(int i = 0; i < rshift; i++){
			if(c == 90) {
				c = 65;
			}
			else if(c == 122){
				c = 97;
			}
			else {
				c++;
			}
		}
	}
	
	return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){
	std::string encrypt_text;
	for(int i = 0; i < plaintext.size(); i++) {
		encrypt_text += shiftChar(plaintext[i], rshift);
	}

	return encrypt_text;
}
