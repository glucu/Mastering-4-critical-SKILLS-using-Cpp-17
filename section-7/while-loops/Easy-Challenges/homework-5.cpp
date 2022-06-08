#include <iostream>

int main() {
    
    int n{};
    std::cin >> n;

    double evenSum{}, evenCnt{};
    double oddSum{}, oddCnt{};
    double num{};
    int i{1};
    while(i <= n) {
        std::cin >> num;
        
        if(i % 2 == 0) {
            evenSum += num;
            ++evenCnt;
        }
        else {
            oddSum += num;
            ++oddCnt;
        }

        ++i;
    }

    std::cout << (evenSum / evenCnt) << ' ' << (oddSum / oddCnt) << '\n';

    return 0;
} 