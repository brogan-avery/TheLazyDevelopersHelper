/**************************************************************
* File Title: Dev Tool 3 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description : This class creates developer tool objects
***************************************************************/

#ifndef DevTool3_hpp
#define DevTool3_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class DevTool3:public DevTool0{
    public:
        DevTool3(); ///constructor
        void execute();
        void startNewProject();
};

#endif /* DevTool3_hpp */
