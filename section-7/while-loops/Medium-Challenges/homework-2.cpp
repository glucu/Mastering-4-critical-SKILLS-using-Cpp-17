#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    int idx{};
    while(idx < n) {
        if(idx % 8 == 0 || (idx % 4 == 0 && idx % 3 == 0)) {
            std::cout << idx << ' ';
        }
        ++idx;
    }

    std::cout << '\n';

    return 0;
}