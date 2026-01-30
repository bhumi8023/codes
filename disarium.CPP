#include<iostream>
using namespace std;
int disarium(int number){
    int digit1 = number/100;
    int digit2 = number%100;
    digit2 = digit2/10;
    int digit3 = number%10;
    int digit = (digit1)+(digit2*digit2)+(digit3*digit3*digit3);
    if(number==digit){
        cout<<"It's a disarium number: "<<digit;
    }
    else{
        cout<<"It's not a disarium number: "<<digit;
    }
return 0;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    disarium(number);
return 0;
}