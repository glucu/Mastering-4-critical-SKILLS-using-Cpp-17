#include <iostream>

int main() {

    int x{}, num1{}, num2{}, num3{}, num4{}, num5{};
    std::cin >> x >> num1 >> num2 >> num3 >> num4 >> num5;

    int cnt{};
    if(num1 <= x) {
        ++cnt;
    }
    if(num2 <= x) {
        ++cnt;
    }
    if(num3 <= x) {
        ++cnt;
    }
    if(num4 <= x) {
        ++cnt;
    }
    if(num5 <= x) {
        ++cnt;
    }

    std::cout << cnt << ' ' << 5 - cnt << '\n';
    
    return 0;
}