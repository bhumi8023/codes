#include<iostream>
using namespace std;
int main(){
    int principle,rate,time,simple_interest,total;
    cout<<"The principle is: ";
    cin>>principle;
    cout<<"The rate is: ";
    cin>>rate;
    cout<<"The time is: ";
    cin>>time ;
    simple_interest= (principle+rate+time)/100;
    cout<<"The simple interest is: "<<simple_interest;
    total= simple_interest+principle;
    cout<<endl<<"The total amount is: "<<total;
return 0;
}