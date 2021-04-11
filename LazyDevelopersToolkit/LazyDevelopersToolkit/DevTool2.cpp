/**************************************************************
* File Title: Dev Tool 2 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/


#include "DevTool2.hpp"

DevTool2::DevTool2(){} ///constructor

void DevTool2::execute(){
    string userInput = " ";
    cout << "\n* Arduino Based Tools * " << endl;
    
    while (userInput != "2") {
        cout << "  Select number " << endl;
        cout << "     1. Do Not Disturb Feature " << endl;
        cout << "     2. Return To Developer Tools Dashboard" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            doNotDisturb();
        }
    }
    cout << "Going back to Dashboard..." << endl;
}

void DevTool2::doNotDisturb(){
    string userInput = " ";
    cout << "Turn the green light on to indicate to co-workers (or other humans) if you are available to speak with or red if you are busy and do not want to be disturbed." << endl;
    while (userInput != "4") {
        cout << "  Select number " << endl;
        cout << "     1. Set light to GREEN " << endl;
        cout << "     2. Set light to RED" << endl;
        cout << "     3. Turn all lights off" << endl;
        cout << "     4. Return to Previous Menu Screen" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            greenLED();
        }
        if (userInput == "2"){
            redLED();
        }
        if (userInput == "3"){
            terminateArduino();
        }
    }
    cout << "Going back to Previous Menu Screen..." << endl;
}

void DevTool2::greenLED(){
    system("/Users/brogan/bin/arduino-cli compile -b arduino:avr:mega /Users/brogan/Desktop/C++II/assignments/LazyDevelopersToolkit/LazyDevelopersToolkit/ArduinoScripts/greenLED/greenLED.ino");
    system("/Users/brogan/bin/arduino-cli upload -p /dev/cu.usbmodem14201 -b arduino:avr:mega /Users/brogan/Desktop/C++II/assignments/LazyDevelopersToolkit/LazyDevelopersToolkit/ArduinoScripts/greenLED/greenLED.ino");
    
}

void DevTool2::redLED(){
    system("/Users/brogan/bin/arduino-cli compile -b arduino:avr:mega /Users/brogan/Desktop/C++II/assignments/LazyDevelopersToolkit/LazyDevelopersToolkit/ArduinoScripts/redLED/redLED.ino");
    system("/Users/brogan/bin/arduino-cli upload -p /dev/cu.usbmodem14201 -b arduino:avr:mega /Users/brogan/Desktop/C++II/assignments/LazyDevelopersToolkit/LazyDevelopersToolkit/ArduinoScripts/redLED/redLED.ino");
    
}

void DevTool2::terminateArduino(){
    system("/Users/brogan/bin/arduino-cli compile -b arduino:avr:mega /Users/brogan/Desktop/C++II/assignments/LazyDevelopersToolkit/LazyDevelopersToolkit/ArduinoScripts/terminate/terminate.ino");
    system("/Users/brogan/bin/arduino-cli upload -p /dev/cu.usbmodem14201 -b arduino:avr:mega /Users/brogan/Desktop/C++II/assignments/LazyDevelopersToolkit/LazyDevelopersToolkit/ArduinoScripts/terminate/terminate.ino");
    
}
