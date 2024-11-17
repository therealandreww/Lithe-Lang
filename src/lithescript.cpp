#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

bool endsWith(const std::string& s, const std::string& suffix)
{
    return s.rfind(suffix) == (s.size() - suffix.size());
}

namespace script {
    bool is_valid(string scriptPath) {
        /* Checks if a Lithe Script is valid or not. */
        if (!endsWith(scriptPath, ".li")) {return false;}
    }
}