/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "file.h"
#include "text.h"
using namespace std;
namespace HW8_MERCAN {

    TextFile::TextFile() : File() {
        setTextTypeFile("unicode");
    }

    TextFile::TextFile(std::string textFileName, std::string textFileOwner, int textFileSize, std::string textFileLModifie, std::string textTypeFile)
    : File(textFileName, textFileOwner, textFileSize, textFileLModifie) {
        setTextTypeFile("unicode");
    }

    TextFile::TextFile(const TextFile& copy) : File(copy.getName(), copy.getOwner(), copy.getSize(), copy.getLModifie()) {

        setTextTypeFile(copy.getTextFile());
    }

    void TextFile::setTextTypeFile(std::string textTypeFile) {
        textType = textTypeFile;
    }

    std::string TextFile::getTextFile() const {
        return textType;
    }
//TEXT FILE icin ayrı bir yol fonksiyonu
    std::string TextFile::path(std::string pathFile) {
        string character = "/";
        std::string way = (*this).getOwner() + character + pathFile;
        return way;

    }
//TEXT FILE icin ayrı bir listeleme fonksiyonu
    void TextFile::ls(std::string parameter) {
        string temp;
        temp = (*this).getName();
        if (temp[0] == '.') {
            if (parameter[0] == 'a' || parameter[1] == 'a' || parameter[2] == 'a') {
                cout << (*this).getName() << " " << (*this).getOwner() << " " <<
                        (*this).getSize() << " " << (*this).getLModifie() <<" "<<
                        (this)->getTextFile() << endl;
            } else {
                cout << "Hidden" << endl;
            }
        } else {
            cout << (*this).getName() << " " << (*this).getOwner() << " " <<
                    (*this).getSize() << " " << (*this).getLModifie() <<" "<<
                    (*this).getTextFile() << endl;
        }

    }

    bool TextFile::cp(const File& fileName) {

        return true;
    }
}

