#include <iostream>

int main() {

    int num{};
    std::cin >> num;

    // is even using %2
    bool isEven1{ num % 2 == 0 };
    std::cout << "isEven1 = " << isEven1 << '\n';

    // is even using /2
    bool isEven2{ num / 2 * 2 == num };
    std::cout << "isEven2 = " << isEven2 << '\n';

    // is even using %10
    int res{ num % 10 };
    bool isEven3{ res == 0 || res == 2 || res == 4 || res == 6 || res == 8 };
    std::cout << "isEven3 = " << isEven3 << '\n';

    return 0;
}