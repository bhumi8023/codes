#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<"The number1 is: ";
    cin>>number2;
    cout<<"The number2 is: ";
    cin>>number1;
    cout<<"The number3 is: ";
    cin>>number3;
    if(number1>number2){
    if(number1>number3)
     {
     cout<<"the number1 is greater.";
    }
    } else if(number2>number3){
        cout<<"the number2 is greater.";
    }else{
        cout<<"The number3 is greater.";
    }

    return 0;
}