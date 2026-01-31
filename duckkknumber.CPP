#include<iostream>
using namespace std;
int ducknumber(int number){
     int digit1 = number/1000;
    int temp = number%1000;
    int digit2 = temp/100;
    int digit3 = temp%100;
    digit3 = digit3/10;
    int digit4 = number%10;
     if(digit4==0||digit2==0||digit3==0){
        cout<<"Duck number";
    }
    else{
        cout<<"Not duck number";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    ducknumber(number);
return 0;
}