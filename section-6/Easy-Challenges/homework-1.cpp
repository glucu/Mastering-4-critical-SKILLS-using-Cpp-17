#include <iostream>

int main() {

    int a{}, b{};
    std::cin >> a >> b;

    bool isAEven{a % 2 == 0};
    bool isBEven{b % 2 == 0};

    if(!isAEven && !isBEven) {
        std::cout << (a * b) << '\n';
    }
    else if(isAEven && isBEven) {
        std::cout << (a / b) << '\n';
    }
    else if(!isAEven && isBEven) {
        std::cout << (a + b) << '\n';
    }
    else {
        std::cout << (a - b) << '\n';
    }


    return 0;
}