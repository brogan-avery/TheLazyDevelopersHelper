/**************************************************************
* Title: The Lazy Developer Tool
* Author: Brogan Avery
* Created : 2021-03-31
* Email: bmavery@dmacc.edu
* Course: CIS 164- Advanced C++
* OS: macOS Catalina
* IDE: Xcode
* Description :
 
 
* Copyright : This is my own original work  based on specifications issued by the course instructor
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/
#include "DevTool0.hpp"
#include "DevTool1.hpp"
#include "DevTool2.hpp"
#include "DevTool3.hpp"
#include "DevTool4.hpp"
#include "DevTool5.hpp"
#include "DevTool6.hpp"


int main() {
//PROJECT CODE SECTION
    string userInput = " ";
    /// create an object for each developer tool that is listed with an associated number
    DevTool0 devTool0;
    DevTool1 devTool1;
    DevTool2 devTool2;
    DevTool3 devTool3;
    DevTool4 devTool4;
    DevTool5 devTool5;
    DevTool6 devTool6;
    
    devTool3.startNewProject();
    
    cout << "* * *  Welcome to The Lazy Developer's Toolkit  * * *\n" << endl;
    cout << "Basic Site Description: etc....\n    etc....\n    etc....\n" << endl;
    cout << "General Instructions for the User to Use the Program: etc....\n    etc....\n    etc....\n" << endl;

    cout << "Developer Tools Dashboard:" << endl;
//    while (userInput != "7") {
//        cout << "  Select number associated with a developer tool" << endl;
//        cout << "     1. Skills Builder" << endl;
//        cout << "     2. Arduino Based Tools" << endl;
//        cout << "     3. Project Management" << endl;
//        cout << "     4. Automated Project Testing" << endl;
//        cout << "     5. Relaxation Management" << endl;
//        cout << "     6. View Other Resources" << endl;
//        cout << "     7. Exit Program" << endl;
//
//        cout << "  Enter Selection: ";
//        cin >> userInput;
////
//        if (userInput == "1"){
//            devTool1.execute();
//        }
//
//        if (userInput == "2"){
//            devTool2.execute();
//        }
//
//        if (userInput == "3"){
//            devTool3.execute();
//        }
//
//        if (userInput == "4"){
//            devTool4.execute();
//        }
//
//        if (userInput == "5"){
//            devTool5.execute();
//        }
//
//        if (userInput == "6"){
//            devTool6.execute();
//        }
//    }
//    cout << "goodbye" << endl;

    
    
// PLAYGROUND / TESTING SECTION



    return 0;
}
