#include<iostream>
using namespace std;
int main(){
    float original_price,discount_percentage,discount_amount,finalprice=0;
    cout<<"The original price is ";
    cin>>original_price;
    cout<<"The discount percentage is ";
    cin>>discount_percentage;
    discount_amount = original_price*(discount_percentage/100);
    cout<<"The discount amount: "<<discount_amount;
    finalprice = original_price - discount_amount;
    cout<<"The final price is "<<finalprice;


    return 0;
}
    