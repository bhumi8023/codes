#include<iostream>
using namespace std;
int largest(int number){
    //int i = 1;
    int temp = number%10;
    //int digit;
    while(number!=0){
        int digit=number%10;
        if(temp>=digit){
            temp = digit;
        }
        number = number/10;
    }
    cout<<temp;
    return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    largest(number);
    
return 0;
}