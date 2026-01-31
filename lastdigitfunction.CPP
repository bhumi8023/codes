#include<iostream>
using namespace std;
void last(){
    int number,digit;
    cout<<"number: ";
    cin>>number;
    digit = number%10;
    cout<<"last digit is: "<<digit;

}
int main(){
    last();
    return 0;
}