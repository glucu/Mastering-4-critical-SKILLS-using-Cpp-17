#include <iostream>

int main() {

    int n{};
    std::cin >> n;
    
    int res{};
    while(n != 0) {
        int lastDigit{n % 10};

        res = res * 10 + lastDigit;
        n /= 10;
    }

    std::cout << res << ' ' << res * 3 << '\n';

    return 0;
}