#include <iostream>

int main(int argc, char** argv) {
    if (argc <= 1) {
        std::cerr << "Missing argument!" << std::endl;
    }
    unsigned wantedIndex = std::stoul(std::string(argv[1]));

    unsigned index = 1;
    for (std::string line; std::getline(std::cin, line); ) {
        if (index == wantedIndex) {
            std::cout << line << "\n";
            return 0;
        }
        index++;
    }
    std::cerr << "Not enough lines provided (Read " << (index - 1) << " lines...)\n";
    return 1;
}
