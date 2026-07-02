#include <iostream>
#include <string>

#include "dir_reader.h"

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cout << "Usage: program.exe <mode> <directory>\n";
        return 1;
    }

    int mode = std::stoi(argv[1]);
    std::string volume = argv[2];

    dir_reader reader;

    if (mode == 1 || mode == 2) {
        reader.initiator(mode, volume);
    }
    else {
        std::cout << "Argument passed: " << mode << " is invalid.\n";
    }

    return 0;
}