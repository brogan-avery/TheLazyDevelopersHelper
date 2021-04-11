/**************************************************************
* File Title: Dev Tool 5 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool5.hpp"


DevTool5::DevTool5(){} ///constructor

void DevTool5::execute(){
    string userInput = " ";
    cout << "\n* Relaxation Management * " << endl;
    
    while (userInput != "5") {
        cout << "  Select number " << endl;
        cout << "     1. Listen To Relaxing Music " << endl;
        cout << "     2. Play a Fun Game" << endl;
        cout << "     3. Hear a Joke" << endl;
        cout << "     4. Look at Baby Animals to Make You Smile" << endl;
        cout << "     5. Return To Developer Tools Dashboard" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            listSongs();
        }

        if (userInput == "2"){
            //listGames();
        }
        
        if (userInput == "3"){
            tellJoke();
        }

        if (userInput == "4"){
            listAnimals();
        }
    }
    cout << "Going back to Dashboard..." << endl;
}


void DevTool5::listSongs(){
    string userInput = " ";
    cout << "\n* SONG LIST * " << endl;
    
    while (userInput != "7") {
        cout << "  Select number associated with the song you want to play" << endl;
        cout << "     1. Chill Techno " << endl;
        cout << "     2. Deep Meditation" << endl;
        cout << "     3. Elven Forest Harps" << endl;
        cout << "     4. Healing Waters" << endl;
        cout << "     5. Relaxing Green Nature" << endl;
        cout << "     6. Tranquility" << endl;
        cout << "     7. Return To Previous Menu" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            if (system(NULL)) puts ("Starting Music ...\n");
            else exit (EXIT_FAILURE);
            system ("open /Users/brogan/Desktop/C++II/assignments/theLazyDeveloperTool/theLazyDeveloperTool/Audio/chillTechno.mp3");
        }

        if (userInput == "2"){
            if (system(NULL)) puts ("Starting Music ...\n");
            else exit (EXIT_FAILURE);
            system ("open /Users/brogan/Desktop/C++II/assignments/theLazyDeveloperTool/theLazyDeveloperTool/Audio/DeepMeditation.mp3");
        }
        
        if (userInput == "3"){
            if (system(NULL)) puts ("Starting Music ...\n");
            else exit (EXIT_FAILURE);
            system ("open /Users/brogan/Desktop/C++II/assignments/theLazyDeveloperTool/theLazyDeveloperTool/Audio/ElvenForestHarps.mp3");
        }

        if (userInput == "4"){
            if (system(NULL)) puts ("Starting Music ...\n");
            else exit (EXIT_FAILURE);
            system ("open /Users/brogan/Desktop/C++II/assignments/theLazyDeveloperTool/theLazyDeveloperTool/Audio/HealingWaters.mp3");
        }
        
        if (userInput == "5"){
            if (system(NULL)) puts ("Starting Music ...\n");
            else exit (EXIT_FAILURE);
            system ("open /Users/brogan/Desktop/C++II/assignments/theLazyDeveloperTool/theLazyDeveloperTool/Audio/RelaxingGreenNature.mp3");
        }

        if (userInput == "6"){
            if (system(NULL)) puts ("Starting Music ...\n");
            else exit (EXIT_FAILURE);
            system ("open /Users/brogan/Desktop/C++II/assignments/theLazyDeveloperTool/theLazyDeveloperTool/Audio/Tranquility.mp3");
        }
    }
    cout << "Going back to Previous Menu..." << endl;
}

void DevTool5::listAnimals(){
    string userInput = " ";
    cout << "\n* BABY ANIMAL LIST * " << endl;
    
    while (userInput != "4") {
        cout << "  Select number associated with the baby animals you want to see" << endl;
        cout << "     1. View Puppies " << endl;
        cout << "     2. View Kittens" << endl;
        cout << "     3. View Ducklings" << endl;
        cout << "     4. Return To Previous Menu" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            if (system(NULL)) puts ("Opening Web Page ...\n");
            else exit (EXIT_FAILURE);
            system ("open https://www.pinterest.ca/kookiebear2/cute-puppy-pics/");
        }

        if (userInput == "2"){
            if (system(NULL)) puts ("Opening Web Page ...\n");
            else exit (EXIT_FAILURE);
            system ("open https://in.pinterest.com/petloversden/cute-kitten-pictures/");
        }
        
        if (userInput == "3"){
            if (system(NULL)) puts ("Opening Web Page ...\n");
            else exit (EXIT_FAILURE);
            system ("open https://www.pinterest.com/dsutcliffe/baby-ducks/");
        }
    }
    cout << "Going back to Previous Menu..." << endl;
}

void DevTool5::tellJoke(){
    int randomLineNum = rand();
    srand(time(0));
    
    int lineCount = getFileLineCount("Jokes.txt");
    randomLineNum = rand() % lineCount;
    
    if (randomLineNum % 2 != 0){
        randomLineNum = randomLineNum - 1;
    }
    
    vector<string> lines = readFile("Jokes.txt");
    
    textToSpeech(lines[randomLineNum]);
    sleep(2);
    textToSpeech(lines[randomLineNum + 1]);
    
}

