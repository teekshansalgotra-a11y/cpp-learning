#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string nw = "";
    for(char c : s){
        if(c != ' ') nw += c;
    }

    cout << nw;
    return 0;

}