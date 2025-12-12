#include <string>
#include <bitset>
#include <sstream>


using namespace std;

string convert_to_binary(const string& type, const string& input) {
    unsigned int number;

    if (type == "hex") {
        std::stringstream ss;
        ss << std::hex << input;
        ss >> number;
    } else {
        number = std::stoi(input);
    }

    std::bitset<32> binary(number);

    std::string binaryStr = binary.to_string();
    binaryStr.erase(0, binaryStr.find_first_not_of('0'));

    return binaryStr;
}