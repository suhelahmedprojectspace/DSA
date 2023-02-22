#include<iostream>
#include<vector>
using namespace std;
int NoofJump(vector<int>arr){
    int jumps=0;
    int current=0;
    int farthest=0;
    for(int i=0;i<arr.size()-1;i++){
        farthest=max(farthest,arr[i]+i);
        if(i==current){
            current=farthest;
            jumps++;
        }
    }
    return jumps;
}
int main(){
    vector<int>arr={1,3,5,8,9,2,6,7,6,8,1};
    int ans=0;
    ans=NoofJump(arr);
    cout<<ans<<endl;
    return 0;
}