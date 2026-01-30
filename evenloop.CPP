#include<iostream>
using namespace std;
int sum(int number){
    int i;
    int sum1 = 0;
    int sum2 = 0;
    for(i=1;i<=number;i++){
        if(i%2==0){
            sum1  =  sum1 += i;
        }
        if(i%2!=0){
            sum2  =  sum2 += i;
        }   
}cout<<"the sum of even is: "<<sum1<<endl;
    cout<<"the sum of odd is: "<<sum2;
return 0;
}
int main(){
    int  number;
    cout<<"number: ";
    cin>>number;
    sum(number);
    

    
        
    
return 0;
}