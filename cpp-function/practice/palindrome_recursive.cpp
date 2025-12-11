#include<iostream>
using namespace std;

bool pal(string s, int start , int end){
    return (s[start] != s[end]);
}

int main(){
    string s;
    cin >> s;
    int start = 0;
    int end = s.length() - 1;

    bool found = false;
    while(start < end){
        if(pal(s,start,end)){
            found = true;
            break;
        } 
        start++;
        end--;
    }

    if(found){
        cout << "Not a Palindrome";
    }else{
        cout << "Palindrome";
    }

    return 0;
}