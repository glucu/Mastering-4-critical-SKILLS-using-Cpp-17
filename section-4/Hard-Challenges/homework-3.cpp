#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    int sum{ n * (n+1) / 2 };

    std::cout << sum << '\n';
    
    return 0;
}