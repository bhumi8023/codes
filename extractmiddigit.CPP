#include<iostream>
using namespace std;
int mid(int number){
    int digit = number/10;
    digit = digit%10;
    return digit;

}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    int digit = mid(number);
    cout<<"the middle digit is: "<<digit;
}