#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3,number4,number5;
    cout<<"The number1 is: ";
    cin>>number1;
    cout<<"The number2 is: ";
    cin>>number2;
    cout<<"The number3 is: ";
    cin>>number3;
    cout<<"The number4 is: ";
    cin>>number4;
    cout<<"The number5 is: ";
    cin>>number5;
    int sum = 0,average=0;
    sum = number1 + number2+number3+number4+number5;
    cout<<"The sum is: "<<sum;
    average = sum/5;
    cout<<endl<<"The average is: "<<average;
return 0;
}