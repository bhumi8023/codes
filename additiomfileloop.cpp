#include<iostream>
using namespace std;
int sumdigit(int number){
    while(number/10!=0){
         int sum = 0;
    while(number!=0){
        int digit=number%10;
        sum = sum+digit;
        number = number/10;
    }
    
    cout<<"sum is: "<<sum<<endl;
    number = sum;
    }
    return 0;
    
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    sumdigit(number);
    return 0;

}