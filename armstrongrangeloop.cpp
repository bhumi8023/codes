#include<iostream>
using namespace std;
int armstrong(int number){

    int sum = 0;
   while(number!=00){
        int digit=number%10;
        int result = digit*digit*digit;
        sum = sum + result;
        number = number/10;
    }  if(number==sum){    
        cout<<"the number is armstrong "<<number;
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