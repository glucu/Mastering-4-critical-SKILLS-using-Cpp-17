#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    int i{};
    while(i < n) {

        int j{-1};
        while(j < i) {
            std::cout << '*';
            ++j;
        }
        std::cout << '\n';
        ++i;
    }
    
    return 0;
}