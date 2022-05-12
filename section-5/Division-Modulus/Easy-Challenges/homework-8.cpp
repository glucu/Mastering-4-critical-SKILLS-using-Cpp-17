#include <iostream>

int main() {

    double num1{}, num2{};
    std::cin >> num1 >> num2;

    double fractNum{ num1 / num2 };
    int wholeNum = fractNum;

    std::cout << fractNum - wholeNum << '\n';

    return 0;
}