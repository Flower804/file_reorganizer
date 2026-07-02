#include "File.h"

void File::Updater(std::string new_filename, int new_position) {
    position = new_position;
    filename = std::to_string(new_position) + "_" + new_filename;
}