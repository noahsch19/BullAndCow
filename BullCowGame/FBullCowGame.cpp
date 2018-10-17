#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame(){ Reset(); }
int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset(){
    int constexpr MAX_TRIES = 8;
    MyMaxTries = 8;
    
    MyCurrentTry = 1;
    return;
}


bool FBullCowGame::isGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(std::string){
    return false;
}
