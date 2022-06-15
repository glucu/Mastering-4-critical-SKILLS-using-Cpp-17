#include <iostream>

int main() {

    int n{}, a{}, b{}, sum{};
    std::cin >> n >> a >> b;

    for(int i{1}; i <= n; ++i) {
        int tmp{i};
        int digitsSum{};

        while(tmp > 0) {
            digitsSum += tmp % 10;
            tmp /= 10;
        }
        if(a <= digitsSum && digitsSum <= b) {
            sum += i;
        }
    }
    std::cout << sum << '\n';
    
    return 0;
}