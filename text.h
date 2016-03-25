/* 
 * File:   text.h
 * Author: mercankaracabey
 *
 * Created on 21 Aralık 2015 Pazartesi, 00:06
 */

#ifndef TEXT_H
#define TEXT_H
#include "file.h"
//Base Class:File
//Derived Class:Text File
namespace HW8_MERCAN {

    class TextFile : public File {
    public:
        //-----------------------CONSTRUCTORS---------------------------//
        TextFile();
        TextFile(std::string textFileName, std::string textFileOwner, int textFileSize, std::string textFileLModifie, std::string textTypeFile);
        //Copy Constructor
        TextFile(const TextFile& copy);
        //Text File klasorunun altında depolananlar icin turunu belirtecek sekilde 
        //unicode ,ascii gibi ...
        //-----------------------getter&setter-------------------------//
        std::string getTextFile()const;
        void setTextTypeFile(std::string textTypeFile);
        //Text File klasoru altında bulunan dosyaların yolunu gosterir
        virtual std::string path(std::string pathFile);
        //Text File klasoru icindeki dosyalar icin sıralama yapar
        virtual void ls(std::string parameter);
        //kopyalama 
        virtual bool cp(const File& fileName);
    private:
        std::string textType;

    };
}

#endif /* TEXT_H */

