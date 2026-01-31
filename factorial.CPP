#include<iostream>
using namespace std;
int factorial(int number){
    int fact;
    for(fact=1;fact<=number;fact--){
        fact = number*(number-1);
    }
return fact;
}
int main(){
    int number,fact;
    cout<<"number: ";
    cin>>number;
    int fact = factorial(number);
    cout<<"factorial of "<<number<<"is: "<<fact;


    return 0;
}