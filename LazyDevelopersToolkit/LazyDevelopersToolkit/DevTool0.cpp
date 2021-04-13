/**************************************************************
* File Title: Dev Tool  0 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool0.hpp"

DevTool0::DevTool0(){} ///constructor

// =============== A - C ===============
void DevTool0::addDefinition(string term, string definition){
    appendLineToEOF("Dictionary.csv", term + "," + definition);
}
void DevTool0::addWebLink(string title, string link){
    appendLineToEOF("WebLinks.csv", title + "," + link);
}
void DevTool0::appendLineToEOF(string fileName, string text){
    vector<string> lines = readFile(fileName);
    ///ofstream fileWriter = createFile(fileName);
    ofstream fileWriter(fileName);
    
    for (string i : lines){
        fileWriter << i << "\n";
    }
    fileWriter << text;
    
    fileWriter.close();
}
string DevTool0::capitalizeWord(string text) {
    for (int x = 0; x < text.length(); x++)
    {
        if (x == 0)
        {
            text[x] = toupper(text[x]);
        }
        else if (text[x - 1] == ' ')
        {
            text[x] = toupper(text[x]);
        }
    }
    return text;
}
///TODO: void closeFile(string??){}
ofstream DevTool0::createFile(string fileName){
    ofstream fileWriter(fileName);
    fileWriter.close();
    return fileWriter;
}
void DevTool0::createClassHeaderFile(string fileName){
    string className = " ";
    string varName = " ";
    string dataType = " ";
    string defaultConstructor = " ";
    string nonDefaultConstructor = " ";
    string otherMethod = " ";
    vector<string> vars;
    vector<string> nonDefaultConstructors;
    vector<string> setters;
    vector<string> getters;
    vector<string> otherMethods;
    string toStringMethod  = " ";
    ofstream writeFile(fileName); /// Create and open new file
    
/// ---  get inputs ---
    cout << "Class Name: " << endl; /// get user input for class name
    cin >> className;
    
    while (varName != "q") { /// get user input for variable names
        cout << "Variable Name (q to quit): " << endl;
        cin >> varName;
        if (varName == "q"){
            break;
        }
        cout << "Variable's Data Type: " << endl; /// get user input for variable's data type
        cin >> dataType;

        vars.push_back(dataType); ///adds  the new variable and its data type to a vars vector
        vars.push_back(varName);
   }
 
 /// ---  create the class declaration to write to file ---
    defaultConstructor = className + "()"; /// creates a default constructor
    
    nonDefaultConstructor = className + "("; /// creates a non-default constructor
    for (int i = 0; i < vars.size(); i+=2){
        nonDefaultConstructor = nonDefaultConstructor + vars[i];
        if (i != vars.size()-2){
            nonDefaultConstructor = nonDefaultConstructor + ", ";
        }
    }
    nonDefaultConstructor = nonDefaultConstructor + ")";
    
    writeFile << "/*************************************************************** \n Class Name: " << className << endl;
    writeFile << "* Author: Brogan Avery " << endl;
    writeFile << "* Created: 2021-00-00" << endl;
    writeFile << "* File Description:" << endl;
    writeFile << "***************************************************************/ \n" << endl;
    writeFile << "#ifndef " << className << "_hpp" << endl;
    writeFile << "#define" << className << "_hpp\n" << endl;
    writeFile << "#include <stdio.h> \n#include <string> \n#include <iostream> \n#include <vector> \n#include <iomanip> \n#include <fstream> \n#include<unistd.h> /// for unix sleep \nusing namespace std;\n" << endl;
    
    writeFile << "/// class declaration " << endl; /// writes a comment
    writeFile << "class " << className << "{" << endl; /// writes the class name
    
    writeFile << "   private: " << endl; /// writes the private vars
    for (int i = 0, j = 1; i < vars.size(); i+=2, j+=2){
        writeFile << "       " << vars[i]  << " " << vars[j]<<  ";" << endl;
    }
    
    writeFile << "   public: " << endl; /// writes the public methods
    
    writeFile << "       " << defaultConstructor << "; /// default constructor" << endl; /// writes the default constructor and a comment
    
    writeFile << "       " << nonDefaultConstructor << ";" << endl; /// writes the non-default constructor
    
    for (int i = 1; i < vars.size(); i+=2){ /// writes the setters
        writeFile << "       void set" << capitalizeWord(vars[i])  <<  "(" << vars[i - 1] << ");" << endl;
    }
    
    for (int i = 0; i < vars.size(); i+=2){ /// writes the default getters
        writeFile << "       " << vars[i] << " get" << capitalizeWord(vars[i + 1])  <<  "();" << endl;
    }
    
    writeFile << "       string toString();" << endl; /// writes the to string method
    writeFile << "}; \n" << endl;
    
 /// --- write the class body to file ---
    writeFile << "// == constructors ==" << endl; /// writes the default constructor
    writeFile << className << "::" << className << "(){ // default" << endl;
    for (int i = 1; i < vars.size(); i+=2){
        writeFile << "   set" << capitalizeWord(vars[i])  <<  "(";
        if (vars[i-1] == "string"){
            writeFile << "\" \"";
        }
        else{
            writeFile << "0";
        }
        writeFile << ");" << endl;
    }
    writeFile << "} \n" << endl;
    
    writeFile << className << "::" << className <<   "("; /// writes the non-default constructor
    for (int i = 1; i < vars.size(); i+=2){
        writeFile << vars[i-1] << " " << vars[i];
        if (i != vars.size()  -1){
            writeFile << ", ";
        }
    }
    writeFile << "){" << endl;
    for (int i = 1; i < vars.size(); i+=2){
        writeFile << "   set" << capitalizeWord(vars[i])  <<  "(" << vars[i] << ");" << endl;
    }
    writeFile << "} \n" << endl;
    
    writeFile << "// == setters ==" << endl; /// write setters
    for (int i = 1; i < vars.size(); i+=2){
        writeFile << "void " << className  << "::" << "set" << capitalizeWord(vars[i])  <<  "(" << vars[i-1] << " " << vars[i] << "){" << endl;
        writeFile << "   this->" << vars[i] << " = " << vars[i] << ";" << endl;
        writeFile << "} \n" << endl;
    }
    
    writeFile << "// == getters ==" << endl; ///write getters
    for (int i = 1; i < vars.size(); i+=2){
        writeFile << vars[i-1] << " "<< className  << "::" << "get" << capitalizeWord(vars[i])  <<  "(){" << endl;
        writeFile << "   return " << vars[i] << ";" << endl;
        writeFile << "} \n" << endl;
    }
    
    writeFile << "string " << className << "::toString(){" << endl; /// write to string method
    writeFile << "return \"outString\";" << endl;
    writeFile << "} \n" << endl;
    
    writeFile << "#endif /* " << className << "_hpp */" << endl;
    
    writeFile.close(); /// Close the file
    cout << "Creating File..." << endl;
}

// =============== D - F ===============

// =============== G - I ===============
int DevTool0::getFileLineCount(string fileName){
    string line = " "; ///each line's text
    int lineCount = 0; /// number of lines of text in file
    
    ifstream fileReader(fileName, ios::in); ///open file to READ from
           
           /// gets the number of lines of text in the file
    while(getline(fileReader,line)){
        lineCount++;
    }
        fileReader.close(); ///close file
    return lineCount;
}

// =============== J - L ===============
///TODO: string lookUp(string term){}

// =============== M - O ===============
///TODO:void openWebPage(string url){
    //system ("open https://dwheeler.com/essays/open-files-urls.html#:~:text=Nearly%20all%20operating%20systems%20have,invoke%20from%20almost%20any%20language.");
///}
// =============== P - R ===============
vector<string> DevTool0::readFile(string fileName){
    string line = " "; ///each line's text
    ifstream fileReader(fileName, ios::in); ///open file to READ from
    
    int lineCount = getFileLineCount(fileName);
    
    vector<string> lines;
    
    for( int i = 0; i < lineCount; i++){
        getline(fileReader, line);
        lines.push_back(line);
    }
    
    return lines;
}

// =============== S - U ===============
void DevTool0::textToSpeech(string text){
    createFile("tempTextToSpeach.txt");
    appendLineToEOF("tempTextToSpeach.txt", text);
    string toCLString = "say " + text;
    if (system(NULL)) puts ("Ok");
        else exit (EXIT_FAILURE);
   system("say -f /Users/brogan/Library/Developer/Xcode/DerivedData/LazyDevelopersToolkit-eizgswzshjlxxvebouikjvtdbczc/Build/Products/Debug/tempTextToSpeach.txt");
}
// =============== V - Z ===============
