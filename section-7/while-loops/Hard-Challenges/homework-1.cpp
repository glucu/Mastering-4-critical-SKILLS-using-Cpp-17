#include <iostream>
#include <string>

int main() {

    int n{};
    std::cin >> n;

    std::string word;
    std::string result;
    int i{};
    while(i < n) {
        std::cin >> word;

        if(word == "no" || word == "No" || word == "nO" || word == "NO" || 
           word == "on" || word == "oN" || word == "On" || word == "ON") {
            result += word + " ";
        }
        ++i;
    }

    std::cout << result << '\n';

    return 0;
}