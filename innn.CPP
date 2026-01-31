#include <iostream>
using namespace std;

int main() {
    int income;   
    int tax ;  
    cout << "Enter income : ";
    cin >> income;
    if (income <= 250000) {
        tax = 0;
        cout<< "Tax amount: "<<tax;
    } 
    else if (income <= 500000) {
        tax = (income - 250000) * 5 / 100;
        cout<< "Tax amount: "<<tax;
    } 
    else if (income <= 1000000) {
        tax = (250000 * 5 / 100) + (income - 500000) * 20 / 100;
        cout<< "Tax amount: "<<tax;
    } 
    else {
        tax = (250000 * 5 / 100) + (500000 * 20 / 100) + (income - 1000000) * 30 / 100;
        cout<< "Tax amount: "<<tax;
    }

    return 0;
}
