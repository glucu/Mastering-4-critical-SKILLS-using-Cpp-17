#include <iostream>

int main() {

    int num2{}, num3{}, num4{}, num5{}, num6{}, num7{}, num8{}, num9{}, num10{};

    int n{};
    std::cin >> n;

    int largest{};
    std::cin >> largest;
    --n;

    std::cin >> num2;
    largest = (num2 > largest) ? num2 : largest;
    --n;

    if(n != 0) {
        std::cin >> num3;
        largest = (num3 > largest) ? num3 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num4;
        largest = (num4 > largest) ? num4 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num5;
        largest = (num5 > largest) ? num5 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num5;
        largest = (num5 > largest) ? num5 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num6;
        largest = (num6 > largest) ? num6 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num7;
        largest = (num7 > largest) ? num7 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num8;
        largest = (num8 > largest) ? num8 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num9;
        largest = (num9 > largest) ? num9 : largest;
        --n;
    }

    if(n != 0) {
        std::cin >> num10;
        largest = (num10 > largest) ? num10 : largest;
        --n;
    }

    std::cout << largest << '\n';
    

    return 0;
}