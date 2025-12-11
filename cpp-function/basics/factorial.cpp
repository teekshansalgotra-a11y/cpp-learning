#include<iostream>
using namespace std;

int fact_recursion(int n){
    return n * fact_recursion(n-1);
}

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f *= i;
    }
    return f;
}
int main(){
    int a,b;
    cin >> a >> b;

    cout << "Factorial : " << fact(a) << endl;
    cout << "Factorial using recursion: " << fact(b) << endl;
    return 0;
}