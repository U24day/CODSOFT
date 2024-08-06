#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

int main() {

    srand((unsigned int)time(0));


    int RandomNumber = rand() % 100 + 1;
    int Guess = 0;



    do{
         cout << "Guess the number between ( 1 to 100 ): ";
         cin >> Guess;
          if (Guess > RandomNumber) {
            cout << "Guess high!! Try again: "<<endl;
        } else if (Guess < RandomNumber) {
            cout << "Guess low! Try again: "<<endl;
        } else {
            cout << " YOU  WONNNN " <<endl;
            cout <<  "You guessed the correct number: " << RandomNumber << endl;
        }
    }while ( Guess != RandomNumber) ;




       
    

    return 0;
}
