#include <iostream>

int main() {

    int x{}, s1{}, e1{}, s2{}, e2{}, s3{}, e3{};
    std::cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    int cnt{};
    if(x >= s1 && x <= e1) {
        ++cnt;
    }
    if(x >= s2 && x <= e2) {
        ++cnt;
    }
    if(x >= s3 && x <= e3) {
        ++cnt;
    }

    std::cout << cnt << '\n';

    return 0;
}