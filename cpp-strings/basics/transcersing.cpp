#include <iostream>
using namespace std;

int main() {
    string a = "Hello ";
    string b = "World";

    string c = a + b;
    cout << c;

    if(a == b)cout << "Equal";
    else cout << "Not Equal";
}
