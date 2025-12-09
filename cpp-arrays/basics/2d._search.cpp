#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int key = 5;
    bool found = false;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == key)
                found = true;
        }
    }

    if(found) cout << "Element found!";
    else cout << "Element not found!";
}
