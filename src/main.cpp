#include <iostream>
#include "termcolor.hpp"

using std::cout;
using std::cin;
using std::string;

int main(int argc, const char * argv[]) {
    if (argc < 2) {
        cout << "The Lithe Project 2024\n";
        cout << termcolor::red << "Invalid use, check the online documentation: https://andrewslair.org\n" << termcolor::reset;
    }
    return 0;
}
