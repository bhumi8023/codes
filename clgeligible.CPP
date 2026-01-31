#include <iostream>
using namespace std;

int main() {
    int maths,physics,chemistry,total;
    cout<<"Enter Maths marks: ";
    cin>>maths;
    cout<<"Enter Physics marks: ";
    cin>>physics;
    cout<<"Enter Chemistry marks: ";
    cin>>chemistry;
     total = maths+physics+chemistry;
    if(maths>=80&&physics>=75&&chemistry>=75&&total>=240) {
        cout<<"Eligible";
    } 
    else{
        cout<<"Not Eligible";
    }

    return 0;
}
