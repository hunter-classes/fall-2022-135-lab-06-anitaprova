#include <iostream>
#include <string>

int main(){
	std::string str;
	getline(std::cin, str);
	
	for (int i = 0; i < str.size(); i++){
		std::cout << str[i] << " " << (int)str[i] << std::endl;
	}

	return 0;
}
