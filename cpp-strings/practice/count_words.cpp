#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int count =0;
    for(char c : s){
        if(c == ' ') count++;
    }

    cout << count + 1;
    return 0;
}