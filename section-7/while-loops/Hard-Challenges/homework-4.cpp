#include <iostream>

int main() {

    int t{};
    std::cin >> t;

    int sum{};
    while(t > 0) {
         int n{};
         std::cin >> n;

         int i{};
         while(i < n) {
             int num{};
             std::cin >> num;

             int j{};
             int prod{num};
             while(j < j) {
                 prod*=num;
                 ++j;
             }
             sum += prod;

             ++i;
         }

         std::cout << sum << '\n';
         sum = 0;
         --t;
    }

    return 0;
}

/*     2
       3 5 7 2
       4 1 2 3 4 
*/