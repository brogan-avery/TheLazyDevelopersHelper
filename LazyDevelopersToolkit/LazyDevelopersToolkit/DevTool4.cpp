/**************************************************************
* File Title: Dev Tool 4 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool4.hpp"


DevTool4::DevTool4(){} ///constructor

void DevTool4::execute(){
    string userInput = " ";
    cout << "\n* Project Testing * " << endl;
    
    while (userInput != "3") {
        cout << "  Select number " << endl;
        cout << "     1. " << endl;
        cout << "     2. " << endl;
        cout << "     3. Return To Developer Tools Dashboard" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
        }

        if (userInput == "2"){
        }
    }
    cout << "Going back to Dashboard..." << endl;
}
