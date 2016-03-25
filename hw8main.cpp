/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "file.h"
#include "executable.h"
#include "directory.h"
#include "text.h"
using namespace std;
using namespace HW8_MERCAN;

int main() {
    
    Directory folder("karacabey", "cuma", 3, "2/8/1968");
    Executable execFile1("mercan", "damla", 5, "9.4.2015", ".cpp");
    TextFile text("a", "b", 8, "12/3/2013", "unicode");
    //Directory icinde executable ve textfile
    cout<<"Text File include ascii ,unicode ,so this specify after last modification "<<endl;
    cout<<"Executable File include .cpp ,.c ,.java like ,so this specify after last modification"<<endl;
    cout<< "In Directory folder : "<<endl;
    cout<<"First file system"<<endl;
    folder.cp(text);
    folder.cp(execFile1);
    folder.ls("a");
    cout<<"Path of Folder For Only Text File "<<endl;
    cout << folder.path("mercan") << endl;
    cout<<endl;
    cout<<"Second File System"<<endl;
    Executable execFile2("ferize","karacabey",47,"29.01.1968",".java");
    TextFile text1("c","d",16,"23.9.2015","ascii");
    folder.cp(execFile2);
    folder.cp(text1);
    folder.ls("Rl");
    //folder.ls("a");
    //execFile1.ls("a");
    //cout<<textFile1.path("mercan");
    cout << endl;
    cout<<"For Text File"<<endl;
    text.ls("a");
    text1.ls("Rl");
    cout<<endl;
    cout<<"For Executable File"<<endl;
    execFile1.ls("a");
    execFile2.ls("Rl");
}


