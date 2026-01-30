#include<iostream>
using namespace std;
int newline(int number){
    while(number!=0){
        int digit=number%10;
       cout<<" "<<digit<<endl;
        number = number/10;
    }
    
    return 0;
    
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    newline(number);
    return 0;

}