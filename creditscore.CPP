#include <iostream>
using namespace std;

int main() {
    int age,income,score;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter income: ";
    cin>>income;

    cout << "Enter credit score: ";
    cin >>score;

    if (age < 21 && age > 60) {
        cout<<"Not Eligible";
    }
    else if (income <= 25000) {
        cout<<"Not Eligible";
    }
    else if (score <= 700) {
        cout<<"Not Eligible";
    }
    else {
        cout<<"Eligible";
    }

    return 0;
}