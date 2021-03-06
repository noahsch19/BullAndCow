#include "FBullCowGame.hpp"

using FString = std::string;
using int32 = int;

FBullCowGame::FBullCowGame(){ Reset(); };
int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset(){
    int32 constexpr MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    const FString HIDDEN_WORD = "planet";
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
    return;
}


bool FBullCowGame::isGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(FString){
    return false;
}

// recieves a VALID guess, increments turn and returns count
BullCowCount FBullCowGame::SubmitGuess(FString){
    
    // increment the turn number
    MyCurrentTry++;
    
    // setup a return variable
    BullCowCount BullCowCount;
    
    // loop through all letters in the guess
    // compare letters against the hidden word
    
    return BullCowCount;
}
