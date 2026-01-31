#include<iostream>
using namespace std;
int armstrong(int number){
    int number1 = number;
    int sum = 0;
    
    while(number1!=0){
        int digit=number1%10;
        int result = digit*digit*digit;
        sum = sum + result;
        number1 = number1/10;
    }
         if(number==sum){    
        cout<<"the number is armstrong "<<number;
    }
    else{
        cout<<"the number is not armstrong "<<number;
    }
    return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    armstrong(number);
    return 0;

}