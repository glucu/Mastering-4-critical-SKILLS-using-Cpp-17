#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    while(n > 0) {

        int i{};
        while(i < n) {
            std::cout << '*';
            ++i;
        }
        std::cout << '\n';
        --n;
    }
    
    return 0;
}