#include "File.h"

#include <string>

void File::Updater(std::string new_filename, int new_position) {
    position = new_position;
    filename = std::to_string(new_position) + "_" + new_filename;
}

std::string File::get_filename(){
    return filename;
}