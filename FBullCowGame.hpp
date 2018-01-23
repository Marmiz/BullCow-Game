/*
* FBullCowGame.hpp
* BullCowGame
*/
# pragma once
# include <string>

// aliases
using FString = std::string;
using int32 = int;

// counter
struct FBullCowCount {
    int32 Bull = 0;
    int32 Cow = 0;
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    void Reset();
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString) const;
    int32 GetHiddenWordLength() const;
    
    FBullCowCount SubmitGuess(FString);
    
private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};