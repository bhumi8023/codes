#include<iostream>
using namespace std;
int countdigit(int number){
    int temp = number%10;
   int count = 0;
    while(number!=0){
        int digit=number%10;
        if(temp>=digit){
            temp = digit;
        }
        number = number/10;
        count++;
    }
    cout<<count;
    return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    countdigit(number);
    
return 0;
}