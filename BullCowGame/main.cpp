#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
static void PlayGame();


// the entry point for our application
int main()
{
    PrintIntro();
    
    PlayGame();
    
    return 0; // exit the application
    
    // loop for the number of turns asking for guesses
    PlayGame();
    cout << endl;
    return 0;
}

// introduce the game
void PrintIntro(){
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fun word game!\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

static void PlayGame() {
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++){
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
}

// get a guess from the player
string GetGuess(){
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}


