/*
* FBullCowGame.hpp
* BullCowGame
*/
# pragma once
# include <string>

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    void Reset();
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(std::string);
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};