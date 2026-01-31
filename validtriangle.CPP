#include<iostream>
using namespace std;
int main(){
    int angle1,angle2,angle3,angle;
    cout<<"The angle1 is: ";
    cin>>angle1;
    cout<<"The angle2 is: ";
    cin>>angle2;
    cout<<"The angle3 is: ";
    cin>>angle3;
    angle = angle1+angle2+angle3;
    if(angle==180){
    cout<<"Valid triangle";
  }
  else{
    cout<<"Not valid triangle";
  }
return 0;
}