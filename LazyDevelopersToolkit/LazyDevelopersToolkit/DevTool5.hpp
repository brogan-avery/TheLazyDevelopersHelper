/**************************************************************
* File Title: Dev Tool 5 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description : This class creates developer tool objects
***************************************************************/

#ifndef DEVTOOL5_HPP
#define DEVTOOL5_HPP

#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool0.hpp"
//#include <fstream>

using namespace std;

class DevTool5:public DevTool0{
    public:
        DevTool5(); ///constructor
        void execute();
        void listSongs();
        void listGames();
        void tellJoke();
        void listAnimals();
};

#endif // DEVTOOL5_HPP
