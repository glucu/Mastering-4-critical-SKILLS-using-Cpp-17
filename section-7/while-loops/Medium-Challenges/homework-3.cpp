#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    int idx{};
    int currentNum{};
    while(idx < n) {
        if(currentNum % 3 == 0 && currentNum % 4 != 0) {
            std::cout << currentNum << ' ';
            ++idx;
        }
        ++currentNum;
    }

    return 0;
}