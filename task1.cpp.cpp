#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Initialize random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    
    int guess = 0;
    bool guessedCorrectly = false;
    
    std::cout << "Guess the number between 1 and 100: ";

    // Loop until the user guesses the correct number
    while (!guessedCorrectly) {
        std::cin >> guess;
        
        if (guess < randomNumber) {
            std::cout << "Too low! Try again: ";
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            guessedCorrectly = true;
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
        }
    }

    return 0;
}
