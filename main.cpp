#include <iostream>
#include "bottle.h"
#include <vector>
#include <string>

int main() {
    std::vector<Bottle> bottles;
    std::string command;
    while (std::cin >> command) {
        if (command == "create") {
            double size, percent;
            std::cin >> size >> percent;
            if (size < 0 || percent < 0 || percent > 1) {
                std::cout << "Incorrect parameters\n";
                continue;
            }
            bottles.emplace_back(size, percent);
            std::cout   << "You created bottle number " << bottles.size() - 1 << "\n"
                        << "Bottle size: " << bottles.back().GetVolume() << "\n"
                        << "Bottle fill percent: " << bottles.back().GetFillPercent() << "\n";
        } else if (command == "compare") {
            char compare;
            int lhs, rhs;
            std::cin >> compare >> lhs >> rhs;
            if ( lhs < 0 || lhs >= bottles.size() || rhs < 0 || rhs >= bottles.size()
                    || (compare != '=' && compare != '>' && compare != '<')) {
                std::cout << "Incorrect parameters" << "\n";
                continue;
            }
            if (compare == '<') {
                std::cout << std::boolalpha << bottles[lhs].Less(bottles[rhs]) << "\n";
            } else if (compare == '=') {
                std::cout << std::boolalpha << bottles[lhs].Equal(bottles[rhs]) << "\n";
            } else if (compare == '>') {
                std::cout << std::boolalpha << bottles[lhs].More(bottles[rhs]) << "\n";
            }
        } else if (command == "operation") {
            char operation;
            int lhs, rhs;
            std::cin >> operation >> lhs >> rhs;
            while ( lhs < 0 || lhs >= bottles.size() || rhs < 0 || rhs >= bottles.size()
                    || (operation != '-' && operation != '+')) {
                std::cout << "Incorrect parameters\n";
                std::cin >> operation >> lhs >> rhs;
            }
            if (operation == '+') {
                std::cout << bottles[lhs].Sum(bottles[rhs]) << "\n";
            } else if (operation == '-') {
                std::cout << bottles[lhs].Substract(bottles[rhs]) << "\n";
            }
        } else if (command == "exit") {
            break;
        } else {
            std::cin.ignore(32767,'\n');
            std::cout << "Unknown command\n";
        }
    }
    return 0;
}