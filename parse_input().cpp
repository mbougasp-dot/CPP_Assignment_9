#include <string>

using namespace std;
""
string parse_input(const string& input) {
    if (input.rfind("0x", 0) == 0 || input.rfind("0X", 0) == 0) {
        return "hex";
    }
    return "integer";
}