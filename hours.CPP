#include<iostream>
using namespace std;
int main(){
    int totalsecond,hours,minutes,seconds,remnaing;
    cout<<"The total second is: ";
    cin>>totalsecond;
    hours = totalsecond/3600;
    cout<<"The hours is : "<<hours<<endl;
    remnaing = totalsecond%3600;
    minutes = remnaing/60;
    cout<<"minutes: "<<minutes<<endl;
    seconds = remnaing%60;
    cout<<"seconds: "<<seconds<<endl;




    return 0;
}