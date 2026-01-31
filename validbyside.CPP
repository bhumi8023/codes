#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
cout<<"side1: ";
cin>>side1;
cout<<"side2: ";
cin>>side2;
cout<<"side3: ";
cin>>side3;
if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
{
    cout<<"Valid traiangle.";
}
else{
    cout<<"valid traingle";
}

return 0;
}