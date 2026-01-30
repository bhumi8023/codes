#include<iostream>
using namespace std;
int main(){
    int i, number;
    int sum = 0;
    cout<<"number: ";
    cin>>number;
    for(i=1;i<=number;i++){
       int cube = i*i*i;
       sum += cube;
    }   
    
    cout<<"sum: "<<sum;
return 0;
} 