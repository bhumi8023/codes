#include<iostream>
using namespace std;
int addition(int number1,int number2){
    int result = number1+number2;
    return result;
}
int main(){
    int number1,number2;
    cout<<"Number1: ";
    cin>>number1;
     cout<<"Number2: ";
    cin>>number2;
    int result = addition(number1,number2);
    cout<<"Result is: "<<result;
return 0;
}
