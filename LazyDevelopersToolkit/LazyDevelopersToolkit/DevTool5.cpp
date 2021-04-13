/**************************************************************
* File Title: Dev Tool 5 Class Body
* Author: Brogan Avery
* Created :
 
 
* File Description :
***************************************************************/

#include "DevTool5.hpp"


DevTool5::DevTool5(){} ///constructor

void DevTool5::menu5(){
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
            listGames();
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
    
    if (randomLineNum % 2 != 0){ ///makes sure it is getting a question and not the answer first
        randomLineNum = randomLineNum - 1;
    }
    
    vector<string> lines = readFile("Jokes.txt");
    
    textToSpeech(lines[randomLineNum]);
    sleep(2);
    textToSpeech(lines[randomLineNum + 1]);
    
}

void DevTool5::listGames(){
    string userInput = " ";
    cout << "\n* GAME LIST * " << endl;
    
    while (userInput != "3") {
        cout << "  Select number associated with the game you want to play" << endl;
        cout << "     1. Hangman " << endl;
        cout << "     2. CandyLand" << endl;
        cout << "     3. Return To Previous Menu" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            playHangman();
        }

        if (userInput == "2"){
            playCandyLand();
        }
    }
    cout << "Going back to Previous Menu..." << endl;
}

void DevTool5::playHangman(){
    string userInput = " ";
    string wordToGuess = " ";
    int wordLength = 0;
    bool wordCompleted = false;
    char letter;
    string blankString = "";
    string currentState = "";
    int blankCount = 0;
    const int ARR_SIZE = 10;
    array<string, ARR_SIZE> animals = {"moose", "zebra", "lion", "tiger", "whale", "monkey", "crab", "sheep", "lizard", "horse"};
    array<string, ARR_SIZE> colors = {"purple", "brown", "lime", "green", "white", "mauve", "cyan", "rose", "yellow", "indigo"};
    array<string, ARR_SIZE> food = {"pasta", "pizza", "carrot", "grapes", "honey", "sugar", "cheese", "tofu", "tomato", "potato"};
    
    // gets the index of a random array pos
    int randomWord = rand();
    srand(time(0));
    randomWord = rand() % ARR_SIZE;
    
    cout << "\n* Hangman * " << endl;
    
    // user selects category of word and then a random word is selected
    while (userInput != "4") {
        cout << "  Select number associated with the category of words" << endl;
        cout << "     1. Animals " << endl;
        cout << "     2. Colors" << endl;
        cout << "     3. Food" << endl;
        cout << "     4. Return To Previous Menu" << endl;

        cout << "  Enter Selection: " << endl;
        cin >> userInput;

        if (userInput == "1"){
            wordToGuess = animals[randomWord];
        }
        if (userInput == "2"){
            wordToGuess = colors[randomWord];
        }
        if (userInput == "3"){
            wordToGuess = food[randomWord];
        }
        
        if (userInput == "4"){
            break;
        }
        
        wordLength = wordToGuess.length();
        
        
        for (int i = 0; i< wordLength;i++){
            blankString.append("_");
        }
        
        cout << "The word has " << wordLength << " letters" << endl;
        
        while (wordCompleted == false){
            cout << blankString << endl;
            cout << "\nEnter a letter guess: ";
            cin >> letter;
            
            currentState = blankString;
            for (int i = 0; i < wordLength; i++){
                if (letter == wordToGuess[i]){
                    blankString[i] = letter;
                }
            }
            
            if (currentState == blankString){
                cout << "Letter not found\n" << endl;
            }
            
            else{
                cout << "You found a letter\n" << endl;
            }
            
            blankCount = wordLength;
            for (int i = 0; i < wordLength; i++){
                if (blankString[i] != '_'){
                    blankCount --;
                }
            }
            
            if (blankCount == 0){
                wordCompleted = true;
            }
        }
        
        cout << "You win! \n" << endl;
        sleep(1);
    }
    cout << "Going back to Previous Menu..." << endl;
}
    

void DevTool5::playCandyLand(){ /// I totally cannot remember how to play this game so its VERY loosely based on the real game 
    const int NUM_SPACES = 60; /// num spaces on game board
    const int NUM_COLORS = 6;
    bool gameOver = false;
    string card = " ";
    int numMoves = 0;
    
    array<string, NUM_COLORS> cards = {"red", "purple", "yellow", "blue", "orange", "green"}; /// path color pattern pf game board
    
    // struct for each square on the game board
    struct Spot{
        string color;
        bool youAreHere;
        string hazard;
        string you = "You are here";
    };
    
    // add the colors in the pattern to the squares of the board
    array<Spot, NUM_SPACES> board;
    for (int i = 0; i < board.size(); i+=6){
        board[i].color = "red";
        board[i+1].color = "purple";
        board[i+2].color = "yellow";
        board[i+3].color = "blue";
        board[i+4].color = "orange";
        board[i+5].color = "green";
    }
    
    // add the hazards and your character to the game board
    for (int i = 0; i < board.size(); i++){
        board[i].youAreHere = false;
        
        board[i].hazard = " ";
        
        if (i == 12){
            board[i].hazard = "You crashed into CandyCane Forest. Go Back 2 spaces.";
        }
        
        if (i == 25){
            board[i].hazard = "You got stuck in the Fudge Swamp. Go Back 4 spaces.";
        }
        
        if (i == 36){
            board[i].hazard = "You got into a Gum Drop Storm. Go Back 3 spaces.";
        }
        
        if (i == 43){
            board[i].hazard = "You got slowed down in PeanutButter Valley. Go Back 1 spaces.";
        }
        
        if (i == 58){
            board[i].hazard = "You got tied up in Licorice Canyon. Go Back 5 spaces.";
        }
    }
    
    //starting place
    int yourPos = 0;
    string onColor = board[yourPos].color;
    
    // start game
    cout << " * CandyLand *\n" << endl;
    
    while (gameOver != true){
        string userInput = " ";
        cout << "Game Board: " << endl;
        
        //display current board layout
        for (int i = 0; i < board.size(); i++){
            if (yourPos == i){
                board[i].you = "You are here";
            }
            else{
                board[i].you = " ";
            }
            cout << "Sqr " << i+1 << ": ["<< " { " << board[i].color << " }"  << " { " << board[i].you << " } " << " { " << board[i].hazard << " } "  << "]" << endl;
        }
        sleep(2);

        // draw card
        while (userInput != "D" ){
            cout << "\nTo draw card, enter 'D', to quit game, enter 'Q' " << endl;
            cin >> userInput;
            
            if (userInput == "Q"){
                break;
            }
        }
        
        if (userInput == "Q"){
            break;
        }
        
        card = drawCard();
        cout << "\nYou drew a " << card << " card. Move to the next " << card << " square on the game board.\n" << endl;
        sleep(2);
        
        // uses the cards(card color) array pattern to get the distance between two colors
        int posA; ///where you are
        int posB; /// where you go
        for (int i = 0; i < cards.size(); i++){
            if (cards[i] == onColor){
                posA = i;
            }
            if (cards[i] == card){
                posB = i;
            }
        }
        
        // updates your position
        posA++; /// can't do math with 0s and the distance is the only number that matters
        posB++;
        numMoves = 0;
        numMoves = numMoves + (posB - posA); /// how many spots to move forward
        
        if (numMoves < 0){ /// deal with negatives/ going backwards
            numMoves = numMoves + NUM_COLORS;
        }
        
        if (posA == posB){
            numMoves = numMoves + NUM_COLORS;
        }
        yourPos = yourPos + numMoves;
        cout << numMoves << "    " << yourPos << endl;
        onColor = board[yourPos].color;
        
        //handles landing on a spot with a hazard
        if (board[yourPos].hazard != " "){
            cout << " OH NO. YOU RAN INTO A HAZARD.\n" << endl;
            sleep(1);
            
            if (board[yourPos].hazard == board[12].hazard){
                yourPos = yourPos - 2;
            }
            
            if (board[yourPos].hazard == board[25].hazard){
                yourPos = yourPos - 4;
            }
            
            if (board[yourPos].hazard == board[36].hazard){
                yourPos = yourPos - 3;
            }
            
            if (board[yourPos].hazard == board[43].hazard){
                yourPos = yourPos - 1;
            }
            
            if (board[yourPos].hazard == board[58].hazard){
                yourPos = yourPos - 5;
            }
        }
        
        // check for end of game
        if (yourPos >= NUM_SPACES){
            gameOver = true;
        }
    }
    
    cout << "You finished the game!" << endl;
}

string DevTool5::drawCard(){ /// helper function of Candy Land
    const int NUM_COLORS = 6;
   
    // gets the index of a random array pos to draw a random card color
    int randomColor = rand();
    srand(time(0));
    randomColor = rand() % NUM_COLORS;
    
    if (randomColor == 0){
        return "red";
    }
    
    if (randomColor == 1){
        return "purple";
    }
    
    if (randomColor == 2){
        return "yellow";
    }
    
    if (randomColor == 3){
        return "blue";
    }
    
    if (randomColor == 4){
        return "orange";
    }
    
    if (randomColor == 5){
        return "green";
    }
    
    return " ";
}
