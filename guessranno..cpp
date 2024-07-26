#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>


int generateRandomNumber() {
    srand(time(0));
    return rand() % 100 + 1;
}


int user_guess() {
    int guess_number;
    cout << "Enter your guess: ";
    cin >> guess_number;
    return guess_number;
}
void Feedback(int guess_number, int randomNumber) {

    if (guess_number < randomNumber) {
        cout << "Too low ,Try again.\n";
    }
     else if (guess_number > randomNumber) {
        cout << "Too high Try again.\n";
    } 
    
    else {
        cout << "Congratulations ,this is  the correct number.\n";
    }
}


void Guessing() {
    int randomNumber = generateRandomNumber();
    int guess_number = 0;
    
    cout << "Guess the number (between 1 and 100): ";
    
    while (guess_number != randomNumber) {
        guess_number = user_guess();
        Feedback(guess_number, randomNumber);
    }
}

int main() {
    Guessing();
    return 0;
}

