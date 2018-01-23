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

int32 FBullCowGame::GetHiddenWordLength() const {
    return MyHiddenWord.length();
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

FBullCowCount FBullCowGame::SubmitGuess(FString Guess) {
    MyCurrentTry++;
    FBullCowCount BullCowCount;
    // read SubmitGuess
    for (int32 i = 0; i < MyHiddenWord.length(); i++) {
        for(int32 j = 0; j < MyHiddenWord.length(); j++) {
            if (Guess[j] == MyHiddenWord[i]) {
                if ( i == j ) {
                    BullCowCount.Bull++;
                } else {
                    BullCowCount.Cow++;
                }
            }
        }
        
    }
    
    return BullCowCount;
}