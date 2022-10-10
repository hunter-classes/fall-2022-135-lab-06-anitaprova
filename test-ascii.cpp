#include <iostream>
#include <string>

std::string test_ascii(std::string str){
	for(int i = 0; i < str.size(); i++){
		std::cout << str[i] << " " << (int)str[i] << std::endl;
	}
	return "";
}
