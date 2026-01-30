#include<iostream>
using namespace std;
int coutevenodd(int number){
    int count =0;
    int counto = 0;
    int digit;
while(number!=0){
    digit = number%10;
     
if(digit%2==0){
    count++;
     
    }
    if(digit%2!=0){
        counto++;
       
    }
    number = number/10;
}
cout<<"even count: "<<count<<endl;
 cout<<"odd count: "<<counto<<endl;
return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    coutevenodd(number);
    return 0;

}
