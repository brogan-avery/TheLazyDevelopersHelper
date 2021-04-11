/**************************************************************
* File Title: Dev Tool 1 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool1.hpp"

DevTool1::DevTool1(){} ///constructor

void DevTool1::execute(){
    string userInput = " ";
    cout << "\n* Skills Builder * " << endl;
    
    while (userInput != "3") {
        cout << "  Select number " << endl;
        cout << "     1. Practice Coding Problems" << endl;
        cout << "     2. Play a Programing-Related Quiz Game" << endl;
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

