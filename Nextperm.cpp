#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int NextPermutation(vector<int>arr){
    int idx=-1;
    int n=arr.size();
    for(int i=n-1;i>0;i--){
        if(arr[i]>arr[i-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(arr.begin(),arr.end());
    }
    else{
        int prev=idx;
        for(int i=idx+1;i<n;i++){
            if(arr[i]>arr[idx-1] && arr[i]<=arr[prev]){
                prev=i;
            }
        }
        swap(arr[idx-1],arr[prev]);
        //int ans=0;
        reverse(arr.begin()+idx,arr.end());
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int ans;
    vector<int>arr{1,2,3};
    ans=NextPermutation(arr);
    cout<<" Next permutation "<<ans<<endl;
    return 0;
}