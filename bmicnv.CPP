#include<iostream>
using namespace std;
int main(){
 float weight,height,bmi;
 cout<<"weight: ";
 cin>>weight;
 cout<<"Height: ";
 cin>>height;
 bmi = weight/height;
 cout<<"BMI"<<bmi<<endl;
 if(bmi<18.5){
    cout<<"underweight";
 }
 else if(bmi<=18.5&&bmi<=24.9){
    cout<<"normal";
 }
 else if(bmi<=25&&bmi<=29.9){
    cout<<"overweight";
 }
 else{
    cout<<"obese";
 }

return 0;
}