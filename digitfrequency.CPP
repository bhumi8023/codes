#include<iostream>
using namespace std;
int count(int number){
    int digit1 = number/10000;
    int temp = number%10000;
    int digit2 = temp/1000;
    int temp1 = temp%1000;
    int digit3 = temp1/100;
    int temp2 = temp1%100;
    int digit4 = temp2/10;
    int digit5 = temp2%10;
    int count = 0;
    if (digit1 == 0) count++;
    if (digit2 == 0) count++;
    if (digit3 == 0) count++;
    if (digit4 == 0) count++;
    if (digit5 == 0) count++;
    int count5 = 0;
    if (digit1 == 5) count++;
    if (digit2 == 5) count++;
    if (digit3 == 5) count++;
    if (digit4 == 5) count++;
    if (digit5 == 5) count++;
    int count9 = 0;
    if (digit1 == 9) count++;
    if (digit2 == 9) count++;
    if (digit3 == 9) count++;
    if (digit4 == 9) count++;
    if (digit5 == 9) count++;
return count;
}
    int main() {
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;
    int count0 = count(number);
    int count5 = count(number);
    int count9 = count(number);
    //int count5 = count(number, 5);
    //int count9 = count(number , 9);
    cout<<"Number of 0's: "<<count0<<endl;
    cout<<"Number of 5's: "<<count5<<endl;
    cout<<"Number of 9's: "<<count9;


    return 0;
    }

    


