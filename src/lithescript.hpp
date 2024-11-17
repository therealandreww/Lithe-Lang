#ifndef LITHESCRIPT_HPP
#define LITHESCRIPT_HPP

#include <iostream>

using std::cout;
using std::cin;
using std::string;

bool endsWith(const std::string& s, const std::string& suffix);

namespace script {
    bool is_valid(string scriptPath);
}

#endif