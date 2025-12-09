//to check if array is sorted or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool sort = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sort = false;
            break;
        }
    }
    if(sort){
        cout<<"sorted arr"<<endl;
    }else{
        cout<<"unsorted arr"<<endl;
    }

    return 0;
}