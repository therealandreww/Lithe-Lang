#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

class l_error {
    private:
        enum {
            END_LITHE_PROGRAM = 1,
            KILL_SWITCH = 1
        };

    public:
        string description;
};
