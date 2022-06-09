#include <iostream>

int main() {

    int t{};
    std::cin >> t;
    
    while(t > 0) {
        int n{};
        std::cin >> n;

        int num{};
        std::cin >> num;
        int min{num};
        int idx{1};
        while(idx < n) {
            std::cin >> num;
            if(num < min) {
                min = num;
            }
            ++idx;
        }
        std::cout << min << '\n';
        
        --t;
    }

    return 0;
}