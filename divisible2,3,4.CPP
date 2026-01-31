#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Number: ";
    cin>>number;
    if(number%2==0&&number%3==0&&number%5==0){
        cout<<"divisible by 2,3,5";
    }
else{
    cout<<"Invalid";
}
return 0;
}