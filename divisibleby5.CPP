#include<iostream>
using namespace std;
int main(){
    int i, number;
    cout<<"number: ";
    cin>>number;
    for(i=1;i<=number;i++){
        if(i%5==0){
            cout<<i<<endl;
        }
        
    }
return 0;
}