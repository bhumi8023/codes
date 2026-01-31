#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"The number is: ";
    cin>>number;
   
    if(0>=number&&number<=9){
        cout<<"number is single digit";
    }
    else if(10>=number&&number<=100){
        cout<<"Number is double digit.";
    }
    else{
        cout<<"Number is more than two digit.";
    }
    return 0;
}