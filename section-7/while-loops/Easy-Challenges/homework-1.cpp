#include <iostream>

int main() {

    int start{}, end{};
    std::cin >> start >> end;

    while(start <= end) {
        std::cout << start << '\n';
        ++start;
    }

    return 0;
}