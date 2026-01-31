#include<iostream>
using namespace std;
int main(){
    float weight , height,bodymass;
    cout<<"The weight is: "<<"kg";
    cin>>weight;
    cout<<"The height is: "<<"m";
    cin>>height;
    bodymass = weight/height;
    cout<<"The bodymass is: "<<"kgm^2"<<bodymass;
    
    return 0;
}