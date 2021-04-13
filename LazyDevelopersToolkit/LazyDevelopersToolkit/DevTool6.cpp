/**************************************************************
* File Title: Dev Tool 6 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool6.hpp"


DevTool6::DevTool6(){} ///constructor

void DevTool6::menu6(){
    string userInput = " ";
    cout << "\n* Other Resources * " << endl;
    
    while (userInput != "4") {
        cout << "  Select number " << endl;
        cout << "     1. View My Dictionary" << endl;
        cout << "     2. View My Useful Web Links" << endl;
        cout << "     3. View Product Documentation" << endl;
        cout << "     4. Return To Developer Tools Dashboard" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            displayDictionary();
        }

        if (userInput == "2"){
            displayWebLinks();
        }
        
        if (userInput == "3"){
            openDocumentation();
        }
    }
    cout << "Going back to Dashboard..." << endl;
}

void DevTool6::displayDictionary(){
    cout << "All Dictionary Terms\n" << endl;
    vector<string> lines = readFile("Dictionary.csv");
    
    for (auto line : lines){
        for (int i = 0; i < line.length(); i++){
            if (line[i] == ','){
                line.replace(i,1,": \n   ");
            }
        }
        
        cout << line << endl;
        cout << "----------------\n"<< endl;
    }
    
}

void DevTool6::displayWebLinks(){
    cout << "All Web Links\n" << endl;
    vector<string> lines = readFile("WebLinks.csv");
    
    for (auto line : lines){
        for (int i = 0; i < line.length(); i++){
            if (line[i] == ','){
                line.replace(i,1,": \n   ");
            }
        }
        
        cout << line << endl;
        cout << "----------------\n"<< endl;
    }
}

void DevTool6::openDocumentation(){
    
}
