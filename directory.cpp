#include <iostream>
#include <vector>
#include "directory.h"
#include "executable.h"
#include "text.h"
#include "file.h"
using namespace std;
namespace HW8_MERCAN {

    Directory::Directory() : File() {
        //DirectoryFile.push_back(File("mercan","damla",5,"9.4.2015"));
    }

    Directory::Directory(std::string file1Name, std::string file1Owner, int file1Size, std::string file1LastModifie)
    : File(file1Name, file1Owner, file1Size, file1LastModifie) {
        //   DirectoryFile.push_back(File(file1Name,file1Owner,file1Size,file1LModifie)); 
    }

    std::string Directory::path(std::string pathFile) {
        for (int i = 0; i < DirectoryFile.size(); i++) {
            if (pathFile == DirectoryFile[i]->getName()) {
                std::string pathNew = DirectoryFile[i]->getOwner() + "/" + DirectoryFile[i]->getName();
                return pathNew;
            }
        }


    }

    bool Directory::cp(const File& copied) {
        //dynamic cast yaparak gelen dosyanın hangi turden olduguna bakar
        
        //Executable derived classından turediyse vektore ekleme yapar
        const Executable* copy = dynamic_cast<const Executable*> (&copied);
        if (NULL != copy) {
            DirectoryFile.push_back(new Executable(*copy));
        }
        //TextFile derived classından turediyse vektore ekleme yapar
        const TextFile* newCopy = dynamic_cast<const TextFile*> (&copied);
        if (NULL != newCopy) {
            DirectoryFile.push_back(new TextFile(*newCopy));
        }
        //kendi icindeki dosyaysa
        const Directory* newfile = dynamic_cast<const Directory*> (&copied);
        if (NULL != newfile)
            DirectoryFile.push_back(new Directory(*newfile));

    }

    void Directory::ls(std::string parameter) {
        for (int i = 0; i < DirectoryFile.size(); ++i) {
            DirectoryFile[i]->ls("a");
        }

    }

}

