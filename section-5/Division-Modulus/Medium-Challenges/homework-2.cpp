#include <iostream>

int main() {

    int num{};
    std::cin >> num;

    int sum{ num % 10 };
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;

    std::cout << sum << '\n';

    return 0;
}