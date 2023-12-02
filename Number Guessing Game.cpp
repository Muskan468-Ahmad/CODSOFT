#include <iostream>
#include<ctime>
#include<chrono>
using namespace std;

int main() 
{
    // Seed the random number generator (no need for ctime or chrono)
    srand(static_cast<unsigned int>(time(NULL)));

    // Ask the user to press enter to generate the random number
    cout << "Welcome to the Guess the Number Game!\n";
    cout << "Press enter to start...\n";
    cin.ignore();  // Wait for user to press enter

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Try to guess the number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userGuess != randomNumber);

    return 0;
}

