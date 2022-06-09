#include <iostream>

int main() {

    int n{};
    std::cin >> n;

    int row{};
    while(row <= n) {
        int whiteSpace{1};
        while(whiteSpace <= n-row) {
            std::cout << ' ';
            ++whiteSpace;
        }
        int ch{1};
        while(ch <= 2*row-1) {
            std::cout << '*';
            ++ch;
        }
        std::cout << '\n';
        ++row;
    }

    --row;
    while(row != 0) {
        int whiteSpace{1};
         while(whiteSpace <= n-row) {
            std::cout << ' ';
            ++whiteSpace;
        }

        int ch{1};
        while(ch <= 2*row-1) {
            std::cout << '*';
            ++ch;
        }
        std::cout << '\n';
        --row;
    }

    return 0;
}