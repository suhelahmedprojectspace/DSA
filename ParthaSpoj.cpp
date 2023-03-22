#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>cooksRank,int noofparth,int mid){
    int currentpartha=0;
    for(int i=0;i<cooksRank.size();i++){
        int R=cooksRank[i],j=1;
        int timeTaken=0;
        while(true){
            if(timeTaken + j * R<=mid){
                currentpartha++;
                timeTaken+=j*R;
                j++;
            }
            else{
                break;
            }
        }
        if(currentpartha>=noofparth){
            return true;
        }
    }
    return false;
}
int MinimumTime(vector<int>cooksRank,int noofPartha){
    int start=0;
    int highestRank=*max_element(cooksRank.begin(),cooksRank.end());
    int end=highestRank*(noofPartha*(noofPartha+1)/2);
    int ans=-1;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(isPossible(cooksRank,noofPartha,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int noofPartha,noofcook;
        cin>>noofPartha>>noofcook;
        vector<int>cooksRank;
        while(noofcook){
            int Ranks;
            cin>>Ranks;
            cooksRank.push_back(Ranks);
        }
        cout<<MinimumTime(cooksRank,noofPartha)<<endl;
    }
    return 0;
}
