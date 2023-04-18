#include <iostream>
#include <regex>

int main() {
    std::string regex_str = "(ab*c|(def)+|a*d+e)+";
    std::regex regex(regex_str);
    
    while (true) {
        std::string input;
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);
        if (input == "exit") {
            break;
        }
        if (std::regex_match(input, regex)) {
            std::cout << "Match!\n";
        } else {
            std::cout << "No match.\n";
        }
    }
    
    return 0;
}