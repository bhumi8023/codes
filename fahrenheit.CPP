#include<iostream>
using namespace std;
int main(){
   float celcius ,fahrenheit;
    cout<<"The fahrenhite tempreture is: ";
    cin>>fahrenheit;
    celcius = (fahrenheit-32)*5/9;
    cout<<"The celcius temperature is: "<<celcius;
    
    return 0;
}