#include <iostream>

int main() {

    int nums[200]{}, n{};
    std::cin >> n;

    bool isIncreasing{true};
    for(int i{}; i != n; ++i) {
        std::cin >> nums[i];
        if(i != 0 && nums[i] < nums[i-1]) {
            isIncreasing = false;
            break;
        }
    }

    if(isIncreasing) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

	return 0;
}