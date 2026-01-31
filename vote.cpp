#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"The age is: ";
    cin>>age;
    if(age>=18){
    cout<<" Eligible for voting";
  }
  else{
    cout<<"Not Eligible for voting.";
  }
return 0;
}