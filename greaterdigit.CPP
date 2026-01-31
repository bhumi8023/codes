#include<iostream>
using namespace std;
int main(){
    int number , digit1,digit2,digit3;
    cout<<"The number is: ";
    cin>>number;
    digit1 = number/100;
    digit2 = number%100;
    digit2 = digit2/10;
    digit3 = number%10;

    cout<<digit2<<endl;
    
    if(digit1>digit2){
    if(digit1>digit3)
     {
     cout<<"the digit1 is greater.";
    }
    } else if(digit2>digit3){
        cout<<"the digit2 is greater.";
    }else{
        cout<<"The digit3 is greater.";
    }

    return 0;
}