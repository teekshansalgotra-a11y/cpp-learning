#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    } 
    return sum;
}

int sum_recursion(int n){
    if(n == 0)
        return 0;
    return (n % 10) + sum_recursion(n / 10);
}

int main(){
    int n;
    cin >> n;

    cout << "Sum of digits with recursion: " << sum_recursion(n) << endl;
    cout << "Sum of digits (without recursion): " << sum(n) << endl;
    return 0;
}
