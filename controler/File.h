#ifndef FILE_H
#define FILE_H

#include <string>

class File {
public:
    std::string filename;
    int position;

    void Updater(std::string new_filename, int new_position);
};

#endif