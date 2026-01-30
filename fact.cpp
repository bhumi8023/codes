#include<iostream>
using namespace std;
int factorial(int number){
  
    int fact=1;
    for(int i=1;i<=number;i++){
     fact = i*fact;
    }
return fact;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    int num = factorial(number);
    cout<<"factorial of "<<number<<" is: "<<num;


    return 0;
}