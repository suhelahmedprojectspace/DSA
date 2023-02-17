#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>v,int target){
  int start=0;
  int end=v.size()-1;
  int mid=start+(end-start)/2;
  int ans=-1;
  while(start<=end){
    if(v[mid]==target){
        ans=mid;
        end=mid-1;
    }
    else if (target<v[mid])
    {
       end=mid-1;
    }
    else if(target>v[mid]){
        start=mid+1;
    }
    mid=start+(end-start)/2;
    
  }   
  return ans;
}
int main(){
    vector<int> arr{1,3,4,4,4,4,6,7};
    int target=4;
    int ans=0;
    ans=firstOccurence(arr,target);
    cout<<"found at "<<ans;
}