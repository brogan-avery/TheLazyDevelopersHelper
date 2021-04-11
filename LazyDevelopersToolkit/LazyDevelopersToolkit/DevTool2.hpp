/**************************************************************
* File Title: Dev Tool 2 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description : This class creates developer tool objects
***************************************************************/

#ifndef DevTool2_hpp
#define DevTool2_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class DevTool2:public DevTool0{
    public:
        DevTool2(); ///constructor
        void execute();
        void doNotDisturb();
        void redLED();
        void greenLED();
        void terminateArduino();
};

#endif /* DevTool2_hpp */
