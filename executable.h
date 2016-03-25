
/* 
 * File:   executable.h
 * Author: mercankaracabey
 *
 * Created on 20 Aralık 2015 Pazar, 23:04
 */

#ifndef EXECUTABLE_H
#define EXECUTABLE_H
#include "directory.h"
#include "file.h"
//Base Class:File
//Derived Class:Executable
namespace HW8_MERCAN {

    class Executable : public File {
    public:
        //--------------------------CONSTRUCTORS-------------------------//
        Executable();
        //Copy Constructor
        Executable(const Executable& copy);
        Executable(std::string ExecFileName, std::string ExecFileOwner, int ExecFileSize, std::string ExecFileLModifie, std::string ExecFileType);
        //Compiler tarafından uretilen dosyaları icinde tutan executable 
        //ayri bir data member olan dosyanın tipini icerir 
        //.cpp , .c ,.java ...
        // yeni olusturulan data member a ait GETTER&SETTER
        void setTypeOfFile(std::string ExecFileType);
        std::string getTypeOfFile()const;
        //Kendi folder sistemindeki dosyanın yolunu verir
        virtual std::string path(std::string pathFile);
        //Aldıgı parametreye gore icerisinde bulundugu klasordeki dosyaları listeler
        virtual void ls(std::string parameter);
        //parametre olarak dosyayı kopyalar
        virtual bool cp(const File& copied);
    //yeni olusturulan data member
    private:
        std::string typeOfFile;
    };
}


#endif /* EXECUTABLE_H */

