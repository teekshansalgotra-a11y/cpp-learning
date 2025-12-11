#include<iostream>
using namespace std;

int check(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << "Max : " << check(a,b) << endl;
    return 0;
}