#include<iostream>
using namespace std;
int addition(int number1,int number2){
    int result = number1+number2;
    return result;
}
int subtraction(int number1,int number2){
    int result = number1-number2;
    return result;
}
int multiplication(int number1,int number2){
    int result = number1*number2;
    return result;
}
int divide(int number1,int number2){
    int result = number1/number2;
    return result;
}
int reminder(int number1,int number2){
    int result = number1%number2;
    return result;
}
int main(){
    int number1,number2;
    cout<<"Number1: ";
    cin>>number1;
     cout<<"Number2: ";
    cin>>number2;
    int result = addition(number1,number2);
    cout<<"Result is: "<<result<<endl;
    result = subtraction(number1,number2);
    cout<<"Result is: "<<result<<endl;
    result = multiplication(number1,number2);
    cout<<"Result is: "<<result<<endl;
    result = divide(number1,number2);
    cout<<"Result is: "<<result<<endl;
    result = reminder(number1,number2);
    cout<<"Result is: "<<result;
    
return 0;
}
