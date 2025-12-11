#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int r;
    bool found = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                r = arr[j];
                found = true;
                break;
            }
        }

    }

    if(found){
        cout << r << endl;
    }else{
        cout << "-1" << endl;
    }

    return 0;
}