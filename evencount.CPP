#include<iostream>
using namespace std;
int even(int number){
    int count = 0;
    int digit1 = number/1000;
    int temp = number%1000;
    int digit2 = temp/100;
    int digit3 = temp%100;
    digit3 = digit3/10;
    int digit4 = number%10;
    if(digit1%2==0){
        count++;
    }
    if(digit2%2==0){
        count++;
  }
  if(digit3%2==0){
        count++;
  }
  if(digit4%2==0){
        count++;
  }
  return count;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    int count = even(number);
    cout<<"even value count: "<<count;
    return 0;
}