#include <iostream>
#include <string>

int main() {
    std::string str = "hello world";

    // Delete the character at index 1 (the second character)
    str.erase(1, 1);

    std::cout << str << std::endl; // Output: ello world
    return 0;
}