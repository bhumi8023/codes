#include <iostream>
using namespace std;

int main() {
    int age,price;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        price = 100; 
        cout<<"Ticket Price:" << price;   
    }
    else if (age >= 13 && age <= 17) {
        price = 150;
        cout<<"Ticket Price:" << price;     
    }
    else if (age >= 18 && age <= 59) {
        price = 200;
        cout<<"Ticket Price:" << price;  
    }
    else if (age >= 60) {
        price = 120;   
      cout<<"Ticket Price:" << price;  
    }
    else {
        cout << "Invalid age entered!" << endl;
    }
    return 0;
}

 