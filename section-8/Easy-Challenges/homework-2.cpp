#include <iostream>

int main() {

    int nums[200]{}, n{}, min{2000}, max{0};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> nums[i];
        min = (nums[i] < min) ? nums[i] : min;
        max = (nums[i] > max) ? nums[i] : max;
    }

    for(int i{}; i != n; ++i) {
        if(nums[i] == min)      nums[i] = max;
        else if(nums[i] == max) nums[i] = min;
    }

    for(int i{}; i != n; ++i) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';

	return 0;
}