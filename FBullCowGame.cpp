/*
* FBullCowGame.cpp
* BullCowGame
* Created by claudio restifo.
*/

#include "FBullCowGame.hpp"

// constructor initialization
FBullCowGame::FBullCowGame() {
    Reset();
}

/* Getters */
int FBullCowGame::GetMaxTries() const {
    return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const {
    return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const {
    return 0;
}

/* Methods */

// reinitialize variables
void FBullCowGame::Reset() {
    constexpr int MAX_TRIES = 2;
    
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    return;
}