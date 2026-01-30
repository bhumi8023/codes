#include<iostream>
using namespace std;
int reversedigit(int number){
    int number1 = number;
    int reverse = 0;
    while(number1!=0){
        int digit=number1%10;
        reverse = (reverse*10)+digit;
        number1 = number1/10;
    }
         if(number==reverse){    
        cout<<"the number is palindrome "<<reverse;
    }
    else{
        cout<<"the number is not palindrome "<<reverse;
    }
    
   
    return 0;
    
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    reversedigit(number);
    return 0;

}