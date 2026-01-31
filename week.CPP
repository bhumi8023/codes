#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"The number is: ";
    cin>>number;
    if(number==1){
        cout<<"monday";
    }
    else if(number==2)
    {
        cout<<"tuesday";
    }
    else if(number==3)
    {
        cout<<"wednesday";
    }
    else if(number==4)
    {
        cout<<"thursday";
    }
    else if(number==5){
        cout<<"friday";
    }
    else if(number==6)
    {
        cout<<"saturday";
    }
    else if(number==7)
    {
        cout<<"sunday";
    }
    else{
        cout<<"invalid";
    }
    return 0;
}