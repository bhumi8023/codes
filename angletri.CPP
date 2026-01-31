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
    if(angle1<90&&angle2<90&&angle3<90){
        cout<<"The triangle is acute.";
    }
    else if(angle1==90||angle2==90||angle3==90){
        cout<<"The triangle is right.";
    }
    else{
       cout<<"The triangle is obtuse.";
    }

  return 0;

}