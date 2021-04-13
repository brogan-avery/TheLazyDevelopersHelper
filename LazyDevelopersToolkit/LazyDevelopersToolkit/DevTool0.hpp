/**************************************************************
* File Title: Dev Tool 0 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#ifndef DevTool0_hpp
#define DevTool0_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include<unistd.h> /// for unix sleep
using namespace std;

class DevTool0{
    public:
        DevTool0(); ///constructor
        ofstream createFile(string); ///string fileName
        void createClassHeaderFile(string); /// string fileName
        string capitalizeWord(string); /// string word to capitalize
        void appendLineToEOF(string, string); /// string fileName
        void closeFile(string); ///string fileName
        int getFileLineCount(string); ///string fileName
        vector <string> readFile(string); ///string fileName
        void addDefinition(string, string); ///string term, string definition
        string lookUp(string);
        void addWebLink(string, string); ///string webpage title/ description, string link
        void openWebPage(string); /// string url
        void textToSpeech(string); /// string text
        
};

#endif /* DevTool0_hpp */


