#include<iostream>
using namespace std;
int add(int number){
    int firstdigit;
    int lastdigit = number%10;
    int sum = 0;
       cout<<lastdigit<<" ";
  while(number!=0){
        firstdigit=number%10;
        number=number/10;
    } 
    sum = firstdigit+lastdigit;
    cout<<firstdigit<<" ";
 
    cout<<sum;
    return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    add(number);
    return 0;

}