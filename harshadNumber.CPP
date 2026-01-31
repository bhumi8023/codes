#include<iostream>
using namespace std;
int harshadnumber(int number){
    int digit1 = number/100;
    int digit2 = number%100;
    digit2 = digit2/10;
    int digit3 = number%10;
    int sum = digit1+digit2+digit3;
    cout<<"Sum is: "<<sum<<endl;
    int harshadnum = number%sum;
    if(harshadnum==0){
        cout<<harshadnum<<" it is a harshad number.";
    }
    else{
        cout<<harshadnum<<" it is not a harshad number.";
    }
  return harshadnum;
}

int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    int harshadnum = harshadnumber(number);
   

    return 0;
}