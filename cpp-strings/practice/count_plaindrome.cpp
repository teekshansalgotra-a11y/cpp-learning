#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.length();

    int count = 0;
    for (int i = 0; i < n; i++) {       
        for (int j = i; j < n; j++) { 
            bool found = true;
            int start = i, end = j;
            while (start < end) {
                if (str[start] != str[end]) {
                    found = false;
                    break;
                }
                start++;
                end--;
            }
            if (found)
                count++;
        }
    }

    cout << count;
    return 0;
}
