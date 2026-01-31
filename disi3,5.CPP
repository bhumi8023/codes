#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "Divisible by Both" << endl;
    } 
    else if (number % 3 == 0) {
        cout << "Divisible by 3" << endl;
    } 
    else if (number % 5 == 0) {
        cout << "Divisible by 5" << endl;
    } 
    else {
        cout << "Not Divisible by 3 or 5" << endl;
    }

    return 0;
}