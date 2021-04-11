/**************************************************************
* File Title: Dev Tool 3 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool3.hpp"


DevTool3::DevTool3(){} ///constructor

void DevTool3::execute(){
    string userInput = " ";
    cout << "\n* Project Management * " << endl;
    
    while (userInput != "3") {
        cout << "  Select number " << endl;
        cout << "     1. Generate Project Management Guide For New Project" << endl;
        cout << "     2. Generate Wireframe" << endl;
        cout << "     3. Return To Developer Tools Dashboard" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            startNewProject();
        }

        if (userInput == "2"){
        }
    }
    cout << "Going back to Dashboard..." << endl;
}

void DevTool3::startNewProject(){
    vector<string> lines = readFile("ProjectManagementGuide.html");
    int lineCount = getFileLineCount("ProjectManagementGuide.html");
    for (int i = 0; i < lineCount; i++){
        //if (lines[i] == ){
            
        //}
    }
}
