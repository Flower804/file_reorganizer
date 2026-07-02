#include "dir_reader.h"

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void dir_reader::initiator(int mode, std::string volume) {
    reorganizer(mode, volume);
}

void dir_reader::reorganizer(int mode, std::string volume) {
    std::string path = volume;
    int position = 1;

    for (const auto& entry : fs::directory_iterator(path)) {
        File file;
        file.Updater(entry.path().filename().string(), position);

        filelist.push_back(file);
        
        position++;
        //std::cout << entry.path() << std::endl;
    }
}

void dir_reader::set_file_list(std::list<File> received_filelist) {
    filelist = received_filelist;
}