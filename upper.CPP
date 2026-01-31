#include<iostream>
using namespace std;
int main(){
    char ch;
    int assic;
    cout<<"The character is: ";
    cin>>ch;
    assic = int(ch);
    if(65<=assic&&assic<=90){
        cout<<"Character is uppercase.";
    }
    else {
        cout<<"Character is lowercase";
    }



    return 0;
}