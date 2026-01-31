#include<iostream>
using namespace std;
int kaprekar(int number){
    int digit1 = number/1000;
    int digit2 = (number%1000)/100;
    int digit3 = (number%100)/10;
    int digit4 = number%10;
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
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    kaprekar(number);

return 0;
}