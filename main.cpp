#include <iostream>
#include <string>

int main() {
    bool done = false;
    std::string input;

    while(!done) {
        std::cout << "Enter a command:  ";
        std::getline(std::cin, input);

        if(input == "quit") {
            done = true;
        } else if (input == "help") {
            std::cout
            << "\nCommand List:\n"
            << "help:  Display this help text\n"
            << "quit:  Exit the program\n"
            << std::endl;
        } else {
            std::cout << "Unrecocgnized Command" << std::endl;
        }
    }
    return 0;
}