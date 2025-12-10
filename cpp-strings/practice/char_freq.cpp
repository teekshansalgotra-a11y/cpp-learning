#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.size();

    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i] != s[j]){
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}