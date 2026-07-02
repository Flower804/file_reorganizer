#include <string>
#include <iostream>
#include <filesystem>
#include <list>
namespace fs = std::filesystem;

class File {
    public:
        std::string filename;
        int position;

        void Updater(std::string new_filename, int new_position){
            std::string position_to_string = std::to_string(new_position);

            filename = new_position + "_" + new_filename;
        }
};

class dir_reader {
    public:
        void initiator(int mode, std::string volume){
            reorganizer(mode, volume);
        }

        void reorganizer(int mode, std::string volume){
            std::string path = volume;
            for(const auto & entry : fs::directory_iterator(path)){
                std::cout << entry.path() << std::endl;
            }
        }

    private:
        std::list<File> filelist;

        void set_file_list( std::list<File> received_filelist){
            filelist = received_filelist;
        }
};

int main(int mode, std::string volume){
    dir_reader reader;
    
    if((mode == 1) || (mode == 2)){
        reader.initiator(mode, volume);        
    }else{
        std::cout << "argument passed: " << mode << " argument invalid" << '\n';
    }
}