#include<iostream>
using namespace std;
int main(){
   int number1,number2,number3;
   cout<<"number1: ";
   cin>>number1;
   cout<<"number2: ";
   cin>>number2;
   cout<<"number3: ";
   cin>>number3;
   if(number1>=number2&&number2>=number3){
    cout<<"Strictly acending";
   }
   else if(number1<=number2&&number2<=number3){
      cout<<"Strictly desending";
   }
  else{
    cout<<"nethier";
  }




return 0;
}