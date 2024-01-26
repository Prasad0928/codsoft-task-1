#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    int guess;
    bool guessedCorrectly = false;

    while (!guessedCorrectly) {

        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            guessedCorrectly = true;
        } else {
            if (guess > secretNumber) {
                cout << "Too high, Try again" << endl;
            } else {
                cout << "Too low, Try again" << endl;
            }
        }
    }
    return 0;
}
