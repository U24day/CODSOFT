#include <iostream>
using namespace std;

double  ADDITION( double x ,double y) {
    return x + y ;

}

double  SUBTRACTION( double x ,double y) {
    return x - y ;

}
double  MULTIPLICATION( double x ,double y) {
    return x * y ;

}
double  DIVIDE( double x ,double y) {
    if ( y== 0){
        cout<< "error";
        return 0;
    }
    return x / y ;

}
int main (){
    int choice;
    double num1,num2;




while (choice ){
    cout<< "your choice -"<< endl;
    cout<<"1. ADDITIIONS " <<endl;
    cout<<"2. SUBTRACTION "<<endl;
    cout<<"3. MULTIPLICATION "<<endl;
    cout<<"4. DIVISION "<<endl;


    cout<<"ENTER the  1,2,3,4 :";
    cin >> choice ;
    break;



}
if( choice >=1 && choice <=4){

    cout << "enter the num1 :";
    while (!(cin>> num1)){

        cout<< "error";
    }

    cout << "enter the num2 :";
    while (!(cin >> num2)){
        cout<< "error";
    }


switch(choice){
    case 1 :

    cout <<"SUM   of num1 and num2 :"<< num1 <<" + " << num2 << " = "<< ADDITION(num1,num2) << endl;
    break;

    case 2:
    cout <<"SUBSTRACTE of num1 and  num2 :" <<num1 <<" - " <<num2 <<" = " <<SUBTRACTION(num1,num2)  << endl ;
    break ;


    case 3:
    cout <<"MULTIPLY   of num1 and num2 :"<< num1 <<" * " <<num2 << " = " << MULTIPLICATION(num1, num2) <<endl ;
    break;

    case 4:
    cout <<"DIVIDE of  num1 and num2 :" << num1<< " / " << num2 <<" = " << DIVIDE(num1 ,num2)<<endl ;
    break ;

}
}
return 0;
}


