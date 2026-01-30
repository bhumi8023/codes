#include<iostream>
using namespace std;
int coutevenodd(int number){
    int count =0;
    int digit;
while(number!=0){
    digit = number%10;
     number = number/10;
if(digit%2==0){
     cout<<"even count: "<<count++<<endl;
    }
    else if(digit%2!=0){
        cout<<"odd count: "<<count++<<endl;
    }
    else{
        cout<<"invalid";
    }
}
return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    coutevenodd(number);
    return 0;

}
