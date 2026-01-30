#include<iostream>
using namespace std;
int main()
{
    int number,first,last,average;
    cout<<"Enter the number: ";
    cin>>number;
    first = number/1000;
    cout<<"the first digit: "<<first<<endl;
    last = number%10;
    cout<<"the last digit: "<<last<<endl;
    average = (first+last)/2;
    cout<<"the average is: "<<average;
    return 0;
}