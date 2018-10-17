#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

void PrintIntro();
static void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

// the entry point for our application
int main()
{
    std::cout << BCGame.GetCurrentTry();
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }
    while (bPlayAgain);
    
    return 0; // exit the application
    
}

// introduce the game
void PrintIntro() {
    
    constexpr int WORD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows, a fun word game!\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}
//TODO summarize game

static void PlayGame() {
    
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();

    // loop for the number of turns asking for guesses
    // TODO change from FOR to WHILE loop once we are validating tries
    for (int count = 1; count <= MaxTries; count++){
        std::string Guess = GetGuess(); // TODO make loop checking valid
        
        // submit valid guess to the game
        // print number of bulls and cows
        
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

// get a guess from the player
std::string GetGuess(){
    
    int CurrentTry = BCGame.GetCurrentTry();
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain(){
    
    std::cout << "Do you want to play again (y/n) ?";
    std::cout << std::endl;
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}
