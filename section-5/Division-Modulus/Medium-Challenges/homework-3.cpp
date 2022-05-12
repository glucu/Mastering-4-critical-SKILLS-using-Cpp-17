#include <iostream>

int main() {

    int num{};
    std::cin >> num;

    num /= 10;
    num /= 10;
    num /= 10;

    std::cout << num % 10 << '\n';

    return 0;
}