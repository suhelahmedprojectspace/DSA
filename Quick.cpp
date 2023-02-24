#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,6,7,9,10,14};
    int n=arr.size();
    //Bubble sort
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
      }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}