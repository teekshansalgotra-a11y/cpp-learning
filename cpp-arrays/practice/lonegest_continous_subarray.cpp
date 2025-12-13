//Length of longest continous subarray whose sum is <= limit
#include <iostream>
using namespace std;

int longestTrip(int arr[], int n, int limit) {
    int sum = 0;
    int start = 0;
    int maxLength = 0;

    for (int end = 0; end < n; end++) {
        sum = sum + arr[end];

        while (sum > limit) {
            sum = sum - arr[start];
            start++;
        }

        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int limit = 60;
    int n = 4;

    cout << longestTrip(arr, n, limit);
    return 0;
}
