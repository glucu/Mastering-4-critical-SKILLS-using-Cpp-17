#include <iostream>
#include <limits>

int main() {

    int nums[200]{}, n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> nums[i];
    }

    int minPair{std::numeric_limits<int>::max()};
    for(int i{}; i != n; ++i) {
        for(int j{i+1}; j != n; ++j) {
            int curr{nums[i] + nums[j] + j - i};
            if(curr < minPair) {
                minPair = curr;
            }
        }
    }

    std::cout << minPair << '\n';

	return 0;
}