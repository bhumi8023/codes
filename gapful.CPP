#include<iostream>
using namespace std;
int gapful(int number){
    int digit1 = number/100;
    int digit2 = (number%100)/10;
    int digit3 = number%10;
    int digit = (digit*10)+digit3;
    if(number%digit==0){
        cout<<"It is a gapful number: "<<digit;
    }
    else{
        cout<<"It is not a gapful number: "<<digit;
    }

return 0;

}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    gapful(number);
    return 0;
}