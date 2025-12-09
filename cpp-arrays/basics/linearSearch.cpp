#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key)
            found = true;
    }

    if(found) cout << "Element found!";
    else cout << "Element not found!";
}
