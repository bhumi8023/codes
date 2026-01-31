#include <iostream>
using namespace std;

int main() {
    int use;
    cout <<"Enter water use: ";
    cin>>use;
    float bill;
    if(use<=5000) {
        bill = use*2;
        cout<<"Total Water Bill: "<<bill;
    } else if(use<=10000) {
        bill = use*3;
        cout<<"Total Water Bill: "<<bill;
    } else {
        bill = use*5;
        cout<<"Total Water Bill: "<<bill;;
    }
    if(use<3000){
        bill = bill-(bill*0.15);
          cout<<"Total Water Bill: "<<bill;
    }
    return 0;
}