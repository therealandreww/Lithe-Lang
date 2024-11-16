#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(int argc, const char * argv[]) {
    if (sizeof(argv) < 2) {
        cout << "The Lithe Project 2024\n";
        cout << "Check the online documentation: https://andrewslair.org\n";
    }
    return 0;
}
