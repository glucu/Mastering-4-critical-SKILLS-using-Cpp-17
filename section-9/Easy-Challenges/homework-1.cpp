#include <iostream>
#include <string>

int main() {

	std::string input, str;
	std::cin >> input >> str;

	if(input.size() < str.size()) {
		std::cout << "NO\n";
	}
	else {
		bool isPrefix{true};
		for(std::size_t i{}; i != str.size(); ++i) {
			if(str[i] != input[i]) {
				isPrefix = false;
				break;
			}
		}

		if(isPrefix) {
			std::cout << "YES\n";
		}
		else {
			std::cout << "NO\n";
		}
		
	}

	return 0;
}