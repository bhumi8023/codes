#include<iostream>
using namespace std;
int main(){
    int i, number,range;
    cout<<"number: ";
    cin>>number;
    cout<<"range: ";
    cin>>range;
    for(i=1;i<=range;i++){
       cout<<number<<" * "<<i<<" = "<<number*i<<endl;
        
    }
return 0;
}