#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"The character is: ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"Character is vowel.";
    }
    else{
        cout<<"The character is consonant.";
    }
    return 0;
}