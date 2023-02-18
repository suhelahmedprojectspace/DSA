#include<iostream>
#include<vector>
using namespace std;
int findIndexInMountainArray(vector<int>arr){
   int start=0;
   int end=arr.size()-1;
   int mid=start+(end-start)/2;
   while(start<end){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    mid=start+(end-start)/2;
   }
   cout<<arr[start];
   return arr[start];

}
int main(){
    int ans=0;
    vector<int>arr={0,10,5,2};
    ans=findIndexInMountainArray(arr);
    cout<<"Peak Element of the Array is "<<ans;
    return 0;
}