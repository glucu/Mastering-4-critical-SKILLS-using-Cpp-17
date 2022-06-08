#include <iostream>

int main() {

    int n{};
    char character{};
    std::cin >> n >> character;

    int i{};
    while(i < n) {
        std::cout << character;
        ++i;
    }   

    return 0;
}