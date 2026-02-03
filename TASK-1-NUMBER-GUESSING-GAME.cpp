#include <iostream>
#include <cstdlib>
#include <ctime>+

using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "🎯 Guess the Number Game\n";
    cout << "I have selected a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        } 
        else if (guess < number) {
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << "🎉 Congratulations! You guessed the number.\n";
            cout << "Total attempts: " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}
