#include <iostream>

int main() {

    int even1{}, even2{}, even3{}, even4{};
    int odd1{}, odd2{}, odd3{}, odd4{};

    std::cin >> odd1 >> even1 >> odd2 >> even2 >> odd3 >> even3 >> odd4 >> even4;

    int evenSum{ even1 + even2 + even3 + even4 };
    int oddSum{ odd1 + odd2 + odd3 + odd4 };

    std::cout << evenSum << ' ' << oddSum << '\n';
    
    return 0;
}