#include<iostream>
using namespace std;
int MissingNumberInTheArray(int arr[],int n){
   // int getArrayLength=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            continue;
        }
        else{
            return i+1;
        }
    }
}
int main(){
    int arr[]={ 1, 2, 3, 5 };
    int N=sizeof(arr)/sizeof(arr[0]);
    int ans=MissingNumberInTheArray(arr,N);
    cout<<" Missing Element in the  Array "<<ans;
    return 0;
}