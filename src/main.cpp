// System headers
#include <iostream>

// Sourced headers
#include "termcolor.hpp"

// Code headers
#include "lexer.hpp"
#include "exceptions.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, const char * argv[]) {
    if (argc < 2) {
        cout << "The Lithe Project 2024\n";
        cout << termcolor::red << "Invalid use, check the online documentation: https://andrewslair.org\n" << termcolor::reset;
        return 1;
    }
    
    cout << std::stoi("H") << endl;
    return 0;
}
