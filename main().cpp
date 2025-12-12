#include <iostream>
#include <string>
#include "functions.h"



int main() {
    std::string userInput;

    std::cout << "Enter a decimal or hexadecimal number (hex starts with 0x): ";
    std::cin >> userInput;

    std::string type = parse_input(userInput);
    std::cout << "You entered a " << type << " number." << std::endl;

    std::string binary = convert_to_binary(type, userInput);
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}