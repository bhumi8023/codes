#include<iostream>
using namespace std;
int productdigit(int number){
    int digit = number%10;
    int product = 1;
    while(number!=0){
        int digit=number%10;
        product = product*digit;
        number = number/10;
    }
    cout<<"product is: "<<product;
    return 0;
    
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    productdigit(number);
    return 0;

}