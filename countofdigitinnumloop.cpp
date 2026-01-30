#include<iostream>
using namespace std;
int specificdigit(int number,int specific){
    int count = 0;
    while(number!=0){
        int digit=number%10;
        if(digit==specific){
            count++;
        }
        number = number/10;
    }
    cout<<specific<<" it contain digit"<<endl;
    cout<<"the count of "<<specific<<" digit is "<<count;
    return 0;
    
}
int main(){
    int number,specific;
    cout<<"number: ";
    cin>>number;
    cout<<"specific digit: ";
    cin>>specific;
    specificdigit(number,specific);
    return 0;

}