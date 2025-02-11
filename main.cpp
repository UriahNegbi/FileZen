#include "FileOrganizer.h"
#include <iostream>

int main() {
    std::string input;

    while (true) {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);

        if (input == "exit") break;

        if (input.find("sort") != std::string::npos) {
            size_t configPos = input.find("-") + 1;
            if (configPos != std::string::npos) {
                std::filesystem::path installFolder = lookPath(installFolder);
                configZen = input.substr(configPos);
                Organizer(installFolder, configZen);
            }
            else {
                std::cerr << "Error: Missing config file path.\n";
            }
        }
    }

    return 0;
}
