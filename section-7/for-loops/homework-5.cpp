#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    int chk{};
    for(int i{2}; i <= n; ++i) {
        for(int j{2}; j < i; ++j) {
            if(i % j == 0) {
                ++chk;
                break;
            }
        }
        if(chk == 0 && i != 1) {
            std::cout << i << ' ';
        }
        chk = 0;
    }

    return 0;
}