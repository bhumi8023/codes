#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Enter day (1-31): ";
    cin >> day;
    cout << "Enter month (1-12): ";
    cin >> month;

    if (month >= 1 && month <= 12) {
      
        if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12) {
            if (day >= 1 && day <= 31) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        }
        else if (month == 2) {
            if (day >= 1 && day <= 29) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        }
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}