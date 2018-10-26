#pragma once
#include "FBullCowGame.hpp"
#include <string>

using FString = std::string;
using int32 = int;

struct BullCowCount{
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame {
public:
    FBullCowGame(); //constructor
    
    int32 GetMaxTries() const ;
    int32 GetCurrentTry() const ;
    bool isGameWon() const ;

    void Reset(); //TODO make a more rich return value.
    bool CheckGuessValidity(FString); //TODO make a more rich return value.
    
    // count bulls and cows, and increases try # assuming valid guess
    BullCowCount SubmitGuess(FString);
    
    //Please try and ignore this and focus on the interface above ^^
private:
    //see constructor for initialization
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};

