#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int longest = 1;

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int length = 1;

        while (true) {
            bool foundNext = false;

            for (int j = 0; j < n; j++) {
                if (arr[j] == current + 1) {
                    current = arr[j];
                    foundNext = true;
                    length++;         
                    break;
                }
            }

            if (!foundNext) break;
        }

        longest = max(longest, length);
    }

    cout << longest;
    return 0;
}

//Better way to solve it using with time complexity of O(n) is using hash set
//For this method its O(n^2)