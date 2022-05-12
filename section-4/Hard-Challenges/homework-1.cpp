#include <iostream>

int main() {

    int num1{}, num2{}, num3{};
    std::cin >> num1 >> num2 >> num3;

    int tmp{ num1 };
    num1 = num2;
    num2 = num3;
    num3 = tmp;

    std::cout << num1 << ' ' << num2 << ' ' << num3 << '\n';
    
    return 0;
}