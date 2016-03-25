/* 
 * File:   file.h
 * Author: mercankaracabey
 * NO:131044034
 * Created on 18 Aralık 2015 Cuma, 18:07
 */

#ifndef FILE_H
#define FILE_H
#include <string>
//abstract class 
namespace HW8_MERCAN {
    using std::string;

    class File {
    public:
        //***--------------------CONSTRUCTORS----------------------------***//
        File();
        //copy constructor
        File(const File& copy);
        File(std::string FileName, std::string FileOwner, int FileSize, std::string FileLastModifie);
        //----------------------GETTER/SETTER------------------------------//
        void setOwner(std::string ownFile);
        void setName(std::string nameFile);
        void setSize(int sizeFile);
        void setLastModifie(std::string lModifie);
        std::string getOwner()const;
        std::string getName()const;
        int getSize()const;
        std::string getLModifie()const;
        //-------------------VIRTUAL FONKSİYONLAR--------------------------//
        //dynamic olarak cast yapılabilmesi icin virtual olarak secilmistir
        //virtualdan tureyecek olan classlar aynı fonksiyonu override yaparak kullanacaktır
        //fonksiyonların baslangıc degerine 0 atanmıstır
        //-----------------------------------------------------------------//
        //dosyanın bulundugu yeri ayrıntılı olarak string halinde gosterir
        virtual std::string path(std::string pathFile) = 0;
        //dosyanın bulundugu klasoru aldıgı parametreler dogrultusunda listeler
        virtual void ls(std::string parameter) = 0;
        //parametre olarak aldıgı dosyayı kopyalar , (rwx) diye ayrıyetten kosullarla 
        //denetim sonrasında kopyalanıp kopyalanmayacagına karar verir
        //(ben rwx kosulları dogrultusunda yapmadım)
        virtual bool cp(const File& copied) = 0;
    //-----------------------------DATA MEMBERS-----------------------------------------//
    protected:
        std::string owner;
        std::string name;
        int size;
        std::string lastModificaiton;
        std::string pathName;
    };

}
#endif /* FILE_H */

