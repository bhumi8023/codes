#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Number: ";
    cin>>number;
    if(number%2==0){
        cout<<"divisible by 2";
    }
     if(number%3==0){
        cout<<"divisible by 3";
    }
     if(number%5==0){
        cout<<"divisible by 5";
    }
else{
    cout<<"Invalid";
}
return 0;
}