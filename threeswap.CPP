#include<iostream>
using namespace std;
int main(){
  int number1,number2,number3,temp;
  cout<<"Before swapping: "<<endl;
  cout<<"Number1: ";
  cin>>number1;
  cout<<"Number2: ";
  cin>>number2;
  cout<<"Number3: ";

  cin>>number3;
  temp = number1;
  number1 = number2;
  number2 = number3;
  number3 = temp;
  cout<<"After swapping: "<<endl;
  cout<<"Number1: "<<number1<<endl;
  cout<<"Number2: "<<number2<<endl;
  cout<<"Number3: "<<number3<<endl;
return 0;
}