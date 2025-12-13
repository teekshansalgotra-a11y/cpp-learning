#include <iostream>
using namespace std;

int main() {
    string message = "This app is very bad";
    string banned = "bad";

    int pos = message.find(banned);

    if (pos != -1) {
        message.replace(pos, banned.length(), "***");
    }

    cout << message;
    return 0;
}
