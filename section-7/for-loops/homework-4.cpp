#include <iostream>

int main() {

    int n{};
    std::cin >> n;


    std::string res{"YES"};
    for(int i{2}; i <= n/2; ++i) {
        if(n % i == 0) {
            res = "NO";
            break;
        }
    }

    std::cout << res << '\n';

    return 0;
}