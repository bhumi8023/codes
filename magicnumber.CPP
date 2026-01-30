#include<iostream>
using namespace std;
int magic(int number){
    int digit1 = number/10;
    int digit2 = number%10;
    int digit = ((digit1*10)+digit2)*101;

    return digit;

}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    int digit = magic(number);
    cout<<"the magic number: "<<digit;


return 0;
}