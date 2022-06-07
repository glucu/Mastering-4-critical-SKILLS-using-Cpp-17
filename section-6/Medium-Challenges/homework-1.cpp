#include <iostream>

int main() {

    int num1{}, num2{}, num3{}, num4{}, num5{}, num6{}, num7{}, num8{}, num9{}, num10{};
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;

    int largest{};

    largest = (num1 > num2) ? num1 : num2;
    largest = (largest < num3) ? num3 : largest;
    largest = (largest < num4) ? num4 : largest;
    largest = (largest < num5) ? num5 : largest;
    largest = (largest < num6) ? num6 : largest;
    largest = (largest < num7) ? num7 : largest;
    largest = (largest < num8) ? num8 : largest;
    largest = (largest < num9) ? num9 : largest;
    largest = (largest < num10) ? num10 : largest;

    std::cout << largest << '\n';

    return 0;
}

