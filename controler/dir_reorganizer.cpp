#include "dir_reorganizer.h"

#include <filesystem>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <random>

namespace fs = std::filesystem;

void dir_reorganizer::list_reorganizer(){
    std::vector<File*> files;

    for(File& file : filelist){
        files.push_back(&file);
    }

    std::random_device rd;
    std::mt19937 gen(rd());

    std::shuffle(files.begin(), files.end(), gen);

    int pos = 0;
    for(File& file : filelist){
        file.Updater(file.get_filename(), pos);
        pos++;
    }
}

void dir_reorganizer::list_getter(std::list<File> received_filelist){
    filelist = received_filelist;
}
