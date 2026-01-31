#include<iostream>
using namespace std;
int kaprekar(int number){
    int square = number*number;
    int digit1 = square/1000;
    int digit2 = (square%1000)/100;
    int digit3 = (square%100)/10;
    int digit4 = square%10;
    int sum = ((digit1*10)+digit2)+((digit3*10)+digit4);
    if(number==sum){
        cout<<"It is a kaprekar Number: "<<sum;
    } 
    else{
        cout<<"It is a not kaprekar Number: "<<sum;
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