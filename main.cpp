#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;

int main() {
    // Get a different random number each time the program runs
    srand(time(0));
    
    // Generate a random number between 0 and 200
    int randomNum = rand() % 201;
    int userInput = 0;
    int tries = 0;

    cout << "Type a number between 0 and 200: ";

    while (true) { // Infinite loop until the user guesses the number
        cin >> userInput;
        tries++; // Increment tries on every guess

        if (userInput < randomNum) {
            cout << "Too low! Try again: ";
        } else if (userInput > randomNum) {
            cout << "Too high! Try again: ";
        } else {
            cout << "You guessed the number! Number of tries: " << tries << '\n';
            break; // Exit the loop when the user guesses correctly
        }
    }

    return 0;
}

