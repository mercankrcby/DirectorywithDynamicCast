#include <iostream>
#include <string>
#include <vector>
#include "file.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
namespace HW8_MERCAN {

    File::File() {
        setName("mercan");
        setOwner("damla");
        setLastModifie("9/4/2015");
        setSize(5);
    }

    File::File(std::string FileName, std::string FileOwner, int FileSize, std::string FileLastModifie) {
        setName(FileName);
        setOwner(FileOwner);
        setLastModifie(FileLastModifie);
        setSize(FileSize);

    }

    File::File(const File& copy) {
        setName(copy.getName());
        setOwner(copy.getOwner());
        setLastModifie(copy.getLModifie());
        setSize(copy.getSize());

    }

    std::string File::getLModifie() const {
        return lastModificaiton;
    }

    std::string File::getName() const {
        return name;
    }

    std::string File::getOwner() const {
        return owner;
    }

    int File::getSize() const {
        return size;
    }

    void File::setLastModifie(std::string lModifie) {
        lastModificaiton = lModifie;
    }

    void File::setName(std::string nameFile) {
        name = nameFile;
    }

    void File::setOwner(std::string ownFile) {
        owner = ownFile;
    }

    void File::setSize(int sizeFile) {
        size = sizeFile;
    }
}