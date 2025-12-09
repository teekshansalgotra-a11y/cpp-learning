#include<iostream>
using namespace std;

int main(){
    //if-else
    int marks;
    cin >> marks;

    if (marks >= 90)
        cout << "A Grade";
    else if (marks >= 75)
        cout << "B Grade";
    else
        cout << "C Grade";

    //switch case
    int day;
    cin >> day;

    switch(day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        default: cout << "Invalid";
    }

    return 0;
}