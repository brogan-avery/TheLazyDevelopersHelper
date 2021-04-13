/**************************************************************
* File Title: Dev Tool 7 Class Header
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/
#ifndef DevTool7_hpp
#define DevTool7_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<cstdlib>
#include "DevTool1.hpp"
#include "DevTool2.hpp"
#include "DevTool3.hpp"
#include "DevTool4.hpp"
#include "DevTool5.hpp"
#include "DevTool6.hpp"
using namespace std;

class DevTool7 : public DevTool1, public DevTool2, public DevTool3, public DevTool4, public DevTool5, public DevTool6{
    public:
        DevTool7(); ///constructor
};


#endif /* DevTool7_hpp */
