#include <iostream>
#include <string>

int main() {

	std::string s, t;
	std::cin >> s >> t;

	std::size_t maxLength{ s.size() > t.size() ? s.size() : t.size() };
	for(std::size_t i{}; i != maxLength; ++i) {
		if(i != s.size()) {
			std::cout << s[i];
		}
		if(i != t.size()) {
			std::cout << t[i];
		}
	}
	std::cout << '\n';

	return 0;
}