#include<iostream>
using namespace std;
int main(){
    int i, number;
    int sum = 0;
    cout<<"number: ";
    cin>>number;
    for(i=1;i<=number;i++){
        if(i%3==0){
            sum += i;
    }   
    }
    cout<<"sum: "<<sum;
return 0;
} 