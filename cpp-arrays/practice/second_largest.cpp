#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            a = i;
        }
    }

    int pos = a;
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;

    int sc = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > sc){
            sc = arr[i];
        }
    }

    cout << sc << endl;
    return 0;
}