#include <iostream>
#include <string>

int main() {

    // read first student
    std::cout << "What is student 1 name: ";
    std::string student1;
    std::cin >> student1;

    std::cout << "His id: ";
    int student1Id{};
    std::cin >> student1Id;

    std::cout << "His math exam grade: ";
    double student1Grade{};
    std::cin >> student1Grade;

    // read second student
    std::cout << "What is student 2 name: ";
    std::string student2;
    std::cin >> student2;

    std::cout << "His id: ";
    int student2Id{};
    std::cin >> student2Id;

    std::cout << "His math exam grade: ";
    double student2Grade{};
    std::cin >> student2Grade;

    // print results
    std::cout << "\nStudents grades in math\n"
              << student1 << " (with id " << student1Id << ") got grade: " << student1Grade << '\n'
              << student2 << " (with id " << student2Id << ") got grade: " << student2Grade << '\n'
              << "Average grade is " << (student1Grade + student2Grade) / 2.0 << '\n';

    return 0;
}