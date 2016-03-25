
/* 
 * File:   directory.h
 * Author: mercankaracabey
 *
 * Created on 19 Aralık 2015 Cumartesi, 21:19
 */

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <vector>
#include "file.h"
//Base Class:File
//Derived Class:Directory
namespace HW8_MERCAN {
    //abstract class olan File'dan turemistir
    class Directory : public File {
    public:
        //--------------------CONSTRUCTORS---------------------------//
        Directory();
        Directory(std::string file1Name, std::string file1Owner, int file1Size, std::string file1LastModifie);
        //----------------VIRTUAL FONKSİYONLAR-----------------------//
        //dosyanın konumunu verir
        virtual std::string path(std::string pathFile);
        //dosyanın bulundugu klasordeki diger dosyaları listeler
        virtual void ls(std::string parameter);
        //aldıgı parametre olan dosyayı kopyalar
        virtual bool cp(const File& copied);

    private:
        std::vector<File * > DirectoryFile;   
    };

}

#endif /* DIRECTORY_H */

