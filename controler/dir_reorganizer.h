#ifndef DIR_REORGANIZER_H
#define DIR_REORGANIZER_H

#include <filesystem>
#include <string>
#include <list>

#include "File.h"

class dir_reorganizer {
    public:
        void list_reorganizer();
        void list_getter(std::list<File> received_filelist);
    private:
        std::list<File> filelist;
};


#endif