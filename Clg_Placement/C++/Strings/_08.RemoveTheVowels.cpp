#include <iostream>
#include <string>
#include <cctype> // for tolower and toupper

int main() {
    std::string str = "Hello, World!";

    // Conversion to C-style string
    const char* cstr = str.c_str();
    std::cout << "C-style string: " << cstr << std::endl;

    // Case conversion
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    std::cout << "After case conversion: " << str << std::endl;

    return 0;
}
