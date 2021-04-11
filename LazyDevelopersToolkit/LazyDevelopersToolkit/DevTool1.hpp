/**************************************************************
* File Title: Dev Tool 1 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description : This class creates developer tool objects
***************************************************************/

#ifndef DevTool1_hpp
#define DevTool1_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class DevTool1:public DevTool0{
    public:
        DevTool1(); ///constructor
        void execute();
        void displayProblems();
        void startQuiz();
};

#endif /* DevTool1_hpp */
