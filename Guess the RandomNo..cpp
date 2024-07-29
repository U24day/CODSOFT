#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main (){
    srand(time(0));
    int randomNo = rand() % 100 + 1;
    int guess = 0;
    cout<< "Guess the number 1 to 100 :";
    while (guess != randomNo){
        cin >> guess ;
        if (guess < randomNo ){
            cout << "too LOW  !";
        }
        else if(guess >randomNo){
            cout <<"too HIGH !!";

        }
        else{
            cout << "CONGRATULATIONS !" << endl;

        }
    }

    return 0;
}