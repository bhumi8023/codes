#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    cout<<"The number is: ";
    cin>>number1;
    cout<<"The number is: ";
    cin>>number2;
    int result = 0;
    result = number1 + number2;
    cout<<"The sum is: "<<result<<endl;
    result = number1 - number2;
    cout<<"The subtract is: "<<result<<endl;
    result = number1 * number2;
    cout<<"The product is: "<<result<<endl;
    result = number1/ number2;
    cout<<"The divide is: "<<result;
    result = number1%number2;
    cout<<"The modulus is: "<<result;
return 0;
}
