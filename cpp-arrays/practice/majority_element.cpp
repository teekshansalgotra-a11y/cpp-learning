//if a element occurs n/2 times or grater than that in an array it is called majority element
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c = n/2;
    int count = 0;
    int h;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count++;
            h = arr[j];
        }
    }
    if(count>c){
        cout<<h;
    }else{
        return -1;
    }
    return 0;
}