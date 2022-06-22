#include <iostream>

int main() {

    int nums[1000]{}, n{};
	std::cin >> n; 

	for(int i{}; i != n; ++i) {
		std::cin >> nums[i];
	}

	for(int i{}; i != n; ++i) {
		if(i != 0 && nums[i-1] != nums[i]) {
			std::cout << nums[i] << ' ';
		}
	}
	std::cout << '\n';

	return 0;
}