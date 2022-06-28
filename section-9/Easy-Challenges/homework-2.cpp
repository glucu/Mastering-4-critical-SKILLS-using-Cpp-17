#include <iostream>
#include <string>

int main() {

	std::string input, str;
	std::cin >> input >> str;

	if(input.size() < str.size()) {
        std::cout << "NO\n";
    }
    else {
        bool isSuffix{true};
        for(int i{}; i < str.size(); ++i) {
            if(input[input.size()-str.size()+i] != str[i]) {
                isSuffix = false;
                break;
            }
        }

        if(isSuffix) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }

	return 0;
}