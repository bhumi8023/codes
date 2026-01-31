#include<iostream>
using namespace std;
int trimorphic(int number){
    int cube = number*number*number;
    int digit1 = (cube%100)/10;
    int digit2 = cube%10;
    int digit = (digit1*10)+digit2;
    if(number==digit){
        cout<<"It is a trimorphic Number";
    } 
    else{
        cout<<"It is a not trimorphic Number";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    trimorphic(number);

return 0;
}