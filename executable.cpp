
#include <iostream>
#include "directory.h"
#include "executable.h"
#include "file.h"
using namespace std;
namespace HW8_MERCAN {

    Executable::Executable() : File() {
        setTypeOfFile("cpp");
    }

    Executable::Executable(std::string ExecFileName, std::string ExecFileOwner, int ExecFileSize, std::string ExecFileLModifie, std::string ExecFileType)
    : File(ExecFileName, ExecFileOwner, ExecFileSize, ExecFileLModifie) {
        setTypeOfFile("cpp");
    }

    Executable::Executable(const Executable& copy) : File(copy.getName(), copy.getOwner(), copy.getSize(), copy.getLModifie()) {

        setTypeOfFile(copy.getTypeOfFile());
    }

    void Executable::setTypeOfFile(std::string ExecFileType) {
        typeOfFile = ExecFileType;
    }

    std::string Executable::getTypeOfFile()const {
        return typeOfFile;
    }
    //executable classının icindeki dosyalar icin konumunu verir
    std::string Executable::path(std::string pathFile) {
        string character = "/";
        std::string way = (*this).getOwner() + character + pathFile;
        return way;
    }
    //aldıgı parametrelere uygun olarak listeleme yapar
    //gizli dosyalar ve gizli olmayan dosyalar icin ayrı yazı basar
    void Executable::ls(std::string parameter) {
        string temp;
        temp = (*this).getName();
        if (temp[0] == '.') {
            if (parameter[0] == 'a' || parameter[1] == 'a' || parameter[2] == 'a') {
                cout << (*this).getName() << " " << (*this).getOwner() << " " <<
                        (*this).getSize() << " " << (*this).getLModifie() <<" "<<
                        (this)->getTypeOfFile() << endl;
            }
            else {
                cout << "Hidden";
            }
        } else {
            cout << (*this).getName() << " " << (*this).getOwner() << " " <<
                    (*this).getSize() << " " << (*this).getLModifie() <<" "<<
                    (*this).getTypeOfFile() << endl;
        }
    }

    bool Executable::cp(const File& copied) {
    }
}



