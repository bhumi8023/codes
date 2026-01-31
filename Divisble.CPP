#include<iostream>
using namespace std;
int main(){
    int dividend,divisor;
    cout<<"The dividend is: ";
    cin>>dividend;
    cout<<"The divisor is: ";
    cin>>divisor;
    if(dividend%divisor==0){
    cout<<"The number is divisible.";
  }
  else{
    cout<<"The number is not divisible.";
  }
return 0;
}