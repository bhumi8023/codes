#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Marks: ";
    cin>>marks;
    if(90>=marks&&marks==100){
        cout<<"The grade is A";
    }
    else if(89>=marks&&marks==80){
        cout<<"The grade is B";
    }
    else if(79>=marks&&marks==70){
        cout<<"The grade is C";
    }
    else if(69<=marks&&marks==60){
        cout<<"The grade is D";
    }
    else if(59<=marks&&marks==40){
        cout<<"The grade is E";
    }
    else {
        cout<<"The grade is F";
    }



return 0;
}