// System headers
#include <iostream>

// Sourced headers
#include "termcolor.hpp"

// Code headers
#include "lexer.hpp"
#include "exceptions.hpp"
#include "lithescript.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main(int argc, const char * argv[]) {
    if (argc < 2) {
        cout << "The Lithe Project 2024\n";
        cout << termcolor::red << "Invalid use, check the online documentation: https://andrewslair.org\n" << termcolor::reset;
        return 1; // Return with marked error
    }

    if (argc > 2) {
        cout << termcolor::red << "[ERR] More than sufficient arguments given" << termcolor::reset << endl;
    } else if (argc > 1) {
        if (!script::is_valid(argv[1])) {
            cout << termcolor::red << "[LitheLinker.LitheScript] Script is not in valid condition" << termcolor::reset << endl;
        } else {
            cout << "[LitheLibrary] Runnning Lithe script: " << argv[1] << endl;
        }

    return 0;
    }
}
