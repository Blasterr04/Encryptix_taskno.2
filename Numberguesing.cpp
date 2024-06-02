#include <iostream>
#include <cstdlib>
#include <ctime>

void guessTheNumber() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;
    bool guessed = false;

    std::cout << "Welcome to 'Guess the Number' game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess what it is?" << std::endl;

    while (!guessed) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(10000, '\n'); 
            std::cout << "Please enter a valid integer." << std::endl;
        } else {
            if (userGuess < numberToGuess) {
                std::cout << "Your guess is too low. Try again!" << std::endl;
            } else if (userGuess > numberToGuess) {
                std::cout << "Your guess is too high. Try again!" << std::endl;
            } else {
                std::cout << "Congratulations! You guessed the correct number: " << numberToGuess << std::endl;
                guessed = true;
            }
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}
