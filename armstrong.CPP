#include<iostream>
using namespace std;
int arm(int number){
    int digit1 = number/100;
    int digit2 = number%100;
    digit2 = digit2/10;
    int digit3 = number%10;
    int cube = (digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);
    if(number==cube){
        cout<<"It's a armstrong number.";
    }
    else{
        cout<<"It's not a armstrong number.";
    }
return 0;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    arm(number);
return 0;
}