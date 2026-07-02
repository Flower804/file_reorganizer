#ifndef DIR_READER_H
#define DIR_READER_H

#include <string>
#include <list>

#include "File.h"

class dir_reader {
public:
    void initiator(int mode, std::string volume);
    void reorganizer(int mode, std::string volume);

private:
    std::list<File> filelist;

    void set_file_list(std::list<File> received_filelist);
};

#endif