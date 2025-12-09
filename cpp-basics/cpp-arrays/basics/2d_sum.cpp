#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Row-wise sum:\n";
    for(int i = 0; i < 2; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i << ": " << sum << endl;
    }

    cout << "Column-wise sum:\n";
    for(int j = 0; j < 3; j++) {
        int sum = 0;
        for(int i = 0; i < 2; i++) {
            sum += arr[i][j];
        }
        cout << "Column " << j << ": " << sum << endl;
    }
}
