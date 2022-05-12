#include <iostream>

int main() {

    int A{}, B{};
    std::cin >> A >> B;

    int isPositiveOne{A * A};
    int isNegativeOne{2 * A + 1};

    int isOne{ (B + 1) / 2};
    int isNegOne{1 - isOne};

    std::cout << isOne * isPositiveOne + isNegOne * isNegativeOne << '\n';
    
    return 0;
}