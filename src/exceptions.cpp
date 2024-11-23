#include <iostream>
#include "exceptions.hpp"
#include "termcolor.hpp"

using std::cin;
using std::cout;
using std::string;
using std::endl;

class l_error {
    private:
        // end_lithe_program overrides yield_message, and immediately kills the program
        bool end_lithe_program = true;
        bool show_message = true;
        bool yield_message = false;

    public:
        auto report(string description);
};

auto l_error::report(string description) {
    if (show_message) {
        // Print description
        cout << termcolor::red << "[ERR] " << description << termcolor::reset << endl;
    }
    if (end_lithe_program) {
        exit(1);
    }
    if (yield_message) { return description; }
}