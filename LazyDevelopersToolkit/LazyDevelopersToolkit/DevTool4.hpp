/**************************************************************
* File Title: Dev Tool 4 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description : This class creates developer tool objects
***************************************************************/

#ifndef DevTool4_hpp
#define DevTool4_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class DevTool4:public DevTool0{
    public:
        DevTool4(); ///constructor
        void execute();
};

#endif /* DevTool4_hpp */
