#include <iostream>

// 123 -> 321

int main() {

    int n{};
    std::cin >> n;

    int result{};
    while(n != 0) {
        result = (result * 10) + (n % 10);
        n /= 10;
    }

    std::cout << result << ' ' << (result * 3) << '\n';

    return 0;
}