/*
* FBullCowGame.cpp
* BullCowGame
* Created by claudio restifo.
*/

#include "FBullCowGame.hpp"

using int32 = int;
using FString = std::string;

// constructor initialization
FBullCowGame::FBullCowGame() {
    Reset();
}

/* Getters */
int32 FBullCowGame::GetMaxTries() const {
    return MyMaxTries;
}

int32 FBullCowGame::GetCurrentTry() const {
    return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const {
    return 0;
}

/* Methods */

// reinitialize variables
void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 2;
    const FString HIDDEN_WORD = "planet";
    
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    return;
}

BullCowCount FBullCowGame::SubmitGuess(FString) {
    MyCurrentTry++;
    BullCowCount BullCowCount;
    return BullCowCount;
}