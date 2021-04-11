/**************************************************************
* File Title: Dev Tool 6 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description : This class creates developer tool objects
***************************************************************/

#ifndef DevTool6_hpp
#define DevTool6_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class DevTool6:public DevTool0{
    public:
        DevTool6(); ///constructor
        void execute();
        void displayDictionary();
        void displayWebLinks();
        void openDocumentation();
};

#endif /* DevTool6_hpp */
