

#include <iostream>
#include <string>
#include "parse_input1.cpp"
#include "convert_to_binary.cpp"



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

/// If you want to verify that this code works properly in your environment, please make sure to create the files as i did above and compile them together using a C++17 compatible compiler.
/// Example compilation command (using g++):
/// You open a local terminal in your Vs Code where you installed C++ and different extensions of it,
/// then you just enter the following command:
/// g++ main.cpp -o main and then you press enter 
/// After that you can run the program by typing ./main and then some instructions are going to pop Up, you just have to follow them.