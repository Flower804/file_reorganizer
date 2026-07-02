#ifndef FILE_H
#define FILE_H

#include <string>

class File {
    public:
        void Updater(std::string new_filename, int new_position);
        std::string get_filename();
    
    private:
        std::string filename;
        int position;
};

#endif