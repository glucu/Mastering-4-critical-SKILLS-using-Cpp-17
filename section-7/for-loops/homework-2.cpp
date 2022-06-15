#include <iostream>

int main() {

    int cnt{};
    for(int x{50}; x <= 300; ++x) {
        for(int y{70}; y <= 400; ++y) {
            if(x < y && (x+y) % 7 == 0) {
                ++cnt;
            }
        }
    }

    std::cout << cnt << '\n';

    return 0;
}