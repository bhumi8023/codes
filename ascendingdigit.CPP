#include<iostream>
using namespace std;
int ascending(int number){
    int digit1 = number/100;
    int digit2 = number%100;
    digit2 = digit2/10;
    int digit3 = number%10;
    if(digit1<digit2&&digit2<digit3){
        cout<<"in asscending order.";
    }
    else{
        cout<<"not in order.";
    }
    return 0;


}
    int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    int order = ascending(number);
    
    return 0;
}