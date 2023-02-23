#include<iostream>
#include<vector>
using namespace std;
int FindSqrt(int n){
    int target=n;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
       if(mid*mid>target){
          e=mid-1;
       }
       else if(mid*mid<target){
         ans=mid;
         s=mid+1;
       }
       else if(mid*mid==target){
        return mid;
       }
       mid=s+(e-s)/2;
    }
    return ans;
    
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int ans=FindSqrt(n);
    cout<<"Ans is" <<ans<<endl;
    int precision;
    cout<<"Enter the number of floating digits"<<endl;
    cin>>precision;
    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precision;i++){
        for(double j=finalans;j*j<=n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Final ans is "<<finalans<<endl;
    return 0;
}