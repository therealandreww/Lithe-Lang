#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <iostream>

using std::cout;
using std::cin;
using std::string;

class l_int
{
    private:
        enum
        {
            TREATED_AS_INT = 1,
            BETA_TEXT_CONVERSION = 0
        };
        long long int value;
        
};

#endif