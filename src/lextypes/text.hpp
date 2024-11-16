#ifndef TEXT_HPP
#define TEXT_HPP

#include <iostream>

using std::cout;
using std::cin;
using std::string;

class l_text
{
    private:
        enum
        {
            STI_EXTENDED = 1
        };
        string value;
    
    public:
        void set_value(string text);
        
};

void l_text::set_value(string text) {
    try {
        value = text;
    } catch (std::invalid_argument) {
        
    }
        
}

#endif