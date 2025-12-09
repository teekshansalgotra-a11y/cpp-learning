#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cin>>s;
    bool found = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((arr[i] + arr[j]) == s){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                found = true;
                break;
            }
        }
        if(found)break;
    }
    if(!found)cout<<"No pair found";
    return 0;
}