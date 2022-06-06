#include <iostream>

int main() {

    int num1{}, num2{}, num3{};
    std::cin >> num1 >> num2 >> num3;

    int tmp{};
    if(num1 > num2) {
        tmp = {num1};
        num1 = num2;
        num2 = tmp;
    }

    if(num2 > num3) {
        tmp = {num2};
        num2 = num3;
        num3 = tmp;

        if(num1 > num2) {
            tmp = {num1};
            num1 = num2;
            num2 = tmp;
        }

    }

    std::cout << num1 << ' ' << num2 << ' ' << num3 << '\n';

    return 0;
}