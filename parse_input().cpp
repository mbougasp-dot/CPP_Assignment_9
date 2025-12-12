#include "functions.h"



std::string parse_input(const std::string& input) {
    if (input.rfind("0x", 0) == 0 || input.rfind("0X", 0) == 0) {
        return "hex";
    }