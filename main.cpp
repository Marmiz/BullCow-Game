#include <iostream>
#include <string>
#include "FBullCowGame.hpp"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate the game globally. we will rerun the same occurrence

int main() {
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    } while( bPlayAgain );

    
    return 0;
}

void PrintIntro() {
    constexpr int WORD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows" << std::endl;
    std::cout << "Your goal is to guess the " << WORD_LENGTH << " word in 10 tries" << std::endl;
    std::cout << "Good luck" << std::endl;
    return;
}

void PlayGame() {
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();
    
    // TODO: switch to a while loop
    for (int i = 0; i < MaxTries; i++) {
        std::string Guess = GetGuess(); // TODO: make input validation
        
        // submit valid game to the game
        // print number of bull and cows
        
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
    
    // TODO: summarise game
}

std::string GetGuess() {
    int CurrentTry = BCGame.GetCurrentTry();
    std::cout << "Try " << CurrentTry << ". Enter your guess" << std::endl;
    std::string Guess = "";
    std::getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    std::cout << "Do you want to play again? (y/n)";
    std::string Response = "";
    std::getline(std::cin, Response);
    
    return (Response[0] == 'y') || (Response[0] == 'Y');

}

