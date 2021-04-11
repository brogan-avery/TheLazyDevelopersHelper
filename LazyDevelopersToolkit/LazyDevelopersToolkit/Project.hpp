/**************************************************************
* File Title: Project
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#ifndef Project_hpp
#define Project_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class Project{
    private:
        string title;
        string proposal;
        string description;
    vector<string> dates;
    vector<string> backLog;
    vector<string> timeLog;
    vector<string> reports;
    vector<string> files;
    //vector<string> 
    
    public:
        Project(); ///constructor
       
};
#endif /* Project_hpp */
