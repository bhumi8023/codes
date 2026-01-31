#include<iostream>
using namespace std;
int automorphic(int number){
    int square = number*number;
    int digit1 = (square%100)/10;
    int digit2 = square%10;
    int digit = (digit1*10)+digit2;
    if(number==digit){
        cout<<"It is a automorphic Number";
    } 
    else{
        cout<<"It is a not automorphic Number";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    automorphic(number);

return 0;
}