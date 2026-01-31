#include<iostream>
using namespace std;
int reversedigit(int number){
    int reverse = 0;
    while(number!=0){
        int digit=number%10;
        reverse = (reverse*10)+digit;
        number = number/10;
    }
    cout<<"reverse is: "<<reverse;
    return 0;
    
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    reversedigit(number);
    return 0;

}