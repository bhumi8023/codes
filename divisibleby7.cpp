#include<iostream>
using namespace std;
int divisible(int number){
    int i = 1;
    int count = 0;
    while(i <=number){
        if(i%7==0){
            count++;
        }
i++;

    }
    cout<<count;
    return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    divisible(number);
    
return 0;
}