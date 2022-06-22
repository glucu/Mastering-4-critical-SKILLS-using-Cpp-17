#include <iostream>

int main() {

    int nums[1000]{}, n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> nums[i];
    }

    bool isPalindrome{true};
    for(int i{}; i < n/2; ++i) {
        if(nums[i] != nums[n-i-1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

	return 0;
}