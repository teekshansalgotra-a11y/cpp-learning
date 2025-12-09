#include <iostream>
using namespace std;

int main() {
    int arr[5] = {4, 2, 9, 1, 7};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum;
}
