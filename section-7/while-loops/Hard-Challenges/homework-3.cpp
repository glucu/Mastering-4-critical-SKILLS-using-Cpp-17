#include <iostream>

int main() {

    int n{}, m{};
    std::cin >> n >> m;

    int row{1};
    while(row <= n) {

        int col{1};
        while(col <= m) {
            std::cout << row << " x " << col << " = " 
                      << (row * col) << '\n';
            ++col;
        }
        ++row;
    }

    return 0;
}